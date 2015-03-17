/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct jsonnodeobj306738 jsonnodeobj306738;
typedef struct TY307056 TY307056;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY306753 TY306753;
typedef struct TY306758 TY306758;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45946 tcell45946;
typedef struct tcellseq45962 tcellseq45962;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45958 tcellset45958;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY307056 {
NimStringDesc* Field0;
jsonnodeobj306738* Field1;
};
struct  jsonnodeobj306738  {
NU8 Kind;
union{
struct {NimStringDesc* Str;
} S1;
struct {NI64 Num;
} S2;
struct {NF Fnum;
} S3;
struct {NIM_BOOL Bval;
} S4;
struct {TY306753* Fields;
} S6;
struct {TY306758* Elems;
} S7;
} kindU;
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
typedef NI TY27020[8];
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
struct TY306753 {
  TGenericSeq Sup;
  TY307056 data[SEQ_DECL_SIZE];
};
struct TY306758 {
  TGenericSeq Sup;
  jsonnodeobj306738* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4846)(void* p, NI op);
N_NIMCALL(void, TMP4847)(void* p, NI op);
N_NIMCALL(void, TMP4848)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_307513)(TY306758* x, TY306758* y);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_307617)(TY306753* x, TY306753* y);
N_NIMCALL(void, topretty_310132)(NimStringDesc** result, jsonnodeobj306738* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent);
N_NIMCALL(void, nl_310084)(NimStringDesc** s, NIM_BOOL ml);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, indent_310061)(NimStringDesc** s, NI i);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NI, newindent_310072)(NI curr, NI indent, NIM_BOOL ml);
N_NIMCALL(NimStringDesc*, escapejson_310095)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
TNimNode* NimDT_306738_kind[8];
STRING_LITERAL(TMP4853, "", 0);
STRING_LITERAL(TMP4854, "\015\012", 2);
STRING_LITERAL(TMP4855, "{", 1);
STRING_LITERAL(TMP4856, ", ", 2);
STRING_LITERAL(TMP4857, "\"", 1);
STRING_LITERAL(TMP4858, "\\\"", 2);
STRING_LITERAL(TMP4859, "\\\\", 2);
STRING_LITERAL(TMP4860, "\\u", 2);
STRING_LITERAL(TMP4861, ": ", 2);
STRING_LITERAL(TMP4862, "}", 1);
STRING_LITERAL(TMP4863, "{}", 2);
STRING_LITERAL(TMP4866, "[", 1);
STRING_LITERAL(TMP4867, "]", 1);
STRING_LITERAL(TMP4868, "[]", 2);
STRING_LITERAL(TMP4869, "null", 4);
TNimType NTI306738; /* JsonNodeObj */
TNimType NTI306734; /* JsonNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI128; /* float */
extern TNimType NTI138; /* bool */
TNimType NTI307056; /* tuple[key: string, val: JsonNode] */
TNimType NTI306753; /* seq[tuple[key: string, val: JsonNode]] */
TNimType NTI306758; /* seq[JsonNode] */
TNimType NTI306736; /* JsonNode */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP4846)(void* p, NI op) {
	TY306753* a;
	NI LOC1;
	a = (TY306753*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP4847)(void* p, NI op) {
	TY306758* a;
	NI LOC1;
	a = (TY306758*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP4848)(void* p, NI op) {
	jsonnodeobj306738* a;
	a = (jsonnodeobj306738*)p;
	switch ((*a).Kind) {
	case ((NU8) 4):
	nimGCvisit((void*)(*a).kindU.S1.Str, op);
	break;
	case ((NU8) 2):
	break;
	case ((NU8) 3):
	break;
	case ((NU8) 1):
	break;
	case ((NU8) 0):
	break;
	case ((NU8) 5):
	nimGCvisit((void*)(*a).kindU.S6.Fields, op);
	break;
	case ((NU8) 6):
	nimGCvisit((void*)(*a).kindU.S7.Elems, op);
	break;
	} 
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45946* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49446(src);
		(*c).Refcount += ((NI) 8);
	}
	LA3: ;
	{
		tcell45946* c;
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

N_NIMCALL(jsonnodeobj306738*, HEX25_307053)(TY307056* keyvals, NI keyvalsLen0) {
	jsonnodeobj306738* result;
	result = 0;
	result = (jsonnodeobj306738*) newObj((&NTI306736), sizeof(jsonnodeobj306738));
	(*result).Kind = ((NU8) 5);
	if ((*result).kindU.S6.Fields) nimGCunrefNoCycle((*result).kindU.S6.Fields);
	(*result).kindU.S6.Fields = (TY306753*) newSeqRC1((&NTI306753), keyvalsLen0);
	{
		NI i_307128;
		TY307056 p_307129;
		NI i_307134;
		i_307128 = 0;
		memset((void*)(&p_307129), 0, sizeof(p_307129));
		i_307134 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_307134 < keyvalsLen0)) goto LA3;
				i_307128 = i_307134;
				p_307129.Field0 = keyvals[i_307134].Field0;
				p_307129.Field1 = keyvals[i_307134].Field1;
				LOC4 = 0;
				LOC4 = (*result).kindU.S6.Fields->data[i_307128].Field0; (*result).kindU.S6.Fields->data[i_307128].Field0 = copyStringRC1(p_307129.Field0);
				if (LOC4) nimGCunrefNoCycle(LOC4);
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Fields->data[i_307128].Field1), p_307129.Field1);
				i_307134 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(jsonnodeobj306738*, HEX25_306977)(NimStringDesc* s) {
	jsonnodeobj306738* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (jsonnodeobj306738*) newObj((&NTI306736), sizeof(jsonnodeobj306738));
	(*result).Kind = ((NU8) 4);
	LOC1 = 0;
	LOC1 = (*result).kindU.S1.Str; (*result).kindU.S1.Str = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
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

N_NIMCALL(void, HEX5BHEX5DHEX3D_309419)(jsonnodeobj306738* obj, NimStringDesc* key, jsonnodeobj306738* val) {
	TY307056 LOC8;
	NimStringDesc* LOC9;
{	{
		NI i_309620;
		NI HEX3Atmp_309636;
		NI res_309639;
		i_309620 = 0;
		HEX3Atmp_309636 = 0;
		HEX3Atmp_309636 = (NI64)((*obj).kindU.S6.Fields->Sup.len - ((NI) 1));
		res_309639 = ((NI) 0);
		{
			while (1) {
				if (!(res_309639 <= HEX3Atmp_309636)) goto LA3;
				i_309620 = res_309639;
				{
					if (!eqStrings((*obj).kindU.S6.Fields->data[i_309620].Field0, key)) goto LA6;
					asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[i_309620].Field1), val);
					goto BeforeRet;
				}
				LA6: ;
				res_309639 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC8), 0, sizeof(LOC8));
	LOC8.Field0 = copyString(key);
	LOC8.Field1 = val;
	(*obj).kindU.S6.Fields = (TY306753*) incrSeq(&((*obj).kindU.S6.Fields)->Sup, sizeof(TY307056));
	LOC9 = 0;
	LOC9 = (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0; (*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field0 = copyStringRC1(LOC8.Field0);
	if (LOC9) nimGCunrefNoCycle(LOC9);
	asgnRefNoCycle((void**) (&(*obj).kindU.S6.Fields->data[(*obj).kindU.S6.Fields->Sup.len-1].Field1), LOC8.Field1);
	}BeforeRet: ;
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_307461)(jsonnodeobj306738* a, jsonnodeobj306738* b) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!a == 0) goto LA3;
		{
			if (!b == 0) goto LA7;
			result = NIM_TRUE;
			goto BeforeRet;
		}
		LA7: ;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC10;
		LOC10 = 0;
		LOC10 = b == 0;
		if (LOC10) goto LA11;
		LOC10 = !(((*a).Kind == (*b).Kind));
		LA11: ;
		if (!LOC10) goto LA12;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	goto LA1;
	LA12: ;
	{
		switch ((*a).Kind) {
		case ((NU8) 4):
		{
			result = eqStrings((*a).kindU.S1.Str, (*b).kindU.S1.Str);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*a).kindU.S2.Num == (*b).kindU.S2.Num);
		}
		break;
		case ((NU8) 3):
		{
			result = ((*a).kindU.S3.Fnum == (*b).kindU.S3.Fnum);
		}
		break;
		case ((NU8) 1):
		{
			result = ((*a).kindU.S4.Bval == (*b).kindU.S4.Bval);
		}
		break;
		case ((NU8) 0):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 6):
		{
			result = HEX3DHEX3D_307513((*a).kindU.S7.Elems, (*b).kindU.S7.Elems);
		}
		break;
		case ((NU8) 5):
		{
			result = HEX3DHEX3D_307617((*a).kindU.S6.Fields, (*b).kindU.S6.Fields);
		}
		break;
		}
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(jsonnodeobj306738*, newjarray_306941)(void) {
	jsonnodeobj306738* result;
	result = 0;
	result = (jsonnodeobj306738*) newObj((&NTI306736), sizeof(jsonnodeobj306738));
	(*result).Kind = ((NU8) 6);
	if ((*result).kindU.S7.Elems) nimGCunrefNoCycle((*result).kindU.S7.Elems);
	(*result).kindU.S7.Elems = (TY306758*) newSeqRC1((&NTI306758), 0);
	return result;
}

