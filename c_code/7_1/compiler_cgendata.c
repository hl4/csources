/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope177009 trope177009;
typedef struct TY463151 TY463151;
typedef struct tcgen463035 tcgen463035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct TNimObject TNimObject;
typedef struct tsym207843 tsym207843;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct tidobj184015 tidobj184015;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc463031 tcproc463031;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tnodetable207873 tnodetable207873;
typedef struct tnodepairseq207871 tnodepairseq207871;
typedef struct tnodepair207869 tnodepair207869;
typedef struct tnode207813 tnode207813;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY180351 TY180351;
typedef struct TY463102 TY463102;
typedef struct tblock463029 tblock463029;
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
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tloc207827 tloc207827;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope177009* tcfilesections463019[18];
struct  tidpair207857  {
tidobj184015* Key;
TNimObject* Val;
};
struct  tidtable207861  {
NI Counter;
tidpairseq207859* Data;
};
struct  intset204056  {
NI Counter;
NI Max;
ttrunk204052* Head;
ttrunkseq204054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair207869  {
NI H;
tnode207813* Key;
NI Val;
};
struct  tnodetable207873  {
NI Counter;
tnodepairseq207871* Data;
};
typedef trope177009* TY463139[10];
struct  tcgen463035  {
  tpasscontext256005 Sup;
tsym207843* Module;
NimStringDesc* Filename;
tcfilesections463019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable207861 Typecache;
tidtable207861 Forwtypecache;
intset204056 Declaredthings;
intset204056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset204056 Typeinfomarker;
tcproc463031* Initproc;
tcproc463031* Postinitproc;
tcproc463031* Preinitproc;
ttypeseq207845* Typestack;
tnodetable207873 Datacache;
tsymseq207815* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY463139 Extensionloaders;
trope177009* Injectstmt;
};
typedef trope177009* tcprocsections463023[3];
struct  tblock463029  {
NI Id;
trope177009* Label;
tcprocsections463023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc463031  {
tsym207843* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq207807* Nestedtrystmts;
NI Inexceptblock;
TY180351* Finallysafepoints;
NI Labels;
TY463102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen463035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope177009* Gcframetype;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY27020[16];
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27020 Bits;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
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
struct TY463151 {
  TGenericSeq Sup;
  tcgen463035* data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct tnodepairseq207871 {
  TGenericSeq Sup;
  tnodepair207869 data[SEQ_DECL_SIZE];
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY180351 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY463102 {
  TGenericSeq Sup;
  tblock463029 data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP969)(void* p, NI op);
N_NIMCALL(void, TMP970)(void* p, NI op);
N_NIMCALL(void, TMP974)(void* p, NI op);
N_NIMCALL(void, TMP975)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51404)(tcell45947* c);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope177009* mainmodprocs_463146;
trope177009* mainmodinit_463147;
trope177009* othermodsinit_463148;
trope177009* maindatinit_463149;
trope177009* gmapping_463150;
TY463151* gmodules_463170;
extern TNimType NTI256005; /* TPassContext */
TNimType NTI463035; /* TCGen */
extern TNimType NTI207811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI177007; /* PRope */
TNimType NTI463019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI207861; /* TIdTable */
extern TNimType NTI204056; /* IntSet */
extern TNimType NTI127028; /* TLinkedList */
TNimType NTI463031; /* TCProc */
extern TNimType NTI207807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI180351; /* seq[PRope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI463029; /* TBlock */
TNimType NTI463023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI463102; /* seq[TBlock] */
extern TNimType NTI169016; /* TOptions */
TNimType NTI463027; /* BProc */
extern TNimType NTI207845; /* TTypeSeq */
extern TNimType NTI207873; /* TNodeTable */
extern TNimType NTI207815; /* TSymSeq */
TNimType NTI463139; /* array[48..57, PRope] */
TNimType NTI463025; /* BModule */
TNimType NTI463151; /* seq[BModule] */
extern tgcheap47816 gch_47844;
NI gforwardedprocscounter_463171;
extern NU32 goptions_169126;
N_NIMCALL(void, TMP969)(void* p, NI op) {
	TY463102* a;
	NI LOC1;
	NI LOC2;
	a = (TY463102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP970)(void* p, NI op) {
	tcproc463031* a;
	a = (tcproc463031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP974)(void* p, NI op) {
	tcgen463035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen463035*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP975)(void* p, NI op) {
	TY463151* a;
	NI LOC1;
	a = (TY463151*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_51004)(tcell45947* c) {
	addzct_49417((&gch_47844.Zct), c);
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

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45947))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45947* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49446(p);
	decref_51404(LOC1);
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

N_NIMCALL(tcproc463031*, newproc_463227)(tsym207843* prc, tcgen463035* module) {
	tcproc463031* result;
	result = 0;
	result = (tcproc463031*) newObj((&NTI463027), sizeof(tcproc463031));
	asgnRefNoCycle((void**) (&(*result).Prc), prc);
	asgnRef((void**) (&(*result).Module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_169126;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY463102*) newSeqRC1((&NTI463102), ((NI) 1));
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq207807*) newSeqRC1((&NTI207807), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY180351*) newSeqRC1((&NTI180351), 0);
	return result;
}

N_NIMCALL(tcgen463035*, bmod_463216)(tsym207843* module) {
	tcgen463035* result;
	result = 0;
	result = gmodules_463170->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	if (gmodules_463170) nimGCunref(gmodules_463170);
	gmodules_463170 = (TY463151*) newSeqRC1((&NTI463151), 0);
	gforwardedprocscounter_463171 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP961[29];
static TNimNode* TMP967[16];
static TNimNode* TMP968[7];
static TNimNode TMP959[55];
NTI463035.size = sizeof(tcgen463035);
NTI463035.kind = 17;
NTI463035.base = (&NTI256005);
TMP961[0] = &TMP959[1];
TMP959[1].kind = 1;
TMP959[1].offset = offsetof(tcgen463035, Module);
TMP959[1].typ = (&NTI207811);
TMP959[1].name = "module";
TMP961[1] = &TMP959[2];
TMP959[2].kind = 1;
TMP959[2].offset = offsetof(tcgen463035, Filename);
TMP959[2].typ = (&NTI149);
TMP959[2].name = "filename";
TMP961[2] = &TMP959[3];
NTI463019.size = sizeof(tcfilesections463019);
NTI463019.kind = 16;
NTI463019.base = (&NTI177007);
NTI463019.flags = 2;
TMP959[3].kind = 1;
TMP959[3].offset = offsetof(tcgen463035, S);
TMP959[3].typ = (&NTI463019);
TMP959[3].name = "s";
TMP961[3] = &TMP959[4];
TMP959[4].kind = 1;
TMP959[4].offset = offsetof(tcgen463035, Preventstacktrace);
TMP959[4].typ = (&NTI138);
TMP959[4].name = "preventStackTrace";
TMP961[4] = &TMP959[5];
TMP959[5].kind = 1;
TMP959[5].offset = offsetof(tcgen463035, Usesthreadvars);
TMP959[5].typ = (&NTI138);
TMP959[5].name = "usesThreadVars";
TMP961[5] = &TMP959[6];
TMP959[6].kind = 1;
TMP959[6].offset = offsetof(tcgen463035, Framedeclared);
TMP959[6].typ = (&NTI138);
TMP959[6].name = "frameDeclared";
TMP961[6] = &TMP959[7];
TMP959[7].kind = 1;
TMP959[7].offset = offsetof(tcgen463035, Isheaderfile);
TMP959[7].typ = (&NTI138);
TMP959[7].name = "isHeaderFile";
TMP961[7] = &TMP959[8];
TMP959[8].kind = 1;
TMP959[8].offset = offsetof(tcgen463035, Includesstringh);
TMP959[8].typ = (&NTI138);
TMP959[8].name = "includesStringh";
TMP961[8] = &TMP959[9];
TMP959[9].kind = 1;
TMP959[9].offset = offsetof(tcgen463035, Objhaskidsvalid);
TMP959[9].typ = (&NTI138);
TMP959[9].name = "objHasKidsValid";
TMP961[9] = &TMP959[10];
TMP959[10].kind = 1;
TMP959[10].offset = offsetof(tcgen463035, Cfilename);
TMP959[10].typ = (&NTI149);
TMP959[10].name = "cfilename";
TMP961[10] = &TMP959[11];
TMP959[11].kind = 1;
TMP959[11].offset = offsetof(tcgen463035, Typecache);
TMP959[11].typ = (&NTI207861);
TMP959[11].name = "typeCache";
TMP961[11] = &TMP959[12];
TMP959[12].kind = 1;
TMP959[12].offset = offsetof(tcgen463035, Forwtypecache);
TMP959[12].typ = (&NTI207861);
TMP959[12].name = "forwTypeCache";
TMP961[12] = &TMP959[13];
TMP959[13].kind = 1;
TMP959[13].offset = offsetof(tcgen463035, Declaredthings);
TMP959[13].typ = (&NTI204056);
TMP959[13].name = "declaredThings";
TMP961[13] = &TMP959[14];
TMP959[14].kind = 1;
TMP959[14].offset = offsetof(tcgen463035, Declaredprotos);
TMP959[14].typ = (&NTI204056);
TMP959[14].name = "declaredProtos";
TMP961[14] = &TMP959[15];
TMP959[15].kind = 1;
TMP959[15].offset = offsetof(tcgen463035, Headerfiles);
TMP959[15].typ = (&NTI127028);
TMP959[15].name = "headerFiles";
TMP961[15] = &TMP959[16];
TMP959[16].kind = 1;
TMP959[16].offset = offsetof(tcgen463035, Typeinfomarker);
TMP959[16].typ = (&NTI204056);
TMP959[16].name = "typeInfoMarker";
TMP961[16] = &TMP959[17];
NTI463031.size = sizeof(tcproc463031);
NTI463031.kind = 18;
NTI463031.base = 0;
TMP967[0] = &TMP959[19];
TMP959[19].kind = 1;
TMP959[19].offset = offsetof(tcproc463031, Prc);
TMP959[19].typ = (&NTI207811);
TMP959[19].name = "prc";
TMP967[1] = &TMP959[20];
TMP959[20].kind = 1;
TMP959[20].offset = offsetof(tcproc463031, Beforeretneeded);
TMP959[20].typ = (&NTI138);
TMP959[20].name = "beforeRetNeeded";
TMP967[2] = &TMP959[21];
TMP959[21].kind = 1;
TMP959[21].offset = offsetof(tcproc463031, Threadvaraccessed);
TMP959[21].typ = (&NTI138);
TMP959[21].name = "threadVarAccessed";
TMP967[3] = &TMP959[22];
TMP959[22].kind = 1;
TMP959[22].offset = offsetof(tcproc463031, Nestedtrystmts);
TMP959[22].typ = (&NTI207807);
TMP959[22].name = "nestedTryStmts";
TMP967[4] = &TMP959[23];
TMP959[23].kind = 1;
TMP959[23].offset = offsetof(tcproc463031, Inexceptblock);
TMP959[23].typ = (&NTI108);
TMP959[23].name = "inExceptBlock";
TMP967[5] = &TMP959[24];
TMP959[24].kind = 1;
TMP959[24].offset = offsetof(tcproc463031, Finallysafepoints);
TMP959[24].typ = (&NTI180351);
TMP959[24].name = "finallySafePoints";
TMP967[6] = &TMP959[25];
TMP959[25].kind = 1;
TMP959[25].offset = offsetof(tcproc463031, Labels);
TMP959[25].typ = (&NTI3407);
TMP959[25].name = "labels";
TMP967[7] = &TMP959[26];
NTI463029.size = sizeof(tblock463029);
NTI463029.kind = 18;
NTI463029.base = 0;
NTI463029.flags = 2;
TMP968[0] = &TMP959[28];
TMP959[28].kind = 1;
TMP959[28].offset = offsetof(tblock463029, Id);
TMP959[28].typ = (&NTI108);
TMP959[28].name = "id";
TMP968[1] = &TMP959[29];
TMP959[29].kind = 1;
TMP959[29].offset = offsetof(tblock463029, Label);
TMP959[29].typ = (&NTI177007);
TMP959[29].name = "label";
TMP968[2] = &TMP959[30];
NTI463023.size = sizeof(tcprocsections463023);
NTI463023.kind = 16;
NTI463023.base = (&NTI177007);
NTI463023.flags = 2;
TMP959[30].kind = 1;
TMP959[30].offset = offsetof(tblock463029, Sections);
TMP959[30].typ = (&NTI463023);
TMP959[30].name = "sections";
TMP968[3] = &TMP959[31];
TMP959[31].kind = 1;
TMP959[31].offset = offsetof(tblock463029, Isloop);
TMP959[31].typ = (&NTI138);
TMP959[31].name = "isLoop";
TMP968[4] = &TMP959[32];
TMP959[32].kind = 1;
TMP959[32].offset = offsetof(tblock463029, Nestedtrystmts);
TMP959[32].typ = (&NTI112);
TMP959[32].name = "nestedTryStmts";
TMP968[5] = &TMP959[33];
TMP959[33].kind = 1;
TMP959[33].offset = offsetof(tblock463029, Nestedexceptstmts);
TMP959[33].typ = (&NTI112);
TMP959[33].name = "nestedExceptStmts";
TMP968[6] = &TMP959[34];
TMP959[34].kind = 1;
TMP959[34].offset = offsetof(tblock463029, Framelen);
TMP959[34].typ = (&NTI112);
TMP959[34].name = "frameLen";
TMP959[27].len = 7; TMP959[27].kind = 2; TMP959[27].sons = &TMP968[0];
NTI463029.node = &TMP959[27];
NTI463102.size = sizeof(TY463102*);
NTI463102.kind = 24;
NTI463102.base = (&NTI463029);
NTI463102.flags = 2;
NTI463102.marker = TMP969;
TMP959[26].kind = 1;
TMP959[26].offset = offsetof(tcproc463031, Blocks);
TMP959[26].typ = (&NTI463102);
TMP959[26].name = "blocks";
TMP967[8] = &TMP959[35];
TMP959[35].kind = 1;
TMP959[35].offset = offsetof(tcproc463031, Breakidx);
TMP959[35].typ = (&NTI108);
TMP959[35].name = "breakIdx";
TMP967[9] = &TMP959[36];
TMP959[36].kind = 1;
TMP959[36].offset = offsetof(tcproc463031, Options);
TMP959[36].typ = (&NTI169016);
TMP959[36].name = "options";
TMP967[10] = &TMP959[37];
TMP959[37].kind = 1;
TMP959[37].offset = offsetof(tcproc463031, Maxframelen);
TMP959[37].typ = (&NTI108);
TMP959[37].name = "maxFrameLen";
TMP967[11] = &TMP959[38];
TMP959[38].kind = 1;
TMP959[38].offset = offsetof(tcproc463031, Module);
TMP959[38].typ = (&NTI463025);
TMP959[38].name = "module";
TMP967[12] = &TMP959[39];
TMP959[39].kind = 1;
TMP959[39].offset = offsetof(tcproc463031, Withinloop);
TMP959[39].typ = (&NTI108);
TMP959[39].name = "withinLoop";
TMP967[13] = &TMP959[40];
TMP959[40].kind = 1;
TMP959[40].offset = offsetof(tcproc463031, Splitdecls);
TMP959[40].typ = (&NTI108);
TMP959[40].name = "splitDecls";
TMP967[14] = &TMP959[41];
TMP959[41].kind = 1;
TMP959[41].offset = offsetof(tcproc463031, Gcframeid);
TMP959[41].typ = (&NTI3407);
TMP959[41].name = "gcFrameId";
TMP967[15] = &TMP959[42];
TMP959[42].kind = 1;
TMP959[42].offset = offsetof(tcproc463031, Gcframetype);
TMP959[42].typ = (&NTI177007);
TMP959[42].name = "gcFrameType";
TMP959[18].len = 16; TMP959[18].kind = 2; TMP959[18].sons = &TMP967[0];
NTI463031.node = &TMP959[18];
NTI463027.size = sizeof(tcproc463031*);
NTI463027.kind = 22;
NTI463027.base = (&NTI463031);
NTI463027.marker = TMP970;
TMP959[17].kind = 1;
TMP959[17].offset = offsetof(tcgen463035, Initproc);
TMP959[17].typ = (&NTI463027);
TMP959[17].name = "initProc";
TMP961[17] = &TMP959[43];
TMP959[43].kind = 1;
TMP959[43].offset = offsetof(tcgen463035, Postinitproc);
TMP959[43].typ = (&NTI463027);
TMP959[43].name = "postInitProc";
TMP961[18] = &TMP959[44];
TMP959[44].kind = 1;
TMP959[44].offset = offsetof(tcgen463035, Preinitproc);
TMP959[44].typ = (&NTI463027);
TMP959[44].name = "preInitProc";
TMP961[19] = &TMP959[45];
TMP959[45].kind = 1;
TMP959[45].offset = offsetof(tcgen463035, Typestack);
TMP959[45].typ = (&NTI207845);
TMP959[45].name = "typeStack";
TMP961[20] = &TMP959[46];
TMP959[46].kind = 1;
TMP959[46].offset = offsetof(tcgen463035, Datacache);
TMP959[46].typ = (&NTI207873);
TMP959[46].name = "dataCache";
TMP961[21] = &TMP959[47];
TMP959[47].kind = 1;
TMP959[47].offset = offsetof(tcgen463035, Forwardedprocs);
TMP959[47].typ = (&NTI207815);
TMP959[47].name = "forwardedProcs";
TMP961[22] = &TMP959[48];
TMP959[48].kind = 1;
TMP959[48].offset = offsetof(tcgen463035, Typenodes);
TMP959[48].typ = (&NTI108);
TMP959[48].name = "typeNodes";
TMP961[23] = &TMP959[49];
TMP959[49].kind = 1;
TMP959[49].offset = offsetof(tcgen463035, Nimtypes);
TMP959[49].typ = (&NTI108);
TMP959[49].name = "nimTypes";
TMP961[24] = &TMP959[50];
TMP959[50].kind = 1;
TMP959[50].offset = offsetof(tcgen463035, Typenodesname);
TMP959[50].typ = (&NTI177007);
TMP959[50].name = "typeNodesName";
TMP961[25] = &TMP959[51];
TMP959[51].kind = 1;
TMP959[51].offset = offsetof(tcgen463035, Nimtypesname);
TMP959[51].typ = (&NTI177007);
TMP959[51].name = "nimTypesName";
TMP961[26] = &TMP959[52];
TMP959[52].kind = 1;
TMP959[52].offset = offsetof(tcgen463035, Labels);
TMP959[52].typ = (&NTI3407);
TMP959[52].name = "labels";
TMP961[27] = &TMP959[53];
NTI463139.size = sizeof(TY463139);
NTI463139.kind = 16;
NTI463139.base = (&NTI177007);
NTI463139.flags = 2;
TMP959[53].kind = 1;
TMP959[53].offset = offsetof(tcgen463035, Extensionloaders);
TMP959[53].typ = (&NTI463139);
TMP959[53].name = "extensionLoaders";
TMP961[28] = &TMP959[54];
TMP959[54].kind = 1;
TMP959[54].offset = offsetof(tcgen463035, Injectstmt);
TMP959[54].typ = (&NTI177007);
TMP959[54].name = "injectStmt";
TMP959[0].len = 29; TMP959[0].kind = 2; TMP959[0].sons = &TMP961[0];
NTI463035.node = &TMP959[0];
NTI463025.size = sizeof(tcgen463035*);
NTI463025.kind = 22;
NTI463025.base = (&NTI463035);
NTI463025.marker = TMP974;
NTI463151.size = sizeof(TY463151*);
NTI463151.kind = 24;
NTI463151.base = (&NTI463025);
NTI463151.marker = TMP975;
}

