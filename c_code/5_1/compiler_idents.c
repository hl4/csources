/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tident184021 tident184021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef tident184021* TY184034[8192];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(tident184021*, getident_184463)(NimStringDesc* identifier);
N_NIMCALL(tident184021*, getident_184248)(NCSTRING identifier, NI length, NI h);
N_NIMCALL(NI, cmpexact_184187)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(NI, cmpignorestyle_184044)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP441)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, hashignorestyle_128887)(NimStringDesc* x);
N_NIMCALL(void, TMP828)(void* p, NI op);
STRING_LITERAL(TMP442, ":anonymous", 10);
STRING_LITERAL(TMP443, ":delegator", 10);
NIM_BOOL firstchariscs_184029;
TY184034 buckets_184039;
NI wordcounter_184244;
tident184021* idanon_184495;
extern tgcheap47816 gch_47844;
extern TNimType NTI3411; /* RootObj */
TNimType NTI184015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI184021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI128021; /* THash */
TNimType NTI184019; /* PIdent */
tident184021* iddelegator_184550;
TNimType NTI184017; /* PIdObj */

N_NIMCALL(NI, cmpexact_184187)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = 0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI32)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = !((result == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15;
			result = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
	return result;
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

N_NIMCALL(NI, cmpignorestyle_184044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = 0;
	{
		if (!firstchariscs_184029) goto LA3;
		{
			if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA7;
			result = ((NI) 1);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA10;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA12;
					i += ((NI) 1);
				} LA12: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA14;
					j += ((NI) 1);
				} LA14: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL LOC17;
				LOC17 = 0;
				LOC17 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC17)) goto LA18;
				LOC17 = ((NU8)(aa) <= (NU8)(90));
				LA18: ;
				if (!LOC17) goto LA19;
				aa = ((NIM_CHAR) (((NI) ((NI32)(((NI) (((NU8)(aa)))) + ((NI) 32))))));
			}
			LA19: ;
			{
				NIM_BOOL LOC23;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(bb) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				bb = ((NIM_CHAR) (((NI) ((NI32)(((NI) (((NU8)(bb)))) + ((NI) 32))))));
			}
			LA25: ;
			result = (NI32)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC29;
				LOC29 = 0;
				LOC29 = !((result == ((NI) 0)));
				if (LOC29) goto LA30;
				LOC29 = ((NU8)(aa) == (NU8)(0));
				LA30: ;
				if (!LOC29) goto LA31;
				goto LA9;
			}
			LA31: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA10: ;
	} LA9: ;
	{
		if (!(result == ((NI) 0))) goto LA35;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA39;
			result = ((NI) 1);
		}
		LA39: ;
	}
	LA35: ;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP441)(void* p, NI op) {
	tident184021* a;
	a = (tident184021*)p;
	nimGCvisit((void*)(*a).S, op);
	nimGCvisit((void*)(*a).Next, op);
}

