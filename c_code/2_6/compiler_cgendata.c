/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope178009 trope178009;
typedef struct TY464151 TY464151;
typedef struct tcgen464035 tcgen464035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext257005 tpasscontext257005;
typedef struct TNimObject TNimObject;
typedef struct tsym208843 tsym208843;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable208861 tidtable208861;
typedef struct tidpairseq208859 tidpairseq208859;
typedef struct tidpair208857 tidpair208857;
typedef struct tidobj185015 tidobj185015;
typedef struct intset205056 intset205056;
typedef struct ttrunk205052 ttrunk205052;
typedef struct ttrunkseq205054 ttrunkseq205054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc464031 tcproc464031;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct ttype208849 ttype208849;
typedef struct tnodetable208873 tnodetable208873;
typedef struct tnodepairseq208871 tnodepairseq208871;
typedef struct tnodepair208869 tnodepair208869;
typedef struct tnode208813 tnode208813;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct TY181351 TY181351;
typedef struct TY464102 TY464102;
typedef struct tblock464029 tblock464029;
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
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct tloc208827 tloc208827;
typedef struct tlib208831 tlib208831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY208933 TY208933;
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
struct  tpasscontext257005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope178009* tcfilesections464019[18];
struct  tidpair208857  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable208861  {
NI Counter;
tidpairseq208859* Data;
};
struct  intset205056  {
NI Counter;
NI Max;
ttrunk205052* Head;
ttrunkseq205054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair208869  {
NI H;
tnode208813* Key;
NI Val;
};
struct  tnodetable208873  {
NI Counter;
tnodepairseq208871* Data;
};
typedef trope178009* TY464139[10];
struct  tcgen464035  {
  tpasscontext257005 Sup;
tsym208843* Module;
NimStringDesc* Filename;
tcfilesections464019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable208861 Typecache;
tidtable208861 Forwtypecache;
intset205056 Declaredthings;
intset205056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset205056 Typeinfomarker;
tcproc464031* Initproc;
tcproc464031* Postinitproc;
tcproc464031* Preinitproc;
ttypeseq208845* Typestack;
tnodetable208873 Datacache;
tsymseq208815* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY464139 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections464023[3];
struct  tblock464029  {
NI Id;
trope178009* Label;
tcprocsections464023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc464031  {
tsym208843* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq208807* Nestedtrystmts;
NI Inexceptblock;
TY181351* Finallysafepoints;
NI Labels;
TY464102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen464035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope178009* Gcframetype;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY27020[16];
struct  ttrunk205052  {
ttrunk205052* Next;
NI Key;
TY27020 Bits;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
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
struct  tlib208831  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode208813* Path;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct TY464151 {
  TGenericSeq Sup;
  tcgen464035* data[SEQ_DECL_SIZE];
};
struct tidpairseq208859 {
  TGenericSeq Sup;
  tidpair208857 data[SEQ_DECL_SIZE];
};
struct ttrunkseq205054 {
  TGenericSeq Sup;
  ttrunk205052* data[SEQ_DECL_SIZE];
};
struct ttypeseq208845 {
  TGenericSeq Sup;
  ttype208849* data[SEQ_DECL_SIZE];
};
struct tnodepairseq208871 {
  TGenericSeq Sup;
  tnodepair208869 data[SEQ_DECL_SIZE];
};
struct tsymseq208815 {
  TGenericSeq Sup;
  tsym208843* data[SEQ_DECL_SIZE];
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
};
struct TY181351 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY464102 {
  TGenericSeq Sup;
  tblock464029 data[SEQ_DECL_SIZE];
};
struct TY208944 {
  TGenericSeq Sup;
  tinstantiation208833* data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP971)(void* p, NI op);
N_NIMCALL(void, TMP972)(void* p, NI op);
N_NIMCALL(void, TMP976)(void* p, NI op);
N_NIMCALL(void, TMP977)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51404)(tcell45946* c);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45946* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45946* c);
N_NOINLINE(void, incl_46667)(tcellset45958* s, tcell45946* cell);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45946* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope178009* mainmodprocs_464146;
trope178009* mainmodinit_464147;
trope178009* othermodsinit_464148;
trope178009* maindatinit_464149;
trope178009* gmapping_464150;
TY464151* gmodules_464170;
extern TNimType NTI257005; /* TPassContext */
TNimType NTI464035; /* TCGen */
extern TNimType NTI208811; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI178007; /* PRope */
TNimType NTI464019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI208861; /* TIdTable */
extern TNimType NTI205056; /* IntSet */
extern TNimType NTI127028; /* TLinkedList */
TNimType NTI464031; /* TCProc */
extern TNimType NTI208807; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI181351; /* seq[PRope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI464029; /* TBlock */
TNimType NTI464023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI464102; /* seq[TBlock] */
extern TNimType NTI170016; /* TOptions */
TNimType NTI464027; /* BProc */
extern TNimType NTI208845; /* TTypeSeq */
extern TNimType NTI208873; /* TNodeTable */
extern TNimType NTI208815; /* TSymSeq */
TNimType NTI464139; /* array[48..57, PRope] */
TNimType NTI464025; /* BModule */
TNimType NTI464151; /* seq[BModule] */
extern tgcheap47816 gch_47844;
NI gforwardedprocscounter_464171;
extern NU32 goptions_170126;
N_NIMCALL(void, TMP971)(void* p, NI op) {
	TY464102* a;
	NI LOC1;
	NI LOC2;
	a = (TY464102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP972)(void* p, NI op) {
	tcproc464031* a;
	a = (tcproc464031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP976)(void* p, NI op) {
	tcgen464035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen464035*)p;
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
N_NIMCALL(void, TMP977)(void* p, NI op) {
	TY464151* a;
	NI LOC1;
	a = (TY464151*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_51004)(tcell45946* c) {
	addzct_49417((&gch_47844.Zct), c);
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

static N_INLINE(void, decref_51404)(tcell45946* c) {
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

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45946))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45946* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49446(p);
	decref_51404(LOC1);
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

static N_INLINE(void, incref_51822)(tcell45946* c) {
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45946* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(tcproc464031*, newproc_464227)(tsym208843* prc, tcgen464035* module) {
	tcproc464031* result;
	result = 0;
	result = (tcproc464031*) newObj((&NTI464027), sizeof(tcproc464031));
	asgnRefNoCycle((void**) (&(*result).Prc), prc);
	asgnRef((void**) (&(*result).Module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_170126;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY464102*) newSeqRC1((&NTI464102), ((NI) 1));
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq208807*) newSeqRC1((&NTI208807), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY181351*) newSeqRC1((&NTI181351), 0);
	return result;
}

N_NIMCALL(tcgen464035*, bmod_464216)(tsym208843* module) {
	tcgen464035* result;
	result = 0;
	result = gmodules_464170->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	if (gmodules_464170) nimGCunref(gmodules_464170);
	gmodules_464170 = (TY464151*) newSeqRC1((&NTI464151), 0);
	gforwardedprocscounter_464171 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP963[29];
static TNimNode* TMP969[16];
static TNimNode* TMP970[7];
static TNimNode TMP961[55];
NTI464035.size = sizeof(tcgen464035);
NTI464035.kind = 17;
NTI464035.base = (&NTI257005);
TMP963[0] = &TMP961[1];
TMP961[1].kind = 1;
TMP961[1].offset = offsetof(tcgen464035, Module);
TMP961[1].typ = (&NTI208811);
TMP961[1].name = "module";
TMP963[1] = &TMP961[2];
TMP961[2].kind = 1;
TMP961[2].offset = offsetof(tcgen464035, Filename);
TMP961[2].typ = (&NTI149);
TMP961[2].name = "filename";
TMP963[2] = &TMP961[3];
NTI464019.size = sizeof(tcfilesections464019);
NTI464019.kind = 16;
NTI464019.base = (&NTI178007);
NTI464019.flags = 2;
TMP961[3].kind = 1;
TMP961[3].offset = offsetof(tcgen464035, S);
TMP961[3].typ = (&NTI464019);
TMP961[3].name = "s";
TMP963[3] = &TMP961[4];
TMP961[4].kind = 1;
TMP961[4].offset = offsetof(tcgen464035, Preventstacktrace);
TMP961[4].typ = (&NTI138);
TMP961[4].name = "preventStackTrace";
TMP963[4] = &TMP961[5];
TMP961[5].kind = 1;
TMP961[5].offset = offsetof(tcgen464035, Usesthreadvars);
TMP961[5].typ = (&NTI138);
TMP961[5].name = "usesThreadVars";
TMP963[5] = &TMP961[6];
TMP961[6].kind = 1;
TMP961[6].offset = offsetof(tcgen464035, Framedeclared);
TMP961[6].typ = (&NTI138);
TMP961[6].name = "frameDeclared";
TMP963[6] = &TMP961[7];
TMP961[7].kind = 1;
TMP961[7].offset = offsetof(tcgen464035, Isheaderfile);
TMP961[7].typ = (&NTI138);
TMP961[7].name = "isHeaderFile";
TMP963[7] = &TMP961[8];
TMP961[8].kind = 1;
TMP961[8].offset = offsetof(tcgen464035, Includesstringh);
TMP961[8].typ = (&NTI138);
TMP961[8].name = "includesStringh";
TMP963[8] = &TMP961[9];
TMP961[9].kind = 1;
TMP961[9].offset = offsetof(tcgen464035, Objhaskidsvalid);
TMP961[9].typ = (&NTI138);
TMP961[9].name = "objHasKidsValid";
TMP963[9] = &TMP961[10];
TMP961[10].kind = 1;
TMP961[10].offset = offsetof(tcgen464035, Cfilename);
TMP961[10].typ = (&NTI149);
TMP961[10].name = "cfilename";
TMP963[10] = &TMP961[11];
TMP961[11].kind = 1;
TMP961[11].offset = offsetof(tcgen464035, Typecache);
TMP961[11].typ = (&NTI208861);
TMP961[11].name = "typeCache";
TMP963[11] = &TMP961[12];
TMP961[12].kind = 1;
TMP961[12].offset = offsetof(tcgen464035, Forwtypecache);
TMP961[12].typ = (&NTI208861);
TMP961[12].name = "forwTypeCache";
TMP963[12] = &TMP961[13];
TMP961[13].kind = 1;
TMP961[13].offset = offsetof(tcgen464035, Declaredthings);
TMP961[13].typ = (&NTI205056);
TMP961[13].name = "declaredThings";
TMP963[13] = &TMP961[14];
TMP961[14].kind = 1;
TMP961[14].offset = offsetof(tcgen464035, Declaredprotos);
TMP961[14].typ = (&NTI205056);
TMP961[14].name = "declaredProtos";
TMP963[14] = &TMP961[15];
TMP961[15].kind = 1;
TMP961[15].offset = offsetof(tcgen464035, Headerfiles);
TMP961[15].typ = (&NTI127028);
TMP961[15].name = "headerFiles";
TMP963[15] = &TMP961[16];
TMP961[16].kind = 1;
TMP961[16].offset = offsetof(tcgen464035, Typeinfomarker);
TMP961[16].typ = (&NTI205056);
TMP961[16].name = "typeInfoMarker";
TMP963[16] = &TMP961[17];
NTI464031.size = sizeof(tcproc464031);
NTI464031.kind = 18;
NTI464031.base = 0;
TMP969[0] = &TMP961[19];
TMP961[19].kind = 1;
TMP961[19].offset = offsetof(tcproc464031, Prc);
TMP961[19].typ = (&NTI208811);
TMP961[19].name = "prc";
TMP969[1] = &TMP961[20];
TMP961[20].kind = 1;
TMP961[20].offset = offsetof(tcproc464031, Beforeretneeded);
TMP961[20].typ = (&NTI138);
TMP961[20].name = "beforeRetNeeded";
TMP969[2] = &TMP961[21];
TMP961[21].kind = 1;
TMP961[21].offset = offsetof(tcproc464031, Threadvaraccessed);
TMP961[21].typ = (&NTI138);
TMP961[21].name = "threadVarAccessed";
TMP969[3] = &TMP961[22];
TMP961[22].kind = 1;
TMP961[22].offset = offsetof(tcproc464031, Nestedtrystmts);
TMP961[22].typ = (&NTI208807);
TMP961[22].name = "nestedTryStmts";
TMP969[4] = &TMP961[23];
TMP961[23].kind = 1;
TMP961[23].offset = offsetof(tcproc464031, Inexceptblock);
TMP961[23].typ = (&NTI108);
TMP961[23].name = "inExceptBlock";
TMP969[5] = &TMP961[24];
TMP961[24].kind = 1;
TMP961[24].offset = offsetof(tcproc464031, Finallysafepoints);
TMP961[24].typ = (&NTI181351);
TMP961[24].name = "finallySafePoints";
TMP969[6] = &TMP961[25];
TMP961[25].kind = 1;
TMP961[25].offset = offsetof(tcproc464031, Labels);
TMP961[25].typ = (&NTI3407);
TMP961[25].name = "labels";
TMP969[7] = &TMP961[26];
NTI464029.size = sizeof(tblock464029);
NTI464029.kind = 18;
NTI464029.base = 0;
NTI464029.flags = 2;
TMP970[0] = &TMP961[28];
TMP961[28].kind = 1;
TMP961[28].offset = offsetof(tblock464029, Id);
TMP961[28].typ = (&NTI108);
TMP961[28].name = "id";
TMP970[1] = &TMP961[29];
TMP961[29].kind = 1;
TMP961[29].offset = offsetof(tblock464029, Label);
TMP961[29].typ = (&NTI178007);
TMP961[29].name = "label";
TMP970[2] = &TMP961[30];
NTI464023.size = sizeof(tcprocsections464023);
NTI464023.kind = 16;
NTI464023.base = (&NTI178007);
NTI464023.flags = 2;
TMP961[30].kind = 1;
TMP961[30].offset = offsetof(tblock464029, Sections);
TMP961[30].typ = (&NTI464023);
TMP961[30].name = "sections";
TMP970[3] = &TMP961[31];
TMP961[31].kind = 1;
TMP961[31].offset = offsetof(tblock464029, Isloop);
TMP961[31].typ = (&NTI138);
TMP961[31].name = "isLoop";
TMP970[4] = &TMP961[32];
TMP961[32].kind = 1;
TMP961[32].offset = offsetof(tblock464029, Nestedtrystmts);
TMP961[32].typ = (&NTI112);
TMP961[32].name = "nestedTryStmts";
TMP970[5] = &TMP961[33];
TMP961[33].kind = 1;
TMP961[33].offset = offsetof(tblock464029, Nestedexceptstmts);
TMP961[33].typ = (&NTI112);
TMP961[33].name = "nestedExceptStmts";
TMP970[6] = &TMP961[34];
TMP961[34].kind = 1;
TMP961[34].offset = offsetof(tblock464029, Framelen);
TMP961[34].typ = (&NTI112);
TMP961[34].name = "frameLen";
TMP961[27].len = 7; TMP961[27].kind = 2; TMP961[27].sons = &TMP970[0];
NTI464029.node = &TMP961[27];
NTI464102.size = sizeof(TY464102*);
NTI464102.kind = 24;
NTI464102.base = (&NTI464029);
NTI464102.flags = 2;
NTI464102.marker = TMP971;
TMP961[26].kind = 1;
TMP961[26].offset = offsetof(tcproc464031, Blocks);
TMP961[26].typ = (&NTI464102);
TMP961[26].name = "blocks";
TMP969[8] = &TMP961[35];
TMP961[35].kind = 1;
TMP961[35].offset = offsetof(tcproc464031, Breakidx);
TMP961[35].typ = (&NTI108);
TMP961[35].name = "breakIdx";
TMP969[9] = &TMP961[36];
TMP961[36].kind = 1;
TMP961[36].offset = offsetof(tcproc464031, Options);
TMP961[36].typ = (&NTI170016);
TMP961[36].name = "options";
TMP969[10] = &TMP961[37];
TMP961[37].kind = 1;
TMP961[37].offset = offsetof(tcproc464031, Maxframelen);
TMP961[37].typ = (&NTI108);
TMP961[37].name = "maxFrameLen";
TMP969[11] = &TMP961[38];
TMP961[38].kind = 1;
TMP961[38].offset = offsetof(tcproc464031, Module);
TMP961[38].typ = (&NTI464025);
TMP961[38].name = "module";
TMP969[12] = &TMP961[39];
TMP961[39].kind = 1;
TMP961[39].offset = offsetof(tcproc464031, Withinloop);
TMP961[39].typ = (&NTI108);
TMP961[39].name = "withinLoop";
TMP969[13] = &TMP961[40];
TMP961[40].kind = 1;
TMP961[40].offset = offsetof(tcproc464031, Splitdecls);
TMP961[40].typ = (&NTI108);
TMP961[40].name = "splitDecls";
TMP969[14] = &TMP961[41];
TMP961[41].kind = 1;
TMP961[41].offset = offsetof(tcproc464031, Gcframeid);
TMP961[41].typ = (&NTI3407);
TMP961[41].name = "gcFrameId";
TMP969[15] = &TMP961[42];
TMP961[42].kind = 1;
TMP961[42].offset = offsetof(tcproc464031, Gcframetype);
TMP961[42].typ = (&NTI178007);
TMP961[42].name = "gcFrameType";
TMP961[18].len = 16; TMP961[18].kind = 2; TMP961[18].sons = &TMP969[0];
NTI464031.node = &TMP961[18];
NTI464027.size = sizeof(tcproc464031*);
NTI464027.kind = 22;
NTI464027.base = (&NTI464031);
NTI464027.marker = TMP972;
TMP961[17].kind = 1;
TMP961[17].offset = offsetof(tcgen464035, Initproc);
TMP961[17].typ = (&NTI464027);
TMP961[17].name = "initProc";
TMP963[17] = &TMP961[43];
TMP961[43].kind = 1;
TMP961[43].offset = offsetof(tcgen464035, Postinitproc);
TMP961[43].typ = (&NTI464027);
TMP961[43].name = "postInitProc";
TMP963[18] = &TMP961[44];
TMP961[44].kind = 1;
TMP961[44].offset = offsetof(tcgen464035, Preinitproc);
TMP961[44].typ = (&NTI464027);
TMP961[44].name = "preInitProc";
TMP963[19] = &TMP961[45];
TMP961[45].kind = 1;
TMP961[45].offset = offsetof(tcgen464035, Typestack);
TMP961[45].typ = (&NTI208845);
TMP961[45].name = "typeStack";
TMP963[20] = &TMP961[46];
TMP961[46].kind = 1;
TMP961[46].offset = offsetof(tcgen464035, Datacache);
TMP961[46].typ = (&NTI208873);
TMP961[46].name = "dataCache";
TMP963[21] = &TMP961[47];
TMP961[47].kind = 1;
TMP961[47].offset = offsetof(tcgen464035, Forwardedprocs);
TMP961[47].typ = (&NTI208815);
TMP961[47].name = "forwardedProcs";
TMP963[22] = &TMP961[48];
TMP961[48].kind = 1;
TMP961[48].offset = offsetof(tcgen464035, Typenodes);
TMP961[48].typ = (&NTI108);
TMP961[48].name = "typeNodes";
TMP963[23] = &TMP961[49];
TMP961[49].kind = 1;
TMP961[49].offset = offsetof(tcgen464035, Nimtypes);
TMP961[49].typ = (&NTI108);
TMP961[49].name = "nimTypes";
TMP963[24] = &TMP961[50];
TMP961[50].kind = 1;
TMP961[50].offset = offsetof(tcgen464035, Typenodesname);
TMP961[50].typ = (&NTI178007);
TMP961[50].name = "typeNodesName";
TMP963[25] = &TMP961[51];
TMP961[51].kind = 1;
TMP961[51].offset = offsetof(tcgen464035, Nimtypesname);
TMP961[51].typ = (&NTI178007);
TMP961[51].name = "nimTypesName";
TMP963[26] = &TMP961[52];
TMP961[52].kind = 1;
TMP961[52].offset = offsetof(tcgen464035, Labels);
TMP961[52].typ = (&NTI3407);
TMP961[52].name = "labels";
TMP963[27] = &TMP961[53];
NTI464139.size = sizeof(TY464139);
NTI464139.kind = 16;
NTI464139.base = (&NTI178007);
NTI464139.flags = 2;
TMP961[53].kind = 1;
TMP961[53].offset = offsetof(tcgen464035, Extensionloaders);
TMP961[53].typ = (&NTI464139);
TMP961[53].name = "extensionLoaders";
TMP963[28] = &TMP961[54];
TMP961[54].kind = 1;
TMP961[54].offset = offsetof(tcgen464035, Injectstmt);
TMP961[54].typ = (&NTI178007);
TMP961[54].name = "injectStmt";
TMP961[0].len = 29; TMP961[0].kind = 2; TMP961[0].sons = &TMP963[0];
NTI464035.node = &TMP961[0];
NTI464025.size = sizeof(tcgen464035*);
NTI464025.kind = 22;
NTI464025.base = (&NTI464035);
NTI464025.marker = TMP976;
NTI464151.size = sizeof(TY464151*);
NTI464151.kind = 24;
NTI464151.base = (&NTI464025);
NTI464151.marker = TMP977;
}

