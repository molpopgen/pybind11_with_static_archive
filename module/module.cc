#include <lib.h>
#include <pybind11/pybind11.h>

PYBIND11_MODULE(module, m) {
    m.def("foo", &libfunction);
}

