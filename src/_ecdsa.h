#ifndef _ECDSA_H
#define _ECDSA_H

#include <Python/Python.h>
#include <gmp.h>
#include "curveMath.h"

typedef struct {
    mpz_t r, s;
} Sig;

void sign(Sig * sig, char * msg, mpz_t d, Curve * curve);
int verify(Sig * sig, char * msg);

static PyObject * _ecdsa_sign(PyObject *self, PyObject *args);

#endif
