/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct tsym207843 tsym207843;
typedef struct tgen514010 tgen514010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tdocumentor355007 tdocumentor355007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tnode207813 tnode207813;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct trstgenerator326016 trstgenerator326016;
typedef struct TY326034 TY326034;
typedef struct ttocentry326012 ttocentry326012;
typedef struct trstnode311011 trstnode311011;
typedef struct table326052 table326052;
typedef struct keyvaluepairseq326055 keyvaluepairseq326055;
typedef struct keyvaluepair326058 keyvaluepair326058;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct trstnodeseq311009 trstnodeseq311009;
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
struct  tgen514010  {
  tpasscontext256005 Sup;
tdocumentor355007* Doc;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
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
struct  ttocentry326012  {
trstnode311011* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler312023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler312021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY326042[5];
struct keyvaluepair326058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table326052  {
keyvaluepairseq326055* Data;
NI Counter;
};
struct  trstgenerator326016  {
  TNimObject Sup;
NU8 Target;
stringtableobj131012* Config;
NI Splitafter;
TY326034* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler312023 Findfile;
tmsghandler312021 Msghandler;
NimStringDesc* Filename;
TY326042 Meta;
NimStringDesc* Currentsection;
table326052 Seenindexterms;
};
typedef trope177009* tsections355005[26];
struct  tdocumentor355007  {
  trstgenerator326016 Sup;
trope177009* Moddesc;
NI Id;
tsections355005 Toc;
tsections355005 Section;
NimStringDesc* Indexvalfilename;
NimStringDesc* Analytics;
stringtableobj131012* Seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15409;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15409 raiseAction;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
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
struct  trstnode311011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq311009* Sons;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
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
struct TY326034 {
  TGenericSeq Sup;
  ttocentry326012 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq326055 {
  TGenericSeq Sup;
  keyvaluepair326058 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct trstnodeseq311009 {
  TGenericSeq Sup;
  trstnode311011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4835)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(tdocumentor355007*, newdocumentor_355065)(NimStringDesc* filename, stringtableobj131012* config);
N_NIMCALL(NimStringDesc*, tofilename_181436)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(void, decref_51404)(tcell45947* c);
N_NIMCALL(void, generatedoc_356259)(tdocumentor355007* d, tnode207813* n);
N_NIMCALL(void, writeoutput_358358)(tdocumentor355007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_358338)(tdocumentor355007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4836, "html", 4);
extern TNimType NTI256005; /* TPassContext */
TNimType NTI514010; /* TGen */
extern TNimType NTI355009; /* PDoc */
extern TNimType NTI207811; /* PSym */
TNimType NTI514012; /* PGen */
extern tgcheap47816 gch_47844;
extern stringtableobj131012* gconfigvars_169231;
extern NIM_BOOL gwholeproject_169139;
extern TSafePoint* exchandler_16843;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_16845;
N_NIMCALL(void, TMP4835)(void* p, NI op) {
	tgen514010* a;
	a = (tgen514010*)p;
	nimGCvisit((void*)(*a).Doc, op);
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

static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & ((NI) -4)) | ((NI) 3));
		incl_46667((&gch_47844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51822)(tcell45947* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50223(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51404)(tcell45947* c) {
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
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
		tcell45947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49446(src);
		incref_51822(LOC5);
	}
	LA3: ;
	{
		tcell45947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49446((*dest));
		decref_51404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(tpasscontext256005*, myopen_514069)(tsym207843* module) {
	tpasscontext256005* result;
	tgen514010* g;
	tdocumentor355007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (tgen514010*) newObj((&NTI514012), sizeof(tgen514010));
	(*g).Sup.Sup.m_type = (&NTI514010);
	asgnRefNoCycle((void**) (&(*g).Module), module);
	LOC1 = 0;
	LOC1 = tofilename_181436(((NI32) ((*module).Position)));
	d = newdocumentor_355065(LOC1, gconfigvars_169231);
	(*d).Sup.Hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).Doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tnode207813*, processnode_514057)(tpasscontext256005* c, tnode207813* n) {
	tnode207813* result;
	tgen514010* g;
	result = 0;
	result = n;
	g = ((tgen514010*) (c));
	generatedoc_356259((*g).Doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16843;
	exchandler_16843 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16843 = (*exchandler_16843).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16845;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16845), (*currexception_16845).parent);
}

N_NIMCALL(tnode207813*, close_514018)(tpasscontext256005* p, tnode207813* n) {
	tnode207813* result;
	tgen514010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((tgen514010*) (p));
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4837;
		LOC3 = 0;
		LOC3 = gwholeproject_169139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_181436(((NI32) ((*(*g).Module).Position)));
		writeoutput_358358((*g).Doc, LOC7, ((NimStringDesc*) &TMP4836), usewarning);
		pushSafePoint(&TMP4837);
		TMP4837.status = setjmp(TMP4837.context);
		if (TMP4837.status == 0) {
			generateindex_358338((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4837.status = 0;
				popCurrentException();
			}
		}
		if (TMP4837.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_514108)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP4834[2];
static TNimNode TMP985[3];
NTI514010.size = sizeof(tgen514010);
NTI514010.kind = 17;
NTI514010.base = (&NTI256005);
TMP4834[0] = &TMP985[1];
TMP985[1].kind = 1;
TMP985[1].offset = offsetof(tgen514010, Doc);
TMP985[1].typ = (&NTI355009);
TMP985[1].name = "doc";
TMP4834[1] = &TMP985[2];
TMP985[2].kind = 1;
TMP985[2].offset = offsetof(tgen514010, Module);
TMP985[2].typ = (&NTI207811);
TMP985[2].name = "module";
TMP985[0].len = 2; TMP985[0].kind = 2; TMP985[0].sons = &TMP4834[0];
NTI514010.node = &TMP985[0];
NTI514012.size = sizeof(tgen514010*);
NTI514012.kind = 22;
NTI514012.base = (&NTI514010);
NTI514012.marker = TMP4835;
}

