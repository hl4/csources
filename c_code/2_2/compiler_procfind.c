/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym208843 tsym208843;
typedef struct tcontext260021 tcontext260021;
typedef struct tscope208837 tscope208837;
typedef struct tidentiter215141 tidentiter215141;
typedef struct tident185021 tident185021;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tnode208813 tnode208813;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct ttype208849 ttype208849;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tlib208831 tlib208831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tpasscontext257005 tpasscontext257005;
typedef struct tproccon260011 tproccon260011;
typedef struct intset205056 intset205056;
typedef struct ttrunk205052 ttrunk205052;
typedef struct ttrunkseq205054 ttrunkseq205054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tidtable208861 tidtable208861;
typedef struct tidpairseq208859 tidpairseq208859;
typedef struct tidpair208857 tidpair208857;
typedef struct tctx259048 tctx259048;
typedef struct TY260134 TY260134;
typedef struct tinstantiationpair260013 tinstantiationpair260013;
typedef struct TY208933 TY208933;
typedef struct TY259250 TY259250;
typedef struct TY182036 TY182036;
typedef struct pprocHEX3Aobjecttype259230 pprocHEX3Aobjecttype259230;
typedef struct TY259269 TY259269;
typedef struct TY259270 TY259270;
typedef struct vmargs259042 vmargs259042;
typedef struct TY259231 TY259231;
typedef struct tblock259030 tblock259030;
typedef struct TY259211 TY259211;
typedef struct TY259237 TY259237;
struct  tidentiter215141  {
NI H;
tident185021* Name;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
};
struct  tscope208837  {
NI Depthlevel;
tstrtable208817 Symbols;
tnodeseq208807* Usingsyms;
tscope208837* Parent;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY170967[2];
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tpasscontext257005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
struct  tidpair208857  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable208861  {
NI Counter;
tidpairseq208859* Data;
};
typedef N_NIMCALL_PTR(tnode208813*, TY260065) (tcontext260021* c, tnode208813* n);
typedef N_NIMCALL_PTR(tnode208813*, TY260070) (tcontext260021* c, tnode208813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode208813*, TY260078) (tcontext260021* c, tnode208813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode208813*, TY260086) (tcontext260021* c, tnode208813* n);
typedef N_NIMCALL_PTR(tnode208813*, TY260091) (tcontext260021* c, tnode208813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode208813*, TY260099) (tcontext260021* c, tnode208813* n);
typedef N_NIMCALL_PTR(tnode208813*, TY260104) (tcontext260021* c, tnode208813* n, tnode208813* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype208849*, TY260111) (tcontext260021* c, tnode208813* n, ttype208849* prev);
typedef struct {
N_NIMCALL_PTR(tnode208813*, ClPrc) (tcontext260021* c, tidtable208861 pt, tnode208813* n, void* ClEnv);
void* ClEnv;
} TY260117;
typedef struct {
N_NIMCALL_PTR(tsym208843*, ClPrc) (tcontext260021* c, tsym208843* fn, tidtable208861 pt, tlineinfo181338 info, void* ClEnv);
void* ClEnv;
} TY260123;
struct  tinstantiationpair260013  {
tsym208843* Genericsym;
tinstantiation208833* Inst;
};
typedef N_NIMCALL_PTR(tsym208843*, TY260139) (tcontext260021* c, tsym208843* dc, ttype208849* t, tlineinfo181338 info);
struct  tcontext260021  {
  tpasscontext257005 Sup;
tsym208843* Module;
tscope208837* Currentscope;
tscope208837* Importtable;
tscope208837* Toplevelscope;
tproccon260011* P;
tsymseq208815* Friendmodules;
NI Instcounter;
intset205056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq208815* Converters;
tsymseq208815* Patterns;
tlinkedlist127028 Optionstack;
tidtable208861 Symmapping;
tlinkedlist127028 Libs;
TY260065 Semconstexpr;
TY260070 Semexpr;
TY260078 Semtryexpr;
TY260086 Semtryconstexpr;
TY260091 Semoperand;
TY260099 Semconstboolexpr;
TY260104 Semoverloadedcall;
TY260111 Semtypenode;
TY260117 Seminferredlambda;
TY260123 Semgenerateinstance;
intset205056 Includedfiles;
tstrtable208817 Userpragmas;
tctx259048* Evalcontext;
intset205056 Unknownidents;
TY260134* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY260139 Instdeepcopy;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tinstantiation208833  {
tsym208843* Sym;
ttypeseq208845* Concretetypes;
TY208933* Usedby;
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
struct  tproccon260011  {
tsym208843* Owner;
tsym208843* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon260011* Next;
NIM_BOOL Wasforwarded;
};
typedef NI TY27020[8];
struct  ttrunk205052  {
ttrunk205052* Next;
NI Key;
TY27020 Bits;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs259042* args, void* ClEnv);
void* ClEnv;
} vmcallback259044;
struct TY259270 {
NimStringDesc* Field0;
vmcallback259044 Field1;
};
struct  tctx259048  {
  tpasscontext257005 Sup;
TY259250* Code;
TY182036* Debug;
tnode208813* Globals;
tnode208813* Constants;
ttypeseq208845* Types;
tnode208813* Currentexceptiona;
tnode208813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype259230* Prc;
tsym208843* Module;
tnode208813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo181338 Comesfromheuristic;
TY259269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock259030  {
tsym208843* Label;
TY259211* Fixups;
};
struct TY259237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY259237 TY259234[256];
struct  pprocHEX3Aobjecttype259230  {
TY259231* Blocks;
tsym208843* Sym;
TY259234 Slots;
NI Maxslots;
};
struct  vmargs259042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode208813* Currentexception;
};
struct tsymseq208815 {
  TGenericSeq Sup;
  tsym208843* data[SEQ_DECL_SIZE];
};
struct tnodeseq208807 {
  TGenericSeq Sup;
  tnode208813* data[SEQ_DECL_SIZE];
};
struct ttypeseq208845 {
  TGenericSeq Sup;
  ttype208849* data[SEQ_DECL_SIZE];
};
struct TY208944 {
  TGenericSeq Sup;
  tinstantiation208833* data[SEQ_DECL_SIZE];
};
struct ttrunkseq205054 {
  TGenericSeq Sup;
  ttrunk205052* data[SEQ_DECL_SIZE];
};
struct tidpairseq208859 {
  TGenericSeq Sup;
  tidpair208857 data[SEQ_DECL_SIZE];
};
struct TY260134 {
  TGenericSeq Sup;
  tinstantiationpair260013 data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY259250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY182036 {
  TGenericSeq Sup;
  tlineinfo181338 data[SEQ_DECL_SIZE];
};
struct TY259269 {
  TGenericSeq Sup;
  TY259270 data[SEQ_DECL_SIZE];
};
struct TY259211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY259231 {
  TGenericSeq Sup;
  tblock259030 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym208843*, searchforprocnew_275197)(tcontext260021* c, tscope208837* scope, tsym208843* fn);
N_NIMCALL(tsym208843*, initidentiter_215147)(tidentiter215141* ti, tstrtable208817 tab, tident185021* s);
N_NIMCALL(NIM_BOOL, sametype_242082)(ttype208849* a, ttype208849* b, NU8 flags);
N_NIMCALL(NU8, equalparams_237086)(tnode208813* a, tnode208813* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_237447)(tsym208843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_182679)(tlineinfo181338 info);
N_NIMCALL(void, localerror_183392)(tlineinfo181338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym208843*, nextidentiter_215156)(tidentiter215141* ti, tstrtable208817 tab);
STRING_LITERAL(TMP3133, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(tsym208843*, searchforprocnew_275197)(tcontext260021* c, tscope208837* scope, tsym208843* fn) {
	tsym208843* result;
	tidentiter215141 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_215147((&it), (*scope).Symbols, (*fn).Name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_242082((*result).Typ, (*fn).Typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_237086((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY170967 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).Flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).Flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_237447(result, ((NU8) 0));
						LOC17[1] = HEX24_182679((*result).Info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3133), LOC17, 2);
						localerror_183392((*fn).Info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_183392((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
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
			result = nextidentiter_215156((&it), (*scope).Symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym208843*, searchforproc_275280)(tcontext260021* c, tscope208837* scope, tsym208843* fn) {
	tsym208843* result;
	result = 0;
	result = searchforprocnew_275197(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

