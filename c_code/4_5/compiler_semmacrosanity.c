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
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
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
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tloc207827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype207849* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY27020[16];
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
struct  tfreecell27030  {
tfreecell27030* Next;
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
N_NIMCALL(ttype207849*, skiptypes_211167)(ttype207849* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
static N_INLINE(NI, len_208097)(tnode207813* n);
N_NIMCALL(tsym207843*, ithfield_414012)(tnode207813* n, NI field);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(void, internalerror_182424)(tlineinfo180338 info, NimStringDesc* errmsg);
N_NIMCALL(tnode207813*, lastson_210431)(tnode207813* n);
N_NIMCALL(void, globalerror_182382)(tlineinfo180338 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_414134)(tnode207813* n, ttype207849* t);
N_NIMCALL(NI, len_210377)(ttype207849* n);
N_NIMCALL(ttype207849*, elemtype_236522)(ttype207849* t);
STRING_LITERAL(TMP3254, "ithField", 8);
STRING_LITERAL(TMP3255, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3256, "invalid field at index ", 23);
STRING_LITERAL(TMP3257, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3258, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3259, "{} must have the set type", 25);
STRING_LITERAL(TMP3260, "float literal must have some float type", 39);
STRING_LITERAL(TMP3261, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3262, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3263, "nil literal must be of some pointer type", 40);
extern tgcheap47816 gch_47844;

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45946))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45946* c) {
	addzct_49417((&gch_47844.Zct), c);
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
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

N_NIMCALL(tsym207843*, ithfield_414012)(tnode207813* n, NI field) {
	tsym207843* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 138):
	{
		{
			NI i_414029;
			NI HEX3Atmp_414095;
			NI LOC3;
			NI res_414098;
			i_414029 = 0;
			HEX3Atmp_414095 = 0;
			LOC3 = 0;
			LOC3 = sonslen_210403(n);
			HEX3Atmp_414095 = (NI32)(LOC3 - ((NI) 1));
			res_414098 = ((NI) 0);
			{
				while (1) {
					if (!(res_414098 <= HEX3Atmp_414095)) goto LA5;
					i_414029 = res_414098;
					result = ithfield_414012((*n).kindU.S6.Sons->data[i_414029], (NI32)(field - i_414029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_414098 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[((NI) 0)]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3254));
		}
		LA13: ;
		result = ithfield_414012((*n).kindU.S6.Sons->data[((NI) 0)], (NI32)(field - ((NI) 1)));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_414078;
			NI HEX3Atmp_414103;
			NI LOC20;
			NI res_414106;
			i_414078 = 0;
			HEX3Atmp_414103 = 0;
			LOC20 = 0;
			LOC20 = sonslen_210403(n);
			HEX3Atmp_414103 = (NI32)(LOC20 - ((NI) 1));
			res_414106 = ((NI) 1);
			{
				while (1) {
					if (!(res_414106 <= HEX3Atmp_414103)) goto LA22;
					i_414078 = res_414106;
					switch ((*(*n).kindU.S6.Sons->data[i_414078]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode207813* LOC24;
						LOC24 = 0;
						LOC24 = lastson_210431((*n).kindU.S6.Sons->data[i_414078]);
						result = ithfield_414012(LOC24, (NI32)(field - ((NI) 1)));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_182424((*n).Info, ((NimStringDesc*) &TMP3255));
					}
					break;
					}
					res_414106 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!(field == ((NI) 0))) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_414134)(tnode207813* n, ttype207849* t) {
	ttype207849* x;
	x = skiptypes_211167(t, IL64(211106232576256));
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_414167;
				NI HEX3Atmp_414297;
				NI LOC7;
				NI res_414300;
				i_414167 = 0;
				HEX3Atmp_414297 = 0;
				LOC7 = 0;
				LOC7 = len_208097(n);
				HEX3Atmp_414297 = (LOC7 - 1);
				res_414300 = ((NI) 0);
				{
					while (1) {
						tsym207843* field;
						if (!(res_414300 <= HEX3Atmp_414297)) goto LA9;
						i_414167 = res_414300;
						field = ithfield_414012((*x).N, i_414167);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_414167);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3256));
appendString(LOC14, LOC15);
							globalerror_182382((*n).Info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_414134((*n).kindU.S6.Sons->data[i_414167], (*field).Typ);
						}
						LA10: ;
						res_414300 += ((NI) 1);
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			if (!((*x).Kind == ((NU8) 18))) goto LA18;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_414209;
				NI HEX3Atmp_414305;
				NI LOC21;
				NI res_414308;
				i_414209 = 0;
				HEX3Atmp_414305 = 0;
				LOC21 = 0;
				LOC21 = len_208097(n);
				HEX3Atmp_414305 = (LOC21 - 1);
				res_414308 = ((NI) 0);
				{
					while (1) {
						if (!(res_414308 <= HEX3Atmp_414305)) goto LA23;
						i_414209 = res_414308;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_210377(x);
							if (!(LOC26 <= i_414209)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_414209);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3256));
appendString(LOC29, LOC30);
							globalerror_182382((*n).Info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_414134((*n).kindU.S6.Sons->data[i_414209], (*x).Sons->data[i_414209]);
						}
						LA24: ;
						res_414308 += ((NI) 1);
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			LOC33 = 0;
			LOC33 = ((*x).Kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).Callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA2;
		LA35: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3257));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((*x).Kind == ((NU8) 4) || (*x).Kind == ((NU8) 16) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 27))) goto LA41;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode207813* m_414240;
				m_414240 = 0;
				{
					NI i_414316;
					NI HEX3Atmp_414318;
					NI LOC45;
					NI res_414320;
					i_414316 = 0;
					HEX3Atmp_414318 = 0;
					LOC45 = 0;
					LOC45 = len_208097(n);
					HEX3Atmp_414318 = (LOC45 - 1);
					res_414320 = ((NI) 0);
					{
						while (1) {
							ttype207849* LOC48;
							if (!(res_414320 <= HEX3Atmp_414318)) goto LA47;
							i_414316 = res_414320;
							m_414240 = (*n).kindU.S6.Sons->data[i_414316];
							LOC48 = 0;
							LOC48 = elemtype_236522(x);
							annotatetype_414134(m_414240, LOC48);
							res_414320 += ((NI) 1);
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3258));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((*x).Kind == ((NU8) 19))) goto LA53;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode207813* m_414252;
				m_414252 = 0;
				{
					NI i_414327;
					NI HEX3Atmp_414329;
					NI LOC57;
					NI res_414331;
					i_414327 = 0;
					HEX3Atmp_414329 = 0;
					LOC57 = 0;
					LOC57 = len_208097(n);
					HEX3Atmp_414329 = (LOC57 - 1);
					res_414331 = ((NI) 0);
					{
						while (1) {
							ttype207849* LOC60;
							if (!(res_414331 <= HEX3Atmp_414329)) goto LA59;
							i_414327 = res_414331;
							m_414252 = (*n).kindU.S6.Sons->data[i_414327];
							LOC60 = 0;
							LOC60 = elemtype_236522(x);
							annotatetype_414134(m_414252, LOC60);
							res_414331 += ((NI) 1);
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3259));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((*x).Kind >= ((NU8) 36) && (*x).Kind <= ((NU8) 39))) goto LA65;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3260));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((*x).Kind >= ((NU8) 31) && (*x).Kind <= ((NU8) 44) || (*x).Kind == ((NU8) 1) || (*x).Kind == ((NU8) 2) || (*x).Kind == ((NU8) 14))) goto LA71;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3261));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 29))) goto LA77;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3262));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((*x).Kind == ((NU8) 26) || (*x).Kind == ((NU8) 29) || (*x).Kind == ((NU8) 22) || (*x).Kind == ((NU8) 21) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 25) || (*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 50))) goto LA83;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_182382((*n).Info, ((NimStringDesc*) &TMP3263));
		}
		LA81: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit)(void) {
}

