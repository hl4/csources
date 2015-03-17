/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trope178009 trope178009;
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
typedef struct TY181351 TY181351;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning, void* ClEnv);
void* ClEnv;
} TY178138;
typedef trope178009* TY178216[4096];
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
typedef trope178009* TY178699[1];
typedef N_CLOSURE_PTR(void, TMP3451) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3452) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP4273) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef NI TY177066[256];
typedef NI TY27020[8];
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
struct TY181351 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
N_NIMCALL(trope178009*, newrope_178171)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP129)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(trope178009*, con_178024)(trope178009* a, trope178009* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(trope178009*, insertincache_178480)(NimStringDesc* s);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, newrecropetostr_178679)(NimStringDesc** result, NI* resultlen, trope178009* r);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(trope178009*, pop_178711)(TY181351** s);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(trope178009*, con_178031)(trope178009* a, NimStringDesc* b);
N_NIMCALL(trope178009*, torope_178076)(NimStringDesc* s);
N_NIMCALL(void, app_178060)(trope178009** a, NimStringDesc* b);
N_NIMCALL(void, app_178052)(trope178009** a, trope178009* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(trope178009*, ropef_178107)(NimStringDesc* frmt, trope178009** args, NI argsLen0);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, writerope_179251)(FILE* f, trope178009* c);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
N_NIMCALL(NI32, crcfromfile_177046)(NimStringDesc* filename);
N_NIMCALL(NI32, crcfromrope_180240)(trope178009* r);
N_NIMCALL(NI32, newcrcfromropeaux_180094)(trope178009* r, NI32 startval);
static N_INLINE(NI32, updatecrc32_177026)(NIM_CHAR val, NI32 crc);
static N_INLINE(NI32, updatecrc32_177019)(NI8 val, NI32 crc);
N_NIMCALL(void, writerope_179623)(trope178009* head, NimStringDesc* filename, NIM_BOOL usewarning);
STRING_LITERAL(TMP1041, "", 0);
STRING_LITERAL(TMP3450, "$", 1);
extern NIM_CONST TY177066 crc32table_177065;
TY178138 errorhandler_178143;
TY178216 cache_178221;
NI gcachetries_178468;
NI gcachemisses_178472;
NI gcacheinttries_178476;
trope178009* rnl_179649;
extern TNimType NTI3411; /* RootObj */
TNimType NTI178009; /* TRope */
extern TNimType NTI108; /* int */
extern TNimType NTI149; /* string */
TNimType NTI178007; /* PRope */
extern tgcheap47816 gch_47844;
extern NimStringDesc* tnl_175626;
trope178009* softrnl_179650;
extern TNimType NTI181351; /* seq[PRope] */
N_NIMCALL(void, TMP129)(void* p, NI op) {
	trope178009* a;
	a = (trope178009*)p;
	nimGCvisit((void*)(*a).Left, op);
	nimGCvisit((void*)(*a).Right, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45947))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(trope178009*, newrope_178171)(NimStringDesc* data) {
	trope178009* result;
	result = 0;
	result = (trope178009*) newObj((&NTI178007), sizeof(trope178009));
	(*result).Sup.m_type = (&NTI178009);
	{
		NimStringDesc* LOC5;
		if (!!((data == NIM_NIL))) goto LA3;
		(*result).Length = data->Sup.len;
		LOC5 = 0;
		LOC5 = (*result).Data; (*result).Data = copyStringRC1(data);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	return result;
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
			if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(trope178009*, con_178024)(trope178009* a, trope178009* b) {
	trope178009* result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b == NIM_NIL)) goto LA6;
		result = a;
	}
	goto LA1;
	LA6: ;
	{
		result = newrope_178171(NIM_NIL);
		(*result).Length = (NI64)((*a).Length + (*b).Length);
		asgnRefNoCycle((void**) (&(*result).Left), a);
		asgnRefNoCycle((void**) (&(*result).Right), b);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, app_178052)(trope178009** a, trope178009* b) {
	unsureAsgnRef((void**) (&(*a)), con_178024((*a), b));
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

N_NIMCALL(trope178009*, insertincache_178480)(NimStringDesc* s) {
	trope178009* result;
	NI h;
	NI LOC1;
	result = 0;
	gcachetries_178468 += ((NI) 1);
	LOC1 = 0;
	LOC1 = hash_128839(s);
	h = (NI)(LOC1 & ((NI) 4095));
	result = cache_178221[(h)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = result == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result).Data, s));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_178472 += ((NI) 1);
		result = newrope_178171(s);
		asgnRefNoCycle((void**) (&cache_178221[(h)- 0]), result);
	}
	LA6: ;
	return result;
}

