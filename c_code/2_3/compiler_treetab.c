/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnodetable208873 tnodetable208873;
typedef struct tnode208813 tnode208813;
typedef struct tnodepairseq208871 tnodepairseq208871;
typedef struct tnodepair208869 tnodepair208869;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype208849 ttype208849;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct NimStringDesc NimStringDesc;
typedef struct tsym208843 tsym208843;
typedef struct tident185021 tident185021;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tlib208831 tlib208831;
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
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  tnodepair208869  {
NI H;
tnode208813* Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo181338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
};
struct  tloc208827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208849* T;
trope178009* R;
trope178009* Heaproot;
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
struct  tnodetable208873  {
NI Counter;
tnodepairseq208871* Data;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodepairseq208871 {
  TGenericSeq Sup;
  tnodepair208869 data[SEQ_DECL_SIZE];
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_258027)(tnode208813* n);
static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val);
N_NIMCALL(NI, hash_128839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_211403)(tnode208813* n);
N_NIMCALL(NI, nodetablerawget_258211)(tnodetable208873 t, NI k, tnode208813* key);
N_NIMCALL(NIM_BOOL, treesequivalent_258112)(tnode208813* a, tnode208813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_242098)(ttype208849* a, ttype208849* b, NU8 flags);
static N_INLINE(NI, nexttry_215256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_215249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_258259)(tnodepairseq208871** data, NI k, tnode208813* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI208871; /* TNodePairSeq */
extern tgcheap47816 gch_47844;

static N_INLINE(NI, HEX21HEX26_128025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU64)(h) + (NU64)(val));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashtree_258027)(tnode208813* n) {
	NI result;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).Kind));
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_128025(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_128025(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = ((IL64(-9223372036854775807) - IL64(1)) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.Intval <= IL64(9223372036854775807));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_128025(result, ((NI) ((*n).kindU.S1.Intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+06 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+06);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_128025(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			NI LOC27;
			if (!!((*n).kindU.S3.Strval == 0)) goto LA25;
			LOC27 = 0;
			LOC27 = hash_128839((*n).kindU.S3.Strval);
			result = HEX21HEX26_128025(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_258082;
			NI HEX3Atmp_258090;
			NI LOC30;
			NI res_258093;
			i_258082 = 0;
			HEX3Atmp_258090 = 0;
			LOC30 = 0;
			LOC30 = sonslen_211403(n);
			HEX3Atmp_258090 = (NI64)(LOC30 - ((NI) 1));
			res_258093 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_258093 <= HEX3Atmp_258090)) goto LA32;
					i_258082 = res_258093;
					LOC33 = 0;
					LOC33 = hashtree_258027((*n).kindU.S6.Sons->data[i_258082]);
					result = HEX21HEX26_128025(result, LOC33);
					res_258093 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, treesequivalent_258112)(tnode208813* a, tnode208813* b) {
	NIM_BOOL result;
{	result = 0;
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
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
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
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_211403(a);
				LOC22 = 0;
				LOC22 = sonslen_211403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_258185;
					NI HEX3Atmp_258189;
					NI LOC26;
					NI res_258192;
					i_258185 = 0;
					HEX3Atmp_258189 = 0;
					LOC26 = 0;
					LOC26 = sonslen_211403(a);
					HEX3Atmp_258189 = (NI64)(LOC26 - ((NI) 1));
					res_258192 = ((NI) 0);
					{
						while (1) {
							if (!(res_258192 <= HEX3Atmp_258189)) goto LA28;
							i_258185 = res_258192;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_258112((*a).kindU.S6.Sons->data[i_258185], (*b).kindU.S6.Sons->data[i_258185]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_258192 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_242098((*a).Typ, (*b).Typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_215256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_258211)(tnodetable208873 t, NI k, tnode208813* key) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(k & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.Data->data[h].H == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_258112(t.Data->data[h].Key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_215256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
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

N_NIMCALL(void, nodetablerawinsert_258259)(tnodepairseq208871** data, NI k, tnode208813* key, NI val) {
	NI h;
	h = (NI)(k & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_215256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].H = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].Key), key);
	(*data)->data[h].Val = val;
}

N_NIMCALL(NI, nodetabletestorset_258698)(tnodetable208873* t, tnode208813* key, NI val) {
	NI result;
	tnodepairseq208871* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_258027(key);
	index = nodetablerawget_258211((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tnodepairseq208871* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_215249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tnodepairseq208871*) newSeq((&NTI208871), (NI64)((*t).Data->Sup.len * ((NI) 2)));
			{
				NI i_258839;
				NI HEX3Atmp_258876;
				NI res_258879;
				i_258839 = 0;
				HEX3Atmp_258876 = 0;
				HEX3Atmp_258876 = ((*t).Data->Sup.len-1);
				res_258879 = ((NI) 0);
				{
					while (1) {
						if (!(res_258879 <= HEX3Atmp_258876)) goto LA13;
						i_258839 = res_258879;
						{
							if (!!(((*t).Data->data[i_258839].Key == NIM_NIL))) goto LA16;
							nodetablerawinsert_258259((&n), (*t).Data->data[i_258839].H, (*t).Data->data[i_258839].Key, (*t).Data->data[i_258839].Val);
						}
						LA16: ;
						res_258879 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) (&(*t).Data), n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_258259((&(*t).Data), k, key, val);
		result = val;
		(*t).Counter += ((NI) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treetabDatInit)(void) {
}

