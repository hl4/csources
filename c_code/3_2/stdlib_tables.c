/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct table180376 table180376;
typedef struct keyvaluepairseq180379 keyvaluepairseq180379;
typedef struct keyvaluepair180382 keyvaluepair180382;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct table326052 table326052;
typedef struct keyvaluepairseq326055 keyvaluepairseq326055;
typedef struct keyvaluepair326058 keyvaluepair326058;
typedef struct table327411 table327411;
typedef struct keyvaluepairseq327414 keyvaluepairseq327414;
typedef struct keyvaluepair327417 keyvaluepair327417;
typedef struct tindexentry327398 tindexentry327398;
typedef struct TY329711 TY329711;
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair180382 {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct  table180376  {
keyvaluepairseq180379* Data;
NI Counter;
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
struct keyvaluepair326058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table326052  {
keyvaluepairseq326055* Data;
NI Counter;
};
struct  tindexentry327398  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
struct keyvaluepair327417 {
NI Field0;
tindexentry327398 Field1;
TY329711* Field2;
};
struct  table327411  {
keyvaluepairseq327414* Data;
NI Counter;
};
typedef NI TY27220[8];
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
struct keyvaluepairseq180379 {
  TGenericSeq Sup;
  keyvaluepair180382 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq326055 {
  TGenericSeq Sup;
  keyvaluepair326058 data[SEQ_DECL_SIZE];
};
struct TY329711 {
  TGenericSeq Sup;
  tindexentry327398 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq327414 {
  TGenericSeq Sup;
  keyvaluepair327417 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP129)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawget_180558)(table180376 t, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isfilled_171211)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_171417)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_171313)(NI length, NI counter);
N_NIMCALL(void, enlarge_180675)(table180376* t);
static N_INLINE(NI, rawgetknownhc_180729)(table180376 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_180755)(table180376* t, keyvaluepairseq180379** data, NimStringDesc* key, NI32 val, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
static N_INLINE(NI, rawget_327086)(table326052 t, NimStringDesc* key, NI* hc);
N_NIMCALL(void, enlarge_327185)(table326052* t);
N_NIMCALL(void, TMP2471)(void* p, NI op);
static N_INLINE(NI, rawgetknownhc_327239)(table326052 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_327265)(table326052* t, keyvaluepairseq326055** data, NimStringDesc* key, NI val, NI hc, NI h);
N_NIMCALL(void, TMP4871)(void* p, NI op);
static N_INLINE(NI, rawget_329296)(table327411 t, tindexentry327398* key, NI* hc);
N_NIMCALL(NI, hash_327443)(tindexentry327398* x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_329311)(tindexentry327398* x, tindexentry327398* y);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_80604, TNimType* mt);
N_NIMCALL(void, enlarge_330109)(table327411* t);
static N_INLINE(NI, rawgetknownhc_330163)(table327411 t, tindexentry327398* key, NI hc);
N_NIMCALL(void, rawinsert_330198)(table327411* t, keyvaluepairseq327414** data, tindexentry327398* key, TY329711* val, NI hc, NI h);
TNimType NTI180382; /* KeyValuePair */
extern TNimType NTI128021; /* THash */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI180379; /* KeyValuePairSeq */
TNimType NTI180376; /* Table */
extern TNimType NTI108; /* int */
extern tgcheap48016 gch_48044;
TNimType NTI326058; /* KeyValuePair */
TNimType NTI326055; /* KeyValuePairSeq */
TNimType NTI326052; /* Table */
TNimType NTI327417; /* KeyValuePair */
extern TNimType NTI327398; /* TIndexEntry */
extern TNimType NTI329711; /* seq[TIndexEntry] */
TNimType NTI327414; /* KeyValuePairSeq */
N_NIMCALL(void, TMP129)(void* p, NI op) {
	keyvaluepairseq180379* a;
	NI LOC1;
	a = (keyvaluepairseq180379*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_180368)(NI initialsize, table180376* Result) {
	(*Result).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq180379*) newSeq((&NTI180379), initialsize));
}

