/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct tpasscontext257005 tpasscontext257005;
typedef struct tsym208843 tsym208843;
typedef struct tgen515010 tgen515010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tdocumentor356007 tdocumentor356007;
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
typedef struct tidobj185015 tidobj185015;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct ttype208849 ttype208849;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct tnode208813 tnode208813;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tlib208831 tlib208831;
typedef struct trstgenerator327016 trstgenerator327016;
typedef struct TY327034 TY327034;
typedef struct ttocentry327012 ttocentry327012;
typedef struct trstnode312011 trstnode312011;
typedef struct table327052 table327052;
typedef struct keyvaluepairseq327055 keyvaluepairseq327055;
typedef struct keyvaluepair327058 keyvaluepair327058;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct trstnodeseq312009 trstnodeseq312009;
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
struct  tpasscontext257005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen515010  {
  tpasscontext257005 Sup;
tdocumentor356007* Doc;
tsym208843* Module;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
};
struct  tlineinfo181338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  ttocentry327012  {
trstnode312011* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler313023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler313021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY327042[5];
struct keyvaluepair327058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table327052  {
keyvaluepairseq327055* Data;
NI Counter;
};
struct  trstgenerator327016  {
  TNimObject Sup;
NU8 Target;
stringtableobj131012* Config;
NI Splitafter;
TY327034* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler313023 Findfile;
tmsghandler313021 Msghandler;
NimStringDesc* Filename;
TY327042 Meta;
NimStringDesc* Currentsection;
table327052 Seenindexterms;
};
typedef trope178009* tsections356005[26];
struct  tdocumentor356007  {
  trstgenerator327016 Sup;
trope178009* Moddesc;
NI Id;
tsections356005 Toc;
tsections356005 Section;
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
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
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
struct  trstnode312011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq312009* Sons;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
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
struct TY327034 {
  TGenericSeq Sup;
  ttocentry327012 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq327055 {
  TGenericSeq Sup;
  keyvaluepair327058 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct trstnodeseq312009 {
  TGenericSeq Sup;
  trstnode312011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4837)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(tdocumentor356007*, newdocumentor_356065)(NimStringDesc* filename, stringtableobj131012* config);
N_NIMCALL(NimStringDesc*, tofilename_182433)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(void, decref_51404)(tcell45947* c);
N_NIMCALL(void, generatedoc_357259)(tdocumentor356007* d, tnode208813* n);
N_NIMCALL(void, writeoutput_359358)(tdocumentor356007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_359338)(tdocumentor356007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4838, "html", 4);
extern TNimType NTI257005; /* TPassContext */
TNimType NTI515010; /* TGen */
extern TNimType NTI356009; /* PDoc */
extern TNimType NTI208811; /* PSym */
TNimType NTI515012; /* PGen */
extern tgcheap47816 gch_47844;
extern stringtableobj131012* gconfigvars_170231;
extern NIM_BOOL gwholeproject_170139;
extern TSafePoint* exchandler_16843;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_16845;
N_NIMCALL(void, TMP4837)(void* p, NI op) {
	tgen515010* a;
	a = (tgen515010*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
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

static N_INLINE(void, decref_51404)(tcell45947* c) {
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

N_NIMCALL(tpasscontext257005*, myopen_515068)(tsym208843* module) {
	tpasscontext257005* result;
	tgen515010* g;
	tdocumentor356007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (tgen515010*) newObj((&NTI515012), sizeof(tgen515010));
	(*g).Sup.Sup.m_type = (&NTI515010);
	asgnRefNoCycle((void**) (&(*g).Module), module);
	LOC1 = 0;
	LOC1 = tofilename_182433(((NI32) ((*module).Position)));
	d = newdocumentor_356065(LOC1, gconfigvars_170231);
	(*d).Sup.Hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).Doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tnode208813*, processnode_515056)(tpasscontext257005* c, tnode208813* n) {
	tnode208813* result;
	tgen515010* g;
	result = 0;
	result = n;
	g = ((tgen515010*) (c));
	generatedoc_357259((*g).Doc, n);
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

N_NIMCALL(tnode208813*, close_515018)(tpasscontext257005* p, tnode208813* n) {
	tnode208813* result;
	tgen515010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((tgen515010*) (p));
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4839;
		LOC3 = 0;
		LOC3 = gwholeproject_170139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_182433(((NI32) ((*(*g).Module).Position)));
		writeoutput_359358((*g).Doc, LOC7, ((NimStringDesc*) &TMP4838), usewarning);
		pushSafePoint(&TMP4839);
		TMP4839.status = setjmp(TMP4839.context);
		if (TMP4839.status == 0) {
			generateindex_359338((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4839.status = 0;
				popCurrentException();
			}
		}
		if (TMP4839.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_515106)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP4836[2];
static TNimNode TMP987[3];
NTI515010.size = sizeof(tgen515010);
NTI515010.kind = 17;
NTI515010.base = (&NTI257005);
TMP4836[0] = &TMP987[1];
TMP987[1].kind = 1;
TMP987[1].offset = offsetof(tgen515010, Doc);
TMP987[1].typ = (&NTI356009);
TMP987[1].name = "doc";
TMP4836[1] = &TMP987[2];
TMP987[2].kind = 1;
TMP987[2].offset = offsetof(tgen515010, Module);
TMP987[2].typ = (&NTI208811);
TMP987[2].name = "module";
TMP987[0].len = 2; TMP987[0].kind = 2; TMP987[0].sons = &TMP4836[0];
NTI515010.node = &TMP987[0];
NTI515012.size = sizeof(tgen515010*);
NTI515012.kind = 22;
NTI515012.base = (&NTI515010);
NTI515012.marker = TMP4837;
}

