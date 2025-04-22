# cpp-image-upscale

A C++ project for image upscaling using OpenCV and Docker.

## Requirements

- Docker
- Docker Compose
- OpenCV (for C++)

## Installation

### 1. Clone the repository

```bash
git clone https://github.com/EliasJuniorNino/cpp-image-upscale.git
cd cpp-image-upscale
```

## Executar dentro do container

`docker-compose run app /bin/bash`

`g++ main.cpp -o main $(pkg-config --cflags --libs opencv4)`

## Executar com docker

`docker-compose up`
