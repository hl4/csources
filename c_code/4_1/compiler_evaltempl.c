/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode207813 tnode207813;
typedef struct tsym207843 tsym207843;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype207849 ttype207849;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct templctx396019 templctx396019;
typedef struct tidtable207861 tidtable207861;
typedef struct tidpairseq207859 tidpairseq207859;
typedef struct tidpair207857 tidpair207857;
typedef struct TY85545 TY85545;
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
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
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
struct  tidpair207857  {
tidobj184015* Key;
TNimObject* Val;
};
struct  tidtable207861  {
NI Counter;
tidpairseq207859* Data;
};
struct  templctx396019  {
tsym207843* Owner;
tsym207843* Gensymowner;
NIM_BOOL Instlines;
tidtable207861 Mapping;
};
struct TY85545 {
NimStringDesc* Field0;
NI Field1;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
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
struct tsymseq207815 {
  TGenericSeq Sup;
  tsym207843* data[SEQ_DECL_SIZE];
};
struct tidpairseq207859 {
  TGenericSeq Sup;
  tidpair207857 data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_182371)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode207813*, evaltemplateargs_396184)(tnode207813* n, tsym207843* s);
N_NIMCALL(NI, sonslen_210403)(tnode207813* n);
N_NIMCALL(NI, sonslen_210351)(ttype207849* n);
N_NIMCALL(tnode207813*, newnodei_209351)(NU8 kind, tlineinfo180338 info);
N_NIMCALL(tnode207813*, copytree_211828)(tnode207813* src);
N_NIMCALL(void, localerror_182392)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_209819)(tnode207813* father, tnode207813* son);
N_NIMCALL(void, initidtable_211057)(tidtable207861* x);
N_NIMCALL(tnode207813*, getbody_250648)(tsym207843* s);
static N_INLINE(NIM_BOOL, isatom_212705)(tnode207813* n);
N_NIMCALL(void, evaltemplateaux_396039)(tnode207813* templ, tnode207813* actual, templctx396019* c, tnode207813* result);
static N_INLINE(NI, len_208097)(tnode207813* n);
N_NIMCALL(void, add_208164)(tnode207813* father, tnode207813* son);
N_NIMCALL(void, internalerror_182443)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_182531)(TY85545 x);
N_NIMCALL(TNimObject*, idtableget_214182)(tidtable207861 t, tidobj184015* key);
N_NIMCALL(tsym207843*, copysym_210607)(tsym207843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, idtableput_214196)(tidtable207861* t, tidobj184015* key, TNimObject* val);
N_NIMCALL(tnode207813*, newsymnode_209338)(tsym207843* sym, tlineinfo180338 info);
N_NIMCALL(tnode207813*, copynode_396027)(templctx396019* ctx, tnode207813* a, tnode207813* b);
N_NIMCALL(tnode207813*, copynode_211561)(tnode207813* src);
N_NIMCALL(NimStringDesc*, rendertree_228058)(tnode207813* n, NU8 renderflags);
static N_INLINE(NI, safelen_208125)(tnode207813* n);
STRING_LITERAL(TMP2876, "", 0);
STRING_LITERAL(TMP2878, "compiler/evaltempl.nim", 22);
NIM_CONST TY85545 TMP2877 = {((NimStringDesc*) &TMP2878),
((NI) 39)}
;
NI evaltemplatecounter_396256;
extern tgcheap47816 gch_47844;

