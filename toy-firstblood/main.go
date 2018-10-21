package main

// #cgo CXXFLAGS: -std=c++11
// #include <stdlib.h>
// #include "gree.h"
import "C"
import (
	"fmt"
	"unsafe"
)

func main() {
	name := C.CString("Gopher")
	defer C.free(unsafe.Pointer(name))
	year := C.int(2018)
	ptr := C.malloc(C.sizeof_char * 1024)
	defer C.free(unsafe.Pointer(ptr))

	size := C.greeting(name, year, (*C.char)(ptr))
	b := C.GoBytes(ptr, size)
	fmt.Println("vim-go " + string(b))
}
