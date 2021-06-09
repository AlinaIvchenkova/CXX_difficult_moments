TEMPLATE = app
CONFIG += console c++17

#указание использовать компилятор повыше
#QMAKE_COMPILER = clang-8
#QMAKE_CC =  clang-8
#QMAKE_CXX = clang++-8CONFIG -= app_bundle

CONFIG -= qt
#CONFIG += conan_basic_setup
#include(protobuf_build/conanbuildinfo.pri)

SOURCES += main.cpp \
    phone_book.cpp \
    functions.cpp \
    home.cpp \
    #car.pb.cc \
    studentsgroup.pb.cc \
    studentsgroup.cpp

LIBS += -pthread

HEADERS += \
    person.h \
    phone_book.h \
    phone_number.h \
    timer.h \
    functions.h \
    matrix.h \
    matrix.hpp \
    range.h \
    range.hpp \
    home.h \
    #car.pb.h \
    studentsgroup.pb.h \
    studentsgroup.h

LIBS += -L$$PWD/../../../../../snap/protobuf/current/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../../../../../snap/protobuf/current/include
DEPENDPATH += $$PWD/../../../../../snap/protobuf/current/include