N_NIMCALL(tident184021*, getident_184248)(NCSTRING identifier, NI length, NI h) {
	tident184021* result;
	NI idx;
	tident184021* last;
	NI id;
{	result = 0;
	idx = (NI)(h & ((NI) 8191));
	result = buckets_184039[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = cmpexact_184187((*result).S->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last).Next), (*result).Next);
					asgnRefNoCycle((void**) (&(*result).Next), buckets_184039[(idx)- 0]);
					asgnRefNoCycle((void**) (&buckets_184039[(idx)- 0]), result);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = 0;
				LOC13 = cmpignorestyle_184044((*result).S->data, identifier, length);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				id = (*result).Sup.Id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			last = result;
			result = (*result).Next;
		} LA2: ;
	}
	result = (tident184021*) newObj((&NTI184019), sizeof(tident184021));
	(*result).Sup.Sup.m_type = (&NTI184021);
	(*result).H = h;
	asgnRefNoCycle((void**) (&(*result).S), mnewString(length));
	{
		NI i_184421;
		NI HEX3Atmp_184435;
		NI res_184438;
		i_184421 = 0;
		HEX3Atmp_184435 = 0;
		HEX3Atmp_184435 = (NI32)(length - ((NI) 1));
		res_184438 = ((NI) 0);
		{
			while (1) {
				if (!(res_184438 <= HEX3Atmp_184435)) goto LA18;
				i_184421 = res_184438;
				(*result).S->data[i_184421] = identifier[i_184421];
				res_184438 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).Next), buckets_184039[(idx)- 0]);
	asgnRefNoCycle((void**) (&buckets_184039[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21;
		wordcounter_184244 += ((NI) 1);
		(*result).Sup.Id = ((NI32)-(wordcounter_184244));
	}
	goto LA19;
	LA21: ;
	{
		(*result).Sup.Id = id;
	}
	LA19: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tident184021*, getident_184463)(NimStringDesc* identifier) {
	tident184021* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_128887(identifier);
	result = getident_184248(identifier->data, identifier->Sup.len, LOC1);
	return result;
}

N_NIMCALL(tident184021*, getident_184473)(NimStringDesc* identifier, NI h) {
	tident184021* result;
	result = 0;
	result = getident_184248(identifier->data, identifier->Sup.len, h);
	return result;
}
N_NIMCALL(void, TMP828)(void* p, NI op) {
	tidobj184015* a;
	a = (tidobj184015*)p;
}

N_NIMCALL(NIM_BOOL, identeq_184484)(tident184021* id, NimStringDesc* name) {
	NIM_BOOL result;
	tident184021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_184463(name);
	result = ((*id).Sup.Id == (*LOC1).Sup.Id);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit)(void) {
	firstchariscs_184029 = NIM_TRUE;
	wordcounter_184244 = ((NI) 1);
	asgnRefNoCycle((void**) (&idanon_184495), getident_184463(((NimStringDesc*) &TMP442)));
	asgnRefNoCycle((void**) (&iddelegator_184550), getident_184463(((NimStringDesc*) &TMP443)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit)(void) {
static TNimNode* TMP440[3];
static TNimNode TMP438[5];
NTI184015.size = sizeof(tidobj184015);
NTI184015.kind = 17;
NTI184015.base = (&NTI3411);
NTI184015.flags = 1;
TMP438[0].kind = 1;
TMP438[0].offset = offsetof(tidobj184015, Id);
TMP438[0].typ = (&NTI108);
TMP438[0].name = "id";
NTI184015.node = &TMP438[0];
NTI184021.size = sizeof(tident184021);
NTI184021.kind = 17;
NTI184021.base = (&NTI184015);
NTI184021.flags = 2;
TMP440[0] = &TMP438[2];
TMP438[2].kind = 1;
TMP438[2].offset = offsetof(tident184021, S);
TMP438[2].typ = (&NTI149);
TMP438[2].name = "s";
TMP440[1] = &TMP438[3];
TMP438[3].kind = 1;
TMP438[3].offset = offsetof(tident184021, Next);
TMP438[3].typ = (&NTI184019);
TMP438[3].name = "next";
TMP440[2] = &TMP438[4];
TMP438[4].kind = 1;
TMP438[4].offset = offsetof(tident184021, H);
TMP438[4].typ = (&NTI128021);
TMP438[4].name = "h";
TMP438[1].len = 3; TMP438[1].kind = 2; TMP438[1].sons = &TMP440[0];
NTI184021.node = &TMP438[1];
NTI184019.size = sizeof(tident184021*);
NTI184019.kind = 22;
NTI184019.base = (&NTI184021);
NTI184019.flags = 2;
NTI184019.marker = TMP441;
NTI184017.size = sizeof(tidobj184015*);
NTI184017.kind = 22;
NTI184017.base = (&NTI184015);
NTI184017.marker = TMP828;
}

