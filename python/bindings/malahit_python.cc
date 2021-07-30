/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(malahit.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4d8b67c565ce9bc0ece83f2b4e8eb89a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <malahit/malahit.h>
// pydoc.h is automatically generated in the build directory
#include <malahit_pydoc.h>

void bind_malahit(py::module& m)
{

    using malahit    = ::gr::malahit::malahit;


    py::class_<malahit, gr::hier_block2,
        std::shared_ptr<malahit>>(m, "malahit", D(malahit))

        .def(py::init(&malahit::make),
           py::arg("device_name") = "",
           py::arg("unit") = 1,
           D(malahit,make)
        )
        




        .def("set_freq",&malahit::set_freq,
            py::arg("freq"),
            D(malahit,set_freq)
        )


        .def("set_lna",&malahit::set_lna,
            py::arg("gain"),
            D(malahit,set_lna)
        )


        .def("set_mixer_gain",&malahit::set_mixer_gain,
            py::arg("gain"),
            D(malahit,set_mixer_gain)
        )


        .def("set_freq_corr",&malahit::set_freq_corr,
            py::arg("ppm"),
            D(malahit,set_freq_corr)
        )


        .def("set_if_gain",&malahit::set_if_gain,
            py::arg("gain"),
            D(malahit,set_if_gain)
        )

        ;




}






