/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym209843 tsym209843;
typedef struct tcontext261021 tcontext261021;
typedef struct tscope209837 tscope209837;
typedef struct tidentiter216141 tidentiter216141;
typedef struct tident186021 tident186021;
typedef struct tstrtable209817 tstrtable209817;
typedef struct tsymseq209815 tsymseq209815;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnodeseq209807 tnodeseq209807;
typedef struct tnode209813 tnode209813;
typedef struct tidobj186015 tidobj186015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq209845 ttypeseq209845;
typedef struct ttype209849 ttype209849;
typedef struct TY209944 TY209944;
typedef struct tinstantiation209833 tinstantiation209833;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct tloc209827 tloc209827;
typedef struct trope179009 trope179009;
typedef struct tlib209831 tlib209831;
typedef struct NimStringDesc NimStringDesc;
typedef struct tpasscontext258005 tpasscontext258005;
typedef struct tproccon261011 tproccon261011;
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct tlinkedlist130028 tlinkedlist130028;
typedef struct tlistentry130022 tlistentry130022;
typedef struct tidtable209861 tidtable209861;
typedef struct tidpairseq209859 tidpairseq209859;
typedef struct tidpair209857 tidpair209857;
typedef struct tctx260048 tctx260048;
typedef struct TY261134 TY261134;
typedef struct tinstantiationpair261013 tinstantiationpair261013;
typedef struct TY209933 TY209933;
typedef struct TY260250 TY260250;
typedef struct TY183036 TY183036;
typedef struct pprocHEX3Aobjecttype260230 pprocHEX3Aobjecttype260230;
typedef struct TY260269 TY260269;
typedef struct TY260270 TY260270;
typedef struct vmargs260042 vmargs260042;
typedef struct TY260231 TY260231;
typedef struct tblock260030 tblock260030;
typedef struct TY260211 TY260211;
typedef struct TY260237 TY260237;
struct  tidentiter216141  {
NI H;
tident186021* Name;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable209817  {
NI Counter;
tsymseq209815* Data;
};
struct  tscope209837  {
NI Depthlevel;
tstrtable209817 Symbols;
tnodeseq209807* Usingsyms;
tscope209837* Parent;
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
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY171945[2];
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct  tpasscontext258005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
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
struct  tidpair209857  {
tidobj186015* Key;
TNimObject* Val;
};
struct  tidtable209861  {
NI Counter;
tidpairseq209859* Data;
};
typedef N_NIMCALL_PTR(tnode209813*, TY261065) (tcontext261021* c, tnode209813* n);
typedef N_NIMCALL_PTR(tnode209813*, TY261070) (tcontext261021* c, tnode209813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode209813*, TY261078) (tcontext261021* c, tnode209813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode209813*, TY261086) (tcontext261021* c, tnode209813* n);
typedef N_NIMCALL_PTR(tnode209813*, TY261091) (tcontext261021* c, tnode209813* n, NU16 flags);
typedef N_NIMCALL_PTR(tnode209813*, TY261099) (tcontext261021* c, tnode209813* n);
typedef N_NIMCALL_PTR(tnode209813*, TY261104) (tcontext261021* c, tnode209813* n, tnode209813* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype209849*, TY261111) (tcontext261021* c, tnode209813* n, ttype209849* prev);
typedef struct {
N_NIMCALL_PTR(tnode209813*, ClPrc) (tcontext261021* c, tidtable209861 pt, tnode209813* n, void* ClEnv);
void* ClEnv;
} TY261117;
typedef struct {
N_NIMCALL_PTR(tsym209843*, ClPrc) (tcontext261021* c, tsym209843* fn, tidtable209861 pt, tlineinfo182338 info, void* ClEnv);
void* ClEnv;
} TY261123;
struct  tinstantiationpair261013  {
tsym209843* Genericsym;
tinstantiation209833* Inst;
};
typedef N_NIMCALL_PTR(tsym209843*, TY261139) (tcontext261021* c, tsym209843* dc, ttype209849* t, tlineinfo182338 info);
struct  tcontext261021  {
  tpasscontext258005 Sup;
tsym209843* Module;
tscope209837* Currentscope;
tscope209837* Importtable;
tscope209837* Toplevelscope;
tproccon261011* P;
tsymseq209815* Friendmodules;
NI Instcounter;
intset206056 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq209815* Converters;
tsymseq209815* Patterns;
tlinkedlist130028 Optionstack;
tidtable209861 Symmapping;
tlinkedlist130028 Libs;
TY261065 Semconstexpr;
TY261070 Semexpr;
TY261078 Semtryexpr;
TY261086 Semtryconstexpr;
TY261091 Semoperand;
TY261099 Semconstboolexpr;
TY261104 Semoverloadedcall;
TY261111 Semtypenode;
TY261117 Seminferredlambda;
TY261123 Semgenerateinstance;
intset206056 Includedfiles;
tstrtable209817 Userpragmas;
tctx260048* Evalcontext;
intset206056 Unknownidents;
TY261134* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
NI Inparallelstmt;
TY261139 Instdeepcopy;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tproccon261011  {
tsym209843* Owner;
tsym209843* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon261011* Next;
NIM_BOOL Wasforwarded;
};
typedef NI TY27020[8];
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY27020 Bits;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs260042* args, void* ClEnv);
void* ClEnv;
} vmcallback260044;
struct TY260270 {
NimStringDesc* Field0;
vmcallback260044 Field1;
};
struct  tctx260048  {
  tpasscontext258005 Sup;
TY260250* Code;
TY183036* Debug;
tnode209813* Globals;
tnode209813* Constants;
ttypeseq209845* Types;
tnode209813* Currentexceptiona;
tnode209813* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype260230* Prc;
tsym209843* Module;
tnode209813* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo182338 Comesfromheuristic;
TY260269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock260030  {
tsym209843* Label;
TY260211* Fixups;
};
struct TY260237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY260237 TY260234[256];
struct  pprocHEX3Aobjecttype260230  {
TY260231* Blocks;
tsym209843* Sym;
TY260234 Slots;
NI Maxslots;
};
struct  vmargs260042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode209813* Currentexception;
};
struct tsymseq209815 {
  TGenericSeq Sup;
  tsym209843* data[SEQ_DECL_SIZE];
};
struct tnodeseq209807 {
  TGenericSeq Sup;
  tnode209813* data[SEQ_DECL_SIZE];
};
struct ttypeseq209845 {
  TGenericSeq Sup;
  ttype209849* data[SEQ_DECL_SIZE];
};
struct TY209944 {
  TGenericSeq Sup;
  tinstantiation209833* data[SEQ_DECL_SIZE];
};
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
struct tidpairseq209859 {
  TGenericSeq Sup;
  tidpair209857 data[SEQ_DECL_SIZE];
};
struct TY261134 {
  TGenericSeq Sup;
  tinstantiationpair261013 data[SEQ_DECL_SIZE];
};
struct TY209933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY260250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY183036 {
  TGenericSeq Sup;
  tlineinfo182338 data[SEQ_DECL_SIZE];
};
struct TY260269 {
  TGenericSeq Sup;
  TY260270 data[SEQ_DECL_SIZE];
};
struct TY260211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY260231 {
  TGenericSeq Sup;
  tblock260030 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tsym209843*, searchforprocnew_276197)(tcontext261021* c, tscope209837* scope, tsym209843* fn);
N_NIMCALL(tsym209843*, initidentiter_216147)(tidentiter216141* ti, tstrtable209817 tab, tident186021* s);
N_NIMCALL(NIM_BOOL, sametype_243082)(ttype209849* a, ttype209849* b, NU8 flags);
N_NIMCALL(NU8, equalparams_238086)(tnode209813* a, tnode209813* b);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, getprocheader_238447)(tsym209843* sym, NU8 prefer);
N_NIMCALL(NimStringDesc*, HEX24_183679)(tlineinfo182338 info);
N_NIMCALL(void, localerror_184392)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym209843*, nextidentiter_216156)(tidentiter216141* ti, tstrtable209817 tab);
STRING_LITERAL(TMP3131, "public implementation \'$1\' has non-public forward declaration i"
"n $2", 67);

