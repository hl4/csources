/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode208813 tnode208813;
typedef struct tparser223205 tparser223205;
typedef struct ttype208849 ttype208849;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym208843 tsym208843;
typedef struct tident185021 tident185021;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tlexer198184 tlexer198184;
typedef struct tbaselexer196024 tbaselexer196024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream195204 tllstream195204;
typedef struct ttoken198180 ttoken198180;
typedef struct tidobj185015 tidobj185015;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tlib208831 tlib208831;
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo181338  {
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
struct  tbaselexer196024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream195204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo181338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler198182;
struct  tlexer198184  {
  tbaselexer196024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler198182 Errorhandler;
};
struct  ttoken198180  {
NU8 Toktype;
NI Indent;
tident185021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser223205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer198184 Lex;
ttoken198180 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tloc208827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208849* T;
trope178009* R;
trope178009* Heaproot;
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
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
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
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tllstream195204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct tsymseq208815 {
  TGenericSeq Sup;
  tsym208843* data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};

N_NIMCALL(tnode208813*, parseall_228009)(tparser223205* p) {
	tnode208813* result;
	result = 0;
	result = NIM_NIL;
	return result;
}

N_NIMCALL(tnode208813*, parsetoplevelstmt_228020)(tparser223205* p) {
	tnode208813* result;
	result = 0;
	result = NIM_NIL;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit)(void) {
}

