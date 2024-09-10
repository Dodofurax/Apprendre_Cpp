cmake_minimum_required(VERSION 3.5)

project(mLego LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mLego main.cpp
    barre.h barre.cpp
    barreronde.h barreronde.cpp
    barrerectangle.h barrerectangle.cpp
    barrecarree.h barrecarree.cpp
)

include(GNUInstallDirs)
install(TARGETS mLego
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
