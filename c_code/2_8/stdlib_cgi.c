/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct  Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, T_61YBnzSZ9bYHqA2OqxFo2Eg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* gcookies_ZEiWDv9cexkEMVa9a4srCISA;
extern TNimType NTI_pkhT5bYRU9ayIZ9cBuuCx4Xw;
static N_NIMCALL(void, T_61YBnzSZ9bYHqA2OqxFo2Eg_2)(void) {
	nimGCvisit((void*)gcookies_ZEiWDv9cexkEMVa9a4srCISA, 0);
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_eBf4DHjSqGA7qAZimsa9anQ)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((NI)((s0 ? s0->Sup.len : 0) + (NI)((NU32)((s0 ? s0->Sup.len : 0)) >> (NU32)(((NI) 2)))))));
	{
		NI i_7IKRK7pbJ9cbu56OikDveHw;
		NI HEX3Atmp_NWAb9bWlXnuZO8sT1DmwmyA;
		NI res_Zg2jEBCHLhziu2DjMOpERQ;
		i_7IKRK7pbJ9cbu56OikDveHw = (NI)0;
		HEX3Atmp_NWAb9bWlXnuZO8sT1DmwmyA = (NI)0;
		HEX3Atmp_NWAb9bWlXnuZO8sT1DmwmyA = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_Zg2jEBCHLhziu2DjMOpERQ = ((NI) 0);
		{
			while (1) {
				if (!(res_Zg2jEBCHLhziu2DjMOpERQ <= HEX3Atmp_NWAb9bWlXnuZO8sT1DmwmyA)) goto LA3;
				i_7IKRK7pbJ9cbu56OikDveHw = res_Zg2jEBCHLhziu2DjMOpERQ;
				switch (((NU8)(s0->data[i_7IKRK7pbJ9cbu56OikDveHw]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result0 = addChar(result0, s0->data[i_7IKRK7pbJ9cbu56OikDveHw]);
				}
				break;
				case 32:
				{
					result0 = addChar(result0, 43);
				}
				break;
				default:
				{
					NimStringDesc* LOC7;
					result0 = addChar(result0, 37);
					LOC7 = (NimStringDesc*)0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_7IKRK7pbJ9cbu56OikDveHw])))), ((NI) 2));
					result0 = resizeString(result0, LOC7->Sup.len + 0);
appendString(result0, LOC7);
				}
				break;
				}
				res_Zg2jEBCHLhziu2DjMOpERQ += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit000)(void) {
nimRegisterGlobalMarker(T_61YBnzSZ9bYHqA2OqxFo2Eg_2);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit000)(void) {
}
