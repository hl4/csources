/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tiitable214274 tiitable214274;
typedef struct tiipairseq214272 tiipairseq214272;
typedef struct tiipair214270 tiipair214270;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsym207843 tsym207843;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tnode207813 tnode207813;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct NimStringDesc NimStringDesc;
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
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct ttabiter214119 ttabiter214119;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidentiter214141 tidentiter214141;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct tidnodetable207867 tidnodetable207867;
typedef struct tidnodepairseq207865 tidnodepairseq207865;
typedef struct tidnodepair207863 tidnodepair207863;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
struct  tiipair214270  {
NI Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tiitable214274  {
NI Counter;
tiipairseq214272* Data;
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
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tidpair207857  {
tidobj184015* Key;
TNimObject* Val;
};
struct  tidtable207861  {
NI Counter;
tidpairseq207859* Data;
};
struct  ttabiter214119  {
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
struct  tidentiter214141  {
NI H;
tident184021* Name;
};
struct  intset204056  {
NI Counter;
NI Max;
ttrunk204052* Head;
ttrunkseq204054* Data;
};
struct  tidnodepair207863  {
tidobj184015* Key;
tnode207813* Val;
};
struct  tidnodetable207867  {
NI Counter;
tidnodepairseq207865* Data;
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
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27220 Bits;
};
struct  tfreecell27230  {
tfreecell27230* Next;
NI Zerofield;
};
struct tiipairseq214272 {
  TGenericSeq Sup;
  tiipair214270 data[SEQ_DECL_SIZE];
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
struct tidnodepairseq207865 {
  TGenericSeq Sup;
  tidnodepair207863 data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP825)(void* p, NI op);
N_NIMCALL(NIM_BOOL, mustrehash_214249)(NI length, NI counter);
N_NIMCALL(void, strtableenlarge_218628)(tstrtable207817* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, strtablerawinsert_217773)(tsymseq207815** data, tsym207843* n);
static N_INLINE(NI, nexttry_214256)(NI h, NI maxhash);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, iitablerawget_221217)(tiitable214274 t, NI key);
N_NIMCALL(void, iitablerawinsert_221249)(tiipairseq214272** data, NI key, NI val);
N_NIMCALL(NI, idtablerawget_219506)(tidtable207861 t, NI key);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52022)(tcell46147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49667)(tcell46147* c);
static N_INLINE(void, rtladdcycleroot_50423)(tcell46147* c);
N_NOINLINE(void, incl_46867)(tcellset46159* s, tcell46147* cell);
static N_INLINE(void, decref_51604)(tcell46147* c);
N_NIMCALL(void, idtablerawinsert_219639)(tidpairseq207859** data, tidobj184015* key, TNimObject* val);
N_NIMCALL(tsym207843*, nextiter_214132)(ttabiter214119* ti, tstrtable207817 tab);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, reallysameident_218740)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(void, internalerror_182424)(tlineinfo180338 info, NimStringDesc* errmsg);
static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, levalue_214374)(tnode207813* a, tnode207813* b);
N_NIMCALL(tsym207843*, nextidentiter_214156)(tidentiter214141* ti, tstrtable207817 tab);
N_NIMCALL(tsym207843*, nextidentexcluding_219304)(tidentiter214141* ti, tstrtable207817 tab, intset204056 excluding);
N_NIMCALL(NIM_BOOL, contains_204829)(intset204056 s, NI key);
N_NIMCALL(NI, idnodetablerawget_220496)(tidnodetable207867 t, tidobj184015* key);
N_NIMCALL(void, idnodetablerawinsert_220560)(tidnodepairseq207865** data, tidobj184015* key, tnode207813* val);
N_NIMCALL(tsym207843*, lookupinrecord_214236)(tnode207813* n, tident184021* field);
N_NIMCALL(tnode207813*, lastson_210431)(tnode207813* n);
N_NIMCALL(void, symtabreplaceraw_218232)(tsymseq207815** data, tsym207843* prevsym, tsym207843* newsym);
STRING_LITERAL(TMP2736, "getSymFromList", 14);
STRING_LITERAL(TMP3275, "lookupInRecord", 14);
STRING_LITERAL(TMP3276, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP3277, "lookupInRecord()", 16);
TNimType NTI214274; /* TIITable */
extern TNimType NTI108; /* int */
TNimType NTI214270; /* TIIPair */
TNimType NTI214272; /* TIIPairSeq */
extern TNimType NTI207815; /* TSymSeq */
extern tgcheap48016 gch_48044;
extern TNimType NTI207859; /* TIdPairSeq */
extern TNimType NTI207865; /* TIdNodePairSeq */
N_NIMCALL(void, TMP825)(void* p, NI op) {
	tiipairseq214272* a;
	NI LOC1;
	a = (tiipairseq214272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NIM_BOOL, mustrehash_214249)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI32)(length * ((NI) 2)) < (NI32)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI32)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, nexttry_214256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(((NI) 5) * h) + ((NI) 1)) & maxhash);
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

