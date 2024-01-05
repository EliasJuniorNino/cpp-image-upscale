cmake_minimum_required(VERSION 3.0.0)
project(app VERSION 0.1.0 LANGUAGES C CXX)

# Encontre o pacote OpenCV
find_package(OpenCV REQUIRED)

include(CTest)
enable_testing()

# Adicione os caminhos dos cabeçalhos do OpenCV
include_directories(
    ${OpenCV_INCLUDE_DIRS}
    "/usr/include/opencv4"
    "/usr/include/opencv4/opencv"
    "/usr/include/opencv4/opencv2"
)

# Adicione os arquivos fonte ao executável
add_executable(app main.cpp)

# Vincule as bibliotecas do OpenCV
target_link_libraries(app PRIVATE ${OpenCV_LIBS})

# Configuração do projeto
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
