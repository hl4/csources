/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq207815 tsymseq207815;
typedef struct tsym207843 tsym207843;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct TY529056 TY529056;
typedef struct tmoduleinmemory529017 tmoduleinmemory529017;
typedef struct TY207933 TY207933;
typedef struct tnode207813 tnode207813;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY117589 TY117589;
typedef struct trodreader248030 trodreader248030;
typedef struct tllstream194204 tllstream194204;
typedef struct TY85545 TY85545;
typedef struct TY463151 TY463151;
typedef struct tcgen463035 tcgen463035;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tindex248028 tindex248028;
typedef struct tiitable214274 tiitable214274;
typedef struct tiipairseq214272 tiipairseq214272;
typedef struct tiipair214270 tiipair214270;
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct memfile246208 memfile246208;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tcproc463031 tcproc463031;
typedef struct tnodetable207873 tnodetable207873;
typedef struct tnodepairseq207871 tnodepairseq207871;
typedef struct tnodepair207869 tnodepair207869;
typedef struct TY180351 TY180351;
typedef struct TY463102 TY463102;
typedef struct tblock463029 tblock463029;
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
struct  tmoduleinmemory529017  {
NF Compiledat;
NI32 Crc;
TY207933* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode207813*, TY256069) (tsym207843* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym207843*, TY256064) (tsym207843* m, NI32 fileidx);
struct TY117589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct TY85545 {
NimStringDesc* Field0;
NI Field1;
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
struct  tiipair214270  {
NI Key;
NI Val;
};
struct  tiitable214274  {
NI Counter;
tiipairseq214272* Data;
};
struct  tindex248028  {
NI Lastidxkey;
NI Lastidxval;
tiitable214274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair207857  {
tidobj184015* Key;
TNimObject* Val;
};
struct  tidtable207861  {
NI Counter;
tidpairseq207859* Data;
};
struct  memfile246208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader248030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY207933* Moddeps;
TY207933* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex248028 Index;
tindex248028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable207861 Syms;
memfile246208 Memfile;
tsymseq207815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tllstream194204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope177009* tcfilesections463019[18];
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27020 Bits;
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
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY529056 {
  TGenericSeq Sup;
  tmoduleinmemory529017 data[SEQ_DECL_SIZE];
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct TY463151 {
  TGenericSeq Sup;
  tcgen463035* data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct tiipairseq214272 {
  TGenericSeq Sup;
  tiipair214270 data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq207871 {
  TGenericSeq Sup;
  tnodepair207869 data[SEQ_DECL_SIZE];
};
struct TY180351 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY463102 {
  TGenericSeq Sup;
  tblock463029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1003)(void* p, NI op);
N_NIMCALL(tnode207813*, includemodule_529851)(tsym207843* s, NI32 fileidx);
N_NIMCALL(tnode207813*, parsefile_234041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_529152)(tsym207843* x, NI32 dep);
N_NIMCALL(void, safeadd_529176)(TY207933** x, NI32 y);
N_NIMCALL(void, docrc_529134)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_176046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_181433)(NI32 fileidx);
N_NIMCALL(tsym207843*, importmodule_529815)(tsym207843* s, NI32 fileidx);
N_NIMCALL(tsym207843*, compilemodule_529726)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym207843*, getmodule_529081)(NI32 fileidx);
N_NIMCALL(tsym207843*, newmodule_529646)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_181443)(NI32 fileidx);
N_NIMCALL(tident184021*, getident_184463)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117589* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isnimidentifier_197319)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_182191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo180338, newlineinfo_180869)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym207843*, newsym_208655)(NU8 symkind, tident184021* name, tsym207843* owner, tlineinfo180338 info);
N_NIMCALL(NimStringDesc*, getpackagename_169825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_211007)(tstrtable207817* x);
N_NIMCALL(void, strtableadd_214103)(tstrtable207817* t, tsym207843* n);
N_NIMCALL(trodreader248030*, handlesymbolfile_248071)(tsym207843* module);
N_NIMCALL(void, internalerror_182443)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_206404)(void);
N_NIMCALL(void, processmodule_256056)(tsym207843* module, tllstream194204* stream, trodreader248030* rd);
N_NIMCALL(NU8, checkdepmem_529404)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_529105)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_182531)(TY85545 x);
N_NIMCALL(void, resetmodule_529323)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(void, decref_51404)(tcell45947* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_529187)(TY207933* x, TY207933* y);
N_NIMCALL(void, localerror_182392)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_529922)(void);
N_NIMCALL(void, fatal_182360)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_180856)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_117292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_529901)(void);
N_NIMCALL(void, resetpackagecache_169605)(void);
STRING_LITERAL(TMP1367, "-", 1);
STRING_LITERAL(TMP1445, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1450, "compiler/modules.nim", 20);
NIM_CONST TY85545 TMP1449 = {((NimStringDesc*) &TMP1450),
((NI) 41)}
;
STRING_LITERAL(TMP4219, "", 0);
STRING_LITERAL(TMP4220, "nim", 3);
STRING_LITERAL(TMP4221, "system.nim", 10);
STRING_LITERAL(TMP4936, "stdin", 5);
tsymseq207815* gcompiledmodules_529055;
extern TNimType NTI207815; /* TSymSeq */
extern tgcheap47816 gch_47844;
TY529056* gmemcachedata_529075;
TNimType NTI529017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI176010; /* TCrc32 */
extern TNimType NTI207933; /* seq[int32] */
TNimType NTI529013; /* TNeedRecompile */
TNimType NTI529015; /* TCrcStatus */
TNimType NTI529056; /* seq[TModuleInMemory] */
extern TY256069 gincludefile_256073;
extern NU32 gglobaloptions_169128;
extern TY256064 gimportmodule_256068;
extern TNimType NTI207811; /* PSym */
extern TNimType NTI207843; /* TSym */
extern NU8 gcmd_169130;
extern NI gfrontendid_206012;
extern NF glastcmdtime_169141;
extern TY463151* gmodules_463170;
tsym207843* stdinmodule_529998;
extern NimStringDesc* gprojectfull_169236;
extern tlineinfo180338 gcmdlineinfo_180924;
extern NI32 gprojectmainidx_169237;
extern NimStringDesc* libpath_169233;
extern tsym207843* systemmodule_253019;
extern NI32 systemfileidx_180435;

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
N_NIMCALL(void, TMP1003)(void* p, NI op) {
	TY529056* a;
	NI LOC1;
	a = (TY529056*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_529152)(tsym207843* x, NI32 dep) {
	{
		if (!(gmemcachedata_529075->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_529075 = (TY529056*) setLengthSeq(&(gmemcachedata_529075)->Sup, sizeof(tmoduleinmemory529017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_529176((&gmemcachedata_529075->data[(*x).Position].Deps), dep);
}

N_NIMCALL(void, docrc_529134)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_529075->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_181433(fileidx);
		gmemcachedata_529075->data[fileidx].Crc = crcfromfile_176046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode207813*, includemodule_529851)(tsym207843* s, NI32 fileidx) {
	tnode207813* result;
	result = 0;
	result = parsefile_234041(fileidx);
	{
		if (!((gglobaloptions_169128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_529075->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_529075 = (TY529056*) setLengthSeq(&(gmemcachedata_529075)->Sup, sizeof(tmoduleinmemory529017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_529152(s, fileidx);
		docrc_529134(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym207843*, getmodule_529081)(NI32 fileidx) {
	tsym207843* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_529055->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_529055->data[fileidx];
	}
	LA5: ;
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

N_NIMCALL(tsym207843*, newmodule_529646)(NI32 fileidx) {
	tsym207843* result;
	NimStringDesc* filename;
	TY117589 LOC1;
	NimStringDesc* LOC9;
	tident184021* LOC10;
	result = 0;
	result = (tsym207843*) newObj((&NTI207811), sizeof(tsym207843));
	(*result).Sup.Sup.m_type = (&NTI207843);
	(*result).Sup.Id = ((NI) -1);
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_181443(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).Name), getident_184463(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		NIM_BOOL LOC6;
		LOC4 = 0;
		LOC4 = !(eqStrings((*(*result).Name).S, ((NimStringDesc*) &TMP1367)));
		if (!(LOC4)) goto LA5;
		LOC6 = 0;
		LOC6 = isnimidentifier_197319((*(*result).Name).S);
		LOC4 = !(LOC6);
		LA5: ;
		if (!LOC4) goto LA7;
		rawmessage_182191(((NU16) 21), (*(*result).Name).S);
	}
	LA7: ;
	(*result).Info = newlineinfo_180869(fileidx, ((NI) 1), ((NI) 1));
	LOC9 = 0;
	LOC9 = getpackagename_169825(filename);
	LOC10 = 0;
	LOC10 = getident_184463(LOC9);
	asgnRefNoCycle((void**) (&(*result).Owner), newsym_208655(((NU8) 24), LOC10, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_529075->Sup.len <= ((NI) (fileidx)))) goto LA13;
		gmemcachedata_529075 = (TY529056*) setLengthSeq(&(gmemcachedata_529075)->Sup, sizeof(tmoduleinmemory529017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA13: ;
	{
		if (!(gcompiledmodules_529055->Sup.len <= ((NI) (fileidx)))) goto LA17;
		gcompiledmodules_529055 = (tsymseq207815*) setLengthSeq(&(gcompiledmodules_529055)->Sup, sizeof(tsym207843*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA17: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_529055->data[(*result).Position]), result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_211007((&(*result).kindU.S3.Tab));
	strtableadd_214103((&(*result).kindU.S3.Tab), result);
	return result;
}

static N_INLINE(NI, getid_206404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_206012;
	gfrontendid_206012 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_529105)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_529075->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_182531(TMP1449);
		internalerror_182443(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_529075->data[fileidx].Crcstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_181433(fileidx);
		newcrc = crcfromfile_176046(LOC11);
		result = !((newcrc == gmemcachedata_529075->data[fileidx].Crc));
		gmemcachedata_529075->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_529075->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_529075->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_181433(fileidx);
		gmemcachedata_529075->data[fileidx].Crc = crcfromfile_176046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_529075->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_529075->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
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

N_NIMCALL(void, resetmodule_529323)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmemcachedata_529075->Sup.len))))) goto LA3;
		gmemcachedata_529075->data[fileidx].Needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gcompiledmodules_529055->Sup.len))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_529055->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmodules_463170->Sup.len))))) goto LA11;
		asgnRef((void**) (&gmodules_463170->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_529404)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_529075->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_529075->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_169128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_529105(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_529323(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_529187(gmemcachedata_529075->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_529075->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_529611;
			TY207933* HEX3Atmp_529625;
			NI i_529628;
			NI l_529630;
			dep_529611 = 0;
			HEX3Atmp_529625 = 0;
			HEX3Atmp_529625 = gmemcachedata_529075->data[fileidx].Deps;
			i_529628 = ((NI) 0);
			l_529630 = HEX3Atmp_529625->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_529628 < l_529630)) goto LA18;
					dep_529611 = HEX3Atmp_529625->data[i_529628];
					d = checkdepmem_529404(dep_529611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_529323(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_529628 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_529075->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym207843*, compilemodule_529726)(NI32 fileidx, NU32 flags) {
	tsym207843* result;
{	result = 0;
	result = getmodule_529081(fileidx);
	{
		trodreader248030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_529075->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_529075 = (TY529056*) setLengthSeq(&(gmemcachedata_529075)->Sup, sizeof(tmoduleinmemory529017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_529075->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_529646(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_169130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_248071(result);
			{
				if (!((*result).Sup.Id < ((NI) 0))) goto LA15;
				internalerror_182443(((NimStringDesc*) &TMP1445));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_206404();
		}
		LA9: ;
		processmodule_256056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_169128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_529075->data[fileidx].Compiledat = glastcmdtime_169141;
			gmemcachedata_529075->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_529134(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_529404(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_529726(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_529055->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym207843*, importmodule_529815)(tsym207843* s, NI32 fileidx) {
	tsym207843* result;
	result = 0;
	result = compilemodule_529726(fileidx, 0);
	{
		if (!((gglobaloptions_169128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_529152(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_182392((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_529922)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_169236->Sup.len == ((NI) 0))) goto LA3;
		fatal_182360(gcmdlineinfo_180924, ((NU16) 186), ((NimStringDesc*) &TMP4219));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_169236, ((NimStringDesc*) &TMP4220));
	gprojectmainidx_169237 = fileinfoidx_180856(LOC5);
}

N_NIMCALL(void, compilesystemmodule_529901)(void) {
	{
		NimStringDesc* LOC5;
		tsym207843* LOC6;
		if (!(systemmodule_253019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_117292(libpath_169233, ((NimStringDesc*) &TMP4221));
		systemfileidx_180435 = fileinfoidx_180856(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_529726(systemfileidx_180435, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_529985)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_529922();
	LOC1 = 0;
	LOC1 = HEX2F_117292(libpath_169233, ((NimStringDesc*) &TMP4221));
	systemfileidx = fileinfoidx_180856(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_169237;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym207843* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_529726(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym207843* LOC13;
		compilesystemmodule_529901();
		LOC13 = 0;
		LOC13 = compilemodule_529726(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym207843*, makestdinmodule_530003)(void) {
	tsym207843* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_529998 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_180856(((NimStringDesc*) &TMP4936));
		asgnRefNoCycle((void**) (&stdinmodule_529998), newmodule_529646(LOC5));
		(*stdinmodule_529998).Sup.Id = getid_206404();
	}
	LA3: ;
	result = stdinmodule_529998;
	return result;
}

N_NIMCALL(void, resetallmodules_529356)(void) {
	{
		NI i_529368;
		NI HEX3Atmp_529382;
		NI res_529385;
		i_529368 = 0;
		HEX3Atmp_529382 = 0;
		HEX3Atmp_529382 = (gcompiledmodules_529055->Sup.len-1);
		res_529385 = ((NI) 0);
		{
			while (1) {
				if (!(res_529385 <= HEX3Atmp_529382)) goto LA3;
				i_529368 = res_529385;
				{
					if (!!((gcompiledmodules_529055->data[i_529368] == NIM_NIL))) goto LA6;
					resetmodule_529323(((NI32) (i_529368)));
				}
				LA6: ;
				res_529385 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_169605();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void) {
	if (gcompiledmodules_529055) nimGCunrefNoCycle(gcompiledmodules_529055);
	gcompiledmodules_529055 = (tsymseq207815*) newSeqRC1((&NTI207815), 0);
	if (gmemcachedata_529075) nimGCunrefNoCycle(gmemcachedata_529075);
	gmemcachedata_529075 = (TY529056*) newSeqRC1((&NTI529056), 0);
	gincludefile_256073 = includemodule_529851;
	gimportmodule_256068 = importmodule_529815;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void) {
static TNimNode* TMP996[5];
static TNimNode* TMP997[5];
NI TMP999;
static char* NIM_CONST TMP998[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1000[4];
NI TMP1002;
static char* NIM_CONST TMP1001[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP994[17];
NTI529017.size = sizeof(tmoduleinmemory529017);
NTI529017.kind = 18;
NTI529017.base = 0;
NTI529017.flags = 2;
TMP996[0] = &TMP994[1];
TMP994[1].kind = 1;
TMP994[1].offset = offsetof(tmoduleinmemory529017, Compiledat);
TMP994[1].typ = (&NTI128);
TMP994[1].name = "compiledAt";
TMP996[1] = &TMP994[2];
TMP994[2].kind = 1;
TMP994[2].offset = offsetof(tmoduleinmemory529017, Crc);
TMP994[2].typ = (&NTI176010);
TMP994[2].name = "crc";
TMP996[2] = &TMP994[3];
TMP994[3].kind = 1;
TMP994[3].offset = offsetof(tmoduleinmemory529017, Deps);
TMP994[3].typ = (&NTI207933);
TMP994[3].name = "deps";
TMP996[3] = &TMP994[4];
NTI529013.size = sizeof(NU8);
NTI529013.kind = 14;
NTI529013.base = 0;
NTI529013.flags = 3;
for (TMP999 = 0; TMP999 < 5; TMP999++) {
TMP994[TMP999+5].kind = 1;
TMP994[TMP999+5].offset = TMP999;
TMP994[TMP999+5].name = TMP998[TMP999];
TMP997[TMP999] = &TMP994[TMP999+5];
}
TMP994[10].len = 5; TMP994[10].kind = 2; TMP994[10].sons = &TMP997[0];
NTI529013.node = &TMP994[10];
TMP994[4].kind = 1;
TMP994[4].offset = offsetof(tmoduleinmemory529017, Needsrecompile);
TMP994[4].typ = (&NTI529013);
TMP994[4].name = "needsRecompile";
TMP996[4] = &TMP994[11];
NTI529015.size = sizeof(NU8);
NTI529015.kind = 14;
NTI529015.base = 0;
NTI529015.flags = 3;
for (TMP1002 = 0; TMP1002 < 4; TMP1002++) {
TMP994[TMP1002+12].kind = 1;
TMP994[TMP1002+12].offset = TMP1002;
TMP994[TMP1002+12].name = TMP1001[TMP1002];
TMP1000[TMP1002] = &TMP994[TMP1002+12];
}
TMP994[16].len = 4; TMP994[16].kind = 2; TMP994[16].sons = &TMP1000[0];
NTI529015.node = &TMP994[16];
TMP994[11].kind = 1;
TMP994[11].offset = offsetof(tmoduleinmemory529017, Crcstatus);
TMP994[11].typ = (&NTI529015);
TMP994[11].name = "crcStatus";
TMP994[0].len = 5; TMP994[0].kind = 2; TMP994[0].sons = &TMP996[0];
NTI529017.node = &TMP994[0];
NTI529056.size = sizeof(TY529056*);
NTI529056.kind = 24;
NTI529056.base = (&NTI529017);
NTI529056.flags = 2;
NTI529056.marker = TMP1003;
}

