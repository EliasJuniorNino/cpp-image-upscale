# Use a imagem oficial do Ubuntu 20.04 como base
FROM ubuntu:20.04

# Atualize o sistema e instale as dependências necessárias
RUN export DEBIAN_FRONTEND=noninteractive && apt-get update -y && apt-get install -y \
  build-essential \
  cmake \
  git \
  libopencv-dev \
  libopencv-highgui-dev \
  libopencv-imgcodecs-dev \
  && rm -rf /var/lib/apt/lists/*

# Copie o código-fonte para o diretório de trabalho no contêiner
COPY . /app

# Defina o diretório de trabalho
WORKDIR /app

# Compile o código usando CMake
RUN cmake . && make

# Comando padrão a ser executado quando o contêiner é iniciado
CMD ["./main"]
