/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx260048 tctx260048;
typedef struct tpasscontext258005 tpasscontext258005;
typedef struct TNimObject TNimObject;
typedef struct TY260250 TY260250;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY183036 TY183036;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct tnode209813 tnode209813;
typedef struct ttypeseq209845 ttypeseq209845;
typedef struct ttype209849 ttype209849;
typedef struct pprocHEX3Aobjecttype260230 pprocHEX3Aobjecttype260230;
typedef struct tsym209843 tsym209843;
typedef struct TY260269 TY260269;
typedef struct TY260270 TY260270;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs260042 vmargs260042;
typedef struct TY260231 TY260231;
typedef struct tblock260030 tblock260030;
typedef struct TY260211 TY260211;
typedef struct TY260237 TY260237;
typedef struct TY531942 TY531942;
typedef struct TY531945 TY531945;
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
typedef struct tident186021 tident186021;
typedef struct tnodeseq209807 tnodeseq209807;
typedef struct tidobj186015 tidobj186015;
typedef struct tloc209827 tloc209827;
typedef struct trope179009 trope179009;
typedef struct tscope209837 tscope209837;
typedef struct TY209944 TY209944;
typedef struct tinstantiation209833 tinstantiation209833;
typedef struct tstrtable209817 tstrtable209817;
typedef struct tsymseq209815 tsymseq209815;
typedef struct tlib209831 tlib209831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY209933 TY209933;
typedef struct tlistentry130022 tlistentry130022;
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
struct  tpasscontext258005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo182338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct TY531942 {
void* Field0;
TY531945* Field1;
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
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tloc209827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209849* T;
trope179009* R;
trope179009* Heaproot;
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
struct  tstrtable209817  {
NI Counter;
tsymseq209815* Data;
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
struct  vmargs260042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode209813* Currentexception;
};
struct TY531945 {
char dummy;
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
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct TY260250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY183036 {
  TGenericSeq Sup;
  tlineinfo182338 data[SEQ_DECL_SIZE];
};
struct ttypeseq209845 {
  TGenericSeq Sup;
  ttype209849* data[SEQ_DECL_SIZE];
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
struct tnodeseq209807 {
  TGenericSeq Sup;
  tnode209813* data[SEQ_DECL_SIZE];
};
struct TY209944 {
  TGenericSeq Sup;
  tinstantiation209833* data[SEQ_DECL_SIZE];
};
struct tsymseq209815 {
  TGenericSeq Sup;
  tsym209843* data[SEQ_DECL_SIZE];
};
struct TY209933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1981)(void* p, NI op);
N_NIMCALL(void, TMP1984)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1985)(void* p, NI op);
N_NIMCALL(void, TMP1990)(void* p, NI op);
N_NIMCALL(void, TMP1999)(void* p, NI op);
N_NIMCALL(void, TMP2000)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode209813*, newnode_210401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo182338, unknownlineinfo_183027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51404)(tcell45946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45946* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45946* c);
N_NOINLINE(void, incl_46667)(tcellset45958* s, tcell45946* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45946* c);
STRING_LITERAL(TMP2761, "", 0);
extern TNimType NTI258005; /* TPassContext */
TNimType NTI260048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI260250; /* seq[TInstr] */
extern TNimType NTI183036; /* seq[TLineInfo] */
extern TNimType NTI209805; /* PNode */
extern TNimType NTI209845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI260230; /* PProc:ObjectType */
TNimType NTI260030; /* TBlock */
extern TNimType NTI209811; /* PSym */
TNimType NTI260211; /* seq[TPosition] */
TNimType NTI260231; /* seq[TBlock] */
TNimType NTI260237; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI260038; /* TSlotKind */
TNimType NTI260234; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI260040; /* PProc */
TNimType NTI260032; /* TEvalMode */
TNimType NTI260034; /* TSandboxFlag */
TNimType NTI260036; /* TSandboxFlags */
extern TNimType NTI182338; /* TLineInfo */
TNimType NTI260270; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI260044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI531944; /* ref tuple[] */
TNimType NTI260269; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI260046; /* PCtx */
extern tgcheap47816 gch_47844;
N_NIMCALL(void, TMP1981)(void* p, NI op) {
	TY260250* a;
	NI LOC1;
	a = (TY260250*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1984)(void* p, NI op) {
	TY260211* a;
	NI LOC1;
	a = (TY260211*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1985)(void* p, NI op) {
	TY260231* a;
	NI LOC1;
	a = (TY260231*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1990)(void* p, NI op) {
	pprocHEX3Aobjecttype260230* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype260230*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1999)(void* p, NI op) {
	TY260269* a;
	NI LOC1;
	a = (TY260269*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP2000)(void* p, NI op) {
	tctx260048* a;
	a = (tctx260048*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
	nimGCvisit((void*)(*a).Callbacks, op);
	nimGCvisit((void*)(*a).Errorflag, op);
}

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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45946* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49446(p);
	decref_51404(LOC1);
}

N_NIMCALL(tctx260048*, newctx_260279)(tsym209843* module) {
	tctx260048* result;
	tctx260048* LOC1;
	pprocHEX3Aobjecttype260230* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx260048*) newObj((&NTI260046), sizeof(tctx260048));
	(*LOC1).Sup.Sup.m_type = (&NTI260048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY260250*) newSeqRC1((&NTI260250), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY183036*) newSeqRC1((&NTI183036), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Globals), newnode_210401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).Constants), newnode_210401(((NU8) 115)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq209845*) newSeqRC1((&NTI209845), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype260230*) newObj((&NTI260040), sizeof(pprocHEX3Aobjecttype260230));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY260231*) newSeqRC1((&NTI260231), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).Module), module);
	(*LOC1).Loopiterations = ((NI) 500000);
	(*LOC1).Comesfromheuristic = unknownlineinfo_183027();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY260269*) newSeqRC1((&NTI260269), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).Errorflag; (*LOC1).Errorflag = copyStringRC1(((NimStringDesc*) &TMP2761));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
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

