/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <sys/types.h>
typedef struct tnode207813 tnode207813;
typedef struct ttype207849 ttype207849;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym207843 tsym207843;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct NimStringDesc NimStringDesc;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
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
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tlib207831 tlib207831;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct processobj140402 processobj140402;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct streamobj135027 streamobj135027;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15409;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15409 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tnode207813* TY224674[1];
typedef NimStringDesc* TY234722[1];
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct  processobj140402  {
  TNimObject Sup;
int Inhandle;
int Outhandle;
int Errhandle;
streamobj135027* Instream;
streamobj135027* Outstream;
streamobj135027* Errstream;
pid_t Id;
int Exitcode;
};
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
};
typedef N_NIMCALL_PTR(void, TY135028) (streamobj135027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135032) (streamobj135027* s);
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135041) (streamobj135027* s);
typedef N_NIMCALL_PTR(NI, TY135045) (streamobj135027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135051) (streamobj135027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135057) (streamobj135027* s);
struct  streamobj135027  {
  TNimObject Sup;
TY135028 Closeimpl;
TY135032 Atendimpl;
TY135036 Setpositionimpl;
TY135041 Getpositionimpl;
TY135045 Readdataimpl;
TY135051 Writedataimpl;
TY135057 Flushimpl;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct ttypeseq207845 {
  TGenericSeq Sup;
  ttype207849* data[SEQ_DECL_SIZE];
};
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY207944 {
  TGenericSeq Sup;
  tinstantiation207833* data[SEQ_DECL_SIZE];
};
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode207813*, maptypetoast_395085)(ttype207849* t, tlineinfo180338 info, NIM_BOOL allowrecursion);
N_NIMCALL(tnode207813*, atomictypex_395072)(NimStringDesc* name, ttype207849* t, tlineinfo180338 info);
N_NIMCALL(tsym207843*, newsym_208655)(NU8 symkind, tident184021* name, tsym207843* owner, tlineinfo180338 info);
N_NIMCALL(tident184021*, getident_184463)(NimStringDesc* identifier);
N_NIMCALL(tnode207813*, newsymnode_209325)(tsym207843* sym);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(tnode207813*, newnodeit_209807)(NU8 kind, tlineinfo180338 info, ttype207849* typ);
N_NIMCALL(void, add_208164)(tnode207813* father, tnode207813* son);
N_NIMCALL(ttype207849*, base_236039)(ttype207849* t);
N_NIMCALL(NI, len_210377)(ttype207849* n);
N_NIMCALL(ttype207849*, lastson_210442)(ttype207849* n);
N_NIMCALL(tnode207813*, maptypetobracket_395093)(NimStringDesc* name, ttype207849* t, tlineinfo180338 info);
N_NIMCALL(ttype207849*, newtype_210144)(NU8 kind, tsym207843* owner);
N_NIMCALL(tnode207813*, copytree_211828)(tnode207813* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_170341)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_13434)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_208911)(tsym207843* m, tnode207813* n);
N_NIMCALL(tnode207813*, newnode_209607)(NU8 kind, tlineinfo180338 info, tnodeseq207807* sons, ttype207849* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tnode207813*, newstrnode_208643)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_182392)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(void, decref_51404)(tcell45947* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(processobj140402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, stringtableobj131012* env, NU8 options);
N_NIMCALL(void, write_135233)(streamobj135027* s, NimStringDesc* x);
N_NIMCALL(streamobj135027*, nospinputStream)(processobj140402* p);
N_NIMCALL(void, close_135085)(streamobj135027* s);
N_NIMCALL(NimStringDesc*, readoutput_395009)(processobj140402* p);
N_NIMCALL(streamobj135027*, nospoutputStream)(processobj140402* p);
N_NIMCALL(NIM_BOOL, atend_135111)(streamobj135027* s);
N_NIMCALL(NimStringDesc*, readline_135531)(streamobj135027* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(processobj140402* p, NI timeout);
STRING_LITERAL(TMP2887, "none", 4);
STRING_LITERAL(TMP2888, "bool", 4);
STRING_LITERAL(TMP2889, "char", 4);
STRING_LITERAL(TMP2890, "nil", 3);
STRING_LITERAL(TMP2891, "expr", 4);
STRING_LITERAL(TMP2892, "stmt", 4);
STRING_LITERAL(TMP2893, "void", 4);
STRING_LITERAL(TMP2894, "array", 5);
STRING_LITERAL(TMP2895, "typeDesc", 8);
STRING_LITERAL(TMP2896, "typeDesc", 8);
STRING_LITERAL(TMP2897, "void", 4);
STRING_LITERAL(TMP2898, "distinct", 8);
STRING_LITERAL(TMP2899, "tuple", 5);
STRING_LITERAL(TMP2900, "set", 3);
STRING_LITERAL(TMP2901, "ptr", 3);
STRING_LITERAL(TMP2902, "ref", 3);
STRING_LITERAL(TMP2903, "var", 3);
STRING_LITERAL(TMP2904, "seq", 3);
STRING_LITERAL(TMP2905, "proc", 4);
STRING_LITERAL(TMP2906, "openArray", 9);
STRING_LITERAL(TMP2907, "range", 5);
STRING_LITERAL(TMP2908, "pointer", 7);
STRING_LITERAL(TMP2909, "string", 6);
STRING_LITERAL(TMP2910, "cstring", 7);
STRING_LITERAL(TMP2911, "int", 3);
STRING_LITERAL(TMP2912, "int8", 4);
STRING_LITERAL(TMP2913, "int16", 5);
STRING_LITERAL(TMP2914, "int32", 5);
STRING_LITERAL(TMP2915, "int64", 5);
STRING_LITERAL(TMP2916, "float", 5);
STRING_LITERAL(TMP2917, "float32", 7);
STRING_LITERAL(TMP2918, "float64", 7);
STRING_LITERAL(TMP2919, "float128", 8);
STRING_LITERAL(TMP2920, "uint", 4);
STRING_LITERAL(TMP2921, "uint8", 5);
STRING_LITERAL(TMP2922, "uint16", 6);
STRING_LITERAL(TMP2923, "uint32", 6);
STRING_LITERAL(TMP2924, "uint64", 6);
STRING_LITERAL(TMP2925, "bignum", 6);
STRING_LITERAL(TMP2926, "const", 5);
STRING_LITERAL(TMP2927, "mutable", 7);
STRING_LITERAL(TMP2928, "varargs", 7);
STRING_LITERAL(TMP2929, "iter", 4);
STRING_LITERAL(TMP2930, "error", 5);
STRING_LITERAL(TMP2931, "builtinTypeClass", 16);
STRING_LITERAL(TMP2932, "userTypeClass", 13);
STRING_LITERAL(TMP2933, "compositeTypeClass", 18);
STRING_LITERAL(TMP2934, "and", 3);
STRING_LITERAL(TMP2935, "or", 2);
STRING_LITERAL(TMP2936, "not", 3);
STRING_LITERAL(TMP2937, "anything", 8);
STRING_LITERAL(TMP2938, "static", 6);
STRING_LITERAL(TMP2942, "", 0);
STRING_LITERAL(TMP2954, "\012", 1);
extern tgcheap47816 gch_47844;
extern tnode207813* emptynode_208807;
extern TSafePoint* exchandler_16843;
extern TNimType NTI207807; /* TNodeSeq */
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_16845;
extern TNimType NTI3433; /* OSError */

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45947))))));
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
			if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode207813*, atomictypex_395072)(NimStringDesc* name, ttype207849* t, tlineinfo180338 info) {
	tnode207813* result;
	tsym207843* sym;
	tident184021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_184463(name);
	sym = newsym_208655(((NU8) 7), LOC1, (*t).Owner, info);
	result = newsymnode_209325(sym);
	asgnRefNoCycle((void**) (&(*result).Typ), t);
	return result;
}

