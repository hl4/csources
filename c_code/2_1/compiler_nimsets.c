/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode208813 tnode208813;
typedef struct ttype208849 ttype208849;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym208843 tsym208843;
typedef struct tident185021 tident185021;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tbitset255012 tbitset255012;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tcell45947 tcell45947;
typedef struct tcellseq45963 tcellseq45963;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45959 tcellset45959;
typedef struct tpagedesc45955 tpagedesc45955;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tlib208831 tlib208831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo181338  {
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
struct  tnode208813  {
ttype208849* Typ;
tlineinfo181338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym208843* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq208807* Sons;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tloc208827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208849* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype208849  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq208845* Sons;
tnode208813* N;
tsym208843* Owner;
tsym208843* Sym;
tsym208843* Destructor;
tsym208843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc208827 Loc;
};
struct  tcell45947  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45963  {
NI Len;
NI Cap;
tcell45947** D;
};
struct  tcellset45959  {
NI Counter;
NI Max;
tpagedesc45955* Head;
tpagedesc45955** Data;
};
typedef tsmallchunk27040* TY27822[512];
typedef ttrunk27013* ttrunkbuckets27015[256];
struct  tintset27017  {
ttrunkbuckets27015 Data;
};
struct  tmemregion27810  {
NI Minlargeobj;
NI Maxlargeobj;
TY27822 Freesmallchunks;
tllchunk27804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27042* Freechunkslist;
tintset27017 Chunkstarts;
tavlnode27808* Root;
tavlnode27808* Deleted;
tavlnode27808* Last;
tavlnode27808* Freeavlnodes;
};
struct  tgcstat47814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45963 Zct;
tcellseq45963 Decstack;
tcellset45959 Cycleroots;
tcellseq45963 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
};
struct  tsym208843  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq208845* Typeinstcache;
tscope208837* Typscope;
} S1;
struct {TY208944* Procinstcache;
tscope208837* Scope;
} S2;
struct {TY208944* Usedgenerics;
tstrtable208817 Tab;
} S3;
struct {tsym208843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype208849* Typ;
tident185021* Name;
tlineinfo181338 Info;
tsym208843* Owner;
NU32 Flags;
tnode208813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc208827 Loc;
tlib208831* Annex;
tnode208813* Constraint;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY27020[16];
struct  tpagedesc45955  {
tpagedesc45955* Next;
NI Key;
TY27020 Bits;
};
struct  tbasechunk27038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27040  {
  tbasechunk27038 Sup;
tsmallchunk27040* Next;
tsmallchunk27040* Prev;
tfreecell27030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27804  {
NI Size;
NI Acc;
tllchunk27804* Next;
};
struct  tbigchunk27042  {
  tbasechunk27038 Sup;
tbigchunk27042* Next;
tbigchunk27042* Prev;
NI Align;
NF Data;
};
struct  ttrunk27013  {
ttrunk27013* Next;
NI Key;
TY27020 Bits;
};
typedef tavlnode27808* TY27814[2];
struct  tavlnode27808  {
TY27814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope208837  {
NI Depthlevel;
tstrtable208817 Symbols;
tnodeseq208807* Usingsyms;
tscope208837* Parent;
};
struct  tinstantiation208833  {
tsym208843* Sym;
ttypeseq208845* Concretetypes;
TY208933* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib208831  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode208813* Path;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
};
struct tbitset255012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct ttypeseq208845 {
  TGenericSeq Sup;
  ttype208849* data[SEQ_DECL_SIZE];
};
struct TY208944 {
  TGenericSeq Sup;
  tinstantiation208833* data[SEQ_DECL_SIZE];
};
struct tsymseq208815 {
  TGenericSeq Sup;
  tsym208843* data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_183424)(tlineinfo181338 info, NimStringDesc* errmsg);
N_NIMCALL(NI, sonslen_211403)(tnode208813* n);
N_NIMCALL(NIM_BOOL, levalue_215374)(tnode208813* a, tnode208813* b);
N_NIMCALL(NIM_BOOL, samevalue_215324)(tnode208813* a, tnode208813* b);
N_NIMCALL(void, tobitset_256004)(tnode208813* s, tbitset255012** b);
N_NIMCALL(NI64, firstord_237004)(ttype208849* t);
N_NIMCALL(void, bitsetinit_255021)(tbitset255012** b, NI length);
N_NIMCALL(NI64, getsize_237190)(ttype208849* typ);
N_NIMCALL(NI64, getordvalue_237178)(tnode208813* n);
N_NIMCALL(void, bitsetincl_255061)(tbitset255012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_255037)(tbitset255012** x, tbitset255012* y);
N_NIMCALL(tnode208813*, totreeset_256353)(tbitset255012* s, ttype208849* settype, tlineinfo181338 info);
N_NIMCALL(tnode208813*, newnodei_210351)(NU8 kind, tlineinfo181338 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(NIM_BOOL, bitsetin_255077)(tbitset255012* x, NI64 e);
N_NIMCALL(void, addson_210819)(tnode208813* father, tnode208813* son);
N_NIMCALL(tnode208813*, newinttypenode_209620)(NU8 kind, NI64 intval, ttype208849* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_255091)(tbitset255012* x, tbitset255012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_255084)(tbitset255012* x, tbitset255012* y);
N_NIMCALL(void, bitsetintersect_255053)(tbitset255012** x, tbitset255012* y);
N_NIMCALL(void, bitsetunion_255029)(tbitset255012** x, tbitset255012* y);
N_NIMCALL(void, bitsetsymdiff_255045)(tbitset255012** x, tbitset255012* y);
STRING_LITERAL(TMP2866, "inSet", 5);
extern tgcheap47816 gch_47844;

N_NIMCALL(NIM_BOOL, inset_256019)(tnode208813* s, tnode208813* elem) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_183424((*s).Info, ((NimStringDesc*) &TMP2866));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_256121;
		NI HEX3Atmp_256138;
		NI LOC6;
		NI res_256141;
		i_256121 = 0;
		HEX3Atmp_256138 = 0;
		LOC6 = 0;
		LOC6 = sonslen_211403(s);
		HEX3Atmp_256138 = (NI32)(LOC6 - ((NI) 1));
		res_256141 = ((NI) 0);
		{
			while (1) {
				if (!(res_256141 <= HEX3Atmp_256138)) goto LA8;
				i_256121 = res_256141;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_256121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_215374((*(*s).kindU.S6.Sons->data[i_256121]).kindU.S6.Sons->data[((NI) 0)], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_215374(elem, (*(*s).kindU.S6.Sons->data[i_256121]).kindU.S6.Sons->data[((NI) 1)]);
						LA16: ;
						if (!LOC15) goto LA17;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = 0;
						LOC22 = samevalue_215324((*s).kindU.S6.Sons->data[i_256121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_256141 += ((NI) 1);
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_256004)(tnode208813* s, tbitset255012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_237004((*(*s).Typ).Sons->data[((NI) 0)]);
	LOC1 = 0;
	LOC1 = getsize_237190((*s).Typ);
	bitsetinit_255021(b, ((NI) (LOC1)));
	{
		NI i_256296;
		NI HEX3Atmp_256325;
		NI LOC3;
		NI res_256328;
		i_256296 = 0;
		HEX3Atmp_256325 = 0;
		LOC3 = 0;
		LOC3 = sonslen_211403(s);
		HEX3Atmp_256325 = (NI32)(LOC3 - ((NI) 1));
		res_256328 = ((NI) 0);
		{
			while (1) {
				if (!(res_256328 <= HEX3Atmp_256325)) goto LA5;
				i_256296 = res_256328;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_256296]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_237178((*(*s).kindU.S6.Sons->data[i_256296]).kindU.S6.Sons->data[((NI) 0)]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_237178((*(*s).kindU.S6.Sons->data[i_256296]).kindU.S6.Sons->data[((NI) 1)]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_255061(b, (NI64)(j - first));
							j += ((NI) 1);
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_237178((*s).kindU.S6.Sons->data[i_256296]);
					bitsetincl_255061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_256328 += ((NI) 1);
			} LA5: ;
		}
	}
}

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45947))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45947* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49446(src);
		(*c).Refcount += ((NI) 8);
	}
	LA3: ;
	{
		tcell45947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49446((*dest));
		{
			(*c).Refcount -= ((NI) 8);
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode208813*, totreeset_256353)(tbitset255012* s, ttype208849* settype, tlineinfo181338 info) {
	tnode208813* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype208849* elemtype;
	tnode208813* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[((NI) 0)];
	first = firstord_237004(elemtype);
	result = newnodei_210351(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).Typ), settype);
	(*result).Info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI32)(s->Sup.len * ((NI) 8)))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_255077(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI32)(s->Sup.len * ((NI) 8)))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_255077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= ((NI) 1);
				{
					tnode208813* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_209620(((NU8) 6), (NI64)(a + first), elemtype);
					addson_210819(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode208813* LOC23;
					tnode208813* LOC24;
					n = newnodei_210351(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).Typ), elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_209620(((NU8) 6), (NI64)(a + first), elemtype);
					addson_210819(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_209620(((NU8) 6), (NI64)(b + first), elemtype);
					addson_210819(n, LOC24);
					addson_210819(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(tnode208813*, diffsets_256054)(tnode208813* a, tnode208813* b) {
	tnode208813* result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	bitsetdiff_255037((&x), y);
	result = totreeset_256353(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_256089)(tnode208813* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_256608;
		NI HEX3Atmp_256633;
		NI LOC2;
		NI res_256636;
		i_256608 = 0;
		HEX3Atmp_256633 = 0;
		LOC2 = 0;
		LOC2 = sonslen_211403(s);
		HEX3Atmp_256633 = (NI32)(LOC2 - ((NI) 1));
		res_256636 = ((NI) 0);
		{
			while (1) {
				if (!(res_256636 <= HEX3Atmp_256633)) goto LA4;
				i_256608 = res_256636;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_256608]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_237178((*(*s).kindU.S6.Sons->data[i_256608]).kindU.S6.Sons->data[((NI) 1)]);
					LOC10 = 0;
					LOC10 = getordvalue_237178((*(*s).kindU.S6.Sons->data[i_256608]).kindU.S6.Sons->data[((NI) 0)]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += ((NI) 1);
				}
				LA5: ;
				res_256636 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_256075)(tnode208813* a, tnode208813* b) {
	NIM_BOOL result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	result = bitsetcontains_255091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_256082)(tnode208813* a, tnode208813* b) {
	NIM_BOOL result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	result = bitsetequals_255084(x, y);
	return result;
}

N_NIMCALL(tnode208813*, intersectsets_256061)(tnode208813* a, tnode208813* b) {
	tnode208813* result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	bitsetintersect_255053((&x), y);
	result = totreeset_256353(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode208813*, unionsets_256047)(tnode208813* a, tnode208813* b) {
	tnode208813* result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	bitsetunion_255029((&x), y);
	result = totreeset_256353(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode208813*, symdiffsets_256068)(tnode208813* a, tnode208813* b) {
	tnode208813* result;
	tbitset255012* x;
	tbitset255012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_256004(a, (&x));
	tobitset_256004(b, (&y));
	bitsetsymdiff_255045((&x), y);
	result = totreeset_256353(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_256012)(tnode208813* a, tnode208813* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_215374((*a).kindU.S6.Sons->data[((NI) 0)], (*b).kindU.S6.Sons->data[((NI) 1)]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_215374((*b).kindU.S6.Sons->data[((NI) 0)], (*a).kindU.S6.Sons->data[((NI) 1)]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_215374((*a).kindU.S6.Sons->data[((NI) 0)], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_215374(b, (*a).kindU.S6.Sons->data[((NI) 1)]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b).Kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_215374((*b).kindU.S6.Sons->data[((NI) 0)], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_215374(a, (*b).kindU.S6.Sons->data[((NI) 1)]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_215324(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode208813*, complement_256549)(tnode208813* a) {
	tnode208813* result;
	tbitset255012* x;
	result = 0;
	x = 0;
	tobitset_256004(a, (&x));
	{
		NI i_256567;
		NI HEX3Atmp_256570;
		NI res_256573;
		i_256567 = 0;
		HEX3Atmp_256570 = 0;
		HEX3Atmp_256570 = (x->Sup.len-1);
		res_256573 = ((NI) 0);
		{
			while (1) {
				if (!(res_256573 <= HEX3Atmp_256570)) goto LA3;
				i_256567 = res_256573;
				x->data[i_256567] = (NI8)((NU8) ~(x->data[i_256567]));
				res_256573 += ((NI) 1);
			} LA3: ;
		}
	}
	result = totreeset_256353(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_256034)(tnode208813* a, tnode208813* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_215374(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit)(void) {
}

