cmake_minimum_required(VERSION 3.7)
project(sdl)

set(CMAKE_CXX_STANDARD 14)

INCLUDE(FindPkgConfig)

PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp Game.h Game.cpp TextureManager.h TextureManager.cpp GameObject.h Player.h Player.cpp Enemy.cpp Enemy.h LoaderParams.h SDLGameObject.cpp SDLGameObject.h)
add_executable(sdl ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})
