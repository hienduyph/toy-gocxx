#include <iostream>
#include <stdio.h>
#include "gree.h"

int greeting(const char* name, int year, char* out) {
    std::cout << "C++ is processing" << std::endl;
    int n;
    n = sprintf(out, "Greetings, %s from %d! We come in peace :)", name, year);
    return n;
}

int gopher_hello(const GopherCXX* gree, char* out) {
    std::cout << "Woooooo! GoGXX with struct in C++" << std::endl;
    int n;
    n = sprintf(out, "Wooo, I'm %s from %d from CXX with struct", gree->name, gree->year);
    return n;
}
