/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym207843 tsym207843;
typedef struct tsymseq207815 tsymseq207815;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY120008 TY120008;
typedef struct tindexentry327398 tindexentry327398;
typedef struct TY329711 TY329711;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tnode207813 tnode207813;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym207843* x_366729, tsym207843* y_366731, void* ClEnv);
void* ClEnv;
} TY366727;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2661) (tsym207843* x_366784, tsym207843* y_366786);
typedef N_CLOSURE_PTR(NI, TMP2662) (tsym207843* x_366784, tsym207843* y_366786);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_330310, NimStringDesc* y_330312, void* ClEnv);
void* ClEnv;
} TY330308;
typedef N_CLOSURE_PTR(NI, TMP4879) (NimStringDesc* x_330365, NimStringDesc* y_330367);
typedef N_CLOSURE_PTR(NI, TMP4880) (NimStringDesc* x_330365, NimStringDesc* y_330367);
struct  tindexentry327398  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tindexentry327398 x_328698, tindexentry327398 y_328700, void* ClEnv);
void* ClEnv;
} TY328696;
typedef N_CLOSURE_PTR(NI, TMP4883) (tindexentry327398 x_328753, tindexentry327398 y_328755);
typedef N_CLOSURE_PTR(NI, TMP4884) (tindexentry327398 x_328753, tindexentry327398 y_328755);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
};
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc207827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype207849* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym207843  {
  tidobj184015 Sup;
NU8 Kind;
union{
struct {ttypeseq207845* Typeinstcache;
tscope207837* Typscope;
} S1;
struct {TY207944* Procinstcache;
tscope207837* Scope;
} S2;
struct {TY207944* Usedgenerics;
tstrtable207817 Tab;
} S3;
struct {tsym207843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype207849* Typ;
tident184021* Name;
tlineinfo180338 Info;
tsym207843* Owner;
NU32 Flags;
tnode207813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc207827 Loc;
tlib207831* Annex;
tnode207813* Constraint;
};
struct  ttype207849  {
  tidobj184015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq207845* Sons;
tnode207813* N;
tsym207843* Owner;
tsym207843* Sym;
tsym207843* Destructor;
tsym207843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc207827 Loc;
};
struct  tscope207837  {
NI Depthlevel;
tstrtable207817 Symbols;
tnodeseq207807* Usingsyms;
tscope207837* Parent;
};
struct  tinstantiation207833  {
tsym207843* Sym;
ttypeseq207845* Concretetypes;
TY207933* Usedby;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  tnode207813  {
ttype207849* Typ;
tlineinfo180338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym207843* Sym;
} S4;
struct {tident184021* Ident;
} S5;
struct {tnodeseq207807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib207831  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode207813* Path;
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY329711 {
  TGenericSeq Sup;
  tindexentry327398 data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_366765)(tsym207843** a, NI aLen0, tsym207843** b, NI bLen0, NI lo, NI m, NI hi, TY366727 cmp, NU8 order);
static N_INLINE(NI, HEX2A_325020)(NI x, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_330346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY330308 cmp, NU8 order);
N_NIMCALL(void, merge_328734)(tindexentry327398* a, NI aLen0, tindexentry327398* b, NI bLen0, NI lo, NI m, NI hi, TY328696 cmp, NU8 order);
N_NIMCALL(void, HEX3CHEX2D_327807)(tindexentry327398* a, tindexentry327398 b);
extern TNimType NTI207815; /* TSymSeq */
extern TNimType NTI108; /* int */
TNimType NTI325033; /* range -1..0(int) */
extern TNimType NTI120008; /* seq[string] */
extern TNimType NTI329711; /* seq[TIndexEntry] */

static N_INLINE(NI, HEX2A_325020)(NI x, NU8 order) {
	NI result;
	NI y;
	result = 0;
	y = (NI32)(((NI) (order)) - ((NI) 1));
	result = (NI32)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_366765)(tsym207843** a, NI aLen0, tsym207843** b, NI bLen0, NI lo, NI m, NI hi, TY366727 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI32)(m + ((NI) 1))], cmp.ClEnv):((TMP2661)(cmp.ClPrc))(a[m], a[(NI32)(m + ((NI) 1))]);
		LOC4 = 0;
		LOC4 = HEX2A_325020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP2662)(cmp.ClPrc))(b[i], a[j]);
				LOC16 = 0;
				LOC16 = HEX2A_325020(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_366720)(tsym207843** a, NI aLen0, TY366727 cmp, NU8 order) {
	NI n;
	tsymseq207815* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (tsymseq207815*) newSeq((&NTI207815), (NI32)(n / ((NI) 2)));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_366765(a, aLen0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI32)((NI32)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI32)(m + s), cmp, order);
					m -= (NI32)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI32)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_330346)(NimStringDesc** a, NI aLen0, NimStringDesc** b, NI bLen0, NI lo, NI m, NI hi, TY330308 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI32)(m + ((NI) 1))], cmp.ClEnv):((TMP4879)(cmp.ClPrc))(a[m], a[(NI32)(m + ((NI) 1))]);
		LOC4 = 0;
		LOC4 = HEX2A_325020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP4880)(cmp.ClPrc))(b[i], a[j]);
				LOC16 = 0;
				LOC16 = HEX2A_325020(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_330301)(NimStringDesc** a, NI aLen0, TY330308 cmp, NU8 order) {
	NI n;
	TY120008* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (TY120008*) newSeq((&NTI120008), (NI32)(n / ((NI) 2)));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_330346(a, aLen0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI32)((NI32)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI32)(m + s), cmp, order);
					m -= (NI32)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI32)(s * ((NI) 2));
		} LA2: ;
	}
}

N_NIMCALL(void, merge_328734)(tindexentry327398* a, NI aLen0, tindexentry327398* b, NI bLen0, NI lo, NI m, NI hi, TY328696 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI32)(m + ((NI) 1))], cmp.ClEnv):((TMP4883)(cmp.ClPrc))(a[m], a[(NI32)(m + ((NI) 1))]);
		LOC4 = 0;
		LOC4 = HEX2A_325020(LOC3, order);
		if (!(LOC4 <= ((NI) 0))) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			HEX3CHEX2D_327807((&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv):((TMP4884)(cmp.ClPrc))(b[i], a[j]);
				LOC16 = 0;
				LOC16 = HEX2A_325020(LOC15, order);
				if (!(LOC16 <= ((NI) 0))) goto LA17;
				HEX3CHEX2D_327807((&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_327807((&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			HEX3CHEX2D_327807((&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, sort_328689)(tindexentry327398* a, NI aLen0, TY328696 cmp, NU8 order) {
	NI n;
	TY329711* b;
	NI s;
	n = aLen0;
	b = 0;
	b = (TY329711*) newSeq((&NTI329711), (NI32)(n / ((NI) 2)));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge_328734(a, aLen0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI32)((NI32)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI32)(m + s), cmp, order);
					m -= (NI32)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI32)(s * ((NI) 2));
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void) {
NTI325033.size = sizeof(NI);
NTI325033.kind = 20;
NTI325033.base = (&NTI108);
NTI325033.flags = 3;
}

