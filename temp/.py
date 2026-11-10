import 

def export_to_onnx(output_onnx="./models/depth_pro.onnx")
    print("Загрузка модели ...")

    input_shape = (1, 3, 1536, 1536)

    torch.onnx.export(

    )

    print("Экспорт успешно завершен!")

if __name__ == "__main__":
    export_depth_pro_to_onnx("./models/depth_pro.onnx")