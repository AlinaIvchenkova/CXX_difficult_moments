TEMPLATE = app
CONFIG += console c++17

#указание использовать компилятор повыше
QMAKE_COMPILER = clang-8
QMAKE_CC =  clang-8
QMAKE_CXX = clang++-8

CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    phone_book.cpp

HEADERS += \
    person.h \
    phone_book.h \
    phone_number.h
