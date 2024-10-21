cmake_minimum_required(VERSION 3.16)

project(reverse_forloop LANGUAGES C)

add_executable(reverse_forloop main.c)

include(GNUInstallDirs)
install(TARGETS reverse_forloop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
