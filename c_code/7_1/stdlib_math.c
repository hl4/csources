/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <math.h>

N_NIMCALL(NF, log2_147244)(NF x) {
	NF result;
	NF LOC1;
	NF LOC2;
{	result = 0;
	LOC1 = 0;
	LOC1 = log(x);
	LOC2 = 0;
	LOC2 = log(2.0000000000000000e+00);
	result = ((NF)(LOC1) / (NF)(LOC2));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, ispoweroftwo_146521)(NI x) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = !((x == ((NI) 0)));
	if (!(LOC1)) goto LA2;
	LOC1 = ((NI)(x & (NI32)(x - ((NI) 1))) == ((NI) 0));
	LA2: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nextpoweroftwo_146531)(NI x) {
	NI result;
	result = 0;
	result = (NI32)(x - ((NI) 1));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 1))));
	result += ((NI) ((NI32)(((NI) 1) + ((NI) ((x <= ((NI) 0)))))));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void) {
}