N_NIMCALL(trope178009*, torope_178076)(NimStringDesc* s) {
	trope178009* result;
	result = 0;
	{
		if (!(s->Sup.len == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = insertincache_178480(s);
	}
	LA1: ;
	return result;
}

static N_INLINE(trope178009*, pop_178711)(TY181351** s) {
	trope178009* result;
	NI l;
	result = 0;
	l = (NI64)((*s)->Sup.len - ((NI) 1));
	result = (*s)->data[l];
	(*s) = (TY181351*) setLengthSeq(&((*s))->Sup, sizeof(trope178009*), l);
	return result;
}

N_NIMCALL(void, newrecropetostr_178679)(NimStringDesc** result, NI* resultlen, trope178009* r) {
	TY181351* stack;
	TY178699 LOC1;
	stack = (TY181351*) newSeq((&NTI181351), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	{
		while (1) {
			trope178009* it;
			if (!(((NI) 0) < stack->Sup.len)) goto LA3;
			it = pop_178711((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY181351*) incrSeq(&(stack)->Sup, sizeof(trope178009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			memcpy(((void*) ((&(*result)->data[(*resultlen)]))), ((void*) ((&(*it).Data->data[((NI) 0)]))), (*it).Length);
			(*resultlen) += (*it).Length;
		} LA3: ;
	}
}

N_NIMCALL(NimStringDesc*, ropetostr_178101)(trope178009* p) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(p == NIM_NIL)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1041));
	}
	goto LA1;
	LA3: ;
	{
		NI resultlen;
		result = mnewString((*p).Length);
		resultlen = ((NI) 0);
		newrecropetostr_178679((&result), (&resultlen), p);
	}
	LA1: ;
	return result;
}

N_NIMCALL(trope178009*, con_178031)(trope178009* a, NimStringDesc* b) {
	trope178009* result;
	trope178009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_178076(b);
	result = con_178024(a, LOC1);
	return result;
}

N_NIMCALL(void, app_178060)(trope178009** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), con_178031((*a), b));
}

