/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tsym207843 tsym207843;
typedef struct tcontext259021 tcontext259021;
typedef struct tscope207837 tscope207837;
typedef struct tidentiter214141 tidentiter214141;
typedef struct tident184021 tident184021;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tnode207813 tnode207813;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tpasscontext256005 tpasscontext256005;
typedef struct tproccon259011 tproccon259011;
typedef struct intset204056 intset204056;
typedef struct ttrunk204052 ttrunk204052;
typedef struct ttrunkseq204054 ttrunkseq204054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct tctx258048 tctx258048;
typedef struct TY259134 TY259134;
typedef struct tinstantiationpair259013 tinstantiationpair259013;
typedef struct TY207933 TY207933;
typedef struct TY258250 TY258250;
typedef struct TY181039 TY181039;
typedef struct pprocHEX3Aobjecttype258230 pprocHEX3Aobjecttype258230;
typedef struct TY258269 TY258269;
typedef struct TY258270 TY258270;
typedef struct vmargs258042 vmargs258042;
typedef struct TY258231 TY258231;
typedef struct tblock258030 tblock258030;
typedef struct TY258211 TY258211;
typedef struct TY258237 TY258237;
struct  tidentiter214141  {
NI H;
tident184021* Name;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
};
struct  tscope207837  {
NI Depthlevel;
tstrtable207817 Symbols;
tnodeseq207807* Usingsyms;
tscope207837* Parent;
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
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY169967[2];
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  tpasscontext256005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
struct  tidpair207857  {
tidobj184015* Key;
TNimObject* Val;
};
struct  tidtable207861  {
NI Counter;
tidpairseq207859* Data;
};
typedef N_NIMCALL_PTR(tnode207813*, TY259065) (tcontext259021* c, tnode207813* n);
typedef N_NIMCALL_PTR(tnode207813*, TY259070) (tcontext259021* c, tnode207813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode207813*, TY259078) (tcontext259021* c, tnode207813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode207813*, TY259086) (tcontext259021* c, tnode207813* n);
typedef N_NIMCALL_PTR(tnode207813*, TY259091) (tcontext259021* c, tnode207813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode207813*, TY259099) (tcontext259021* c, tnode207813* n);
typedef N_NIMCALL_PTR(tnode207813*, TY259104) (tcontext259021* c, tnode207813* n, tnode207813* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype207849*, TY259111) (tcontext259021* c, tnode207813* n, ttype207849* prev);
typedef struct {
N_NIMCALL_PTR(tnode207813*, ClPrc) (tcontext259021* c, tidtable207861 pt, tnode207813* n, void* ClEnv);
void* ClEnv;
} TY259117;
typedef struct {
N_NIMCALL_PTR(tsym207843*, ClPrc) (tcontext259021* c, tsym207843* fn, tidtable207861 pt, tlineinfo180338 info, void* ClEnv);
void* ClEnv;
} TY259123;
struct  tinstantiationpair259013  {
tsym207843* Genericsym;
tinstantiation207833* Inst;
};
typedef N_NIMCALL_PTR(tsym207843*, TY259139) (tcontext259021* c, tsym207843* dc, ttype207849* t, tlineinfo180338 info);
struct  tcontext259021  {
  tpasscontext256005 Sup;
tsym207843* Module;
tscope207837* Currentscope;
tscope207837* Importtable;
tscope207837* Toplevelscope;
tproccon259011* P;
tsymseq207815* Friendmodules;
NI Instcounter;
intset204056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq207815* Converters;
tsymseq207815* Patterns;
tlinkedlist127028 Optionstack;
tidtable207861 Symmapping;
tlinkedlist127028 Libs;
TY259065 Semconstexpr;
TY259070 Semexpr;
TY259078 Semtryexpr;
TY259086 Semtryconstexpr;
TY259091 Semoperand;
TY259099 Semconstboolexpr;
TY259104 Semoverloadedcall;
TY259111 Semtypenode;
TY259117 Seminferredlambda;
TY259123 Semgenerateinstance;
intset204056 Includedfiles;
tstrtable207817 Userpragmas;
tctx258048* Evalcontext;
intset204056 Unknownidents;
TY259134* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY259139 Instdeepcopy;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tproccon259011  {
tsym207843* Owner;
tsym207843* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon259011* Next;
NIM_BOOL Wasforwarded;
};
typedef NI TY27220[16];
struct  ttrunk204052  {
ttrunk204052* Next;
NI Key;
TY27220 Bits;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs258042* args, void* ClEnv);
void* ClEnv;
} vmcallback258044;
struct TY258270 {
NimStringDesc* Field0;
vmcallback258044 Field1;
};
struct  tctx258048  {
  tpasscontext256005 Sup;
TY258250* Code;
TY181039* Debug;
tnode207813* Globals;
tnode207813* Constants;
ttypeseq207845* Types;
tnode207813* Currentexceptiona;
tnode207813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype258230* Prc;
tsym207843* Module;
tnode207813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo180338 Comesfromheuristic;
TY258269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock258030  {
tsym207843* Label;
TY258211* Fixups;
};
struct TY258237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY258237 TY258234[256];
struct  pprocHEX3Aobjecttype258230  {
TY258231* Blocks;
tsym207843* Sym;
TY258234 Slots;
NI Maxslots;
};
struct  vmargs258042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode207813* Currentexception;
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
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
struct ttrunkseq204054 {
  TGenericSeq Sup;
  ttrunk204052* data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
struct TY259134 {
  TGenericSeq Sup;
  tinstantiationpair259013 data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY258250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY181039 {
  TGenericSeq Sup;
  tlineinfo180338 data[SEQ_DECL_SIZE];
};
struct TY258269 {
  TGenericSeq Sup;
  TY258270 data[SEQ_DECL_SIZE];
};
struct TY258211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY258231 {
  TGenericSeq Sup;
  tblock258030 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym207843*, searchforprocnew_274197)(tcontext259021* c, tscope207837* scope, tsym207843* fn);
N_NIMCALL(tsym207843*, initidentiter_214147)(tidentiter214141* ti, tstrtable207817 tab, tident184021* s);
N_NIMCALL(NIM_BOOL, sametype_241082)(ttype207849* a, ttype207849* b, NU8 flags);
N_NIMCALL(NU8, equalparams_236086)(tnode207813* a, tnode207813* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_236447)(tsym207843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_181679)(tlineinfo180338 info);
N_NIMCALL(void, localerror_182392)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym207843*, nextidentiter_214156)(tidentiter214141* ti, tstrtable207817 tab);
STRING_LITERAL(TMP3128, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(tsym207843*, searchforprocnew_274197)(tcontext259021* c, tscope207837* scope, tsym207843* fn) {
	tsym207843* result;
	tidentiter214141 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_214147((&it), (*scope).Symbols, (*fn).Name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_241082((*result).Typ, (*fn).Typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_236086((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY169967 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).Flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).Flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_236447(result, ((NU8) 0));
						LOC17[1] = HEX24_181679((*result).Info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3128), LOC17, 2);
						localerror_182392((*fn).Info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_182392((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				}
			}
			LA7: ;
			result = nextidentiter_214156((&it), (*scope).Symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym207843*, searchforproc_274280)(tcontext259021* c, tscope207837* scope, tsym207843* fn) {
	tsym207843* result;
	result = 0;
	result = searchforprocnew_274197(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