N_NIMCALL(void, add_309047)(jsonnodeobj306738* father, jsonnodeobj306738* child) {
	(*father).kindU.S7.Elems = (TY306758*) incrSeq(&((*father).kindU.S7.Elems)->Sup, sizeof(jsonnodeobj306738*));
	asgnRefNoCycle((void**) (&(*father).kindU.S7.Elems->data[(*father).kindU.S7.Elems->Sup.len-1]), child);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, nl_310084)(NimStringDesc** s, NIM_BOOL ml) {
	{
		if (!ml) goto LA3;
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TMP4854));
	}
	LA3: ;
}

N_NIMCALL(void, indent_310061)(NimStringDesc** s, NI i) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(32, i);
	(*s) = resizeString((*s), LOC1->Sup.len + 0);
appendString((*s), LOC1);
}

N_NIMCALL(NI, newindent_310072)(NI curr, NI indent, NIM_BOOL ml) {
	NI result;
{	result = 0;
	{
		if (!ml) goto LA3;
		result = (NI64)(curr + indent);
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		result = indent;
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, escapejson_310095)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString((NI64)(s->Sup.len + (NI)((NU64)(s->Sup.len) >> (NU64)(((NI) 3)))));
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4857));
	{
		NI x_310099;
		NI i_310107;
		NI result_310109;
		x_310099 = 0;
		i_310107 = ((NI) 0);
		result_310109 = 0;
		{
			while (1) {
				NI r;
				if (!(i_310107 < s->Sup.len)) goto LA3;
				{
					if (!((NU64)(((NI) (((NU8)(s->data[i_310107]))))) <= (NU64)(((NI) 127)))) goto LA6;
					result_310109 = ((NI) (((NU8)(s->data[i_310107]))));
					i_310107 += ((NI) 1);
				}
				goto LA4;
				LA6: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_310107]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA9;
					result_310109 = (NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_310107])))) & ((NI) 31))))) << (NU64)(((NI) 6))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 1))])))) & ((NI) 63)))));
					i_310107 += ((NI) 2);
				}
				goto LA4;
				LA9: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_310107]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA12;
					result_310109 = (NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_310107])))) & ((NI) 15))))) << (NU64)(((NI) 12))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 2))])))) & ((NI) 63)))));
					i_310107 += ((NI) 3);
				}
				goto LA4;
				LA12: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_310107]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA15;
					result_310109 = (NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_310107])))) & ((NI) 7))))) << (NU64)(((NI) 18))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 3))])))) & ((NI) 63)))));
					i_310107 += ((NI) 4);
				}
				goto LA4;
				LA15: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_310107]))))) >> (NU64)(((NI) 2))) == ((NI) 62))) goto LA18;
					result_310109 = (NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_310107])))) & ((NI) 3))))) << (NU64)(((NI) 24))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 18)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 3))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 4))])))) & ((NI) 63)))));
					i_310107 += ((NI) 5);
				}
				goto LA4;
				LA18: ;
				{
					if (!((NI)((NU64)(((NI) (((NU8)(s->data[i_310107]))))) >> (NU64)(((NI) 1))) == ((NI) 126))) goto LA21;
					result_310109 = (NI)((NI)((NI)((NI)((NI)((NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[i_310107])))) & ((NI) 1))))) << (NU64)(((NI) 30))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 1))])))) & ((NI) 63))))) << (NU64)(((NI) 24)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 2))])))) & ((NI) 63))))) << (NU64)(((NI) 18)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 3))])))) & ((NI) 63))))) << (NU64)(((NI) 12)))) | (NI)((NU64)(((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 4))])))) & ((NI) 63))))) << (NU64)(((NI) 6)))) | ((NI) ((NI)(((NI) (((NU8)(s->data[(NI64)(i_310107 + ((NI) 5))])))) & ((NI) 63)))));
					i_310107 += ((NI) 6);
				}
				goto LA4;
				LA21: ;
				{
					result_310109 = ((NI) (((NU8)(s->data[i_310107]))));
					i_310107 += ((NI) 1);
				}
				LA4: ;
				x_310099 = result_310109;
				r = x_310099;
				{
					NIM_BOOL LOC26;
					NIM_CHAR c;
					LOC26 = 0;
					LOC26 = (((NI) 32) <= r);
					if (!(LOC26)) goto LA27;
					LOC26 = (r <= ((NI) 127));
					LA27: ;
					if (!LOC26) goto LA28;
					c = ((NIM_CHAR) (((NI) (r))));
					switch (((NU8)(c))) {
					case 34:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4858));
					}
					break;
					case 92:
					{
						result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4859));
					}
					break;
					default:
					{
						result = addChar(result, c);
					}
					break;
					}
				}
				goto LA24;
				LA28: ;
				{
					NimStringDesc* LOC34;
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP4860));
					LOC34 = 0;
					LOC34 = nsuToHex(((NI64) (r)), ((NI) 4));
					result = resizeString(result, LOC34->Sup.len + 0);
