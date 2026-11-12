import torch
import depth_pro
import torch.nn.functional as F

orig_interpolate = F.interpolate

def interpolate_no_antialias(*args, **kwargs):
  kwargs['antialias'] = False
  return orig_interpolate(*args, **kwargs)

F.interpolate = interpolate_no_antialias

print("Загрузка модели ...")
print(torch.version.cuda)

device = torch.device("cuda")
model, _ = depth_pro.create_model_and_transforms(
  device=device,
  precision=torch.float16
)
model.eval()

dummy_input = torch.randn(1, 3, 1536, 1536, device=device, dtype=torch.float16)

torch.onnx.export(
  model,
  dummy_input,
  "depth_pro.onnx",
  input_names=["image"],
  output_names=["depth", "focallength_px"]
)

print("Экспорт успешно завершен!")