N_NIMCALL(trope178009*, ropef_178107)(NimStringDesc* frmt, trope178009** args, NI argsLen0) {
	trope178009* result;
	NI i;
	NI length;
	NI num;
	result = 0;
	i = ((NI) 0);
	length = frmt->Sup.len;
	result = NIM_NIL;
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i <= (NI64)(length - ((NI) 1)))) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					app_178060(&result, ((NimStringDesc*) &TMP3450));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					app_178052(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI64)((NI64)((NI64)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
							{
								NIM_BOOL LOC14;
								LOC14 = 0;
								LOC14 = ((NI64)((NI64)(length + ((NI) 0)) - ((NI) 1)) < i);
								if (LOC14) goto LA15;
								LOC14 = !((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))));
								LA15: ;
								if (!LOC14) goto LA16;
								goto LA10;
							}
							LA16: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* LOC22;
						if (!((NI64)((argsLen0-1) + ((NI) 1)) < j)) goto LA20;
						LOC22 = 0;
						LOC22 = nimIntToStr(j);
						errorhandler_178143.ClEnv? errorhandler_178143.ClPrc(((NU8) 1), LOC22, NIM_FALSE, errorhandler_178143.ClEnv):((TMP3451)(errorhandler_178143.ClPrc))(((NU8) 1), LOC22, NIM_FALSE);
					}
					goto LA18;
					LA20: ;
					{
						app_178052(&result, args[(NI64)(j - ((NI) 1))]);
					}
					LA18: ;
				}
				break;
				case 110:
				{
					app_178052(&result, softrnl_179650);
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					app_178052(&result, rnl_179649);
					i += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* LOC27;
					LOC27 = 0;
					LOC27 = nimCharToStr(frmt->data[i]);
					errorhandler_178143.ClEnv? errorhandler_178143.ClPrc(((NU8) 1), LOC27, NIM_FALSE, errorhandler_178143.ClEnv):((TMP3452)(errorhandler_178143.ClPrc))(((NU8) 1), LOC27, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA29;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA32;
						i += ((NI) 1);
					}
					goto LA30;
					LA32: ;
					{
						goto LA28;
					}
					LA30: ;
				} LA29: ;
			} LA28: ;
			{
				NimStringDesc* LOC39;
				if (!(start <= (NI64)(i - ((NI) 1)))) goto LA37;
				LOC39 = 0;
				LOC39 = copyStrLast(frmt, start, (NI64)(i - ((NI) 1)));
				app_178060(&result, LOC39);
			}
			LA37: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(trope178009*, torope_178082)(NI64 i) {
	trope178009* result;
	NimStringDesc* LOC1;
	result = 0;
	gcacheinttries_178476 += ((NI) 1);
	LOC1 = 0;
	LOC1 = nimInt64ToStr(i);
	result = torope_178076(LOC1);
	return result;
}

N_NIMCALL(void, appf_178115)(trope178009** c, NimStringDesc* frmt, trope178009** args, NI argsLen0) {
	trope178009* LOC1;
	LOC1 = 0;
	LOC1 = ropef_178107(frmt, args, argsLen0);
	app_178052(c, LOC1);
}

N_NIMCALL(trope178009*, con_178038)(NimStringDesc* a, trope178009* b) {
	trope178009* result;
	trope178009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_178076(a);
	result = con_178024(LOC1, b);
	return result;
}

N_NIMCALL(void, prepend_178068)(trope178009** a, trope178009* b) {
	unsureAsgnRef((void**) (&(*a)), con_178024(b, (*a)));
}

