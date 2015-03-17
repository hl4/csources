/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct valueerror3449 valueerror3449;
typedef struct Exception Exception;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  valueerror3449  {
  Exception Sup;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP42)(void* p, NI op);
N_NIMCALL(void, TMP46)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_131418)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_131177)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_128978)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_128887)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_131188)(stringtableobj131012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_131407)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_131200)(NI length, NI counter);
N_NIMCALL(void, enlarge_131510)(stringtableobj131012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_131488)(stringtableobj131012* t, keyvaluepairseq131010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, getvalue_131630)(stringtableobj131012* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_120644)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, raiseformatexception_131610)(NimStringDesc* s);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1367, "", 0);
STRING_LITERAL(TMP1925, "format string: key not found: ", 30);
extern TNimType NTI3411; /* RootObj */
TNimType NTI131012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI131008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI131010; /* KeyValuePairSeq */
TNimType NTI131006; /* StringTableMode */
TNimType NTI131014; /* StringTableRef */
extern tgcheap47816 gch_47844;
extern TNimType NTI22001; /* ref ValueError */
extern TNimType NTI3449; /* ValueError */
N_NIMCALL(void, TMP42)(void* p, NI op) {
	keyvaluepairseq131010* a;
	NI LOC1;
	a = (keyvaluepairseq131010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP46)(void* p, NI op) {
	stringtableobj131012* a;
	a = (stringtableobj131012*)p;
	nimGCvisit((void*)(*a).Data, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45947* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(stringtableobj131012*, nstnewStringTable)(NU8 mode) {
	stringtableobj131012* result;
	result = 0;
	result = (stringtableobj131012*) newObj((&NTI131014), sizeof(stringtableobj131012));
	(*result).Sup.m_type = (&NTI131012);
	(*result).Mode = mode;
	(*result).Counter = ((NI) 0);
	if ((*result).Data) nimGCunrefNoCycle((*result).Data);
	(*result).Data = (keyvaluepairseq131010*) newSeqRC1((&NTI131010), ((NI) 64));
	return result;
}

N_NIMCALL(NI, myhash_131177)(stringtableobj131012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).Mode) {
	case ((NU8) 0):
	{
		result = hash_128839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_128978(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_128887(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_131188)(stringtableobj131012* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	switch ((*t).Mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = cmp_4717(a, b);
		result = (LOC2 == ((NI) 0));
	}
	break;
	case ((NU8) 1):
	{
		NI LOC4;
		LOC4 = 0;
		LOC4 = nsuCmpIgnoreCase(a, b);
		result = (LOC4 == ((NI) 0));
	}
	break;
	case ((NU8) 2):
	{
		NI LOC6;
		LOC6 = 0;
		LOC6 = nsuCmpIgnoreStyle(a, b);
		result = (LOC6 == ((NI) 0));
	}
	break;
	}
	return result;
}

static N_INLINE(NI, nexttry_131407)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI32)((NI32)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_131418)(stringtableobj131012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = myhash_131177(t, key);
	h = (NI)(LOC1 & ((*t).Data->Sup.len-1));
	{
		while (1) {
			if (!!((*t).Data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_131188(t, (*t).Data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_131407(h, ((*t).Data->Sup.len-1));
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj131012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_131418(t, key);
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj131012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_131418(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = copyString((*t).Data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1367));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_131200)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_131488)(stringtableobj131012* t, keyvaluepairseq131010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_131177(t, key);
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_131407(h, ((*data)->Sup.len-1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
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

N_NIMCALL(void, enlarge_131510)(stringtableobj131012* t) {
	keyvaluepairseq131010* n;
	keyvaluepairseq131010* LOC8;
	n = 0;
	n = (keyvaluepairseq131010*) newSeq((&NTI131010), (NI32)((*t).Data->Sup.len * ((NI) 2)));
	{
		NI i_131544;
		NI HEX3Atmp_131558;
		NI res_131561;
		i_131544 = 0;
		HEX3Atmp_131558 = 0;
		HEX3Atmp_131558 = ((*t).Data->Sup.len-1);
		res_131561 = ((NI) 0);
		{
			while (1) {
				if (!(res_131561 <= HEX3Atmp_131558)) goto LA3;
				i_131544 = res_131561;
				{
					if (!!((*t).Data->data[i_131544].Field0 == 0)) goto LA6;
					rawinsert_131488(t, (&n), (*t).Data->data[i_131544].Field0, (*t).Data->data[i_131544].Field1);
				}
				LA6: ;
				res_131561 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	asgnRefNoCycle((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(stringtableobj131012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_131418(t, key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index)) goto LA3;
		LOC5 = 0;
		LOC5 = (*t).Data->data[index].Field1; (*t).Data->data[index].Field1 = copyStringRC1(val);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = 0;
			LOC9 = mustrehash_131200((*t).Data->Sup.len, (*t).Counter);
			if (!LOC9) goto LA10;
			enlarge_131510(t);
		}
		LA10: ;
		rawinsert_131488(t, (&(*t).Data), key, val);
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, raiseformatexception_131610)(NimStringDesc* s) {
	valueerror3449* e;
	NimStringDesc* LOC1;
	e = 0;
	e = (valueerror3449*) newObj((&NTI22001), sizeof(valueerror3449));
	(*e).Sup.Sup.m_type = (&NTI3449);
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP1925));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	raiseException((Exception*)e, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_131630)(stringtableobj131012* t, NU8 flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsthasKey(t, key);
		if (!LOC3) goto LA4;
		result = nstGet(t, key);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags &(1<<((((NU8) 0))&7)))!=0)) goto LA8;
		result = getenv_120644(key);
	}
	goto LA6;
	LA8: ;
	{
		result = copyString(((NimStringDesc*) &TMP1367));
	}
	LA6: ;
	{
		if (!(result->Sup.len == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags &(1<<((((NU8) 2))&7)))!=0)) goto LA17;
			LOC19 = 0;
			LOC19 = rawNewString(key->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key);
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags &(1<<((((NU8) 1))&7)))!=0))) goto LA21;
			raiseformatexception_131610(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, stringtableobj131012* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1367));
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < f->Sup.len)) goto LA2;
			{
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5;
				switch (((NU8)(f->data[(NI32)(i + ((NI) 1))]))) {
				case 36:
				{
					result = addChar(result, 36);
					i += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					j = (NI32)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC11;
							LOC11 = 0;
							LOC11 = (j < f->Sup.len);
							if (!(LOC11)) goto LA12;
							LOC11 = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							j += ((NI) 1);
						} LA10: ;
					}
					LOC13 = 0;
					LOC13 = copyStrLast(f, (NI32)(i + ((NI) 2)), (NI32)(j - ((NI) 1)));
					LOC14 = 0;
					LOC14 = getvalue_131630(t, flags, LOC13);
					result = resizeString(result, LOC14->Sup.len + 0);
appendString(result, LOC14);
					i = (NI32)(j + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					j = (NI32)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC18;
							LOC18 = 0;
							LOC18 = (j < f->Sup.len);
							if (!(LOC18)) goto LA19;
							LOC18 = (((NU8)(f->data[j])) >= ((NU8)(97)) && ((NU8)(f->data[j])) <= ((NU8)(122)) || ((NU8)(f->data[j])) >= ((NU8)(65)) && ((NU8)(f->data[j])) <= ((NU8)(90)) || ((NU8)(f->data[j])) >= ((NU8)(48)) && ((NU8)(f->data[j])) <= ((NU8)(57)) || ((NU8)(f->data[j])) == ((NU8)(95)) || ((NU8)(f->data[j])) >= ((NU8)(128)) && ((NU8)(f->data[j])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							j += ((NI) 1);
						} LA17: ;
					}
					LOC20 = 0;
					LOC20 = copyStrLast(f, (NI32)(i + ((NI) 1)), (NI32)(j - ((NI) 1)));
					LOC21 = 0;
					LOC21 = getvalue_131630(t, flags, LOC20);
					result = resizeString(result, LOC21->Sup.len + 0);
appendString(result, LOC21);
					i = j;
				}
				break;
				default:
				{
					result = addChar(result, f->data[i]);
					i += ((NI) 1);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				result = addChar(result, f->data[i]);
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NI, nstlen)(stringtableobj131012* t) {
	NI result;
	result = 0;
	result = (*t).Counter;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP40[3];
static TNimNode* TMP41[2];
static TNimNode* TMP43[3];
NI TMP45;
static char* NIM_CONST TMP44[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP25[11];
NTI131012.size = sizeof(stringtableobj131012);
NTI131012.kind = 17;
NTI131012.base = (&NTI3411);
TMP40[0] = &TMP25[1];
TMP25[1].kind = 1;
TMP25[1].offset = offsetof(stringtableobj131012, Counter);
TMP25[1].typ = (&NTI108);
TMP25[1].name = "counter";
TMP40[1] = &TMP25[2];
NTI131008.size = sizeof(keyvaluepair131008);
NTI131008.kind = 18;
NTI131008.base = 0;
NTI131008.flags = 2;
TMP41[0] = &TMP25[4];
TMP25[4].kind = 1;
TMP25[4].offset = offsetof(keyvaluepair131008, Field0);
TMP25[4].typ = (&NTI149);
TMP25[4].name = "Field0";
TMP41[1] = &TMP25[5];
TMP25[5].kind = 1;
TMP25[5].offset = offsetof(keyvaluepair131008, Field1);
TMP25[5].typ = (&NTI149);
TMP25[5].name = "Field1";
TMP25[3].len = 2; TMP25[3].kind = 2; TMP25[3].sons = &TMP41[0];
NTI131008.node = &TMP25[3];
NTI131010.size = sizeof(keyvaluepairseq131010*);
NTI131010.kind = 24;
NTI131010.base = (&NTI131008);
NTI131010.flags = 2;
NTI131010.marker = TMP42;
TMP25[2].kind = 1;
TMP25[2].offset = offsetof(stringtableobj131012, Data);
TMP25[2].typ = (&NTI131010);
TMP25[2].name = "data";
TMP40[2] = &TMP25[6];
NTI131006.size = sizeof(NU8);
NTI131006.kind = 14;
NTI131006.base = 0;
NTI131006.flags = 3;
for (TMP45 = 0; TMP45 < 3; TMP45++) {
TMP25[TMP45+7].kind = 1;
TMP25[TMP45+7].offset = TMP45;
TMP25[TMP45+7].name = TMP44[TMP45];
TMP43[TMP45] = &TMP25[TMP45+7];
}
TMP25[10].len = 3; TMP25[10].kind = 2; TMP25[10].sons = &TMP43[0];
NTI131006.node = &TMP25[10];
TMP25[6].kind = 1;
TMP25[6].offset = offsetof(stringtableobj131012, Mode);
TMP25[6].typ = (&NTI131006);
TMP25[6].name = "mode";
TMP25[0].len = 3; TMP25[0].kind = 2; TMP25[0].sons = &TMP40[0];
NTI131012.node = &TMP25[0];
NTI131014.size = sizeof(stringtableobj131012*);
NTI131014.kind = 22;
NTI131014.base = (&NTI131012);
NTI131014.marker = TMP46;
}