N_NIMCALL(tnode207813*, evaltemplateargs_396184)(tnode207813* n, tsym207843* s) {
	tnode207813* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_210403(n);
	}
	break;
	default:
	{
		a = ((NI) 0);
	}
	break;
	}
	f = sonslen_210351((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_182371((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2876));
	}
	LA5: ;
	result = newnodei_209351(((NU8) 152), (*n).Info);
	{
		NI i_396204;
		NI HEX3Atmp_396234;
		NI res_396237;
		i_396204 = 0;
		HEX3Atmp_396234 = 0;
		HEX3Atmp_396234 = (NI32)(f - ((NI) 1));
		res_396237 = ((NI) 1);
		{
			while (1) {
				tnode207813* arg;
				if (!(res_396237 <= HEX3Atmp_396234)) goto LA9;
				i_396204 = res_396237;
				{
					if (!(i_396204 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_396204];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_211828((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_396204]).kindU.S4.Sym).Ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).Kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_182392((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2876));
				}
				LA19: ;
				addson_209819(result, arg);
				res_396237 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_212705)(tnode207813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, len_208097)(tnode207813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
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

N_NIMCALL(tnode207813*, copynode_396027)(templctx396019* ctx, tnode207813* a, tnode207813* b) {
	tnode207813* result;
	result = 0;
	result = copynode_211561(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_396039)(tnode207813* templ, tnode207813* actual, templctx396019* c, tnode207813* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym207843* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				NIM_BOOL LOC8;
				tnode207813* x;
				LOC8 = 0;
				LOC8 = ((*s).Kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).Flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				{
					if (!((*x).Kind == ((NU8) 152))) goto LA14;
					{
						tnode207813* y_396083;
						y_396083 = 0;
						{
							NI i_396142;
							NI HEX3Atmp_396144;
							NI LOC18;
							NI res_396146;
							i_396142 = 0;
							HEX3Atmp_396144 = 0;
							LOC18 = 0;
							LOC18 = len_208097(x);
							HEX3Atmp_396144 = (LOC18 - 1);
							res_396146 = ((NI) 0);
							{
								while (1) {
									if (!(res_396146 <= HEX3Atmp_396144)) goto LA20;
									i_396142 = res_396146;
									y_396083 = (*x).kindU.S6.Sons->data[i_396142];
									add_208164(result, y_396083);
									res_396146 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					tnode207813* LOC22;
					LOC22 = 0;
					LOC22 = copytree_211828(x);
					add_208164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				tsym207843* x;
				tidobj184015* LOC29;
				TNimObject* LOC30;
				tlineinfo180338 LOC37;
				tnode207813* LOC43;
				{
					NimStringDesc* LOC28;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					LOC28 = 0;
					LOC28 = HEX24_182531(TMP2877);
					internalerror_182443(LOC28);
				}
				LA26: ;
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_214182((*c).Mapping, LOC29);
				x = ((tsym207843*) (LOC30));
				{
					tidobj184015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					x = copysym_210607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).Owner), (*c).Gensymowner);
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_214196((&(*c).Mapping), LOC35, LOC36);
				}
				LA33: ;
				{
					if (!(*c).Instlines) goto LA40;
					LOC37 = (*actual).Info;
				}
				goto LA38;
				LA40: ;
				{
					LOC37 = (*templ).Info;
				}
				LA38: ;
				LOC43 = 0;
				LOC43 = newsymnode_209338(x, LOC37);
				add_208164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode207813* LOC45;
			LOC45 = 0;
			LOC45 = copynode_396027((&(*c)), templ, actual);
			add_208164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode207813* LOC47;
		LOC47 = 0;
		LOC47 = copynode_396027((&(*c)), templ, actual);
		add_208164(result, LOC47);
	}
	break;
	default:
	{
		tnode207813* res;
		res = copynode_396027((&(*c)), templ, actual);
		{
			NI i_396135;
			NI HEX3Atmp_396150;
			NI LOC50;
			NI res_396153;
			i_396135 = 0;
			HEX3Atmp_396150 = 0;
			LOC50 = 0;
			LOC50 = sonslen_210403(templ);
			HEX3Atmp_396150 = (NI32)(LOC50 - ((NI) 1));
			res_396153 = ((NI) 0);
			{
				while (1) {
					if (!(res_396153 <= HEX3Atmp_396150)) goto LA52;
					i_396135 = res_396153;
					evaltemplateaux_396039((*templ).kindU.S6.Sons->data[i_396135], actual, c, res);
					res_396153 += ((NI) 1);
				} LA52: ;
			}
		}
		add_208164(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_208125)(tnode207813* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode207813*, evaltemplate_396260)(tnode207813* n, tsym207843* tmpl, tsym207843* gensymowner) {
	tnode207813* result;
	tnode207813* args;
	templctx396019 ctx;
	tnode207813* body;
	result = 0;
	evaltemplatecounter_396256 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_396256)) goto LA3;
		globalerror_182371((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2876));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_396184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_211057((&ctx.Mapping));
	body = getbody_250648(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_212705(body);
		if (!LOC7) goto LA8;
		result = newnodei_209351(((NU8) 37), (*body).Info);
		evaltemplateaux_396039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_208097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.Sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_228058(result, 4);
			localerror_182392((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_211561(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 115) || (*body).Kind == ((NU8) 126) || (*body).Kind == ((NU8) 112) || (*body).Kind == ((NU8) 127)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_396308;
			NI HEX3Atmp_396322;
			NI LOC23;
			NI res_396325;
			i_396308 = 0;
			HEX3Atmp_396322 = 0;
			LOC23 = 0;
			LOC23 = safelen_208125(body);
			HEX3Atmp_396322 = (NI32)(LOC23 - ((NI) 1));
			res_396325 = ((NI) 0);
			{
				while (1) {
					if (!(res_396325 <= HEX3Atmp_396322)) goto LA25;
					i_396308 = res_396325;
					evaltemplateaux_396039((*body).kindU.S6.Sons->data[i_396308], args, (&ctx), result);
					res_396325 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_396256 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	evaltemplatecounter_396256 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

