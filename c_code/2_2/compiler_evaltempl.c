/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode208813 tnode208813;
typedef struct tsym208843 tsym208843;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype208849 ttype208849;
typedef struct tident185021 tident185021;
typedef struct tnodeseq208807 tnodeseq208807;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208845 ttypeseq208845;
typedef struct tscope208837 tscope208837;
typedef struct TY208944 TY208944;
typedef struct tinstantiation208833 tinstantiation208833;
typedef struct tstrtable208817 tstrtable208817;
typedef struct tsymseq208815 tsymseq208815;
typedef struct tloc208827 tloc208827;
typedef struct trope178009 trope178009;
typedef struct tlib208831 tlib208831;
typedef struct templctx397019 templctx397019;
typedef struct tidtable208861 tidtable208861;
typedef struct tidpairseq208859 tidpairseq208859;
typedef struct tidpair208857 tidpair208857;
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
typedef struct TY208933 TY208933;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable208817  {
NI Counter;
tsymseq208815* Data;
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
struct  tidpair208857  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable208861  {
NI Counter;
tidpairseq208859* Data;
};
struct  templctx397019  {
tsym208843* Owner;
tsym208843* Gensymowner;
NIM_BOOL Instlines;
tidtable208861 Mapping;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
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
struct tidpairseq208859 {
  TGenericSeq Sup;
  tidpair208857 data[SEQ_DECL_SIZE];
};
struct TY208933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_183371)(tlineinfo181338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode208813*, evaltemplateargs_397184)(tnode208813* n, tsym208843* s);
N_NIMCALL(NI, sonslen_211403)(tnode208813* n);
N_NIMCALL(NI, sonslen_211351)(ttype208849* n);
N_NIMCALL(tnode208813*, newnodei_210351)(NU8 kind, tlineinfo181338 info);
N_NIMCALL(tnode208813*, copytree_212828)(tnode208813* src);
N_NIMCALL(void, localerror_183392)(tlineinfo181338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_210819)(tnode208813* father, tnode208813* son);
N_NIMCALL(void, initidtable_212057)(tidtable208861* x);
N_NIMCALL(tnode208813*, getbody_251647)(tsym208843* s);
static N_INLINE(NIM_BOOL, isatom_213706)(tnode208813* n);
N_NIMCALL(void, evaltemplateaux_397039)(tnode208813* templ, tnode208813* actual, templctx397019* c, tnode208813* result);
static N_INLINE(NI, len_209097)(tnode208813* n);
N_NIMCALL(void, add_209164)(tnode208813* father, tnode208813* son);
N_NIMCALL(void, internalerror_183443)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_183531)(TY85545 x);
N_NIMCALL(TNimObject*, idtableget_215182)(tidtable208861 t, tidobj185015* key);
N_NIMCALL(tsym208843*, copysym_211607)(tsym208843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, idtableput_215196)(tidtable208861* t, tidobj185015* key, TNimObject* val);
N_NIMCALL(tnode208813*, newsymnode_210338)(tsym208843* sym, tlineinfo181338 info);
N_NIMCALL(tnode208813*, copynode_397027)(templctx397019* ctx, tnode208813* a, tnode208813* b);
N_NIMCALL(tnode208813*, copynode_212561)(tnode208813* src);
N_NIMCALL(NimStringDesc*, rendertree_229058)(tnode208813* n, NU8 renderflags);
static N_INLINE(NI, safelen_209125)(tnode208813* n);
STRING_LITERAL(TMP2877, "", 0);
STRING_LITERAL(TMP2879, "compiler/evaltempl.nim", 22);
NIM_CONST TY85545 TMP2878 = {((NimStringDesc*) &TMP2879),
((NI) 39)}
;
NI evaltemplatecounter_397256;
extern tgcheap47816 gch_47844;

