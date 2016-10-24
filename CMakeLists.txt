cmake_minimum_required(VERSION 3.3)
project(WirtualnySwiatCpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Ciern.cpp Ciern.h Dinozaur.cpp Dinozaur.h Swiat.cpp Swiat.h Roslina.cpp Roslina.h Organizm.cpp Organizm.h Zwierze.cpp Zwierze.h Queue.cpp Queue.h Lew.cpp Lew.h Wilk.cpp Wilk.h Owca.cpp Owca.h Guarana.cpp Guarana.h Trawa.cpp Trawa.h Zolw.cpp Zolw.h)
add_executable(WirtualnySwiatCpp ${SOURCE_FILES})