N_NIMCALL(void, strtablerawinsert_217773)(tsymseq207815** data, tsym207843* n) {
	NI h;
{	h = (NI)((*(*n).Name).H & ((*data)->Sup.len-1));
	{
		if (!!((((*n).Flags &(1<<((((NU8) 25))&31)))!=0))) goto LA3;
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA6;
				{
					if (!((*data)->data[h] == n)) goto LA9;
					goto BeforeRet;
				}
				LA9: ;
				h = nexttry_214256(h, ((*data)->Sup.len-1));
			} LA6: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
	}
	goto LA1;
	LA3: ;
	{
		NI favpos;
		favpos = ((NI) -1);
		{
			while (1) {
				if (!!(((*data)->data[h] == NIM_NIL))) goto LA13;
				{
					if (!((*data)->data[h] == n)) goto LA16;
					goto BeforeRet;
				}
				LA16: ;
				{
					NIM_BOOL LOC20;
					LOC20 = 0;
					LOC20 = (favpos < ((NI) 0));
					if (!(LOC20)) goto LA21;
					LOC20 = ((*(*(*data)->data[h]).Name).Sup.Id == (*(*n).Name).Sup.Id);
					LA21: ;
					if (!LOC20) goto LA22;
					favpos = h;
				}
				LA22: ;
				h = nexttry_214256(h, ((*data)->Sup.len-1));
			} LA13: ;
		}
		asgnRefNoCycle((void**) (&(*data)->data[h]), n);
		{
			tsym207843* LOC28;
			if (!(((NI) 0) <= favpos)) goto LA26;
			LOC28 = 0;
			LOC28 = (*data)->data[h];
			asgnRefNoCycle((void**) (&(*data)->data[h]), (*data)->data[favpos]);
			asgnRefNoCycle((void**) (&(*data)->data[favpos]), LOC28);
		}
		LA26: ;
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, strtableenlarge_218628)(tstrtable207817* t) {
	tsymseq207815* n;
	tsymseq207815* LOC8;
	n = 0;
	n = (tsymseq207815*) newSeq((&NTI207815), (NI32)((*t).Data->Sup.len * ((NI) 2)));
	{
		NI i_218663;
		NI HEX3Atmp_218689;
		NI res_218692;
		i_218663 = 0;
		HEX3Atmp_218689 = 0;
		HEX3Atmp_218689 = ((*t).Data->Sup.len-1);
		res_218692 = ((NI) 0);
		{
			while (1) {
				if (!(res_218692 <= HEX3Atmp_218689)) goto LA3;
				i_218663 = res_218692;
				{
					if (!!(((*t).Data->data[i_218663] == NIM_NIL))) goto LA6;
					strtablerawinsert_217773((&n), (*t).Data->data[i_218663]);
				}
				LA6: ;
				res_218692 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(void, strtableadd_214103)(tstrtable207817* t, tsym207843* n) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC3) goto LA4;
		strtableenlarge_218628(t);
	}
	LA4: ;
	strtablerawinsert_217773((&(*t).Data), n);
	(*t).Counter += ((NI) 1);
}

N_NIMCALL(void, initiitable_214282)(tiitable214274* x) {
	(*x).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*x).Data), (tiipairseq214272*) newSeq((&NTI214272), ((NI) 8)));
	{
		NI i_221194;
		NI res_221198;
		i_221194 = 0;
		res_221198 = ((NI) 0);
		{
			while (1) {
				if (!(res_221198 <= ((NI) 7))) goto LA3;
				i_221194 = res_221198;
				(*x).Data->data[i_221194].Key = ((NI) (-2147483647 -1));
				res_221198 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NI, iitablerawget_221217)(tiitable214274 t, NI key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == ((NI) (-2147483647 -1))))) goto LA2;
			{
				if (!(t.Data->data[h].Key == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_214256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, iitablerawinsert_221249)(tiipairseq214272** data, NI key, NI val) {
	NI h;
	h = 0;
	h = (NI)(key & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == ((NI) (-2147483647 -1))))) goto LA2;
			h = nexttry_214256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].Key = key;
	(*data)->data[h].Val = val;
}