appendString(result, LOC34);
				}
				LA24: ;
			} LA3: ;
		}
	}
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4857));
	return result;
}

N_NIMCALL(void, topretty_310132)(NimStringDesc** result, jsonnodeobj306738* node, NI indent, NIM_BOOL ml, NIM_BOOL lstarr, NI currindent) {
	switch ((*node).Kind) {
	case ((NU8) 5):
	{
		{
			NIM_BOOL LOC4;
			LOC4 = 0;
			LOC4 = !((currindent == ((NI) 0)));
			if (!(LOC4)) goto LA5;
			LOC4 = !(lstarr);
			LA5: ;
			if (!LOC4) goto LA6;
			nl_310084(result, ml);
		}
		LA6: ;
		indent_310061(result, currindent);
		{
			if (!(((NI) 0) < (*node).kindU.S6.Fields->Sup.len)) goto LA10;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4855));
			nl_310084(result, ml);
			{
				NI i_310169;
				NI HEX3Atmp_310207;
				NI res_310210;
				i_310169 = 0;
				HEX3Atmp_310207 = 0;
				HEX3Atmp_310207 = (NI64)((*node).kindU.S6.Fields->Sup.len - ((NI) 1));
				res_310210 = ((NI) 0);
				{
					while (1) {
						NI LOC19;
						NimStringDesc* LOC20;
						NI LOC21;
						if (!(res_310210 <= HEX3Atmp_310207)) goto LA14;
						i_310169 = res_310210;
						{
							if (!(((NI) 0) < i_310169)) goto LA17;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4856));
							nl_310084(result, ml);
						}
						LA17: ;
						LOC19 = 0;
						LOC19 = newindent_310072(currindent, indent, ml);
						indent_310061(result, LOC19);
						LOC20 = 0;
						LOC20 = escapejson_310095((*node).kindU.S6.Fields->data[i_310169].Field0);
						(*result) = resizeString((*result), LOC20->Sup.len + 0);
appendString((*result), LOC20);
						(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4861));
						LOC21 = 0;
						LOC21 = newindent_310072(currindent, indent, ml);
						topretty_310132(result, (*node).kindU.S6.Fields->data[i_310169].Field1, indent, ml, NIM_FALSE, LOC21);
						res_310210 += ((NI) 1);
					} LA14: ;
				}
			}
			nl_310084(result, ml);
			indent_310061(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4862));
		}
		goto LA8;
		LA10: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4863));
		}
		LA8: ;
	}
	break;
	case ((NU8) 4):
	{
		NimStringDesc* LOC28;
		{
			if (!lstarr) goto LA26;
			indent_310061(result, currindent);
		}
		LA26: ;
		LOC28 = 0;
		LOC28 = escapejson_310095((*node).kindU.S1.Str);
		(*result) = resizeString((*result), LOC28->Sup.len + 0);
appendString((*result), LOC28);
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* LOC34;
		{
			if (!lstarr) goto LA32;
			indent_310061(result, currindent);
		}
		LA32: ;
		LOC34 = 0;
		LOC34 = nimInt64ToStr((*node).kindU.S2.Num);
		(*result) = resizeString((*result), LOC34->Sup.len + 0);
appendString((*result), LOC34);
	}
	break;
	case ((NU8) 3):
	{
		NimStringDesc* LOC40;
		{
			if (!lstarr) goto LA38;
			indent_310061(result, currindent);
		}
		LA38: ;
		LOC40 = 0;
		LOC40 = nimFloatToStr((*node).kindU.S3.Fnum);
		(*result) = resizeString((*result), LOC40->Sup.len + 0);
appendString((*result), LOC40);
	}
	break;
	case ((NU8) 1):
	{
		NimStringDesc* LOC46;
		{
			if (!lstarr) goto LA44;
			indent_310061(result, currindent);
		}
		LA44: ;
		LOC46 = 0;
		LOC46 = nimBoolToStr((*node).kindU.S4.Bval);
		(*result) = resizeString((*result), LOC46->Sup.len + 0);
appendString((*result), LOC46);
	}
	break;
	case ((NU8) 6):
	{
		{
			if (!lstarr) goto LA50;
			indent_310061(result, currindent);
		}
		LA50: ;
		{
			if (!!(((*node).kindU.S7.Elems->Sup.len == ((NI) 0)))) goto LA54;
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4866));
			nl_310084(result, ml);
			{
				NI i_310204;
				NI HEX3Atmp_310215;
				NI res_310218;
				i_310204 = 0;
				HEX3Atmp_310215 = 0;
				HEX3Atmp_310215 = (NI64)((*node).kindU.S7.Elems->Sup.len - ((NI) 1));
				res_310218 = ((NI) 0);
				{
					while (1) {
						NI LOC63;
						if (!(res_310218 <= HEX3Atmp_310215)) goto LA58;
						i_310204 = res_310218;
						{
							if (!(((NI) 0) < i_310204)) goto LA61;
							(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4856));
							nl_310084(result, ml);
						}
						LA61: ;
						LOC63 = 0;
						LOC63 = newindent_310072(currindent, indent, ml);
						topretty_310132(result, (*node).kindU.S7.Elems->data[i_310204], indent, ml, NIM_TRUE, LOC63);
						res_310218 += ((NI) 1);
					} LA58: ;
				}
			}
			nl_310084(result, ml);
			indent_310061(result, currindent);
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP4867));
		}
		goto LA52;
		LA54: ;
		{
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP4868));
		}
		LA52: ;
	}
	break;
	case ((NU8) 0):
	{
		{
			if (!lstarr) goto LA68;
			indent_310061(result, currindent);
		}
		LA68: ;
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4869));
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, pretty_310246)(jsonnodeobj306738* node, NI indent) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4853));
	topretty_310132((&result), node, indent, NIM_TRUE, NIM_FALSE, ((NI) 0));
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_310258)(jsonnodeobj306738* node) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4853));
	topretty_310132((&result), node, ((NI) 0), NIM_FALSE, NIM_FALSE, ((NI) 0));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit)(void) {
static TNimNode* TMP4842[7];
NI TMP4844;
static char* NIM_CONST TMP4843[7] = {
"JNull", 
"JBool", 
"JInt", 
"JFloat", 
"JString", 
"JObject", 
"JArray"};
static TNimNode* TMP4845[2];
static TNimNode TMP884[19];
NTI306738.size = sizeof(jsonnodeobj306738);
NTI306738.kind = 18;
NTI306738.base = 0;
NTI306738.flags = 2;
NTI306734.size = sizeof(NU8);
NTI306734.kind = 14;
NTI306734.base = 0;
NTI306734.flags = 3;
for (TMP4844 = 0; TMP4844 < 7; TMP4844++) {
TMP884[TMP4844+1].kind = 1;
TMP884[TMP4844+1].offset = TMP4844;
TMP884[TMP4844+1].name = TMP4843[TMP4844];
TMP4842[TMP4844] = &TMP884[TMP4844+1];
}
TMP884[8].len = 7; TMP884[8].kind = 2; TMP884[8].sons = &TMP4842[0];
NTI306734.node = &TMP884[8];
TMP884[0].kind = 3;
TMP884[0].offset = offsetof(jsonnodeobj306738, Kind);
TMP884[0].typ = (&NTI306734);
TMP884[0].name = "kind";
TMP884[0].sons = &NimDT_306738_kind[0];
TMP884[0].len = 7;
TMP884[9].kind = 1;
TMP884[9].offset = offsetof(jsonnodeobj306738, kindU.S1.Str);
TMP884[9].typ = (&NTI149);
TMP884[9].name = "str";
NimDT_306738_kind[4] = &TMP884[9];
TMP884[10].kind = 1;
TMP884[10].offset = offsetof(jsonnodeobj306738, kindU.S2.Num);
TMP884[10].typ = (&NTI5710);
TMP884[10].name = "num";
NimDT_306738_kind[2] = &TMP884[10];
TMP884[11].kind = 1;
TMP884[11].offset = offsetof(jsonnodeobj306738, kindU.S3.Fnum);
TMP884[11].typ = (&NTI128);
TMP884[11].name = "fnum";
NimDT_306738_kind[3] = &TMP884[11];
TMP884[12].kind = 1;
TMP884[12].offset = offsetof(jsonnodeobj306738, kindU.S4.Bval);
TMP884[12].typ = (&NTI138);
TMP884[12].name = "bval";
NimDT_306738_kind[1] = &TMP884[12];
TMP884[13].len = 0; TMP884[13].kind = 2;
NimDT_306738_kind[0] = &TMP884[13];
NTI307056.size = sizeof(TY307056);
NTI307056.kind = 18;
NTI307056.base = 0;
NTI307056.flags = 2;
TMP4845[0] = &TMP884[16];
TMP884[16].kind = 1;
TMP884[16].offset = offsetof(TY307056, Field0);
TMP884[16].typ = (&NTI149);
TMP884[16].name = "Field0";
TMP4845[1] = &TMP884[17];
TMP884[17].kind = 1;
TMP884[17].offset = offsetof(TY307056, Field1);
TMP884[17].typ = (&NTI306736);
TMP884[17].name = "Field1";
TMP884[15].len = 2; TMP884[15].kind = 2; TMP884[15].sons = &TMP4845[0];
NTI307056.node = &TMP884[15];
NTI306753.size = sizeof(TY306753*);
NTI306753.kind = 24;
NTI306753.base = (&NTI307056);
NTI306753.flags = 2;
NTI306753.marker = TMP4846;
TMP884[14].kind = 1;
TMP884[14].offset = offsetof(jsonnodeobj306738, kindU.S6.Fields);
TMP884[14].typ = (&NTI306753);
TMP884[14].name = "fields";
NimDT_306738_kind[5] = &TMP884[14];
NTI306758.size = sizeof(TY306758*);
NTI306758.kind = 24;
NTI306758.base = (&NTI306736);
NTI306758.flags = 2;
NTI306758.marker = TMP4847;
TMP884[18].kind = 1;
TMP884[18].offset = offsetof(jsonnodeobj306738, kindU.S7.Elems);
TMP884[18].typ = (&NTI306758);
TMP884[18].name = "elems";
NimDT_306738_kind[6] = &TMP884[18];
NTI306738.node = &TMP884[0];
NTI306736.size = sizeof(jsonnodeobj306738*);
NTI306736.kind = 22;
NTI306736.base = (&NTI306738);
NTI306736.flags = 2;
NTI306736.marker = TMP4848;
}

