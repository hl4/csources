/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trope177009 trope177009;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct tsym207843 tsym207843;
typedef struct tgen513016 tgen513016;
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
typedef struct tnode207813 tnode207813;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen513016  {
  tpasscontext256005 Sup;
tsym207843* Module;
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
typedef trope177009* TY497453[2];
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
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
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4913)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(NimStringDesc*, getmodulename_266018)(tnode207813* n);
N_NIMCALL(void, adddependencyaux_513028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_177115)(trope177009** c, NimStringDesc* frmt, trope177009** args, NI argsLen0);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(tnode207813*, adddotdependency_513043)(tpasscontext256005* c, tnode207813* n);
N_NIMCALL(void, writerope_178623)(trope177009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope177009*, ropef_177107)(NimStringDesc* frmt, trope177009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4914, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4915, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4916, "", 0);
STRING_LITERAL(TMP4917, "dot", 3);
trope177009* gdotgraph_513023;
extern TNimType NTI256005; /* TPassContext */
TNimType NTI513016; /* TGen */
extern TNimType NTI207811; /* PSym */
TNimType NTI513018; /* PGen */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP4913)(void* p, NI op) {
	tgen513016* a;
	a = (tgen513016*)p;
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext256005*, myopen_513135)(tsym207843* module) {
	tpasscontext256005* result;
	tgen513016* g;
	result = 0;
	g = 0;
	g = (tgen513016*) newObj((&NTI513018), sizeof(tgen513016));
	(*g).Sup.Sup.m_type = (&NTI513016);
	asgnRefNoCycle((void**) (&(*g).Module), module);
	result = &g->Sup;
	return result;
}

N_NIMCALL(void, adddependencyaux_513028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY497453 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = torope_177076(importing);
	LOC1[1] = torope_177076(imported);
	appf_177115(&gdotgraph_513023, ((NimStringDesc*) &TMP4914), LOC1, 2);
}

N_NIMCALL(tnode207813*, adddotdependency_513043)(tpasscontext256005* c, tnode207813* n) {
	tnode207813* result;
	tgen513016* g;
	result = 0;
	result = n;
	g = ((tgen513016*) (c));
	switch ((*n).Kind) {
	case ((NU8) 116):
	{
		{
			NI i_513061;
			NI HEX3Atmp_513083;
			NI LOC3;
			NI res_513086;
			i_513061 = 0;
			HEX3Atmp_513083 = 0;
			LOC3 = 0;
			LOC3 = sonslen_210403(n);
			HEX3Atmp_513083 = (NI32)(LOC3 - ((NI) 1));
			res_513086 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_513086 <= HEX3Atmp_513083)) goto LA5;
					i_513061 = res_513086;
					imported = getmodulename_266018((*n).kindU.S6.Sons->data[i_513061]);
					adddependencyaux_513028((*(*(*g).Module).Name).S, imported);
					res_513086 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		imported = getmodulename_266018((*n).kindU.S6.Sons->data[((NI) 0)]);
		adddependencyaux_513028((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_513080;
			NI HEX3Atmp_513091;
			NI LOC9;
			NI res_513094;
			i_513080 = 0;
			HEX3Atmp_513091 = 0;
			LOC9 = 0;
			LOC9 = sonslen_210403(n);
			HEX3Atmp_513091 = (NI32)(LOC9 - ((NI) 1));
			res_513094 = ((NI) 0);
			{
				while (1) {
					tnode207813* LOC12;
					if (!(res_513094 <= HEX3Atmp_513091)) goto LA11;
					i_513080 = res_513094;
					LOC12 = 0;
					LOC12 = adddotdependency_513043(c, (*n).kindU.S6.Sons->data[i_513080]);
					res_513094 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(void, generatedot_513009)(NimStringDesc* project) {
	TY497453 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope177009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4916));
	LOC1[0] = torope_177076(LOC3);
	LOC1[1] = gdotgraph_513023;
	LOC4 = 0;
	LOC4 = ropef_177107(((NimStringDesc*) &TMP4915), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4917));
	writerope_178623(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, compiler_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_dependsDatInit)(void) {
static TNimNode TMP983[1];
NTI513016.size = sizeof(tgen513016);
NTI513016.kind = 17;
NTI513016.base = (&NTI256005);
TMP983[0].kind = 1;
TMP983[0].offset = offsetof(tgen513016, Module);
TMP983[0].typ = (&NTI207811);
TMP983[0].name = "module";
NTI513016.node = &TMP983[0];
NTI513018.size = sizeof(tgen513016*);
NTI513018.kind = 22;
NTI513018.base = (&NTI513016);
NTI513018.marker = TMP4913;
}

