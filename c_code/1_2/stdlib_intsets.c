/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45946 tcell45946;
typedef struct tcellset45958 tcellset45958;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellseq45962 tcellseq45962;
typedef struct tpagedesc45954 tpagedesc45954;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  intset206056  {
NI Counter;
NI Max;
ttrunk206052* Head;
ttrunkseq206054* Data;
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
typedef NI TY27020[8];
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY27020 Bits;
};
struct  tcell45946  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45962  {
NI Len;
NI Cap;
tcell45946** D;
};
struct  tcellset45958  {
NI Counter;
NI Max;
tpagedesc45954* Head;
tpagedesc45954** Data;
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
tcellseq45962 Zct;
tcellseq45962 Decstack;
tcellset45958 Cycleroots;
tcellseq45962 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
};
struct  tpagedesc45954  {
tpagedesc45954* Next;
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
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP966)(void* p, NI op);
N_NIMCALL(void, TMP967)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(ttrunk206052*, intsetget_206218)(intset206056* t, NI key);
static N_INLINE(NI, nexttry_206207)(NI h, NI maxhash);
N_NIMCALL(void, incl_206856)(intset206056* s, NI key);
N_NIMCALL(ttrunk206052*, intsetput_206689)(intset206056* t, NI key);
static N_INLINE(NIM_BOOL, mustrehash_206073)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_206614)(intset206056* t);
N_NIMCALL(void, intsetrawinsert_206249)(intset206056* t, ttrunkseq206054** data, ttrunk206052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45946* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45946* c);
N_NOINLINE(void, incl_46667)(tcellset45958* s, tcell45946* cell);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, decref_51404)(tcell45946* c);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
TNimType NTI206056; /* IntSet */
extern TNimType NTI108; /* int */
TNimType NTI206052; /* TTrunk */
extern TNimType NTI27020; /* array[0..7, int] */
TNimType NTI206050; /* PTrunk */
TNimType NTI206054; /* TTrunkSeq */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP966)(void* p, NI op) {
	ttrunk206052* a;
	NI LOC1;
	a = (ttrunk206052*)p;
	nimGCvisit((void*)(*a).Next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP967)(void* p, NI op) {
	ttrunkseq206054* a;
	NI LOC1;
	a = (ttrunkseq206054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_206927)(intset206056* Result) {
	unsureAsgnRef((void**) (&(*Result).Data), (ttrunkseq206054*) newSeq((&NTI206054), ((NI) 8)));
	(*Result).Max = ((NI) 7);
	(*Result).Counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).Head), NIM_NIL);
}

