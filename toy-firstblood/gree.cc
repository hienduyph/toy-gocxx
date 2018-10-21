#include <iostream>
#include <stdio.h>
#include "gree.h"

int greeting(const char* name, int year, char* out) {
    std::cout << "C++ is processing" << std::endl;
    int n;
    n = sprintf(out, "Greetings, %s from %d! We come in peace :)", name, year);
    return n;
}
