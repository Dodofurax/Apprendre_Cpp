cmake_minimum_required(VERSION 3.5)

project(LaBanque LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LaBanque main.cpp
    menu.h menu.cpp
    comptebancaire.h comptebancaire.cpp
    compteepargne.h compteepargne.cpp
    compteBancaire.txt
    compteEpargne
    compteclient.h compteclient.cpp)

include(GNUInstallDirs)
install(TARGETS LaBanque
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
