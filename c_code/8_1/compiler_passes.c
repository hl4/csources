/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym207843 tsym207843;
typedef struct tnode207813 tnode207813;
typedef struct tpass256017 tpass256017;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct trodreader248030 trodreader248030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream194204 tllstream194204;
typedef struct tparsers234035 tparsers234035;
typedef struct tparser222205 tparser222205;
typedef struct tlexer197184 tlexer197184;
typedef struct tbaselexer195024 tbaselexer195024;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken197180 ttoken197180;
typedef struct tident184021 tident184021;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
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
typedef struct TY120008 TY120008;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY441107 TY441107;
typedef struct TY207933 TY207933;
typedef struct tindex248028 tindex248028;
typedef struct tiitable214274 tiitable214274;
typedef struct tiipairseq214272 tiipairseq214272;
typedef struct tiipair214270 tiipair214270;
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct memfile246208 memfile246208;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef N_NIMCALL_PTR(tsym207843*, TY256064) (tsym207843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode207813*, TY256069) (tsym207843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext256005*, tpassopen256009) (tsym207843* module);
typedef N_NIMCALL_PTR(tpasscontext256005*, tpassopencached256011) (tsym207843* module, trodreader248030* rd);
typedef N_NIMCALL_PTR(tnode207813*, tpassprocess256015) (tpasscontext256005* p, tnode207813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode207813*, tpassclose256013) (tpasscontext256005* p, tnode207813* n);
struct tpass256017 {
tpassopen256009 Field0;
tpassopencached256011 Field1;
tpassprocess256015 Field2;
tpassclose256013 Field3;
};
typedef tpass256017 TY256173[10];
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
struct  tbaselexer195024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream194204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo180338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler197182;
struct  tlexer197184  {
  tbaselexer195024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler197182 Errorhandler;
};
struct  ttoken197180  {
NU8 Toktype;
NI Indent;
tident184021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser222205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer197184 Lex;
ttoken197180 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers234035  {
NU8 Skin;
tparser222205 Parser;
};
typedef tpasscontext256005* tpasscontextarray256168[10];
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
struct  tllstream194204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct TY441107 {
tnode207813* Field0;
tnode207813* Field1;
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
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq214272 {
  TGenericSeq Sup;
  tiipair214270 data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_256292)(tpasscontext256005** a, tsym207843* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_181607)(NI32 fileidx);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(tllstream194204*, llstreamopen_194238)(FILE* f);
N_NIMCALL(tllstream194204*, llstreamopen_194256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_182191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_234047)(tparsers234035* p, NI32 fileidx, tllstream194204* inputstream);
N_NIMCALL(void, processimplicits_256613)(TY120008* implicits, NU8 nodekind, tpasscontext256005** a);
N_NIMCALL(tnode207813*, newnodei_209351)(NU8 kind, tlineinfo180338 info);
N_NIMCALL(tnode207813*, newstrnode_208644)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_209819)(tnode207813* father, tnode207813* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_256450)(tnode207813* n, tpasscontext256005** a);
N_NIMCALL(tnode207813*, parsetoplevelstmt_234070)(tparsers234035* p);
N_NIMCALL(void, closeparsers_234056)(tparsers234035* p);
N_NIMCALL(void, closepasses_256401)(tpasscontext256005** a);
N_NIMCALL(void, idsynchronizationpoint_206453)(NI idrange);
N_NIMCALL(void, openpassescached_256340)(tpasscontext256005** a, tsym207843* module, trodreader248030* rd);
N_NIMCALL(tnode207813*, loadinitsection_248077)(trodreader248030* r);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(void, processtoplevelstmtcached_256508)(tnode207813* n, tpasscontext256005** a);
N_NIMCALL(void, closepassescached_256557)(tpasscontext256005** a);
N_NIMCALL(void, carrypass_256208)(tpass256017 p, tsym207843* module, TY441107 m, TY441107* Result);
STRING_LITERAL(TMP1445, "-", 1);
STRING_LITERAL(TMP1446, "stdinfile", 9);
TY256064 gimportmodule_256068;
TY256069 gincludefile_256073;
TY256173 gpasses_256175;
NI gpasseslen_256176;
extern TNimType NTI3411; /* RootObj */
TNimType NTI256005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI234035; /* TParsers */
extern tgcheap47816 gch_47844;
extern tlineinfo180338 gcmdlineinfo_180925;
extern TY120008* implicitimports_169280;
extern TY120008* implicitincludes_169300;

N_NIMCALL(void, openpasses_256292)(tpasscontext256005** a, tsym207843* module) {
	{
		NI i_256309;
		NI HEX3Atmp_256318;
		NI res_256321;
		i_256309 = 0;
		HEX3Atmp_256318 = 0;
		HEX3Atmp_256318 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256321 = ((NI) 0);
		{
			while (1) {
				if (!(res_256321 <= HEX3Atmp_256318)) goto LA3;
				i_256309 = res_256321;
				{
					if (!!(gpasses_256175[(i_256309)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_256309)- 0]), gpasses_256175[(i_256309)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_256309)- 0]), NIM_NIL);
				}
				LA4: ;
				res_256321 += ((NI) 1);
			} LA3: ;
		}
	}
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

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45947))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_256450)(tnode207813* n, tpasscontext256005** a) {
	NIM_BOOL result;
	tnode207813* m;
{	result = 0;
	m = n;
	{
		NI i_256469;
		NI HEX3Atmp_256486;
		NI res_256489;
		i_256469 = 0;
		HEX3Atmp_256486 = 0;
		HEX3Atmp_256486 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256489 = ((NI) 0);
		{
			while (1) {
				if (!(res_256489 <= HEX3Atmp_256486)) goto LA3;
				i_256469 = res_256489;
				{
					if (!!(gpasses_256175[(i_256469)- 0].Field2 == 0)) goto LA6;
					m = gpasses_256175[(i_256469)- 0].Field2(a[(i_256469)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_256489 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_256613)(TY120008* implicits, NU8 nodekind, tpasscontext256005** a) {
	{
		NimStringDesc* module_256629;
		NI i_256636;
		NI l_256638;
		module_256629 = 0;
		i_256636 = ((NI) 0);
		l_256638 = implicits->Sup.len;
		{
			while (1) {
				tnode207813* importstmt;
				tnode207813* str;
				if (!(i_256636 < l_256638)) goto LA3;
				module_256629 = implicits->data[i_256636];
				importstmt = newnodei_209351(nodekind, gcmdlineinfo_180925);
				str = newstrnode_208644(((NU8) 20), module_256629);
				(*str).Info = gcmdlineinfo_180925;
				addson_209819(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_256450(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_256636 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_256401)(tpasscontext256005** a) {
	tnode207813* m;
	m = NIM_NIL;
	{
		NI i_256418;
		NI HEX3Atmp_256428;
		NI res_256431;
		i_256418 = 0;
		HEX3Atmp_256428 = 0;
		HEX3Atmp_256428 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256431 = ((NI) 0);
		{
			while (1) {
				if (!(res_256431 <= HEX3Atmp_256428)) goto LA3;
				i_256418 = res_256431;
				{
					if (!!(gpasses_256175[(i_256418)- 0].Field3 == 0)) goto LA6;
					m = gpasses_256175[(i_256418)- 0].Field3(a[(i_256418)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_256418)- 0]), NIM_NIL);
				res_256431 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_256340)(tpasscontext256005** a, tsym207843* module, trodreader248030* rd) {
	{
		NI i_256358;
		NI HEX3Atmp_256379;
		NI res_256382;
		i_256358 = 0;
		HEX3Atmp_256379 = 0;
		HEX3Atmp_256379 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256382 = ((NI) 0);
		{
			while (1) {
				if (!(res_256382 <= HEX3Atmp_256379)) goto LA3;
				i_256358 = res_256382;
				{
					if (!!(gpasses_256175[(i_256358)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_256358)- 0]), gpasses_256175[(i_256358)- 0].Field1(module, rd));
					{
						if (!!((a[(i_256358)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_256358)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_256358)- 0]), NIM_NIL);
				}
				LA4: ;
				res_256382 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_256508)(tnode207813* n, tpasscontext256005** a) {
	tnode207813* m;
	m = n;
	{
		NI i_256526;
		NI HEX3Atmp_256535;
		NI res_256538;
		i_256526 = 0;
		HEX3Atmp_256535 = 0;
		HEX3Atmp_256535 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256538 = ((NI) 0);
		{
			while (1) {
				if (!(res_256538 <= HEX3Atmp_256535)) goto LA3;
				i_256526 = res_256538;
				{
					if (!!(gpasses_256175[(i_256526)- 0].Field1 == 0)) goto LA6;
					m = gpasses_256175[(i_256526)- 0].Field2(a[(i_256526)- 0], m);
				}
				LA6: ;
				res_256538 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_256557)(tpasscontext256005** a) {
	tnode207813* m;
	m = NIM_NIL;
	{
		NI i_256574;
		NI HEX3Atmp_256591;
		NI res_256594;
		i_256574 = 0;
		HEX3Atmp_256591 = 0;
		HEX3Atmp_256591 = (NI32)(gpasseslen_256176 - ((NI) 1));
		res_256594 = ((NI) 0);
		{
			while (1) {
				if (!(res_256594 <= HEX3Atmp_256591)) goto LA3;
				i_256574 = res_256594;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_256175[(i_256574)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_256175[(i_256574)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_256175[(i_256574)- 0].Field3(a[(i_256574)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_256574)- 0]), NIM_NIL);
				res_256594 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_256056)(tsym207843* module, tllstream194204* stream, trodreader248030* rd) {
	tparsers234035 p;
	tpasscontextarray256168 a;
	tllstream194204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI234035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_256292(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_181607(fileidx);
			{
				NimStringDesc* LOC13;
				if (!eqStrings((*(*module).Name).S, ((NimStringDesc*) &TMP1445))) goto LA11;
				LOC13 = 0;
				LOC13 = (*(*module).Name).S; (*(*module).Name).S = copyStringRC1(((NimStringDesc*) &TMP1446));
				if (LOC13) nimGCunrefNoCycle(LOC13);
				s = llstreamopen_194238(stdin);
			}
			goto LA9;
			LA11: ;
			{
				s = llstreamopen_194256(filename, ((NU8) 0));
			}
			LA9: ;
			{
				if (!(s == NIM_NIL)) goto LA17;
				rawmessage_182191(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA17: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_234047((&p), fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA24;
					processimplicits_256613(implicitimports_169280, ((NU8) 116), a);
					processimplicits_256613(implicitincludes_169300, ((NU8) 121), a);
				}
				LA24: ;
				{
					while (1) {
						tnode207813* n;
						n = parsetoplevelstmt_234070((&p));
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA30;
							goto LA26;
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = processtoplevelstmt_256450(n, a);
							if (!!(LOC34)) goto LA35;
							goto LA26;
						}
						LA35: ;
					}
				} LA26: ;
				closeparsers_234056((&p));
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA39;
					goto LA20;
				}
				LA39: ;
			}
		} LA20: ;
		closepasses_256401(a);
		idsynchronizationpoint_206453(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		tnode207813* n;
		openpassescached_256340(a, module, rd);
		n = loadinitsection_248077(rd);
		{
			NI i_256758;
			NI HEX3Atmp_256769;
			NI LOC43;
			NI res_256772;
			i_256758 = 0;
			HEX3Atmp_256769 = 0;
			LOC43 = 0;
			LOC43 = sonslen_210403(n);
			HEX3Atmp_256769 = (NI32)(LOC43 - ((NI) 1));
			res_256772 = ((NI) 0);
			{
				while (1) {
					if (!(res_256772 <= HEX3Atmp_256769)) goto LA45;
					i_256758 = res_256772;
					processtoplevelstmtcached_256508((*n).kindU.S6.Sons->data[i_256758], a);
					res_256772 += ((NI) 1);
				} LA45: ;
			}
		}
		closepassescached_256557(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_256182)(void) {
	gpasseslen_256176 = ((NI) 0);
}

N_NIMCALL(void, registerpass_256190)(tpass256017 p) {
	gpasses_256175[(gpasseslen_256176)- 0] = p;
	gpasseslen_256176 += ((NI) 1);
}

N_NIMCALL(NIM_BOOL, astneeded_256093)(tsym207843* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[((NI) 2)]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_256208)(tpass256017 p, tsym207843* module, TY441107 m, TY441107* Result) {
	tpasscontext256005* c;
	c = p.Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), p.Field2(c, m.Field0));
	{
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_256230)(tnode207813* nodes, tsym207843* module, tpass256017* passes, NI passesLen0) {
	TY441107 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass256017 pass_256271;
		NI i_256276;
		memset((void*)(&pass_256271), 0, sizeof(pass_256271));
		i_256276 = ((NI) 0);
		{
			while (1) {
				TY441107 LOC4;
				if (!(i_256276 < passesLen0)) goto LA3;
				pass_256271 = passes[i_256276];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_256208(pass_256271, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_256276 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode TMP836[1];
NTI256005.size = sizeof(tpasscontext256005);
NTI256005.kind = 17;
NTI256005.base = (&NTI3411);
NTI256005.flags = 1;
TMP836[0].kind = 1;
TMP836[0].offset = offsetof(tpasscontext256005, Fromcache);
TMP836[0].typ = (&NTI138);
TMP836[0].name = "fromCache";
NTI256005.node = &TMP836[0];
}

