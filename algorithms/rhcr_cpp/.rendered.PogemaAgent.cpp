//cppimport
#include "PogemaAgent.h"

namespace py = pybind11;

PYBIND11_MODULE(PogemaAgent, m) {
    py::class_<PogemaAgent>(m, "PogemaAgent")
            .def(py::init<>())
            .def("act", &PogemaAgent::act)
            .def("init", &PogemaAgent::init)
            ;
}