N_NIMCALL(void, registercallback_260410)(tctx260048* c, NimStringDesc* name, vmcallback260044 callback) {
	TY260270 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY260269*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY260270));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}

N_NIMCALL(void, refresh_260381)(tctx260048* c, tsym209843* module) {
	pprocHEX3Aobjecttype260230* LOC1;
	asgnRefNoCycle((void**) (&(*c).Module), module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype260230*) newObj((&NTI260040), sizeof(pprocHEX3Aobjecttype260230));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY260231*) newSeqRC1((&NTI260231), 0);
	asgnRefNoCycle((void**) (&(*c).Prc), LOC1);
	(*c).Loopiterations = ((NI) 500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit)(void) {
static TNimNode* TMP1980[18];
static TNimNode* TMP1982[4];
static TNimNode* TMP1983[2];
static TNimNode* TMP1986[2];
static TNimNode* TMP1987[9];
NI TMP1989;
static char* NIM_CONST TMP1988[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1991[5];
NI TMP1993;
static char* NIM_CONST TMP1992[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1994[3];
NI TMP1996;
static char* NIM_CONST TMP1995[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1997[2];
static TNimNode* TMP1998[2];
static TNimNode TMP854[57];
NTI260048.size = sizeof(tctx260048);
NTI260048.kind = 17;
NTI260048.base = (&NTI258005);
TMP1980[0] = &TMP854[1];
NTI260250.size = sizeof(TY260250*);
NTI260250.kind = 24;
NTI260250.base = (&NTI124);
NTI260250.flags = 2;
NTI260250.marker = TMP1981;
TMP854[1].kind = 1;
TMP854[1].offset = offsetof(tctx260048, Code);
TMP854[1].typ = (&NTI260250);
TMP854[1].name = "code";
TMP1980[1] = &TMP854[2];
TMP854[2].kind = 1;
TMP854[2].offset = offsetof(tctx260048, Debug);
TMP854[2].typ = (&NTI183036);
TMP854[2].name = "debug";
TMP1980[2] = &TMP854[3];
TMP854[3].kind = 1;
TMP854[3].offset = offsetof(tctx260048, Globals);
TMP854[3].typ = (&NTI209805);
TMP854[3].name = "globals";
TMP1980[3] = &TMP854[4];
TMP854[4].kind = 1;
TMP854[4].offset = offsetof(tctx260048, Constants);
TMP854[4].typ = (&NTI209805);
TMP854[4].name = "constants";
TMP1980[4] = &TMP854[5];
TMP854[5].kind = 1;
TMP854[5].offset = offsetof(tctx260048, Types);
TMP854[5].typ = (&NTI209845);
TMP854[5].name = "types";
TMP1980[5] = &TMP854[6];
TMP854[6].kind = 1;
TMP854[6].offset = offsetof(tctx260048, Currentexceptiona);
TMP854[6].typ = (&NTI209805);
TMP854[6].name = "currentExceptionA";
TMP1980[6] = &TMP854[7];
TMP854[7].kind = 1;
TMP854[7].offset = offsetof(tctx260048, Currentexceptionb);
TMP854[7].typ = (&NTI209805);
TMP854[7].name = "currentExceptionB";
TMP1980[7] = &TMP854[8];
TMP854[8].kind = 1;
TMP854[8].offset = offsetof(tctx260048, Exceptioninstr);
TMP854[8].typ = (&NTI108);
TMP854[8].name = "exceptionInstr";
TMP1980[8] = &TMP854[9];
NTI260230.size = sizeof(pprocHEX3Aobjecttype260230);
NTI260230.kind = 18;
NTI260230.base = 0;
NTI260230.flags = 2;
TMP1982[0] = &TMP854[11];
NTI260030.size = sizeof(tblock260030);
NTI260030.kind = 18;
NTI260030.base = 0;
NTI260030.flags = 2;
TMP1983[0] = &TMP854[13];
TMP854[13].kind = 1;
TMP854[13].offset = offsetof(tblock260030, Label);
TMP854[13].typ = (&NTI209811);
TMP854[13].name = "label";
TMP1983[1] = &TMP854[14];
NTI260211.size = sizeof(TY260211*);
NTI260211.kind = 24;
NTI260211.base = (&NTI108);
NTI260211.flags = 2;
NTI260211.marker = TMP1984;
TMP854[14].kind = 1;
TMP854[14].offset = offsetof(tblock260030, Fixups);
TMP854[14].typ = (&NTI260211);
TMP854[14].name = "fixups";
TMP854[12].len = 2; TMP854[12].kind = 2; TMP854[12].sons = &TMP1983[0];
NTI260030.node = &TMP854[12];
NTI260231.size = sizeof(TY260231*);
NTI260231.kind = 24;
NTI260231.base = (&NTI260030);
NTI260231.flags = 2;
NTI260231.marker = TMP1985;
TMP854[11].kind = 1;
TMP854[11].offset = offsetof(pprocHEX3Aobjecttype260230, Blocks);
TMP854[11].typ = (&NTI260231);
TMP854[11].name = "blocks";
TMP1982[1] = &TMP854[15];
TMP854[15].kind = 1;
TMP854[15].offset = offsetof(pprocHEX3Aobjecttype260230, Sym);
TMP854[15].typ = (&NTI209811);
TMP854[15].name = "sym";
TMP1982[2] = &TMP854[16];
NTI260237.size = sizeof(TY260237);
NTI260237.kind = 18;
NTI260237.base = 0;
NTI260237.flags = 3;
TMP1986[0] = &TMP854[18];
TMP854[18].kind = 1;
TMP854[18].offset = offsetof(TY260237, Field0);
TMP854[18].typ = (&NTI138);
TMP854[18].name = "Field0";
TMP1986[1] = &TMP854[19];
NTI260038.size = sizeof(NU8);
NTI260038.kind = 14;
NTI260038.base = 0;
NTI260038.flags = 3;
for (TMP1989 = 0; TMP1989 < 9; TMP1989++) {
TMP854[TMP1989+20].kind = 1;
TMP854[TMP1989+20].offset = TMP1989;
TMP854[TMP1989+20].name = TMP1988[TMP1989];
TMP1987[TMP1989] = &TMP854[TMP1989+20];
}
TMP854[29].len = 9; TMP854[29].kind = 2; TMP854[29].sons = &TMP1987[0];
NTI260038.node = &TMP854[29];
TMP854[19].kind = 1;
TMP854[19].offset = offsetof(TY260237, Field1);
TMP854[19].typ = (&NTI260038);
TMP854[19].name = "Field1";
TMP854[17].len = 2; TMP854[17].kind = 2; TMP854[17].sons = &TMP1986[0];
NTI260237.node = &TMP854[17];
NTI260234.size = sizeof(TY260234);
NTI260234.kind = 16;
NTI260234.base = (&NTI260237);
NTI260234.flags = 3;
TMP854[16].kind = 1;
TMP854[16].offset = offsetof(pprocHEX3Aobjecttype260230, Slots);
TMP854[16].typ = (&NTI260234);
TMP854[16].name = "slots";
TMP1982[3] = &TMP854[30];
TMP854[30].kind = 1;
TMP854[30].offset = offsetof(pprocHEX3Aobjecttype260230, Maxslots);
TMP854[30].typ = (&NTI108);
TMP854[30].name = "maxSlots";
TMP854[10].len = 4; TMP854[10].kind = 2; TMP854[10].sons = &TMP1982[0];
NTI260230.node = &TMP854[10];
NTI260040.size = sizeof(pprocHEX3Aobjecttype260230*);
NTI260040.kind = 22;
NTI260040.base = (&NTI260230);
NTI260040.flags = 2;
NTI260040.marker = TMP1990;
TMP854[9].kind = 1;
TMP854[9].offset = offsetof(tctx260048, Prc);
TMP854[9].typ = (&NTI260040);
TMP854[9].name = "prc";
TMP1980[9] = &TMP854[31];
TMP854[31].kind = 1;
TMP854[31].offset = offsetof(tctx260048, Module);
TMP854[31].typ = (&NTI209811);
TMP854[31].name = "module";
TMP1980[10] = &TMP854[32];
TMP854[32].kind = 1;
TMP854[32].offset = offsetof(tctx260048, Callsite);
TMP854[32].typ = (&NTI209805);
TMP854[32].name = "callsite";
TMP1980[11] = &TMP854[33];
NTI260032.size = sizeof(NU8);
NTI260032.kind = 14;
NTI260032.base = 0;
NTI260032.flags = 3;
for (TMP1993 = 0; TMP1993 < 5; TMP1993++) {
TMP854[TMP1993+34].kind = 1;
TMP854[TMP1993+34].offset = TMP1993;
TMP854[TMP1993+34].name = TMP1992[TMP1993];
TMP1991[TMP1993] = &TMP854[TMP1993+34];
}
TMP854[39].len = 5; TMP854[39].kind = 2; TMP854[39].sons = &TMP1991[0];
NTI260032.node = &TMP854[39];
TMP854[33].kind = 1;
TMP854[33].offset = offsetof(tctx260048, Mode);
TMP854[33].typ = (&NTI260032);
TMP854[33].name = "mode";
TMP1980[12] = &TMP854[40];
NTI260034.size = sizeof(NU8);
NTI260034.kind = 14;
NTI260034.base = 0;
NTI260034.flags = 3;
for (TMP1996 = 0; TMP1996 < 3; TMP1996++) {
TMP854[TMP1996+41].kind = 1;
TMP854[TMP1996+41].offset = TMP1996;
TMP854[TMP1996+41].name = TMP1995[TMP1996];
TMP1994[TMP1996] = &TMP854[TMP1996+41];
}
TMP854[44].len = 3; TMP854[44].kind = 2; TMP854[44].sons = &TMP1994[0];
NTI260034.node = &TMP854[44];
NTI260036.size = sizeof(NU8);
NTI260036.kind = 19;
NTI260036.base = (&NTI260034);
NTI260036.flags = 3;
TMP854[45].len = 0; TMP854[45].kind = 0;
NTI260036.node = &TMP854[45];
TMP854[40].kind = 1;
TMP854[40].offset = offsetof(tctx260048, Features);
TMP854[40].typ = (&NTI260036);
TMP854[40].name = "features";
TMP1980[13] = &TMP854[46];
TMP854[46].kind = 1;
TMP854[46].offset = offsetof(tctx260048, Traceactive);
TMP854[46].typ = (&NTI138);
TMP854[46].name = "traceActive";
TMP1980[14] = &TMP854[47];
TMP854[47].kind = 1;
TMP854[47].offset = offsetof(tctx260048, Loopiterations);
TMP854[47].typ = (&NTI108);
TMP854[47].name = "loopIterations";
TMP1980[15] = &TMP854[48];
TMP854[48].kind = 1;
TMP854[48].offset = offsetof(tctx260048, Comesfromheuristic);
TMP854[48].typ = (&NTI182338);
TMP854[48].name = "comesFromHeuristic";
TMP1980[16] = &TMP854[49];
NTI260270.size = sizeof(TY260270);
NTI260270.kind = 18;
NTI260270.base = 0;
TMP1997[0] = &TMP854[51];
TMP854[51].kind = 1;
TMP854[51].offset = offsetof(TY260270, Field0);
TMP854[51].typ = (&NTI149);
TMP854[51].name = "Field0";
TMP1997[1] = &TMP854[52];
NTI260044.size = sizeof(TY531942);
NTI260044.kind = 18;
NTI260044.base = 0;
NTI260044.flags = 2;
TMP1998[0] = &TMP854[54];
TMP854[54].kind = 1;
TMP854[54].offset = offsetof(TY531942, Field0);
TMP854[54].typ = (&NTI153);
TMP854[54].name = "Field0";
TMP1998[1] = &TMP854[55];
TMP854[55].kind = 1;
TMP854[55].offset = offsetof(TY531942, Field1);
TMP854[55].typ = (&NTI531944);
TMP854[55].name = "Field1";
TMP854[53].len = 2; TMP854[53].kind = 2; TMP854[53].sons = &TMP1998[0];
NTI260044.node = &TMP854[53];
TMP854[52].kind = 1;
TMP854[52].offset = offsetof(TY260270, Field1);
TMP854[52].typ = (&NTI260044);
TMP854[52].name = "Field1";
TMP854[50].len = 2; TMP854[50].kind = 2; TMP854[50].sons = &TMP1997[0];
NTI260270.node = &TMP854[50];
NTI260269.size = sizeof(TY260269*);
NTI260269.kind = 24;
NTI260269.base = (&NTI260270);
NTI260269.marker = TMP1999;
TMP854[49].kind = 1;
TMP854[49].offset = offsetof(tctx260048, Callbacks);
TMP854[49].typ = (&NTI260269);
TMP854[49].name = "callbacks";
TMP1980[17] = &TMP854[56];
TMP854[56].kind = 1;
TMP854[56].offset = offsetof(tctx260048, Errorflag);
TMP854[56].typ = (&NTI149);
TMP854[56].name = "errorFlag";
TMP854[0].len = 18; TMP854[0].kind = 2; TMP854[0].sons = &TMP1980[0];
NTI260048.node = &TMP854[0];
NTI260046.size = sizeof(tctx260048*);
NTI260046.kind = 22;
NTI260046.base = (&NTI260048);
NTI260046.marker = TMP2000;
}

