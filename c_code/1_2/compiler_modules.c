/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq209815 tsymseq209815;
typedef struct tsym209843 tsym209843;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct TY531056 TY531056;
typedef struct tmoduleinmemory531017 tmoduleinmemory531017;
typedef struct TY209933 TY209933;
typedef struct tnode209813 tnode209813;
typedef struct tidobj186015 tidobj186015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq209845 ttypeseq209845;
typedef struct ttype209849 ttype209849;
typedef struct tscope209837 tscope209837;
typedef struct TY209944 TY209944;
typedef struct tinstantiation209833 tinstantiation209833;
typedef struct tstrtable209817 tstrtable209817;
typedef struct tident186021 tident186021;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct tloc209827 tloc209827;
typedef struct trope179009 trope179009;
typedef struct tlib209831 tlib209831;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY117789 TY117789;
typedef struct trodreader250030 trodreader250030;
typedef struct tllstream196204 tllstream196204;
typedef struct TY87345 TY87345;
typedef struct TY465151 TY465151;
typedef struct tcgen465035 tcgen465035;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct tnodeseq209807 tnodeseq209807;
typedef struct tlistentry130022 tlistentry130022;
typedef struct tindex250028 tindex250028;
typedef struct tiitable216274 tiitable216274;
typedef struct tiipairseq216272 tiipairseq216272;
typedef struct tiipair216270 tiipair216270;
typedef struct tidtable209861 tidtable209861;
typedef struct tidpairseq209859 tidpairseq209859;
typedef struct tidpair209857 tidpair209857;
typedef struct memfile248208 memfile248208;
typedef struct tpasscontext258005 tpasscontext258005;
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct tlinkedlist130028 tlinkedlist130028;
typedef struct tcproc465031 tcproc465031;
typedef struct tnodetable209873 tnodetable209873;
typedef struct tnodepairseq209871 tnodepairseq209871;
typedef struct tnodepair209869 tnodepair209869;
typedef struct TY182351 TY182351;
typedef struct TY465102 TY465102;
typedef struct tblock465029 tblock465029;
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
struct  tmoduleinmemory531017  {
NF Compiledat;
NI32 Crc;
TY209933* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode209813*, TY258069) (tsym209843* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable209817  {
NI Counter;
tsymseq209815* Data;
};
struct  tlineinfo182338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc209827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209849* T;
trope179009* R;
trope179009* Heaproot;
};
struct  tsym209843  {
  tidobj186015 Sup;
NU8 Kind;
union{
struct {ttypeseq209845* Typeinstcache;
tscope209837* Typscope;
} S1;
struct {TY209944* Procinstcache;
tscope209837* Scope;
} S2;
struct {TY209944* Usedgenerics;
tstrtable209817 Tab;
} S3;
struct {tsym209843* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209849* Typ;
tident186021* Name;
tlineinfo182338 Info;
tsym209843* Owner;
NU32 Flags;
tnode209813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209827 Loc;
tlib209831* Annex;
tnode209813* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym209843*, TY258064) (tsym209843* m, NI32 fileidx);
struct TY117789 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct TY87345 {
NimStringDesc* Field0;
NI Field1;
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
struct  tnode209813  {
ttype209849* Typ;
tlineinfo182338 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209843* Sym;
} S4;
struct {tident186021* Ident;
} S5;
struct {tnodeseq209807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  ttype209849  {
  tidobj186015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209845* Sons;
tnode209813* N;
tsym209843* Owner;
tsym209843* Sym;
tsym209843* Destructor;
tsym209843* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209827 Loc;
};
struct  tscope209837  {
NI Depthlevel;
tstrtable209817 Symbols;
tnodeseq209807* Usingsyms;
tscope209837* Parent;
};
struct  tinstantiation209833  {
tsym209843* Sym;
ttypeseq209845* Concretetypes;
TY209933* Usedby;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry130022  {
  TNimObject Sup;
tlistentry130022* Prev;
tlistentry130022* Next;
};
struct  tlib209831  {
  tlistentry130022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode209813* Path;
};
struct  tiipair216270  {
NI Key;
NI Val;
};
struct  tiitable216274  {
NI Counter;
tiipairseq216272* Data;
};
struct  tindex250028  {
NI Lastidxkey;
NI Lastidxval;
tiitable216274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair209857  {
tidobj186015* Key;
TNimObject* Val;
};
struct  tidtable209861  {
NI Counter;
tidpairseq209859* Data;
};
struct  memfile248208  {
void* Mem;
NI Size;
NI Fhandle;
NI Maphandle;
};
struct  trodreader250030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY209933* Moddeps;
TY209933* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex250028 Index;
tindex250028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable209861 Syms;
memfile248208 Memfile;
tsymseq209815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext258005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope179009* tcfilesections465019[18];
struct  intset206056  {
NI Counter;
NI Max;
ttrunk206052* Head;
ttrunkseq206054* Data;
};
struct  tlinkedlist130028  {
tlistentry130022* Head;
tlistentry130022* Tail;
NI Counter;
};
struct  tnodepair209869  {
NI H;
tnode209813* Key;
NI Val;
};
struct  tnodetable209873  {
NI Counter;
tnodepairseq209871* Data;
};
typedef trope179009* TY465139[10];
struct  tcgen465035  {
  tpasscontext258005 Sup;
tsym209843* Module;
NimStringDesc* Filename;
tcfilesections465019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable209861 Typecache;
tidtable209861 Forwtypecache;
intset206056 Declaredthings;
intset206056 Declaredprotos;
tlinkedlist130028 Headerfiles;
intset206056 Typeinfomarker;
tcproc465031* Initproc;
tcproc465031* Postinitproc;
tcproc465031* Preinitproc;
ttypeseq209845* Typestack;
tnodetable209873 Datacache;
tsymseq209815* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope179009* Typenodesname;
trope179009* Nimtypesname;
NI Labels;
TY465139 Extensionloaders;
trope179009* Injectstmt;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY27020 Bits;
};
typedef trope179009* tcprocsections465023[3];
struct  tblock465029  {
NI Id;
trope179009* Label;
tcprocsections465023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc465031  {
tsym209843* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq209807* Nestedtrystmts;
NI Inexceptblock;
TY182351* Finallysafepoints;
NI Labels;
TY465102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen465035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope179009* Gcframetype;
};
struct tsymseq209815 {
  TGenericSeq Sup;
  tsym209843* data[SEQ_DECL_SIZE];
};
struct TY209933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY531056 {
  TGenericSeq Sup;
  tmoduleinmemory531017 data[SEQ_DECL_SIZE];
};
struct ttypeseq209845 {
  TGenericSeq Sup;
  ttype209849* data[SEQ_DECL_SIZE];
};
struct TY209944 {
  TGenericSeq Sup;
  tinstantiation209833* data[SEQ_DECL_SIZE];
};
struct TY465151 {
  TGenericSeq Sup;
  tcgen465035* data[SEQ_DECL_SIZE];
};
struct tnodeseq209807 {
  TGenericSeq Sup;
  tnode209813* data[SEQ_DECL_SIZE];
};
struct tiipairseq216272 {
  TGenericSeq Sup;
  tiipair216270 data[SEQ_DECL_SIZE];
};
struct tidpairseq209859 {
  TGenericSeq Sup;
  tidpair209857 data[SEQ_DECL_SIZE];
};
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq209871 {
  TGenericSeq Sup;
  tnodepair209869 data[SEQ_DECL_SIZE];
};
struct TY182351 {
  TGenericSeq Sup;
  trope179009* data[SEQ_DECL_SIZE];
};
struct TY465102 {
  TGenericSeq Sup;
  tblock465029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1016)(void* p, NI op);
N_NIMCALL(tnode209813*, includemodule_531851)(tsym209843* s, NI32 fileidx);
N_NIMCALL(tnode209813*, parsefile_236041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_531152)(tsym209843* x, NI32 dep);
N_NIMCALL(void, safeadd_531176)(TY209933** x, NI32 y);
N_NIMCALL(void, docrc_531134)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_178046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_183433)(NI32 fileidx);
N_NIMCALL(tsym209843*, importmodule_531815)(tsym209843* s, NI32 fileidx);
N_NIMCALL(tsym209843*, compilemodule_531726)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym209843*, getmodule_531081)(NI32 fileidx);
N_NIMCALL(tsym209843*, newmodule_531646)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_183443)(NI32 fileidx);
N_NIMCALL(tident186021*, getident_186463)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117789* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isnimidentifier_199319)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_184191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo182338, newlineinfo_182869)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym209843*, newsym_210655)(NU8 symkind, tident186021* name, tsym209843* owner, tlineinfo182338 info);
N_NIMCALL(NimStringDesc*, getpackagename_171825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_213007)(tstrtable209817* x);
N_NIMCALL(void, strtableadd_216103)(tstrtable209817* t, tsym209843* n);
N_NIMCALL(trodreader250030*, handlesymbolfile_250071)(tsym209843* module);
N_NIMCALL(void, internalerror_184443)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_208404)(void);
N_NIMCALL(void, processmodule_258056)(tsym209843* module, tllstream196204* stream, trodreader250030* rd);
N_NIMCALL(NU8, checkdepmem_531404)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_531105)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_184531)(TY87345 x);
N_NIMCALL(void, resetmodule_531323)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45946* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45946* c);
N_NOINLINE(void, incl_46667)(tcellset45958* s, tcell45946* cell);
static N_INLINE(void, decref_51404)(tcell45946* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_531187)(TY209933* x, TY209933* y);
N_NIMCALL(void, localerror_184392)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_531922)(void);
N_NIMCALL(void, fatal_184360)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_182856)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_117492)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_531901)(void);
N_NIMCALL(void, resetpackagecache_171605)(void);
STRING_LITERAL(TMP1374, "-", 1);
STRING_LITERAL(TMP1452, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1457, "compiler/modules.nim", 20);
NIM_CONST TY87345 TMP1456 = {((NimStringDesc*) &TMP1457),
((NI) 41)}
;
STRING_LITERAL(TMP4219, "", 0);
STRING_LITERAL(TMP4220, "nim", 3);
STRING_LITERAL(TMP4221, "system.nim", 10);
STRING_LITERAL(TMP4935, "stdin", 5);
tsymseq209815* gcompiledmodules_531055;
extern TNimType NTI209815; /* TSymSeq */
extern tgcheap47816 gch_47844;
TY531056* gmemcachedata_531075;
TNimType NTI531017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI178010; /* TCrc32 */
extern TNimType NTI209933; /* seq[int32] */
TNimType NTI531013; /* TNeedRecompile */
TNimType NTI531015; /* TCrcStatus */
TNimType NTI531056; /* seq[TModuleInMemory] */
extern TY258069 gincludefile_258073;
extern NU32 gglobaloptions_171128;
extern TY258064 gimportmodule_258068;
extern TNimType NTI209811; /* PSym */
extern TNimType NTI209843; /* TSym */
extern NU8 gcmd_171130;
extern NI gfrontendid_208012;
extern NF glastcmdtime_171141;
extern TY465151* gmodules_465170;
tsym209843* stdinmodule_531998;
extern NimStringDesc* gprojectfull_171236;
extern tlineinfo182338 gcmdlineinfo_182924;
extern NI32 gprojectmainidx_171237;
extern NimStringDesc* libpath_171233;
extern tsym209843* systemmodule_255019;
extern NI32 systemfileidx_182435;

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
N_NIMCALL(void, TMP1016)(void* p, NI op) {
	TY531056* a;
	NI LOC1;
	a = (TY531056*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_531152)(tsym209843* x, NI32 dep) {
	{
		if (!(gmemcachedata_531075->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_531075 = (TY531056*) setLengthSeq(&(gmemcachedata_531075)->Sup, sizeof(tmoduleinmemory531017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_531176((&gmemcachedata_531075->data[(*x).Position].Deps), dep);
}

N_NIMCALL(void, docrc_531134)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_531075->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_183433(fileidx);
		gmemcachedata_531075->data[fileidx].Crc = crcfromfile_178046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode209813*, includemodule_531851)(tsym209843* s, NI32 fileidx) {
	tnode209813* result;
	result = 0;
	result = parsefile_236041(fileidx);
	{
		if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_531075->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_531075 = (TY531056*) setLengthSeq(&(gmemcachedata_531075)->Sup, sizeof(tmoduleinmemory531017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_531152(s, fileidx);
		docrc_531134(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym209843*, getmodule_531081)(NI32 fileidx) {
	tsym209843* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_531055->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_531055->data[fileidx];
	}
	LA5: ;
	return result;
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

N_NIMCALL(tsym209843*, newmodule_531646)(NI32 fileidx) {
	tsym209843* result;
	NimStringDesc* filename;
	TY117789 LOC1;
	NimStringDesc* LOC9;
	tident186021* LOC10;
	result = 0;
	result = (tsym209843*) newObj((&NTI209811), sizeof(tsym209843));
	(*result).Sup.Sup.m_type = (&NTI209843);
	(*result).Sup.Id = ((NI) -1);
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_183443(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).Name), getident_186463(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		NIM_BOOL LOC6;
		LOC4 = 0;
		LOC4 = !(eqStrings((*(*result).Name).S, ((NimStringDesc*) &TMP1374)));
		if (!(LOC4)) goto LA5;
		LOC6 = 0;
		LOC6 = isnimidentifier_199319((*(*result).Name).S);
		LOC4 = !(LOC6);
		LA5: ;
		if (!LOC4) goto LA7;
		rawmessage_184191(((NU16) 21), (*(*result).Name).S);
	}
	LA7: ;
	(*result).Info = newlineinfo_182869(fileidx, ((NI) 1), ((NI) 1));
	LOC9 = 0;
	LOC9 = getpackagename_171825(filename);
	LOC10 = 0;
	LOC10 = getident_186463(LOC9);
	asgnRefNoCycle((void**) (&(*result).Owner), newsym_210655(((NU8) 24), LOC10, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_531075->Sup.len <= ((NI) (fileidx)))) goto LA13;
		gmemcachedata_531075 = (TY531056*) setLengthSeq(&(gmemcachedata_531075)->Sup, sizeof(tmoduleinmemory531017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA13: ;
	{
		if (!(gcompiledmodules_531055->Sup.len <= ((NI) (fileidx)))) goto LA17;
		gcompiledmodules_531055 = (tsymseq209815*) setLengthSeq(&(gcompiledmodules_531055)->Sup, sizeof(tsym209843*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA17: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_531055->data[(*result).Position]), result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_213007((&(*result).kindU.S3.Tab));
	strtableadd_216103((&(*result).kindU.S3.Tab), result);
	return result;
}

static N_INLINE(NI, getid_208404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_208012;
	gfrontendid_208012 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_531105)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_531075->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_184531(TMP1456);
		internalerror_184443(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_531075->data[fileidx].Crcstatus) {
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
		LOC11 = tofilename_183433(fileidx);
		newcrc = crcfromfile_178046(LOC11);
		result = !((newcrc == gmemcachedata_531075->data[fileidx].Crc));
		gmemcachedata_531075->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_531075->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_531075->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_183433(fileidx);
		gmemcachedata_531075->data[fileidx].Crc = crcfromfile_178046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_531075->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_531075->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
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

static N_INLINE(void, incref_51822)(tcell45946* c) {
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

static N_INLINE(void, decref_51404)(tcell45946* c) {
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

N_NIMCALL(void, resetmodule_531323)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmemcachedata_531075->Sup.len))))) goto LA3;
		gmemcachedata_531075->data[fileidx].Needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gcompiledmodules_531055->Sup.len))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_531055->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmodules_465170->Sup.len))))) goto LA11;
		asgnRef((void**) (&gmodules_465170->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_531404)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_531075->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_531075->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_171128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_531105(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_531323(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_531187(gmemcachedata_531075->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_531075->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_531611;
			TY209933* HEX3Atmp_531625;
			NI i_531628;
			NI l_531630;
			dep_531611 = 0;
			HEX3Atmp_531625 = 0;
			HEX3Atmp_531625 = gmemcachedata_531075->data[fileidx].Deps;
			i_531628 = ((NI) 0);
			l_531630 = HEX3Atmp_531625->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_531628 < l_531630)) goto LA18;
					dep_531611 = HEX3Atmp_531625->data[i_531628];
					d = checkdepmem_531404(dep_531611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_531323(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_531628 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_531075->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym209843*, compilemodule_531726)(NI32 fileidx, NU32 flags) {
	tsym209843* result;
{	result = 0;
	result = getmodule_531081(fileidx);
	{
		trodreader250030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_531075->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_531075 = (TY531056*) setLengthSeq(&(gmemcachedata_531075)->Sup, sizeof(tmoduleinmemory531017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_531075->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_531646(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_171130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_250071(result);
			{
				if (!((*result).Sup.Id < ((NI) 0))) goto LA15;
				internalerror_184443(((NimStringDesc*) &TMP1452));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_208404();
		}
		LA9: ;
		processmodule_258056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_531075->data[fileidx].Compiledat = glastcmdtime_171141;
			gmemcachedata_531075->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_531134(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_531404(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_531726(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_531055->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym209843*, importmodule_531815)(tsym209843* s, NI32 fileidx) {
	tsym209843* result;
	result = 0;
	result = compilemodule_531726(fileidx, 0);
	{
		if (!((gglobaloptions_171128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_531152(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_184392((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_531922)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_171236->Sup.len == ((NI) 0))) goto LA3;
		fatal_184360(gcmdlineinfo_182924, ((NU16) 186), ((NimStringDesc*) &TMP4219));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_171236, ((NimStringDesc*) &TMP4220));
	gprojectmainidx_171237 = fileinfoidx_182856(LOC5);
}

N_NIMCALL(void, compilesystemmodule_531901)(void) {
	{
		NimStringDesc* LOC5;
		tsym209843* LOC6;
		if (!(systemmodule_255019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_117492(libpath_171233, ((NimStringDesc*) &TMP4221));
		systemfileidx_182435 = fileinfoidx_182856(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_531726(systemfileidx_182435, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_531985)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_531922();
	LOC1 = 0;
	LOC1 = HEX2F_117492(libpath_171233, ((NimStringDesc*) &TMP4221));
	systemfileidx = fileinfoidx_182856(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_171237;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym209843* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_531726(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym209843* LOC13;
		compilesystemmodule_531901();
		LOC13 = 0;
		LOC13 = compilemodule_531726(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym209843*, makestdinmodule_532003)(void) {
	tsym209843* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_531998 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_182856(((NimStringDesc*) &TMP4935));
		asgnRefNoCycle((void**) (&stdinmodule_531998), newmodule_531646(LOC5));
		(*stdinmodule_531998).Sup.Id = getid_208404();
	}
	LA3: ;
	result = stdinmodule_531998;
	return result;
}

N_NIMCALL(void, resetallmodules_531356)(void) {
	{
		NI i_531368;
		NI HEX3Atmp_531382;
		NI res_531385;
		i_531368 = 0;
		HEX3Atmp_531382 = 0;
		HEX3Atmp_531382 = (gcompiledmodules_531055->Sup.len-1);
		res_531385 = ((NI) 0);
		{
			while (1) {
				if (!(res_531385 <= HEX3Atmp_531382)) goto LA3;
				i_531368 = res_531385;
				{
					if (!!((gcompiledmodules_531055->data[i_531368] == NIM_NIL))) goto LA6;
					resetmodule_531323(((NI32) (i_531368)));
				}
				LA6: ;
				res_531385 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_171605();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void) {
	if (gcompiledmodules_531055) nimGCunrefNoCycle(gcompiledmodules_531055);
	gcompiledmodules_531055 = (tsymseq209815*) newSeqRC1((&NTI209815), 0);
	if (gmemcachedata_531075) nimGCunrefNoCycle(gmemcachedata_531075);
	gmemcachedata_531075 = (TY531056*) newSeqRC1((&NTI531056), 0);
	gincludefile_258073 = includemodule_531851;
	gimportmodule_258068 = importmodule_531815;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void) {
static TNimNode* TMP1009[5];
static TNimNode* TMP1010[5];
NI TMP1012;
static char* NIM_CONST TMP1011[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1013[4];
NI TMP1015;
static char* NIM_CONST TMP1014[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP1007[17];
NTI531017.size = sizeof(tmoduleinmemory531017);
NTI531017.kind = 18;
NTI531017.base = 0;
NTI531017.flags = 2;
TMP1009[0] = &TMP1007[1];
TMP1007[1].kind = 1;
TMP1007[1].offset = offsetof(tmoduleinmemory531017, Compiledat);
TMP1007[1].typ = (&NTI128);
TMP1007[1].name = "compiledAt";
TMP1009[1] = &TMP1007[2];
TMP1007[2].kind = 1;
TMP1007[2].offset = offsetof(tmoduleinmemory531017, Crc);
TMP1007[2].typ = (&NTI178010);
TMP1007[2].name = "crc";
TMP1009[2] = &TMP1007[3];
TMP1007[3].kind = 1;
TMP1007[3].offset = offsetof(tmoduleinmemory531017, Deps);
TMP1007[3].typ = (&NTI209933);
TMP1007[3].name = "deps";
TMP1009[3] = &TMP1007[4];
NTI531013.size = sizeof(NU8);
NTI531013.kind = 14;
NTI531013.base = 0;
NTI531013.flags = 3;
for (TMP1012 = 0; TMP1012 < 5; TMP1012++) {
TMP1007[TMP1012+5].kind = 1;
TMP1007[TMP1012+5].offset = TMP1012;
TMP1007[TMP1012+5].name = TMP1011[TMP1012];
TMP1010[TMP1012] = &TMP1007[TMP1012+5];
}
TMP1007[10].len = 5; TMP1007[10].kind = 2; TMP1007[10].sons = &TMP1010[0];
NTI531013.node = &TMP1007[10];
TMP1007[4].kind = 1;
TMP1007[4].offset = offsetof(tmoduleinmemory531017, Needsrecompile);
TMP1007[4].typ = (&NTI531013);
TMP1007[4].name = "needsRecompile";
TMP1009[4] = &TMP1007[11];
NTI531015.size = sizeof(NU8);
NTI531015.kind = 14;
NTI531015.base = 0;
NTI531015.flags = 3;
for (TMP1015 = 0; TMP1015 < 4; TMP1015++) {
TMP1007[TMP1015+12].kind = 1;
TMP1007[TMP1015+12].offset = TMP1015;
TMP1007[TMP1015+12].name = TMP1014[TMP1015];
TMP1013[TMP1015] = &TMP1007[TMP1015+12];
}
TMP1007[16].len = 4; TMP1007[16].kind = 2; TMP1007[16].sons = &TMP1013[0];
NTI531015.node = &TMP1007[16];
TMP1007[11].kind = 1;
TMP1007[11].offset = offsetof(tmoduleinmemory531017, Crcstatus);
TMP1007[11].typ = (&NTI531015);
TMP1007[11].name = "crcStatus";
TMP1007[0].len = 5; TMP1007[0].kind = 2; TMP1007[0].sons = &TMP1009[0];
NTI531017.node = &TMP1007[0];
NTI531056.size = sizeof(TY531056*);
NTI531056.kind = 24;
NTI531056.base = (&NTI531017);
NTI531056.flags = 2;
NTI531056.marker = TMP1016;
}