N_NIMCALL(tnode207813*, maptypetobracket_395093)(NimStringDesc* name, ttype207849* t, tlineinfo180338 info) {
	tnode207813* result;
	tnode207813* LOC1;
	result = 0;
	result = newnodeit_209807(((NU8) 42), info, t);
	LOC1 = 0;
	LOC1 = atomictypex_395072(name, t, info);
	add_208164(result, LOC1);
	{
		NI i_395118;
		NI HEX3Atmp_395135;
		NI LOC3;
		NI res_395138;
		i_395118 = 0;
		HEX3Atmp_395135 = 0;
		LOC3 = 0;
		LOC3 = len_210377(t);
		HEX3Atmp_395135 = (LOC3 - 1);
		res_395138 = ((NI) 0);
		{
			while (1) {
				if (!(res_395138 <= HEX3Atmp_395135)) goto LA5;
				i_395118 = res_395138;
				{
					tnode207813* void_395131;
					if (!((*t).Sons->data[i_395118] == NIM_NIL)) goto LA8;
					void_395131 = atomictypex_395072(((NimStringDesc*) &TMP2897), t, info);
					asgnRefNoCycle((void**) (&(*void_395131).Typ), newtype_210144(((NU8) 3), (*t).Owner));
					add_208164(result, void_395131);
				}
				goto LA6;
				LA8: ;
				{
					tnode207813* LOC11;
					LOC11 = 0;
					LOC11 = maptypetoast_395085((*t).Sons->data[i_395118], info, NIM_FALSE);
					add_208164(result, LOC11);
				}
				LA6: ;
				res_395138 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(tnode207813*, maptypetoast_395085)(ttype207849* t, tlineinfo180338 info, NIM_BOOL allowrecursion) {
	tnode207813* result;
	result = 0;
	switch ((*t).Kind) {
	case ((NU8) 0):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2887), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2888), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2889), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2890), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2891), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2892), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2893), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		tnode207813* LOC9;
		tnode207813* LOC10;
		tnode207813* LOC11;
		result = newnodeit_209807(((NU8) 42), info, t);
		LOC9 = 0;
		LOC9 = atomictypex_395072(((NimStringDesc*) &TMP2894), t, info);
		add_208164(result, LOC9);
		LOC10 = 0;
		LOC10 = maptypetoast_395085((*t).Sons->data[((NI) 0)], info, NIM_FALSE);
		add_208164(result, LOC10);
		LOC11 = 0;
		LOC11 = maptypetoast_395085((*t).Sons->data[((NI) 1)], info, NIM_FALSE);
		add_208164(result, LOC11);
	}
	break;
	case ((NU8) 8):
	{
		{
			ttype207849* LOC15;
			tnode207813* LOC18;
			ttype207849* LOC19;
			tnode207813* LOC20;
			LOC15 = 0;
			LOC15 = base_236039(t);
			if (!!((LOC15 == NIM_NIL))) goto LA16;
			result = newnodeit_209807(((NU8) 42), info, t);
			LOC18 = 0;
			LOC18 = atomictypex_395072(((NimStringDesc*) &TMP2895), t, info);
			add_208164(result, LOC18);
			LOC19 = 0;
			LOC19 = base_236039(t);
			LOC20 = 0;
			LOC20 = maptypetoast_395085(LOC19, info, NIM_FALSE);
			add_208164(result, LOC20);
		}
		goto LA13;
		LA16: ;
		{
			result = atomictypex_395072(((NimStringDesc*) &TMP2896), t, info);
		}
		LA13: ;
	}
	break;
	case ((NU8) 9):
	{
		result = newnodeit_209807(((NU8) 42), info, t);
		{
			NI i_395202;
			NI HEX3Atmp_395246;
			NI LOC24;
			NI res_395249;
			i_395202 = 0;
			HEX3Atmp_395246 = 0;
			LOC24 = 0;
			LOC24 = len_210377(t);
			HEX3Atmp_395246 = (LOC24 - 1);
			res_395249 = ((NI) 0);
			{
				while (1) {
					tnode207813* LOC27;
					if (!(res_395249 <= HEX3Atmp_395246)) goto LA26;
					i_395202 = res_395249;
					LOC27 = 0;
					LOC27 = maptypetoast_395085((*t).Sons->data[i_395202], info, NIM_FALSE);
					add_208164(result, LOC27);
					res_395249 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		ttype207849* LOC29;
		LOC29 = 0;
		LOC29 = lastson_210442(t);
		result = maptypetoast_395085(LOC29, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA33;
			result = maptypetobracket_395093(((NimStringDesc*) &TMP2898), t, info);
		}
		goto LA31;
		LA33: ;
		{
			result = atomictypex_395072((*(*(*t).Sym).Name).S, t, info);
		}
		LA31: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_395072((*(*(*t).Sym).Name).S, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			tnode207813* LOC48;
			if (!allowrecursion) goto LA40;
			result = newnodeit_209807(((NU8) 133), info, t);
			{
				if (!((*t).Sons->data[((NI) 0)] == NIM_NIL)) goto LA44;
				add_208164(result, emptynode_208807);
			}
			goto LA42;
			LA44: ;
			{
				tnode207813* LOC47;
				LOC47 = 0;
				LOC47 = maptypetoast_395085((*t).Sons->data[((NI) 0)], info, NIM_FALSE);
				add_208164(result, LOC47);
			}
			LA42: ;
			LOC48 = 0;
			LOC48 = copytree_211828((*t).N);
			add_208164(result, LOC48);
		}
		goto LA38;
		LA40: ;
		{
			result = atomictypex_395072((*(*(*t).Sym).Name).S, t, info);
		}
		LA38: ;
	}
	break;
	case ((NU8) 14):
	{
		tnode207813* LOC51;
		result = newnodeit_209807(((NU8) 150), info, t);
		LOC51 = 0;
		LOC51 = copytree_211828((*t).N);
		add_208164(result, LOC51);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2899), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2900), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2901), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2902), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2903), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2904), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2905), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2906), t, info);
	}
	break;
	case ((NU8) 20):
	{
		tnode207813* LOC61;
		tnode207813* LOC62;
		tnode207813* LOC63;
		result = newnodeit_209807(((NU8) 42), info, t);
		LOC61 = 0;
		LOC61 = atomictypex_395072(((NimStringDesc*) &TMP2907), t, info);
		add_208164(result, LOC61);
		LOC62 = 0;
		LOC62 = copytree_211828((*(*t).N).kindU.S6.Sons->data[((NI) 0)]);
		add_208164(result, LOC62);
		LOC63 = 0;
		LOC63 = copytree_211828((*(*t).N).kindU.S6.Sons->data[((NI) 1)]);
		add_208164(result, LOC63);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2908), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2909), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2910), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2911), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2912), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2913), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2914), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2915), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2916), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2917), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2918), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2919), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2920), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2921), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2922), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2923), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2924), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2925), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2926), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2927), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2928), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2929), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2930), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2931), t, info);
	}
	break;
	case ((NU8) 52):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2932), t, info);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2933), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2934), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2935), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_395093(((NimStringDesc*) &TMP2936), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_395072(((NimStringDesc*) &TMP2937), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		tnode207813* LOC95;
		result = newnodeit_209807(((NU8) 42), info, t);
		LOC95 = 0;
		LOC95 = atomictypex_395072(((NimStringDesc*) &TMP2938), t, info);
		add_208164(result, LOC95);
		{
			tnode207813* LOC100;
			if (!!(((*t).N == NIM_NIL))) goto LA98;
			LOC100 = 0;
			LOC100 = copytree_211828((*t).N);
			add_208164(result, LOC100);
		}
		LA98: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(tnode207813*, opmaptypetoast_395268)(ttype207849* t, tlineinfo180338 info) {
	tnode207813* result;
	result = 0;
	result = maptypetoast_395085(t, info, NIM_TRUE);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16843;
	exchandler_16843 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16843 = (*exchandler_16843).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16845;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16845), (*currexception_16845).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_395044)(NimStringDesc* file, tlineinfo180338 info, tsym207843* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP2941;
	result = 0;
	pushSafePoint(&TMP2941);
	TMP2941.status = setjmp(TMP2941.context);
	if (TMP2941.status == 0) {
		NimStringDesc* filename;
		tnodeseq207807* LOC2;
		TY224674 LOC3;
		tnode207813* LOC4;
		filename = findfile_170341(file);
		result = readfile_13434(filename);
		LOC2 = 0;
		LOC2 = (tnodeseq207807*) newSeq((&NTI207807), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_208643(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_209607(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_208911(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
			TMP2941.status = 0;
			localerror_182392(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP2942));
			popCurrentException();
		}
	}
	if (TMP2941.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_395009)(processobj140402* p) {
	NimStringDesc* result;
	streamobj135027* output;
	NI LOC5;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2942));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_135111(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_135531(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2954));
		} LA2: ;
	}
	result = setLengthStr(result, (NI64)(result->Sup.len - ((NI) 1)));
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_395027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* volatile result;
	TSafePoint TMP2943;
	result = 0;
	pushSafePoint(&TMP2943);
	TMP2943.status = setjmp(TMP2943.context);
	if (TMP2943.status == 0) {
		processobj140402* p;
		TY234722 LOC2;
		memset((void*)LOC2, 0, sizeof(LOC2));
		p = nospstartProcess(cmd, ((NimStringDesc*) &TMP2942), LOC2, 0, NIM_NIL, 4);
		{
			streamobj135027* LOC7;
			streamobj135027* LOC8;
			if (!!((input->Sup.len == ((NI) 0)))) goto LA5;
			LOC7 = 0;
			LOC7 = nospinputStream(p);
			write_135233(LOC7, input);
			LOC8 = 0;
			LOC8 = nospinputStream(p);
			close_135085(LOC8);
		}
		LA5: ;
		result = readoutput_395009(p);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))||isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
			TMP2943.status = 0;
			result = copyString(((NimStringDesc*) &TMP2942));
			popCurrentException();
		}
	}
	if (TMP2943.status != 0) reraiseException();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit)(void) {
}