N_NIMCALL(void, iitableput_214296)(tiitable214274* t, NI key, NI val) {
	NI index;
	index = iitablerawget_221217((*t), key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).Data->data[index].Val = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tiipairseq214272* n;
			tiipairseq214272* LOC21;
			LOC8 = 0;
			LOC8 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tiipairseq214272*) newSeq((&NTI214272), (NI32)((*t).Data->Sup.len * ((NI) 2)));
			{
				NI i_221840;
				NI HEX3Atmp_221877;
				NI res_221880;
				i_221840 = 0;
				HEX3Atmp_221877 = 0;
				HEX3Atmp_221877 = (n->Sup.len-1);
				res_221880 = ((NI) 0);
				{
					while (1) {
						if (!(res_221880 <= HEX3Atmp_221877)) goto LA13;
						i_221840 = res_221880;
						n->data[i_221840].Key = ((NI) (-2147483647 -1));
						res_221880 += ((NI) 1);
					} LA13: ;
				}
			}
			{
				NI i_221853;
				NI HEX3Atmp_221885;
				NI res_221888;
				i_221853 = 0;
				HEX3Atmp_221885 = 0;
				HEX3Atmp_221885 = ((*t).Data->Sup.len-1);
				res_221888 = ((NI) 0);
				{
					while (1) {
						if (!(res_221888 <= HEX3Atmp_221885)) goto LA16;
						i_221853 = res_221888;
						{
							if (!!(((*t).Data->data[i_221853].Key == ((NI) (-2147483647 -1))))) goto LA19;
							iitablerawinsert_221249((&n), (*t).Data->data[i_221853].Key, (*t).Data->data[i_221853].Val);
						}
						LA19: ;
						res_221888 += ((NI) 1);
					} LA16: ;
				}
			}
			LOC21 = 0;
			LOC21 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC21;
		}
		LA9: ;
		iitablerawinsert_221249((&(*t).Data), key, val);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, idtablerawget_219506)(tidtable207861 t, NI key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)(key & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == key)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_214256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49667)(tcell46147* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50423)(tcell46147* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & ((NI) -4)) | ((NI) 3));
		incl_46867((&gch_48044.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52022)(tcell46147* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50423(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51604)(tcell46147* c) {
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell46147* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49646(src);
		incref_52022(LOC5);
	}
	LA3: ;
	{
		tcell46147* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49646((*dest));
		decref_51604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, idtablerawinsert_219639)(tidpairseq207859** data, tidobj184015* key, TNimObject* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_214256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRef((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idtableput_214196)(tidtable207861* t, tidobj184015* key, TNimObject* val) {
	NI index;
	tidpairseq207859* n;
	index = 0;
	n = 0;
	index = idtablerawget_219506((*t), (*key).Id);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		asgnRef((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidpairseq207859* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tidpairseq207859*) newSeq((&NTI207859), (NI32)((*t).Data->Sup.len * ((NI) 2)));
			{
				NI i_220239;
				NI HEX3Atmp_220424;
				NI res_220427;
				i_220239 = 0;
				HEX3Atmp_220424 = 0;
				HEX3Atmp_220424 = ((*t).Data->Sup.len-1);
				res_220427 = ((NI) 0);
				{
					while (1) {
						if (!(res_220427 <= HEX3Atmp_220424)) goto LA13;
						i_220239 = res_220427;
						{
							if (!!(((*t).Data->data[i_220239].Key == NIM_NIL))) goto LA16;
							idtablerawinsert_219639((&n), (*t).Data->data[i_220239].Key, (*t).Data->data[i_220239].Val);
						}
						LA16: ;
						res_220427 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idtablerawinsert_219639((&(*t).Data), key, val);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TNimObject*, idtableget_214189)(tidtable207861 t, NI key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_219506(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, iitableget_214289)(tiitable214274 t, NI key) {
	NI result;
	NI index;
	result = 0;
	index = iitablerawget_221217(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = ((NI) (-2147483647 -1));
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym207843*, nextiter_214132)(ttabiter214119* ti, tstrtable207817 tab) {
	tsym207843* result;
	result = 0;
	result = NIM_NIL;
	{
		while (1) {
			if (!((*ti).H <= (tab.Data->Sup.len-1))) goto LA2;
			result = tab.Data->data[(*ti).H];
			(*ti).H += ((NI) 1);
			{
				if (!!((result == NIM_NIL))) goto LA5;
				goto LA1;
			}
			LA5: ;
		} LA2: ;
	} LA1: ;
	return result;
}

N_NIMCALL(tsym207843*, inittabiter_214124)(ttabiter214119* ti, tstrtable207817 tab) {
	tsym207843* result;
	result = 0;
	(*ti).H = ((NI) 0);
	{
		if (!(tab.Counter == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextiter_214132(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym207843*, getmodule_214243)(tsym207843* s) {
	tsym207843* result;
	result = 0;
	result = s;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !((result == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = !(((*result).Kind == ((NU8) 6)));
			LA4: ;
			if (!LOC3) goto LA2;
			result = (*result).Owner;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(tsym207843*, strtableget_214111)(tstrtable207817 t, tident184021* name) {
	tsym207843* result;
	NI h;
	result = 0;
	h = (NI)((*name).H & (t.Data->Sup.len-1));
	{
		while (1) {
			result = t.Data->data[h];
			{
				if (!(result == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				if (!((*(*result).Name).Sup.Id == (*name).Sup.Id)) goto LA9;
				goto LA1;
			}
			LA9: ;
			h = nexttry_214256(h, (t.Data->Sup.len-1));
		}
	} LA1: ;
	return result;
}

N_NIMCALL(TNimObject*, idtableget_214182)(tidtable207861 t, tidobj184015* key) {
	TNimObject* result;
	NI index;
	result = 0;
	index = idtablerawget_219506(t, (*key).Id);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

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

N_NIMCALL(NIM_BOOL, samevalue_214324)(tnode207813* a, tnode207813* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 15))) goto LA4;
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, reallysameident_218740)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_TRUE;
	return result;
}

N_NIMCALL(NIM_BOOL, strtableincl_218807)(tstrtable207817* t, tsym207843* n) {
	NIM_BOOL result;
	NI h;
	NI replaceslot;
{	result = 0;
	h = (NI)((*(*n).Name).H & ((*t).Data->Sup.len-1));
	replaceslot = ((NI) -1);
	{
		while (1) {
			tsym207843* it;
			it = (*t).Data->data[h];
			{
				if (!(it == NIM_NIL)) goto LA5;
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((*(*it).Name).Sup.Id == (*(*n).Name).Sup.Id);
				if (!(LOC9)) goto LA10;
				LOC9 = reallysameident_218740((*(*it).Name).S, (*(*n).Name).S);
				LA10: ;
				if (!LOC9) goto LA11;
				{
					if (!(it == n)) goto LA15;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA15: ;
				replaceslot = h;
			}
			LA11: ;
			h = nexttry_214256(h, ((*t).Data->Sup.len-1));
		}
	} LA1: ;
	{
		if (!(((NI) 0) <= replaceslot)) goto LA19;
		asgnRefNoCycle((void**) (&(*t).Data->data[replaceslot]), n);
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA17;
	LA19: ;
	{
		NIM_BOOL LOC22;
		LOC22 = 0;
		LOC22 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
		if (!LOC22) goto LA23;
		strtableenlarge_218628(t);
		strtablerawinsert_217773((&(*t).Data), n);
	}
	goto LA17;
	LA23: ;
	{
		asgnRefNoCycle((void**) (&(*t).Data->data[h]), n);
	}
	LA17: ;
	(*t).Counter += ((NI) 1);
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym207843*, getsymfromlist_214228)(tnode207813* list, tident184021* ident, NI start) {
	tsym207843* result;
{	result = 0;
	{
		NI i_214854;
		NI HEX3Atmp_214869;
		NI LOC2;
		NI res_214872;
		i_214854 = 0;
		HEX3Atmp_214869 = 0;
		LOC2 = 0;
		LOC2 = sonslen_210403(list);
		HEX3Atmp_214869 = (NI32)(LOC2 - ((NI) 1));
		res_214872 = start;
		{
			while (1) {
				if (!(res_214872 <= HEX3Atmp_214869)) goto LA4;
				i_214854 = res_214872;
				{
					if (!((*(*list).kindU.S6.Sons->data[i_214854]).Kind == ((NU8) 3))) goto LA7;
					result = (*(*list).kindU.S6.Sons->data[i_214854]).kindU.S4.Sym;
					{
						if (!((*(*result).Name).Sup.Id == (*ident).Sup.Id)) goto LA11;
						goto BeforeRet;
					}
					LA11: ;
				}
				goto LA5;
				LA7: ;
				{
					internalerror_182424((*list).Info, ((NimStringDesc*) &TMP2736));
				}
				LA5: ;
				res_214872 += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, cmpStrings)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = ((NI) 0);
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(a == NIM_NIL)) goto LA7;
		result = ((NI) -1);
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(b == NIM_NIL)) goto LA11;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = strcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)));
	result = ((NI) (LOC13));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, levalue_214374)(tnode207813* a, tnode207813* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	switch ((*a).Kind) {
	case ((NU8) 5) ... ((NU8) 14):
	{
		{
			if (!((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 14))) goto LA4;
			result = ((*a).kindU.S1.Intval <= (*b).kindU.S1.Intval);
		}
		LA4: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			if (!((*b).Kind >= ((NU8) 16) && (*b).Kind <= ((NU8) 18))) goto LA9;
			result = ((*a).kindU.S2.Floatval <= (*b).kindU.S2.Floatval);
		}
		LA9: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*b).Kind >= ((NU8) 20) && (*b).Kind <= ((NU8) 22))) goto LA14;
			result = (cmpStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval) <= 0);
		}
		LA14: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(NU8, weaklevalue_214424)(tnode207813* a, tnode207813* b) {
	NU8 result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !(((*a).Kind >= ((NU8) 5) && (*a).Kind <= ((NU8) 22)));
		if (LOC3) goto LA4;
		LOC3 = !(((*b).Kind >= ((NU8) 5) && (*b).Kind <= ((NU8) 22)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NU8) 0);
	}
	goto LA1;
	LA5: ;
	{
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = levalue_214374(a, b);
			if (!LOC10) goto LA11;
			result = ((NU8) 2);
		}
		goto LA8;
		LA11: ;
		{
			result = ((NU8) 1);
		}
		LA8: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym207843*, nextidentiter_214156)(tidentiter214141* ti, tstrtable207817 tab) {
	tsym207843* result;
	NI h;
	NI start;
	result = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				if (!((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id)) goto LA5;
				goto LA1;
			}
			LA5: ;
			h = nexttry_214256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA9;
				result = NIM_NIL;
				goto LA1;
			}
			LA9: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_214256(h, (tab.Data->Sup.len-1));
	return result;
}

N_NIMCALL(tsym207843*, initidentiter_214147)(tidentiter214141* ti, tstrtable207817 tab, tident184021* s) {
	tsym207843* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentiter_214156(ti, tab);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tsym207843*, nextidentexcluding_219304)(tidentiter214141* ti, tstrtable207817 tab, intset204056 excluding) {
	tsym207843* result;
	NI h;
	NI start;
	result = 0;
	h = (NI)((*ti).H & (tab.Data->Sup.len-1));
	start = h;
	result = tab.Data->data[h];
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC7;
				LOC5 = 0;
				LOC5 = ((*(*result).Name).Sup.Id == (*(*ti).Name).Sup.Id);
				if (!(LOC5)) goto LA6;
				LOC7 = 0;
				LOC7 = contains_204829(excluding, (*result).Sup.Id);
				LOC5 = !(LOC7);
				LA6: ;
				if (!LOC5) goto LA8;
				goto LA1;
			}
			LA8: ;
			h = nexttry_214256(h, (tab.Data->Sup.len-1));
			{
				if (!(h == start)) goto LA12;
				result = NIM_NIL;
				goto LA1;
			}
			LA12: ;
			result = tab.Data->data[h];
		} LA2: ;
	} LA1: ;
	(*ti).H = nexttry_214256(h, (tab.Data->Sup.len-1));
	{
		NIM_BOOL LOC16;
		LOC16 = 0;
		LOC16 = !((result == NIM_NIL));
		if (!(LOC16)) goto LA17;
		LOC16 = contains_204829(excluding, (*result).Sup.Id);
		LA17: ;
		if (!LOC16) goto LA18;
		result = NIM_NIL;
	}
	LA18: ;
	return result;
}

N_NIMCALL(tsym207843*, firstidentexcluding_219354)(tidentiter214141* ti, tstrtable207817 tab, tident184021* s, intset204056 excluding) {
	tsym207843* result;
	result = 0;
	(*ti).H = (*s).H;
	unsureAsgnRef((void**) (&(*ti).Name), s);
	{
		if (!(tab.Counter == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = nextidentexcluding_219304(ti, tab, excluding);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, idnodetablerawget_220496)(tidnodetable207867 t, tidobj184015* key) {
	NI result;
	NI h;
{	result = 0;
	h = 0;
	h = (NI)((*key).Id & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				if (!((*t.Data->data[h].Key).Id == (*key).Id)) goto LA5;
				result = h;
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_214256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tnode207813*, idnodetableget_214212)(tidnodetable207867 t, tidobj184015* key) {
	tnode207813* result;
	NI index;
	result = 0;
	index = 0;
	index = idnodetablerawget_220496(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_NIL;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, idnodetablerawinsert_220560)(tidnodepairseq207865** data, tidobj184015* key, tnode207813* val) {
	NI h;
	h = 0;
	h = (NI)((*key).Id & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_214256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h].Key), key);
	asgnRefNoCycle((void**) (&(*data)->data[h].Val), val);
}

N_NIMCALL(void, idnodetableput_214219)(tidnodetable207867* t, tidobj184015* key, tnode207813* val) {
	NI index;
	index = idnodetablerawget_220496((*t), key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).Data->data[index].Val), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tidnodepairseq207865* n;
			tidnodepairseq207865* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_214249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = 0;
			n = (tidnodepairseq207865*) newSeq((&NTI207865), (NI32)((*t).Data->Sup.len * ((NI) 2)));
			{
				NI i_221040;
				NI HEX3Atmp_221076;
				NI res_221079;
				i_221040 = 0;
				HEX3Atmp_221076 = 0;
				HEX3Atmp_221076 = ((*t).Data->Sup.len-1);
				res_221079 = ((NI) 0);
				{
					while (1) {
						if (!(res_221079 <= HEX3Atmp_221076)) goto LA13;
						i_221040 = res_221079;
						{
							if (!!(((*t).Data->data[i_221040].Key == NIM_NIL))) goto LA16;
							idnodetablerawinsert_220560((&n), (*t).Data->data[i_221040].Key, (*t).Data->data[i_221040].Val);
						}
						LA16: ;
						res_221079 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		idnodetablerawinsert_220560((&(*t).Data), key, val);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(tsym207843*, lookupinrecord_214236)(tnode207813* n, tident184021* field) {
	tsym207843* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 138):
	{
		{
			NI i_214472;
			NI HEX3Atmp_214540;
			NI LOC3;
			NI res_214543;
			i_214472 = 0;
			HEX3Atmp_214540 = 0;
			LOC3 = 0;
			LOC3 = sonslen_210403(n);
			HEX3Atmp_214540 = (NI32)(LOC3 - ((NI) 1));
			res_214543 = ((NI) 0);
			{
				while (1) {
					if (!(res_214543 <= HEX3Atmp_214540)) goto LA5;
					i_214472 = res_214543;
					result = lookupinrecord_214236((*n).kindU.S6.Sons->data[i_214472], field);
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_214543 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[((NI) 0)]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3275));
		}
		LA13: ;
		result = lookupinrecord_214236((*n).kindU.S6.Sons->data[((NI) 0)], field);
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_214521;
			NI HEX3Atmp_214548;
			NI LOC20;
			NI res_214551;
			i_214521 = 0;
			HEX3Atmp_214548 = 0;
			LOC20 = 0;
			LOC20 = sonslen_210403(n);
			HEX3Atmp_214548 = (NI32)(LOC20 - ((NI) 1));
			res_214551 = ((NI) 1);
			{
				while (1) {
					if (!(res_214551 <= HEX3Atmp_214548)) goto LA22;
					i_214521 = res_214551;
					switch ((*(*n).kindU.S6.Sons->data[i_214521]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode207813* LOC24;
						LOC24 = 0;
						LOC24 = lastson_210431((*n).kindU.S6.Sons->data[i_214521]);
						result = lookupinrecord_214236(LOC24, field);
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3276));
					}
					break;
					}
					res_214551 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!((*(*(*n).kindU.S4.Sym).Name).Sup.Id == (*field).Sup.Id)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
		internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3277));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tnode207813*, skipconvandclosure_214305)(tnode207813* n) {
	tnode207813* result;
	result = 0;
	result = n;
	{
		while (1) {
			switch ((*result).Kind) {
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 70):
			case ((NU8) 68):
			case ((NU8) 69):
			case ((NU8) 155):
			{
				result = (*result).kindU.S6.Sons->data[((NI) 0)];
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				result = (*result).kindU.S6.Sons->data[((NI) 1)];
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	return result;
}

N_NIMCALL(void, symtabreplaceraw_218232)(tsymseq207815** data, tsym207843* prevsym, tsym207843* newsym) {
	NI h;
{	h = (NI)((*(*prevsym).Name).H & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*data)->data[h] == prevsym)) goto LA5;
				asgnRefNoCycle((void**) (&(*data)->data[h]), newsym);
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_214256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	}BeforeRet: ;
}

N_NIMCALL(void, symtabreplace_218615)(tstrtable207817* t, tsym207843* prevsym, tsym207843* newsym) {
	symtabreplaceraw_218232((&(*t).Data), prevsym, newsym);
}

N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_214205)(tidtable207861 t, tidobj184015* key) {
	NIM_BOOL result;
	NI index;
	result = 0;
	index = idtablerawget_219506(t, (*key).Id);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (t.Data->data[index].Key == key);
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_astalgoInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_astalgoDatInit)(void) {
static TNimNode* TMP823[2];
static TNimNode* TMP824[2];
static TNimNode TMP793[6];
NTI214274.size = sizeof(tiitable214274);
NTI214274.kind = 18;
NTI214274.base = 0;
NTI214274.flags = 2;
TMP823[0] = &TMP793[1];
TMP793[1].kind = 1;
TMP793[1].offset = offsetof(tiitable214274, Counter);
TMP793[1].typ = (&NTI108);
TMP793[1].name = "counter";
TMP823[1] = &TMP793[2];
NTI214270.size = sizeof(tiipair214270);
NTI214270.kind = 18;
NTI214270.base = 0;
NTI214270.flags = 3;
TMP824[0] = &TMP793[4];
TMP793[4].kind = 1;
TMP793[4].offset = offsetof(tiipair214270, Key);
TMP793[4].typ = (&NTI108);
TMP793[4].name = "key";
TMP824[1] = &TMP793[5];
TMP793[5].kind = 1;
TMP793[5].offset = offsetof(tiipair214270, Val);
TMP793[5].typ = (&NTI108);
TMP793[5].name = "val";
TMP793[3].len = 2; TMP793[3].kind = 2; TMP793[3].sons = &TMP824[0];
NTI214270.node = &TMP793[3];
NTI214272.size = sizeof(tiipairseq214272*);
NTI214272.kind = 24;
NTI214272.base = (&NTI214270);
NTI214272.flags = 2;
NTI214272.marker = TMP825;
TMP793[2].kind = 1;
TMP793[2].offset = offsetof(tiitable214274, Data);
TMP793[2].typ = (&NTI214272);
TMP793[2].name = "data";
TMP793[0].len = 2; TMP793[0].kind = 2; TMP793[0].sons = &TMP823[0];
NTI214274.node = &TMP793[0];
}