N_NIMCALL(tnode208813*, evaltemplateargs_397184)(tnode208813* n, tsym208843* s) {
	tnode208813* result;
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
		a = sonslen_211403(n);
	}
	break;
	default:
	{
		a = ((NI) 0);
	}
	break;
	}
	f = sonslen_211351((*s).Typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_183371((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2877));
	}
	LA5: ;
	result = newnodei_210351(((NU8) 152), (*n).Info);
	{
		NI i_397204;
		NI HEX3Atmp_397234;
		NI res_397237;
		i_397204 = 0;
		HEX3Atmp_397234 = 0;
		HEX3Atmp_397234 = (NI64)(f - ((NI) 1));
		res_397237 = ((NI) 1);
		{
			while (1) {
				tnode208813* arg;
				if (!(res_397237 <= HEX3Atmp_397234)) goto LA9;
				i_397204 = res_397237;
				{
					if (!(i_397204 < a)) goto LA12;
					arg = (*n).kindU.S6.Sons->data[i_397204];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_212828((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_397204]).kindU.S4.Sym).Ast);
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
					localerror_183392((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP2877));
				}
				LA19: ;
				addson_210819(result, arg);
				res_397237 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_213706)(tnode208813* n) {
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

static N_INLINE(NI, len_209097)(tnode208813* n) {
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

N_NIMCALL(tnode208813*, copynode_397027)(templctx397019* ctx, tnode208813* a, tnode208813* b) {
	tnode208813* result;
	result = 0;
	result = copynode_212561(a);
	{
		if (!(*ctx).Instlines) goto LA3;
		(*result).Info = (*b).Info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_397039)(tnode208813* templ, tnode208813* actual, templctx397019* c, tnode208813* result) {
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym208843* s;
		s = (*templ).kindU.S4.Sym;
		{
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			{
				NIM_BOOL LOC8;
				tnode208813* x;
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
						tnode208813* y_397083;
						y_397083 = 0;
						{
							NI i_397142;
							NI HEX3Atmp_397144;
							NI LOC18;
							NI res_397146;
							i_397142 = 0;
							HEX3Atmp_397144 = 0;
							LOC18 = 0;
							LOC18 = len_209097(x);
							HEX3Atmp_397144 = (LOC18 - 1);
							res_397146 = ((NI) 0);
							{
								while (1) {
									if (!(res_397146 <= HEX3Atmp_397144)) goto LA20;
									i_397142 = res_397146;
									y_397083 = (*x).kindU.S6.Sons->data[i_397142];
									add_209164(result, y_397083);
									res_397146 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					tnode208813* LOC22;
					LOC22 = 0;
					LOC22 = copytree_212828(x);
					add_209164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				tsym208843* x;
				tidobj185015* LOC29;
				TNimObject* LOC30;
				tlineinfo181338 LOC37;
				tnode208813* LOC43;
				{
					NimStringDesc* LOC28;
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					LOC28 = 0;
					LOC28 = HEX24_183531(TMP2878);
					internalerror_183443(LOC28);
				}
				LA26: ;
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_215182((*c).Mapping, LOC29);
				x = ((tsym208843*) (LOC30));
				{
					tidobj185015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					x = copysym_211607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).Owner), (*c).Gensymowner);
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_215196((&(*c).Mapping), LOC35, LOC36);
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
				LOC43 = newsymnode_210338(x, LOC37);
				add_209164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode208813* LOC45;
			LOC45 = 0;
			LOC45 = copynode_397027((&(*c)), templ, actual);
			add_209164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode208813* LOC47;
		LOC47 = 0;
		LOC47 = copynode_397027((&(*c)), templ, actual);
		add_209164(result, LOC47);
	}
	break;
	default:
	{
		tnode208813* res;
		res = copynode_397027((&(*c)), templ, actual);
		{
			NI i_397135;
			NI HEX3Atmp_397150;
			NI LOC50;
			NI res_397153;
			i_397135 = 0;
			HEX3Atmp_397150 = 0;
			LOC50 = 0;
			LOC50 = sonslen_211403(templ);
			HEX3Atmp_397150 = (NI64)(LOC50 - ((NI) 1));
			res_397153 = ((NI) 0);
			{
				while (1) {
					if (!(res_397153 <= HEX3Atmp_397150)) goto LA52;
					i_397135 = res_397153;
					evaltemplateaux_397039((*templ).kindU.S6.Sons->data[i_397135], actual, c, res);
					res_397153 += ((NI) 1);
				} LA52: ;
			}
		}
		add_209164(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_209125)(tnode208813* n) {
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

N_NIMCALL(tnode208813*, evaltemplate_397260)(tnode208813* n, tsym208843* tmpl, tsym208843* gensymowner) {
	tnode208813* result;
	tnode208813* args;
	templctx397019 ctx;
	tnode208813* body;
	result = 0;
	evaltemplatecounter_397256 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_397256)) goto LA3;
		globalerror_183371((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP2877));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_397184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.Owner = tmpl;
	ctx.Gensymowner = gensymowner;
	initidtable_212057((&ctx.Mapping));
	body = getbody_251647(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_213706(body);
		if (!LOC7) goto LA8;
		result = newnodei_210351(((NU8) 37), (*body).Info);
		evaltemplateaux_397039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_209097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.Sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_229058(result, 4);
			localerror_183392((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_212561(body);
		ctx.Instlines = !(((*body).Kind == ((NU8) 115) || (*body).Kind == ((NU8) 126) || (*body).Kind == ((NU8) 112) || (*body).Kind == ((NU8) 127)));
		{
			if (!ctx.Instlines) goto LA20;
			(*result).Info = (*n).Info;
		}
		LA20: ;
		{
			NI i_397308;
			NI HEX3Atmp_397322;
			NI LOC23;
			NI res_397325;
			i_397308 = 0;
			HEX3Atmp_397322 = 0;
			LOC23 = 0;
			LOC23 = safelen_209125(body);
			HEX3Atmp_397322 = (NI64)(LOC23 - ((NI) 1));
			res_397325 = ((NI) 0);
			{
				while (1) {
					if (!(res_397325 <= HEX3Atmp_397322)) goto LA25;
					i_397308 = res_397325;
					evaltemplateaux_397039((*body).kindU.S6.Sons->data[i_397308], args, (&ctx), result);
					res_397325 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_397256 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit)(void) {
	evaltemplatecounter_397256 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit)(void) {
}

