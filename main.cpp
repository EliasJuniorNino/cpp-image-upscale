#include <opencv2/opencv.hpp>

int main()
{
    // Caminhos das imagens de entrada dentro da pasta "data"
    std::string imagePath1 = "data/imagem_1.png";
    std::string imagePath2 = "data/imagem_2.png";

    // Carregando as imagens
    cv::Mat image1 = cv::imread(imagePath1);
    cv::Mat image2 = cv::imread(imagePath2);

    // Verificando se as imagens foram carregadas corretamente
    if (image1.empty() || image2.empty())
    {
        std::cerr << "Erro ao carregar as imagens." << std::endl;
        return -1;
    }

    // Convertendo as imagens para escala de cinza
    cv::Mat grayImage1, grayImage2;
    cv::cvtColor(image1, grayImage1, cv::COLOR_BGR2GRAY);
    cv::cvtColor(image2, grayImage2, cv::COLOR_BGR2GRAY);

    // Caminho da imagem de saída dentro da pasta "data"
    std::string outputPath = "data/imagem_combinada_grayscale.png";

    // Criando uma terceira imagem combinando as duas em escala de cinza
    cv::Mat combinedImage;
    cv::addWeighted(grayImage1, 0.5, grayImage2, 0.5, 0, combinedImage);

    // Salvando a imagem combinada em escala de cinza
    cv::imwrite(outputPath, combinedImage);

    std::cout << "Imagem combinada em escala de cinza salva em: " << outputPath << std::endl;

    return 0;
}