N_NIMCALL(tsym209843*, searchforprocnew_276197)(tcontext261021* c, tscope209837* scope, tsym209843* fn) {
	tsym209843* result;
	tidentiter216141 it;
{	result = 0;
	memset((void*)(&it), 0, sizeof(it));
	result = initidentiter_216147((&it), (*scope).Symbols, (*fn).Name);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = ((520192 &(1<<(((*result).Kind)&31)))!=0);
				if (!(LOC5)) goto LA6;
				LOC5 = sametype_243082((*result).Typ, (*fn).Typ, 30);
				LA6: ;
				if (!LOC5) goto LA7;
				LOC9 = 0;
				LOC9 = equalparams_238086((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC9) {
				case ((NU8) 1):
				{
					{
						NIM_BOOL LOC13;
						NimStringDesc* message;
						TY171945 LOC17;
						LOC13 = 0;
						LOC13 = !((((*result).Flags &(1<<((((NU8) 1))&31)))!=0));
						if (!(LOC13)) goto LA14;
						LOC13 = (((*fn).Flags &(1<<((((NU8) 1))&31)))!=0);
						LA14: ;
						if (!LOC13) goto LA15;
						memset((void*)LOC17, 0, sizeof(LOC17));
						LOC17[0] = getprocheader_238447(result, ((NU8) 0));
						LOC17[1] = HEX24_183679((*result).Info);
						message = nsuFormatOpenArray(((NimStringDesc*) &TMP3131), LOC17, 2);
						localerror_184392((*fn).Info, ((NU16) 4), message);
					}
					LA15: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 2):
				{
					localerror_184392((*fn).Info, ((NU16) 66), (*(*fn).Name).S);
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
			result = nextidentiter_216156((&it), (*scope).Symbols);
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym209843*, searchforproc_276280)(tcontext261021* c, tscope209837* scope, tsym209843* fn) {
	tsym209843* result;
	result = 0;
	result = searchforprocnew_276197(c, scope, fn);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_procfindInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_procfindDatInit)(void) {
}