N_NIMCALL(trope178009*, con_178045)(trope178009** a, NI aLen0) {
	trope178009* result;
	result = 0;
	{
		NI i_179124;
		NI HEX3Atmp_179128;
		NI res_179131;
		i_179124 = 0;
		HEX3Atmp_179128 = 0;
		HEX3Atmp_179128 = (aLen0-1);
		res_179131 = ((NI) 0);
		{
			while (1) {
				if (!(res_179131 <= HEX3Atmp_179128)) goto LA3;
				i_179124 = res_179131;
				result = con_178024(result, a[i_179124]);
				res_179131 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(void, writerope_179251)(FILE* f, trope178009* c) {
	TY181351* stack;
	TY178699 LOC1;
	stack = (TY181351*) newSeq((&NTI181351), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = c;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	{
		while (1) {
			trope178009* it;
			if (!(((NI) 0) < stack->Sup.len)) goto LA3;
			it = pop_178711((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY181351*) incrSeq(&(stack)->Sup, sizeof(trope178009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			write_13457(f, (*it).Data);
		} LA3: ;
	}
}

N_NIMCALL(void, writerope_179623)(trope178009* head, NimStringDesc* filename, NIM_BOOL usewarning) {
	FILE* f;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, ((NU8) 1), ((NI) -1));
		if (!LOC3) goto LA4;
		{
			if (!!((head == NIM_NIL))) goto LA8;
			writerope_179251(f, head);
		}
		LA8: ;
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_178143.ClEnv? errorhandler_178143.ClPrc(((NU8) 0), filename, usewarning, errorhandler_178143.ClEnv):((TMP4273)(errorhandler_178143.ClPrc))(((NU8) 0), filename, usewarning);
	}
	LA1: ;
}

static N_INLINE(NI32, updatecrc32_177019)(NI8 val, NI32 crc) {
	NI32 result;
	result = 0;
	result = (NI32)(((NI32) (crc32table_177065[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & ((NI) 255))))) & ((NI) 255)))- 0])) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	return result;
}

static N_INLINE(NI32, updatecrc32_177026)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	result = 0;
	result = updatecrc32_177019(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
	return result;
}

N_NIMCALL(NI32, newcrcfromropeaux_180094)(trope178009* r, NI32 startval) {
	NI32 result;
	TY181351* stack;
	TY178699 LOC1;
	result = 0;
	stack = (TY181351*) newSeq((&NTI181351), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	result = startval;
	{
		while (1) {
			trope178009* it;
			NI i;
			NI l;
			if (!(((NI) 0) < stack->Sup.len)) goto LA3;
			it = pop_178711((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY181351*) incrSeq(&(stack)->Sup, sizeof(trope178009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			i = ((NI) 0);
			l = (*it).Data->Sup.len;
			{
				while (1) {
					if (!(i < l)) goto LA7;
					result = updatecrc32_177026((*it).Data->data[i], result);
					i += ((NI) 1);
				} LA7: ;
			}
		} LA3: ;
	}
	return result;
}

N_NIMCALL(NI32, crcfromrope_180240)(trope178009* r) {
	NI32 result;
	result = 0;
	result = newcrcfromropeaux_180094(r, ((NI32) -1));
	return result;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_178094)(trope178009* r, NimStringDesc* filename) {
	NIM_BOOL result;
	NI32 c;
	result = 0;
	c = 0;
	c = crcfromfile_177046(filename);
	{
		NI32 LOC3;
		LOC3 = 0;
		LOC3 = crcfromrope_180240(r);
		if (!!((c == LOC3))) goto LA4;
		writerope_179623(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetropecache_178226)(void) {
	{
		NI i_178423;
		NI res_178428;
		i_178423 = 0;
		res_178428 = ((NI) 0);
		{
			while (1) {
				if (!(res_178428 <= ((NI) 4095))) goto LA3;
				i_178423 = ((NI) (res_178428));
				asgnRefNoCycle((void**) (&cache_178221[(i_178423)- 0]), NIM_NIL);
				res_178428 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit)(void) {
	gcachetries_178468 = ((NI) 0);
	gcachemisses_178472 = ((NI) 0);
	gcacheinttries_178476 = ((NI) 0);
	asgnRefNoCycle((void**) (&rnl_179649), newrope_178171(tnl_175626));
	asgnRefNoCycle((void**) (&softrnl_179650), newrope_178171(tnl_175626));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit)(void) {
static TNimNode* TMP128[4];
static TNimNode TMP57[5];
NTI178009.size = sizeof(trope178009);
NTI178009.kind = 17;
NTI178009.base = (&NTI3411);
NTI178009.flags = 2;
TMP128[0] = &TMP57[1];
TMP57[1].kind = 1;
TMP57[1].offset = offsetof(trope178009, Left);
TMP57[1].typ = (&NTI178007);
TMP57[1].name = "left";
TMP128[1] = &TMP57[2];
TMP57[2].kind = 1;
TMP57[2].offset = offsetof(trope178009, Right);
TMP57[2].typ = (&NTI178007);
TMP57[2].name = "right";
TMP128[2] = &TMP57[3];
TMP57[3].kind = 1;
TMP57[3].offset = offsetof(trope178009, Length);
TMP57[3].typ = (&NTI108);
TMP57[3].name = "length";
TMP128[3] = &TMP57[4];
TMP57[4].kind = 1;
TMP57[4].offset = offsetof(trope178009, Data);
TMP57[4].typ = (&NTI149);
TMP57[4].name = "data";
TMP57[0].len = 4; TMP57[0].kind = 2; TMP57[0].sons = &TMP128[0];
NTI178009.node = &TMP57[0];
NTI178007.size = sizeof(trope178009*);
NTI178007.kind = 22;
NTI178007.base = (&NTI178009);
NTI178007.flags = 2;
NTI178007.marker = TMP129;
}

