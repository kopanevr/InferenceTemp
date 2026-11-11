import torch
import depth_pro

print("Загрузка модели ...")

device = torch.device("cuda")
model, _ = depth_pro.create_model_and_transforms(device=device)
model.eval()

dummy_input = torch.randn(1, 3, 1536, 1536, device=device, dtype=torch.float32)

torch.onnx.export(
  model,
  dummy_input,
  "depth_pro.onnx",
  input_names=["image"],
  output_names=["depth", "focallength_px"]
)

print("Экспорт успешно завершен!")