static N_INLINE(NI, nexttry_206207)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(ttrunk206052*, intsetget_206218)(intset206056* t, NI key) {
	ttrunk206052* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_206207(h, (*t).Max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_206073)(NI length, NI counter) {
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

static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45946* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50223)(tcell45946* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & ((NI) -4)) | ((NI) 3));
		incl_46667((&gch_47844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51822)(tcell45946* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50223(c);
	}
	LA4: ;
}

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45946))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45946* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, decref_51404)(tcell45946* c) {
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50223(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45946* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49446(src);
		incref_51822(LOC5);
	}
	LA3: ;
	{
		tcell45946* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49446((*dest));
		decref_51404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_206249)(intset206056* t, ttrunkseq206054** data, ttrunk206052* desc) {
	NI h;
	h = (NI)((*desc).Key & (*t).Max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_206207(h, (*t).Max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_206614)(intset206056* t) {
	ttrunkseq206054* n;
	NI oldmax;
	ttrunkseq206054* LOC8;
	n = 0;
	oldmax = (*t).Max;
	(*t).Max = (NI64)((NI64)((NI64)((*t).Max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (ttrunkseq206054*) newSeq((&NTI206054), (NI64)((*t).Max + ((NI) 1)));
	{
		NI i_206642;
		NI res_206670;
		i_206642 = 0;
		res_206670 = ((NI) 0);
		{
			while (1) {
				if (!(res_206670 <= oldmax)) goto LA3;
				i_206642 = res_206670;
				{
					if (!!(((*t).Data->data[i_206642] == NIM_NIL))) goto LA6;
					intsetrawinsert_206249((&(*t)), (&n), (*t).Data->data[i_206642]);
				}
				LA6: ;
				res_206670 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).Data;
	unsureAsgnRef((void**) (&(*t).Data), n);
	n = LOC8;
}

N_NIMCALL(ttrunk206052*, intsetput_206689)(intset206056* t, NI key) {
	ttrunk206052* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).Data->data[h]).Key == key)) goto LA5;
				result = (*t).Data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_206207(h, (*t).Max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_206073((NI64)((*t).Max + ((NI) 1)), (*t).Counter);
		if (!LOC9) goto LA10;
		intsetenlarge_206614(t);
	}
	LA10: ;
	(*t).Counter += ((NI) 1);
	h = (NI)(key & (*t).Max);
	{
		while (1) {
			if (!!(((*t).Data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_206207(h, (*t).Max);
		} LA13: ;
	}
	result = (ttrunk206052*) newObj((&NTI206050), sizeof(ttrunk206052));
	asgnRef((void**) (&(*result).Next), (*t).Head);
	(*result).Key = key;
	unsureAsgnRef((void**) (&(*t).Head), result);
	asgnRef((void**) (&(*t).Data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_206856)(intset206056* s, NI key) {
	ttrunk206052* t;
	NI u;
	t = intsetput_206689(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(NIM_BOOL, containsorincl_206898)(intset206056* s, NI key) {
	NIM_BOOL result;
	ttrunk206052* t;
	result = 0;
	t = intsetget_206218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_206856(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_206829)(intset206056* s, NI key) {
	NIM_BOOL result;
	ttrunk206052* t;
	result = 0;
	t = intsetget_206218(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, excl_206871)(intset206056* s, NI key) {
	ttrunk206052* t;
	t = intsetget_206218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).Bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3: ;
}

N_NIMCALL(void, assign_206946)(intset206056* dest, intset206056* src) {
	ttrunk206052* it;
	(*dest).Counter = (*src).Counter;
	(*dest).Max = (*src).Max;
	unsureAsgnRef((void**) (&(*dest).Data), (ttrunkseq206054*) newSeq((&NTI206054), (*src).Data->Sup.len));
	it = (*src).Head;
	{
		while (1) {
			NI h;
			ttrunk206052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).Key & (*dest).Max);
			{
				while (1) {
					if (!!(((*dest).Data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_206207(h, (*dest).Max);
				} LA4: ;
			}
			n = 0;
			n = (ttrunk206052*) newObj((&NTI206050), sizeof(ttrunk206052));
			asgnRef((void**) (&(*n).Next), (*dest).Head);
			(*n).Key = (*it).Key;
			memcpy((void*)(*n).Bits, (NIM_CONST void*)(*it).Bits, sizeof((*n).Bits));
			unsureAsgnRef((void**) (&(*dest).Head), n);
			asgnRef((void**) (&(*dest).Data->data[h]), n);
			it = (*it).Next;
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void) {
static TNimNode* TMP964[4];
static TNimNode* TMP965[3];
static TNimNode TMP725[9];
NTI206056.size = sizeof(intset206056);
NTI206056.kind = 18;
NTI206056.base = 0;
NTI206056.flags = 2;
TMP964[0] = &TMP725[1];
TMP725[1].kind = 1;
TMP725[1].offset = offsetof(intset206056, Counter);
TMP725[1].typ = (&NTI108);
TMP725[1].name = "counter";
TMP964[1] = &TMP725[2];
TMP725[2].kind = 1;
TMP725[2].offset = offsetof(intset206056, Max);
TMP725[2].typ = (&NTI108);
TMP725[2].name = "max";
TMP964[2] = &TMP725[3];
NTI206052.size = sizeof(ttrunk206052);
NTI206052.kind = 18;
NTI206052.base = 0;
TMP965[0] = &TMP725[5];
TMP725[5].kind = 1;
TMP725[5].offset = offsetof(ttrunk206052, Next);
TMP725[5].typ = (&NTI206050);
TMP725[5].name = "next";
TMP965[1] = &TMP725[6];
TMP725[6].kind = 1;
TMP725[6].offset = offsetof(ttrunk206052, Key);
TMP725[6].typ = (&NTI108);
TMP725[6].name = "key";
TMP965[2] = &TMP725[7];
TMP725[7].kind = 1;
TMP725[7].offset = offsetof(ttrunk206052, Bits);
TMP725[7].typ = (&NTI27020);
TMP725[7].name = "bits";
TMP725[4].len = 3; TMP725[4].kind = 2; TMP725[4].sons = &TMP965[0];
NTI206052.node = &TMP725[4];
NTI206050.size = sizeof(ttrunk206052*);
NTI206050.kind = 22;
NTI206050.base = (&NTI206052);
NTI206050.marker = TMP966;
TMP725[3].kind = 1;
TMP725[3].offset = offsetof(intset206056, Head);
TMP725[3].typ = (&NTI206050);
TMP725[3].name = "head";
TMP964[3] = &TMP725[8];
NTI206054.size = sizeof(ttrunkseq206054*);
NTI206054.kind = 24;
NTI206054.base = (&NTI206050);
NTI206054.flags = 2;
NTI206054.marker = TMP967;
TMP725[8].kind = 1;
TMP725[8].offset = offsetof(intset206056, Data);
TMP725[8].typ = (&NTI206054);
TMP725[8].name = "data";
TMP725[0].len = 4; TMP725[0].kind = 2; TMP725[0].sons = &TMP964[0];
NTI206056.node = &TMP725[0];
}

