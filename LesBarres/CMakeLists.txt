cmake_minimum_required(VERSION 3.5)

project(LesBarres LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LesBarres main.cpp
    barre.h barre.cpp
    barrecarree.h barrecarree.cpp
    barrerectangle.h barrerectangle.cpp
    barreronde.h barreronde.cpp
    catalogue.h catalogue.cpp)

include(GNUInstallDirs)
install(TARGETS LesBarres
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
