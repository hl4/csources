/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen463035 tcgen463035;
typedef struct tllstream194204 tllstream194204;
typedef struct tbaselexer195024 tbaselexer195024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable207861 tidtable207861;
typedef struct tidobj184015 tidobj184015;
typedef struct ttype207849 ttype207849;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tnode207813 tnode207813;
typedef struct tsym207843 tsym207843;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc463031 tcproc463031;
typedef struct tnodetable207873 tnodetable207873;
typedef struct tnodepairseq207871 tnodepairseq207871;
typedef struct tnodepair207869 tnodepair207869;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY180351 TY180351;
typedef struct TY463102 TY463102;
typedef struct tblock463029 tblock463029;
typedef struct tmergesections464856 tmergesections464856;
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
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tident184021 tident184021;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
struct  tmergesections464856  {
tcfilesections463019 F;
tcprocsections463023 P;
};
typedef NimStringDesc* TY464013[18];
typedef NimStringDesc* TY464019[3];
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
typedef NI TY27020[16];
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27020 Bits;
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
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
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
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
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
N_NIMCALL(tllstream194204*, llstreamopen_194256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_195035)(tbaselexer195024* l, tllstream194204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_464352)(tbaselexer195024* l);
N_NIMCALL(NI, handlecr_195066)(tbaselexer195024* l, NI pos);
N_NIMCALL(NI, handlelf_195074)(tbaselexer195024* l, NI pos);
N_NIMCALL(void, readkey_464466)(tbaselexer195024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_182443)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_464613)(tbaselexer195024* l, tcgen463035* m);
N_NIMCALL(void, skipwhite_464325)(tbaselexer195024* l);
N_NIMCALL(void, readtypecache_464524)(tbaselexer195024* l, tidtable207861* result);
N_NIMCALL(NI, decodevint_213351)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_213157)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_214196)(tidtable207861* t, tidobj184015* key, TNimObject* val);
N_NIMCALL(ttype207849*, newfaketype_464506)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(void, readintset_464574)(tbaselexer195024* l, intset204056* result);
N_NIMCALL(void, incl_204856)(intset204056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_195045)(tbaselexer195024* l);
static N_INLINE(trope177009**, s_463182)(tcproc463031* p, NU8 s);
N_NIMCALL(void, readmergesections_464862)(NimStringDesc* cfilename, tmergesections464856* m);
N_NIMCALL(trope177009*, readverbatimsection_464426)(tbaselexer195024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_464397)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_464901)(TY464013 a, NimStringDesc* item);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_464994)(TY464019 a, NimStringDesc* item);
N_NIMCALL(trope177009*, con_177024)(trope177009* a, trope177009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, app_177060)(trope177009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_464184)(tidtable207861 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_213296)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_213042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_177101)(trope177009* p);
N_NIMCALL(void, writeintset_464230)(intset204056 a, NimStringDesc** s);
STRING_LITERAL(TMP4146, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4147, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4148, "typeCache", 9);
STRING_LITERAL(TMP4149, "declared", 8);
STRING_LITERAL(TMP4150, "typeInfo", 8);
STRING_LITERAL(TMP4151, "labels", 6);
STRING_LITERAL(TMP4152, "hasframe", 8);
STRING_LITERAL(TMP4153, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4154, "ccgmerge: unknown key: ", 23);
STRING_LITERAL(TMP4223, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4224, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4225, "", 0);
STRING_LITERAL(TMP4226, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4227, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4228, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4229, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4230, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4231, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4232, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4233, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4234, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4235, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4236, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4237, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4238, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4239, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4240, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4241, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4242, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY464013 cfilesectionnames_464012 = {((NimStringDesc*) &TMP4225),
((NimStringDesc*) &TMP4226),
((NimStringDesc*) &TMP4227),
((NimStringDesc*) &TMP4228),
((NimStringDesc*) &TMP4229),
((NimStringDesc*) &TMP4230),
((NimStringDesc*) &TMP4231),
((NimStringDesc*) &TMP4232),
((NimStringDesc*) &TMP4233),
((NimStringDesc*) &TMP4234),
((NimStringDesc*) &TMP4235),
((NimStringDesc*) &TMP4236),
((NimStringDesc*) &TMP4237),
((NimStringDesc*) &TMP4238),
((NimStringDesc*) &TMP4239),
((NimStringDesc*) &TMP4240),
((NimStringDesc*) &TMP4241),
((NimStringDesc*) &TMP4242)}
;
STRING_LITERAL(TMP4243, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4244, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4245, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY464019 cprocsectionnames_464018 = {((NimStringDesc*) &TMP4243),
((NimStringDesc*) &TMP4244),
((NimStringDesc*) &TMP4245)}
;
STRING_LITERAL(TMP4246, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4247, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4251, "/*\011", 3);
STRING_LITERAL(TMP4252, ":*/", 3);
STRING_LITERAL(TMP4260, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4261, "typeCache:{", 11);
STRING_LITERAL(TMP4262, "declared:{", 10);
STRING_LITERAL(TMP4263, "typeInfo:{", 10);
STRING_LITERAL(TMP4264, "labels:", 7);
STRING_LITERAL(TMP4265, " hasframe:", 10);
STRING_LITERAL(TMP4266, "*/", 2);
extern TNimType NTI195024; /* TBaseLexer */
extern TNimType NTI207809; /* PType */
extern TNimType NTI207849; /* TType */
extern NimStringDesc* tnl_174626;
extern tgcheap47816 gch_47844;
extern NU32 gglobaloptions_169128;

N_NIMCALL(void, skipuntilcmd_464352)(tbaselexer195024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_195066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_195074(l, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + ((NI) 1))]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + ((NI) 2))]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += ((NI) 3);
					goto LA1;
				}
				LA11: ;
				pos += ((NI) 1);
			}
			break;
			default:
			{
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(void, readkey_464466)(tbaselexer195024* l, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	(*result) = setLengthStr((*result), ((NI) 0));
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_182443(((NimStringDesc*) &TMP4146));
	}
	LA5: ;
	(*l).Bufpos = (NI32)(pos + ((NI) 1));
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

N_NIMCALL(void, skipwhite_464325)(tbaselexer195024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_195066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_195074(l, pos);
			}
			break;
			case 32:
			{
				pos += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(ttype207849*, newfaketype_464506)(NI id) {
	ttype207849* result;
	result = 0;
	result = (ttype207849*) newObj((&NTI207809), sizeof(ttype207849));
	(*result).Sup.Sup.m_type = (&NTI207849);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_464524)(tbaselexer195024* l, tidtable207861* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_182443(((NimStringDesc*) &TMP4153));
	}
	LA3: ;
	(*l).Bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype207849* LOC11;
			tidobj184015* LOC12;
			trope177009* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_464325(l);
			key = decodevint_213351((*l).Buf, (&(*l).Bufpos));
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_182443(((NimStringDesc*) &TMP4146));
			}
			LA9: ;
			(*l).Bufpos += ((NI) 1);
			value = decodestr_213157((*l).Buf, (&(*l).Bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_464506(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = torope_177076(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_214196(result, LOC12, LOC14);
		} LA6: ;
	}
	(*l).Bufpos += ((NI) 1);
}

N_NIMCALL(void, readintset_464574)(tbaselexer195024* l, intset204056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_182443(((NimStringDesc*) &TMP4153));
	}
	LA3: ;
	(*l).Bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_464325(l);
			key = decodevint_213351((*l).Buf, (&(*l).Bufpos));
			incl_204856(result, key);
		} LA6: ;
	}
	(*l).Bufpos += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_464613)(tbaselexer195024* l, tcgen463035* m) {
	NimStringDesc* k;
	k = rawNewString(((NI) 9));
	{
		while (1) {
			skipwhite_464325(l);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*l).Buf[(NI32)((*l).Bufpos + ((NI) 1))]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*l).Bufpos += ((NI) 2);
				goto LA1;
			}
			LA7: ;
			readkey_464466(l, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4148))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4149))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4150))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4151))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4152))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_464524(l, (&(*m).Typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_464574(l, (&(*m).Declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_464574(l, (&(*m).Typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_213351((*l).Buf, (&(*l).Bufpos));
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_213351((*l).Buf, (&(*l).Bufpos));
				(*m).Framedeclared = !((LOC22 == ((NI) 0)));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 23);
appendString(LOC24, ((NimStringDesc*) &TMP4154));
appendString(LOC24, k);
				internalerror_182443(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_464815)(NimStringDesc* cfilename, tcgen463035* m) {
	tllstream194204* s_464820;
	tbaselexer195024 l;
	NimStringDesc* k;
{	s_464820 = llstreamopen_194256(cfilename, ((NU8) 0));
	{
		if (!(s_464820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI195024);
	openbaselexer_195035((&l), s_464820, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_464352((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_464466((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4147))) goto LA13;
				processmergeinfo_464613((&l), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_195045((&l));
	}BeforeRet: ;
}

static N_INLINE(trope177009**, s_463182)(tcproc463031* p, NU8 s) {
	trope177009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI32)((*p).Blocks->Sup.len - ((NI) 1))].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_465105)(tcgen463035* m) {
	NIM_BOOL result;
{	result = 0;
	{
		NU8 i_465232;
		NU8 res_465448;
		i_465232 = 0;
		res_465448 = ((NU8) 1);
		{
			while (1) {
				if (!(res_465448 <= ((NU8) 10))) goto LA3;
				i_465232 = res_465448;
				{
					if (!!(((*m).S[(i_465232)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_465448 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_465432;
		NU8 res_465455;
		i_465432 = 0;
		res_465455 = ((NU8) 0);
		{
			while (1) {
				if (!(res_465455 <= ((NU8) 2))) goto LA10;
				i_465432 = res_465455;
				{
					trope177009** LOC13;
					LOC13 = 0;
					LOC13 = s_463182((*m).Initproc, i_465432);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_465455 += ((NI) 1);
			} LA10: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_464397)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = ((NI) 0);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < ((NI) 19));
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI32)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4224)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += ((NI) 1);
		} LA2: ;
	}
	result = (s == ((NI) 19));
	return result;
}

N_NIMCALL(trope177009*, readverbatimsection_464426)(tbaselexer195024* l) {
	trope177009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	r = rawNewString(((NI) 30000));
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_195066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174626->Sup.len + 0);
appendString(r, tnl_174626);
			}
			break;
			case 10:
			{
				pos = handlelf_195074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174626->Sup.len + 0);
appendString(r, tnl_174626);
			}
			break;
			case 0:
			{
				internalerror_182443(((NimStringDesc*) &TMP4223));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_464397(buf, pos);
					if (!LOC9) goto LA10;
					pos += ((NI) 19);
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
	result = torope_177076(r);
	return result;
}

static N_INLINE(NI, find_464901)(TY464013 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_464964;
		NU8 i_464977;
		i_464964 = 0;
		i_464977 = ((NU8) 0);
		{
			if (!(i_464977 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_464964 = a[(i_464977)- 0];
					{
						if (!eqStrings(i_464964, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 17) <= i_464977)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_464977 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_464994)(TY464019 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_465057;
		NU8 i_465070;
		i_465057 = 0;
		i_465070 = ((NU8) 0);
		{
			if (!(i_465070 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_465057 = a[(i_465070)- 0];
					{
						if (!eqStrings(i_465057, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 2) <= i_465070)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_465070 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_464862)(NimStringDesc* cfilename, tmergesections464856* m) {
	tllstream194204* s_464868;
	tbaselexer195024 l;
	NimStringDesc* k;
{	s_464868 = llstreamopen_194256(cfilename, ((NU8) 0));
	{
		if (!(s_464868 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI195024);
	openbaselexer_195035((&l), s_464868, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_464352((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_464466((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4147))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope177009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI32)(l.Bufpos + ((NI) 1))]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += ((NI) 2);
				skipwhite_464325((&l));
				verbatim = readverbatimsection_464426((&l));
				skipwhite_464325((&l));
				sectiona = find_464901(cfilesectionnames_464012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (((NI) 0) < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= ((NI) 17));
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) (&(*m).F[(sectiona)- 0]), verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_464994(cprocsectionnames_464018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (((NI) 0) <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= ((NI) 2));
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) (&(*m).P[(sectionb)- 0]), verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4246));
appendString(LOC34, k);
						internalerror_182443(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_182443(((NimStringDesc*) &TMP4247));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_195045((&l));
	}BeforeRet: ;
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

N_NIMCALL(void, mergefiles_465481)(NimStringDesc* cfilename, tcgen463035* m) {
	tmergesections464856 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_464862(cfilename, (&old));
	{
		NU8 i_465499;
		NU8 res_465523;
		i_465499 = 0;
		res_465523 = ((NU8) 0);
		{
			while (1) {
				if (!(res_465523 <= ((NU8) 17))) goto LA3;
				i_465499 = res_465523;
				asgnRefNoCycle((void**) (&(*m).S[(i_465499)- 0]), con_177024(old.F[(i_465499)- 0], (*m).S[(i_465499)- 0]));
				res_465523 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_465514;
		NU8 res_465530;
		i_465514 = 0;
		res_465530 = ((NU8) 0);
		{
			while (1) {
				trope177009** LOC7;
				trope177009** LOC8;
				if (!(res_465530 <= ((NU8) 2))) goto LA6;
				i_465514 = res_465530;
				LOC7 = 0;
				LOC7 = s_463182((*m).Initproc, i_465514);
				LOC8 = 0;
				LOC8 = s_463182((*m).Initproc, i_465514);
				unsureAsgnRef((void**) (&(*LOC7)), con_177024(old.P[(i_465514)- 0], (*LOC8)));
				res_465530 += ((NI) 1);
			} LA6: ;
		}
	}
}

N_NIMCALL(trope177009*, gensectionstart_464106)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169128) == 0))) goto LA3;
		result = torope_177076(tnl_174626);
		app_177060(&result, ((NimStringDesc*) &TMP4251));
		app_177060(&result, cprocsectionnames_464018[(ps)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4252));
		app_177060(&result, tnl_174626);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_464147)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174626->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4224));
appendString(LOC5, tnl_174626);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionstart_464028)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169128) == 0))) goto LA3;
		result = torope_177076(tnl_174626);
		app_177060(&result, ((NimStringDesc*) &TMP4251));
		app_177060(&result, cfilesectionnames_464012[(fs)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4252));
		app_177060(&result, tnl_174626);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_464069)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174626->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4224));
appendString(LOC5, tnl_174626);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_464184)(tidtable207861 a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI id_464190;
		TNimObject* value_464191;
		id_464190 = 0;
		value_464191 = 0;
		{
			NI i_464205;
			NI HEX3Atmp_464207;
			NI res_464209;
			i_464205 = 0;
			HEX3Atmp_464207 = 0;
			HEX3Atmp_464207 = (a.Data->Sup.len-1);
			res_464209 = ((NI) 0);
			{
				while (1) {
					if (!(res_464209 <= HEX3Atmp_464207)) goto LA4;
					i_464205 = res_464209;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_464205].Key == NIM_NIL))) goto LA7;
						id_464190 = (*a.Data->data[i_464205].Key).Id;
						value_464191 = a.Data->data[i_464205].Val;
						{
							if (!(i == ((NI) 10))) goto LA11;
							i = ((NI) 0);
							(*s) = resizeString((*s), tnl_174626->Sup.len + 0);
appendString((*s), tnl_174626);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_213296(id_464190, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_177101(((trope177009*) (value_464191)));
						encodestr_213042(LOC14, s);
						i += ((NI) 1);
					}
					LA7: ;
					res_464209 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_464230)(intset204056 a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI x_464236;
		ttrunk204052* r_464251;
		x_464236 = 0;
		r_464251 = a.Head;
		{
			while (1) {
				NI i_464253;
				if (!!((r_464251 == NIM_NIL))) goto LA3;
				i_464253 = ((NI) 0);
				{
					while (1) {
						NI w_464255;
						NI j_464257;
						if (!(i_464253 <= ((NI) 15))) goto LA5;
						w_464255 = (*r_464251).Bits[(i_464253)- 0];
						j_464257 = ((NI) 0);
						{
							while (1) {
								if (!!((w_464255 == ((NI) 0)))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_464255 & ((NI) 1)))) == ((NI) 0)))) goto LA10;
									x_464236 = (NI)((NI)((NU32)((*r_464251).Key) << (NU32)(((NI) 9))) | (NI)((NU32)((NI)((NU32)(i_464253) << (NU32)(((NI) 5)))) + (NU32)(j_464257)));
									{
										if (!(i == ((NI) 10))) goto LA14;
										i = ((NI) 0);
										(*s) = resizeString((*s), tnl_174626->Sup.len + 0);
appendString((*s), tnl_174626);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_213296(x_464236, s);
									i += ((NI) 1);
								}
								LA10: ;
								j_464257 += ((NI) 1);
								w_464255 = (NI)((NU32)(w_464255) >> (NU32)(((NI) 1)));
							} LA7: ;
						}
						i_464253 += ((NI) 1);
					} LA5: ;
				}
				r_464251 = (*r_464251).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope177009*, genmergeinfo_464285)(tcgen463035* m) {
	trope177009* result;
	NimStringDesc* s;
{	result = 0;
	{
		if (!!(((gglobaloptions_169128 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4260));
	s = resizeString(s, tnl_174626->Sup.len + 0);
appendString(s, tnl_174626);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4261));
	writetypecache_464184((*m).Typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4262));
	writeintset_464230((*m).Declaredthings, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4263));
	writeintset_464230((*m).Typeinfomarker, (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4264));
	encodevint_213296(((NI) ((*m).Labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4265));
	encodevint_213296(((NI) ((*m).Framedeclared)), (&s));
	s = resizeString(s, tnl_174626->Sup.len + 0);
appendString(s, tnl_174626);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4266));
	result = torope_177076(s);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeDatInit)(void) {
}

