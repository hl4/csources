/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode207813 tnode207813;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym207843 tsym207843;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct tcell46147 tcell46147;
typedef struct tcellseq46163 tcellseq46163;
typedef struct tgcheap48016 tgcheap48016;
typedef struct tcellset46159 tcellset46159;
typedef struct tpagedesc46155 tpagedesc46155;
typedef struct tmemregion28010 tmemregion28010;
typedef struct tsmallchunk27240 tsmallchunk27240;
typedef struct tllchunk28004 tllchunk28004;
typedef struct tbigchunk27242 tbigchunk27242;
typedef struct tintset27217 tintset27217;
typedef struct ttrunk27213 ttrunk27213;
typedef struct tavlnode28008 tavlnode28008;
typedef struct tgcstat48014 tgcstat48014;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  tcell46147  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq46163  {
NI Len;
NI Cap;
tcell46147** D;
};
struct  tcellset46159  {
NI Counter;
NI Max;
tpagedesc46155* Head;
tpagedesc46155** Data;
};
typedef tsmallchunk27240* TY28022[512];
typedef ttrunk27213* ttrunkbuckets27215[256];
struct  tintset27217  {
ttrunkbuckets27215 Data;
};
struct  tmemregion28010  {
NI Minlargeobj;
NI Maxlargeobj;
TY28022 Freesmallchunks;
tllchunk28004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27242* Freechunkslist;
tintset27217 Chunkstarts;
tavlnode28008* Root;
tavlnode28008* Deleted;
tavlnode28008* Last;
tavlnode28008* Freeavlnodes;
};
struct  tgcstat48014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap48016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq46163 Zct;
tcellseq46163 Decstack;
tcellset46159 Cycleroots;
tcellseq46163 Tempstack;
NI Recgclock;
tmemregion28010 Region;
tgcstat48014 Stat;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY27220[16];
struct  tpagedesc46155  {
tpagedesc46155* Next;
NI Key;
TY27220 Bits;
};
struct  tbasechunk27238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27240  {
  tbasechunk27238 Sup;
tsmallchunk27240* Next;
tsmallchunk27240* Prev;
tfreecell27230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk28004  {
NI Size;
NI Acc;
tllchunk28004* Next;
};
struct  tbigchunk27242  {
  tbasechunk27238 Sup;
tbigchunk27242* Next;
tbigchunk27242* Prev;
NI Align;
NF Data;
};
struct  ttrunk27213  {
ttrunk27213* Next;
NI Key;
TY27220 Bits;
};
typedef tavlnode28008* TY28014[2];
struct  tavlnode28008  {
TY28014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell27230  {
tfreecell27230* Next;
NI Zerofield;
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_235149)(tnode207813* a, tnode207813* b);
N_NIMCALL(tnode207813*, newnodei_209351)(NU8 kind, tlineinfo180338 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_235072)(tnode207813* n, tnode207813* s);
N_NIMCALL(NIM_BOOL, hasson_235019)(tnode207813* father, tnode207813* son);
N_NIMCALL(void, addson_209819)(tnode207813* father, tnode207813* son);
N_NIMCALL(void, delson_211498)(tnode207813* father, NI idx);
N_NIMCALL(void, unneststmts_235703)(tnode207813* n, tnode207813* result);
static N_INLINE(NI, len_208097)(tnode207813* n);
N_NIMCALL(void, add_208164)(tnode207813* father, tnode207813* son);
N_NIMCALL(tnode207813*, newnodei_209407)(NU8 kind, tlineinfo180338 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_235459)(tnode207813* n);
N_NIMCALL(ttype207849*, skiptypes_211167)(ttype207849* t, NU64 kinds);
N_NIMCALL(NU8, whichkeyword_188384)(tident184021* id);
extern tgcheap48016 gch_48044;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_235149)(tnode207813* a, tnode207813* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.Sym).Name).Sup.Id == (*(*(*b).kindU.S4.Sym).Name).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_210403(a);
				LOC22 = 0;
				LOC22 = sonslen_210403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_235222;
					NI HEX3Atmp_235226;
					NI LOC26;
					NI res_235229;
					i_235222 = 0;
					HEX3Atmp_235226 = 0;
					LOC26 = 0;
					LOC26 = sonslen_210403(a);
					HEX3Atmp_235226 = (NI32)(LOC26 - ((NI) 1));
					res_235229 = ((NI) 0);
					{
						while (1) {
							if (!(res_235229 <= HEX3Atmp_235226)) goto LA28;
							i_235222 = res_235229;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_235149((*a).kindU.S6.Sons->data[i_235222], (*b).kindU.S6.Sons->data[i_235222]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_235229 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_235403)(tnode207813* op) {
	NU16 result;
	result = 0;
	switch ((*op).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.Sons->data[((NI) 0)]).Kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.Sons->data[((NI) 0)]).kindU.S4.Sym).Magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_235019)(tnode207813* father, tnode207813* son) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_235036;
		NI HEX3Atmp_235050;
		NI LOC2;
		NI res_235053;
		i_235036 = 0;
		HEX3Atmp_235050 = 0;
		LOC2 = 0;
		LOC2 = sonslen_210403(father);
		HEX3Atmp_235050 = (NI32)(LOC2 - ((NI) 1));
		res_235053 = ((NI) 0);
		{
			while (1) {
				if (!(res_235053 <= HEX3Atmp_235050)) goto LA4;
				i_235036 = res_235053;
				{
					if (!((*father).kindU.S6.Sons->data[i_235036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_235053 += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_235072)(tnode207813* n, tnode207813* s) {
	NIM_BOOL result;
	NI m;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_235019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_210403(s);
	addson_209819(s, n);
	{
		if (!!(((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_235113;
			NI HEX3Atmp_235116;
			NI LOC15;
			NI res_235119;
			i_235113 = 0;
			HEX3Atmp_235116 = 0;
			LOC15 = 0;
			LOC15 = sonslen_210403(n);
			HEX3Atmp_235116 = (NI32)(LOC15 - ((NI) 1));
			res_235119 = ((NI) 0);
			{
				while (1) {
					if (!(res_235119 <= HEX3Atmp_235116)) goto LA17;
					i_235113 = res_235119;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_235072((*n).kindU.S6.Sons->data[i_235113], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_235119 += ((NI) 1);
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_211498(s, m);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_235138)(tnode207813* n) {
	NIM_BOOL result;
	tnode207813* s;
	result = 0;
	s = newnodei_209351(((NU8) 1), (*n).Info);
	result = cyclictreeaux_235072(n, s);
	return result;
}

static N_INLINE(NI, len_208097)(tnode207813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, unneststmts_235703)(tnode207813* n, tnode207813* result) {
	{
		if (!((*n).Kind == ((NU8) 115))) goto LA3;
		{
			tnode207813* x_235716;
			x_235716 = 0;
			{
				NI i_235733;
				NI HEX3Atmp_235735;
				NI LOC7;
				NI res_235737;
				i_235733 = 0;
				HEX3Atmp_235735 = 0;
				LOC7 = 0;
				LOC7 = len_208097(n);
				HEX3Atmp_235735 = (LOC7 - 1);
				res_235737 = ((NI) 0);
				{
					while (1) {
						if (!(res_235737 <= HEX3Atmp_235735)) goto LA9;
						i_235733 = res_235737;
						x_235716 = (*n).kindU.S6.Sons->data[i_235733];
						unneststmts_235703(x_235716, result);
						res_235737 += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).Kind == ((NU8) 125) || (*n).Kind == ((NU8) 23)))) goto LA11;
		add_208164(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(tnode207813*, flattenstmts_235758)(tnode207813* n) {
	tnode207813* result;
	result = 0;
	result = newnodei_209351(((NU8) 115), (*n).Info);
	unneststmts_235703(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_208097(result);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result = (*result).kindU.S6.Sons->data[((NI) 0)];
	}
	LA4: ;
	return result;
}

static N_INLINE(tcell46147*, usrtocell_49646)(void* usr) {
	tcell46147* result;
	result = 0;
	result = ((tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(tcell46147* c) {
	addzct_49617((&gch_48044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell46147* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).Refcount += ((NI) 8);
	}
	LA3: ;
	{
		tcell46147* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).Refcount -= ((NI) 8);
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode207813*, extractrange_235770)(NU8 k, tnode207813* n, NI a, NI b) {
	tnode207813* result;
	result = 0;
	result = newnodei_209407(k, (*n).Info, (NI32)((NI32)(b - a) + ((NI) 1)));
	{
		NI i_235787;
		NI HEX3Atmp_235791;
		NI res_235794;
		i_235787 = 0;
		HEX3Atmp_235791 = 0;
		HEX3Atmp_235791 = (NI32)(b - a);
		res_235794 = ((NI) 0);
		{
			while (1) {
				if (!(res_235794 <= HEX3Atmp_235791)) goto LA3;
				i_235787 = res_235794;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Sons->data[i_235787]), (*n).kindU.S6.Sons->data[(NI32)(i_235787 + a)]);
				res_235794 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_235459)(tnode207813* n) {
	NIM_BOOL result;
{	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_235459((*n).kindU.S6.Sons->data[((NI) 1)]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 155):
	{
		NIM_BOOL LOC13;
		ttype207849* LOC15;
		{
			NI i_235483;
			NI HEX3Atmp_235504;
			NI LOC5;
			NI res_235507;
			i_235483 = 0;
			HEX3Atmp_235504 = 0;
			LOC5 = 0;
			LOC5 = len_208097(n);
			HEX3Atmp_235504 = (LOC5 - 1);
			res_235507 = ((NI) 0);
			{
				while (1) {
					if (!(res_235507 <= HEX3Atmp_235504)) goto LA7;
					i_235483 = res_235507;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_235459((*n).kindU.S6.Sons->data[i_235483]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_235507 += ((NI) 1);
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).Typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_211167((*n).Typ, 10240);
		LOC13 = !(((*LOC15).Kind == ((NU8) 17)));
		LA14: ;
		result = LOC13;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_235428)(tnode207813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 10) || (*n).Kind >= ((NU8) 20) && (*n).Kind <= ((NU8) 22) || (*n).Kind >= ((NU8) 16) && (*n).Kind <= ((NU8) 18) || (*n).Kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).Flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, whichpragma_235672)(tnode207813* n) {
	NU8 result;
	tnode207813* key;
	result = 0;
	{
		if (!((*n).Kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.Sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).Kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_188384((*key).kindU.S5.Ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit)(void) {
}