static N_INLINE(NIM_BOOL, isfilled_171211)(NI hcode) {
	NIM_BOOL result;
	result = 0;
	result = !((hcode == ((NI) 0)));
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

static N_INLINE(NI, nexttry_171417)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)(h + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NI, rawget_180558)(table180376 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_128839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.Data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.Data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA6: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_180546)(table180376 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_180558(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_180589)(table180376 t, NimStringDesc* key) {
	NI32 result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_180558(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_171313)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI64)(length * ((NI) 2)) < (NI64)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI64)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, rawgetknownhc_180729)(table180376 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.Data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.Data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(tcell46147*, usrtocell_49646)(void* usr) {
	tcell46147* result;
	result = 0;
	result = ((tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(tcell46147* c) {
	addzct_49617((&gch_48044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(void, rawinsert_180755)(table180376* t, keyvaluepairseq180379** data, NimStringDesc* key, NI32 val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_180675)(table180376* t) {
	keyvaluepairseq180379* n;
	keyvaluepairseq180379* LOC1;
	n = 0;
	n = (keyvaluepairseq180379*) newSeq((&NTI180379), (NI64)((*t).Data->Sup.len * ((NI) 2)));
	LOC1 = 0;
	LOC1 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC1;
	{
		NI i_180727;
		NI HEX3Atmp_180781;
		NI res_180784;
		i_180727 = 0;
		HEX3Atmp_180781 = 0;
		HEX3Atmp_180781 = (n->Sup.len-1);
		res_180784 = ((NI) 0);
		{
			while (1) {
				if (!(res_180784 <= HEX3Atmp_180781)) goto LA4;
				i_180727 = res_180784;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_171211(n->data[i_180727].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_180729((*t), n->data[i_180727].Field1, n->data[i_180727].Field0);
					j = (NI64)(((NI) -1) - LOC10);
					rawinsert_180755(t, (&(*t).Data), n->data[i_180727].Field1, n->data[i_180727].Field2, n->data[i_180727].Field0, j);
				}
				LA8: ;
				res_180784 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_180638)(table180376* t, NimStringDesc* key, NI32 val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_180558((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).Data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171313((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			enlarge_180675(t);
			index = rawgetknownhc_180729((*t), key, hc);
		}
		LA9: ;
		index = (NI64)(((NI) -1) - index);
		rawinsert_180755(t, (&(*t).Data), key, val, hc, index);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(NI, rawget_327086)(table326052 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_128839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.Data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.Data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA6: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_327074)(table326052 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_327086(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2471)(void* p, NI op) {
	keyvaluepairseq326055* a;
	NI LOC1;
	a = (keyvaluepairseq326055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(NI, rawgetknownhc_327239)(table326052 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.Data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.Data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_327265)(table326052* t, keyvaluepairseq326055** data, NimStringDesc* key, NI val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_327185)(table326052* t) {
	keyvaluepairseq326055* n;
	keyvaluepairseq326055* LOC1;
	n = 0;
	n = (keyvaluepairseq326055*) newSeq((&NTI326055), (NI64)((*t).Data->Sup.len * ((NI) 2)));
	LOC1 = 0;
	LOC1 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC1;
	{
		NI i_327237;
		NI HEX3Atmp_327291;
		NI res_327294;
		i_327237 = 0;
		HEX3Atmp_327291 = 0;
		HEX3Atmp_327291 = (n->Sup.len-1);
		res_327294 = ((NI) 0);
		{
			while (1) {
				if (!(res_327294 <= HEX3Atmp_327291)) goto LA4;
				i_327237 = res_327294;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_171211(n->data[i_327237].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_327239((*t), n->data[i_327237].Field1, n->data[i_327237].Field0);
					j = (NI64)(((NI) -1) - LOC10);
					rawinsert_327265(t, (&(*t).Data), n->data[i_327237].Field1, n->data[i_327237].Field2, n->data[i_327237].Field0, j);
				}
				LA8: ;
				res_327294 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_327148)(table326052* t, NimStringDesc* key, NI val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_327086((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).Data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171313((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			enlarge_327185(t);
			index = rawgetknownhc_327239((*t), key, hc);
		}
		LA9: ;
		index = (NI64)(((NI) -1) - index);
		rawinsert_327265(t, (&(*t).Data), key, val, hc, index);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_327117)(table326052 t, NimStringDesc* key) {
	NI result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_327086(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.Data->data[index].Field2;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, inittable_326118)(NI initialsize, table326052* Result) {
	(*Result).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq326055*) newSeq((&NTI326055), initialsize));
}
N_NIMCALL(void, TMP4871)(void* p, NI op) {
	keyvaluepairseq327414* a;
	NI LOC1;
	a = (keyvaluepairseq327414*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_329735)(NI initialsize, table327411* Result) {
	(*Result).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).Data), (keyvaluepairseq327414*) newSeq((&NTI327414), initialsize));
}

N_NIMCALL(NI, len_330060)(table327411 t) {
	NI result;
	result = 0;
	result = t.Counter;
	return result;
}

static N_INLINE(NI, rawget_329296)(table327411 t, tindexentry327398* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_327443(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.Data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = HEX3DHEX3D_329311((&t.Data->data[h].Field1), key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA6: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, rawgetknownhc_330163)(table327411 t, tindexentry327398* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.Data->Sup.len-1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_171211(t.Data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.Data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = HEX3DHEX3D_329311((&t.Data->data[h].Field1), key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_171417(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = (NI64)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_330198)(table327411* t, keyvaluepairseq327414** data, tindexentry327398* key, TY329711* val, NI hc, NI h) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1.Keyword; (*data)->data[h].Field1.Keyword = copyStringRC1((*key).Keyword);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = (*data)->data[h].Field1.Link; (*data)->data[h].Field1.Link = copyStringRC1((*key).Link);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1.Linktitle; (*data)->data[h].Field1.Linktitle = copyStringRC1((*key).Linktitle);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field1.Linkdesc; (*data)->data[h].Field1.Linkdesc = copyStringRC1((*key).Linkdesc);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	genericSeqAssign((&(*data)->data[h].Field2), val, (&NTI329711));
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_330109)(table327411* t) {
	keyvaluepairseq327414* n;
	keyvaluepairseq327414* LOC1;
	n = 0;
	n = (keyvaluepairseq327414*) newSeq((&NTI327414), (NI64)((*t).Data->Sup.len * ((NI) 2)));
	LOC1 = 0;
	LOC1 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC1;
	{
		NI i_330161;
		NI HEX3Atmp_330224;
		NI res_330227;
		i_330161 = 0;
		HEX3Atmp_330224 = 0;
		HEX3Atmp_330224 = (n->Sup.len-1);
		res_330227 = ((NI) 0);
		{
			while (1) {
				if (!(res_330227 <= HEX3Atmp_330224)) goto LA4;
				i_330161 = res_330227;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_171211(n->data[i_330161].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_330163((*t), (&n->data[i_330161].Field1), n->data[i_330161].Field0);
					j = (NI64)(((NI) -1) - LOC10);
					rawinsert_330198(t, (&(*t).Data), (&n->data[i_330161].Field1), n->data[i_330161].Field2, n->data[i_330161].Field0, j);
				}
				LA8: ;
				res_330227 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_330072)(table327411* t, tindexentry327398* key, TY329711* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_329296((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&(*t).Data->data[index].Field2), val, (&NTI329711));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_171313((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			enlarge_330109(t);
			index = rawgetknownhc_330163((*t), key, hc);
		}
		LA9: ;
		index = (NI64)(((NI) -1) - index);
		rawinsert_330198(t, (&(*t).Data), key, val, hc, index);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TY329711*, HEX5BHEX5D_329284)(table327411 t, tindexentry327398* key) {
	TY329711* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_329296(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&result), t.Data->data[index].Field2, (&NTI329711));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP128[3];
static TNimNode* TMP132[2];
static TNimNode* TMP2470[3];
static TNimNode* TMP4710[2];
static TNimNode* TMP4868[3];
static TNimNode TMP53[18];
NTI180382.size = sizeof(keyvaluepair180382);
NTI180382.kind = 18;
NTI180382.base = 0;
NTI180382.flags = 2;
TMP128[0] = &TMP53[1];
TMP53[1].kind = 1;
TMP53[1].offset = offsetof(keyvaluepair180382, Field0);
TMP53[1].typ = (&NTI128021);
TMP53[1].name = "Field0";
TMP128[1] = &TMP53[2];
TMP53[2].kind = 1;
TMP53[2].offset = offsetof(keyvaluepair180382, Field1);
TMP53[2].typ = (&NTI149);
TMP53[2].name = "Field1";
TMP128[2] = &TMP53[3];
TMP53[3].kind = 1;
TMP53[3].offset = offsetof(keyvaluepair180382, Field2);
TMP53[3].typ = (&NTI114);
TMP53[3].name = "Field2";
TMP53[0].len = 3; TMP53[0].kind = 2; TMP53[0].sons = &TMP128[0];
NTI180382.node = &TMP53[0];
NTI180379.size = sizeof(keyvaluepairseq180379*);
NTI180379.kind = 24;
NTI180379.base = (&NTI180382);
NTI180379.flags = 2;
NTI180379.marker = TMP129;
NTI180376.size = sizeof(table180376);
NTI180376.kind = 18;
NTI180376.base = 0;
NTI180376.flags = 2;
TMP132[0] = &TMP53[5];
TMP53[5].kind = 1;
TMP53[5].offset = offsetof(table180376, Data);
TMP53[5].typ = (&NTI180379);
TMP53[5].name = "data";
TMP132[1] = &TMP53[6];
TMP53[6].kind = 1;
TMP53[6].offset = offsetof(table180376, Counter);
TMP53[6].typ = (&NTI108);
TMP53[6].name = "counter";
TMP53[4].len = 2; TMP53[4].kind = 2; TMP53[4].sons = &TMP132[0];
NTI180376.node = &TMP53[4];
NTI326058.size = sizeof(keyvaluepair326058);
NTI326058.kind = 18;
NTI326058.base = 0;
NTI326058.flags = 2;
TMP2470[0] = &TMP53[8];
TMP53[8].kind = 1;
TMP53[8].offset = offsetof(keyvaluepair326058, Field0);
TMP53[8].typ = (&NTI128021);
TMP53[8].name = "Field0";
TMP2470[1] = &TMP53[9];
TMP53[9].kind = 1;
TMP53[9].offset = offsetof(keyvaluepair326058, Field1);
TMP53[9].typ = (&NTI149);
TMP53[9].name = "Field1";
TMP2470[2] = &TMP53[10];
TMP53[10].kind = 1;
TMP53[10].offset = offsetof(keyvaluepair326058, Field2);
TMP53[10].typ = (&NTI108);
TMP53[10].name = "Field2";
TMP53[7].len = 3; TMP53[7].kind = 2; TMP53[7].sons = &TMP2470[0];
NTI326058.node = &TMP53[7];
NTI326055.size = sizeof(keyvaluepairseq326055*);
NTI326055.kind = 24;
NTI326055.base = (&NTI326058);
NTI326055.flags = 2;
NTI326055.marker = TMP2471;
NTI326052.size = sizeof(table326052);
NTI326052.kind = 18;
NTI326052.base = 0;
NTI326052.flags = 2;
TMP4710[0] = &TMP53[12];
TMP53[12].kind = 1;
TMP53[12].offset = offsetof(table326052, Data);
TMP53[12].typ = (&NTI326055);
TMP53[12].name = "data";
TMP4710[1] = &TMP53[13];
TMP53[13].kind = 1;
TMP53[13].offset = offsetof(table326052, Counter);
TMP53[13].typ = (&NTI108);
TMP53[13].name = "counter";
TMP53[11].len = 2; TMP53[11].kind = 2; TMP53[11].sons = &TMP4710[0];
NTI326052.node = &TMP53[11];
NTI327417.size = sizeof(keyvaluepair327417);
NTI327417.kind = 18;
NTI327417.base = 0;
NTI327417.flags = 2;
TMP4868[0] = &TMP53[15];
TMP53[15].kind = 1;
TMP53[15].offset = offsetof(keyvaluepair327417, Field0);
TMP53[15].typ = (&NTI128021);
TMP53[15].name = "Field0";
TMP4868[1] = &TMP53[16];
TMP53[16].kind = 1;
TMP53[16].offset = offsetof(keyvaluepair327417, Field1);
TMP53[16].typ = (&NTI327398);
TMP53[16].name = "Field1";
TMP4868[2] = &TMP53[17];
TMP53[17].kind = 1;
TMP53[17].offset = offsetof(keyvaluepair327417, Field2);
TMP53[17].typ = (&NTI329711);
TMP53[17].name = "Field2";
TMP53[14].len = 3; TMP53[14].kind = 2; TMP53[14].sons = &TMP4868[0];
NTI327417.node = &TMP53[14];
NTI327414.size = sizeof(keyvaluepairseq327414*);
NTI327414.kind = 24;
NTI327414.base = (&NTI327417);
NTI327414.flags = 2;
NTI327414.marker = TMP4871;
}

