#ifndef GREE_H
#define GREE_H

#ifdef __cplusplus
extern "C" {
#endif

int greeting(const char* name, int year, char* out);

typedef struct {
    const char* name;
    int year;
} GopherCXX ;

int gopher_hello(const GopherCXX* gre, char* out);

#ifdef __cplusplus
}
#endif

#endif
