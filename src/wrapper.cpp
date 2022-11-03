#include "../extern/pybind11/include/pybind11/pybind11.h"
extern "C" {
    #include "./c/sph_md5.h"
}
#include <iostream>
#include <string>
namespace py = pybind11;
using namespace std;

PYBIND11_MODULE(sphlib_py, m) {
    m.doc() = "sphlib_py crypto algorithms"; // optional module docstring
    m.def("md5", [](char * i, const size_t _s) {
        
    char out[16];
    sph_md5_context  cc;
    sph_md5_init(&cc);
    sph_md5(&cc, i, _s);
    sph_md5_close(&cc, &out);
    return py::bytes(out);
    }, "MD5 Hash algorithm");
}

