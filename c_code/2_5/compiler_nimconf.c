/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY203168 TY203168;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer198184 tlexer198184;
typedef struct tbaselexer196024 tbaselexer196024;
typedef struct TNimObject TNimObject;
typedef struct tllstream195204 tllstream195204;
typedef struct tlineinfo181338 tlineinfo181338;
typedef struct ttoken198180 ttoken198180;
typedef struct tident185021 tident185021;
typedef struct tidobj185015 tidobj185015;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tlineinfo181338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
typedef NimStringDesc* TY193063[3];
typedef NI TY27020[16];
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
struct  tllstream195204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct TY203168 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP720)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_170371)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_203521)(NimStringDesc* filename);
N_NIMCALL(tllstream195204*, llstreamopen_195256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_198431)(ttoken198180* l);
N_NIMCALL(void, openlexer_198271)(tlexer198184* lex, NimStringDesc* filename, tllstream195204* inputstream);
N_NIMCALL(void, conftok_203378)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, ppgettok_203009)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, rawgettok_198232)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, parsedirective_203343)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(NU8, whichkeyword_189384)(tident185021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_203146)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(NIM_BOOL, parseexpr_203039)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_203088)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(NIM_BOOL, parseatom_203048)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, lexmessage_198283)(tlexer198184* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_186046)(tident185021* symbol);
N_NIMCALL(void, jumptodirective_203221)(tlexer198184* l, ttoken198180* tok, NU8 dest);
N_NIMCALL(void, doelse_203231)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, doelif_203252)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, doend_203192)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(void, msgwriteln_182738)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, stringtableobj131012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_198265)(ttoken198180* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_120669)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_120644)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_203440)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(tident185021*, getident_185463)(NimStringDesc* identifier);
static N_INLINE(tlineinfo181338, getlineinfo_198241)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(tlineinfo181338, newlineinfo_181870)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_203409)(tlexer198184* l, ttoken198180* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_193040)(NimStringDesc* switch_193042, NimStringDesc* arg, NU8 pass, tlineinfo181338 info);
N_NIMCALL(void, closelexer_198252)(tlexer198184* lex);
N_NIMCALL(void, rawmessage_183191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_203591)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_203579)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_117292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76043, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_116010)(NimStringDesc* filename);
STRING_LITERAL(TMP1917, "/usr", 4);
STRING_LITERAL(TMP1918, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1919, "/usr/local", 10);
STRING_LITERAL(TMP1920, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1921, "lib", 3);
STRING_LITERAL(TMP1922, "@", 1);
STRING_LITERAL(TMP1923, "\')\'", 3);
STRING_LITERAL(TMP1924, "\':\'", 3);
STRING_LITERAL(TMP1925, "@if", 3);
STRING_LITERAL(TMP1926, "@end", 4);
STRING_LITERAL(TMP1928, "putenv", 6);
STRING_LITERAL(TMP1929, "prependenv", 10);
STRING_LITERAL(TMP1930, "appendenv", 9);
STRING_LITERAL(TMP1931, "-", 1);
STRING_LITERAL(TMP1932, "--", 2);
STRING_LITERAL(TMP1933, "", 0);
STRING_LITERAL(TMP1934, "\']\'", 3);
STRING_LITERAL(TMP1935, "%=", 2);
STRING_LITERAL(TMP1936, "&", 1);
STRING_LITERAL(TMP1937, "config", 6);
STRING_LITERAL(TMP1938, "etc", 3);
STRING_LITERAL(TMP1939, "/etc/", 5);
STRING_LITERAL(TMP1941, "nimcfg", 6);
STRING_LITERAL(TMP1942, "nim.cfg", 7);
STRING_LITERAL(TMP1943, "nimrod.cfg", 10);
TY203168* condstack_203187;
extern TNimType NTI138; /* bool */
TNimType NTI203168; /* seq[bool] */
extern tgcheap47816 gch_47844;
extern NimStringDesc* libpath_170233;
extern NU32 gglobaloptions_170128;
extern TNimType NTI198184; /* TLexer */
extern stringtableobj131012* gconfigvars_170231;
extern NI gverbosity_170137;
extern NimStringDesc* gprojectpath_170235;
extern NimStringDesc* gprojectname_170234;
extern NimStringDesc* gprojectfull_170236;
N_NIMCALL(void, TMP720)(void* p, NI op) {
	TY203168* a;
	NI LOC1;
	a = (TY203168*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell45946*, usrtocell_49446)(void* usr) {
	tcell45946* result;
	result = 0;
	result = ((tcell45946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45946))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
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
			if (!((NU32)((*c).Refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_203009)(tlexer198184* l, ttoken198180* tok) {
	rawgettok_198232(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 112))) goto LA2;
			rawgettok_198232(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_203048)(tlexer198184* l, ttoken198180* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 92))) goto LA3;
		ppgettok_203009(l, tok);
		result = parseexpr_203039(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA7;
			ppgettok_203009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1923));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == ((NI) 44))) goto LA11;
		ppgettok_203009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_203048(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_186046((*tok).Ident);
		ppgettok_203009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_203088)(tlexer198184* l, ttoken198180* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_203048(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == ((NI) 2))) goto LA2;
			ppgettok_203009(l, tok);
			b = parseatom_203048(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_203039)(tlexer198184* l, ttoken198180* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_203088(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == ((NI) 48))) goto LA2;
			ppgettok_203009(l, tok);
			b = parseandexpr_203088(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_203146)(tlexer198184* l, ttoken198180* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_203009(l, tok);
	result = parseexpr_203039(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA3;
		ppgettok_203009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1924));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_203231)(tlexer198184* l, ttoken198180* tok) {
	{
		if (!((condstack_203187->Sup.len-1) < ((NI) 0))) goto LA3;
		lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1925));
	}
	LA3: ;
	ppgettok_203009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA7;
		ppgettok_203009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_203187->data[(condstack_203187->Sup.len-1)]) goto LA11;
		jumptodirective_203221(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_203252)(tlexer198184* l, ttoken198180* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_203187->Sup.len-1) < ((NI) 0))) goto LA3;
		lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1925));
	}
	LA3: ;
	res = evalppif_203146(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_203187->data[(condstack_203187->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_203221(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_203187->data[(condstack_203187->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_203192)(tlexer198184* l, ttoken198180* tok) {
	{
		if (!((condstack_203187->Sup.len-1) < ((NI) 0))) goto LA3;
		lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1925));
	}
	LA3: ;
	ppgettok_203009(l, tok);
	condstack_203187 = (TY203168*) setLengthSeq(&(condstack_203187)->Sup, sizeof(NIM_BOOL), (condstack_203187->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_203221)(tlexer198184* l, ttoken198180* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1922));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_203009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_189384((*tok).Ident);
				switch (LOC9) {
				case ((NU8) 30):
				{
					nestedifs += ((NI) 1);
				}
				break;
				case ((NU8) 20):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_203231(l, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU8) 19):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_203252(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 21):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_203192(l, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs)) goto LA32;
						nestedifs -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_203009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1926));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_203009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_203343)(tlexer198184* l, ttoken198180* tok) {
	NU8 LOC1;
	ppgettok_203009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_189384((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 30):
	{
		NIM_BOOL res;
		condstack_203187 = (TY203168*) setLengthSeq(&(condstack_203187)->Sup, sizeof(NIM_BOOL), (NI32)(condstack_203187->Sup.len + ((NI) 1)));
		res = evalppif_203146(l, tok);
		condstack_203187->data[(condstack_203187->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_203221(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 19):
	{
		doelif_203252(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doelse_203231(l, tok);
	}
	break;
	case ((NU8) 21):
	{
		doend_203192(l, tok);
	}
	break;
	case ((NU8) 178):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_203009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_198265((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_170231, 5);
		msgwriteln_182738(LOC12);
		ppgettok_203009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1928))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1929))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1930))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_203009(l, tok);
			key = toktostr_198265((&(*tok)));
			ppgettok_203009(l, tok);
			LOC21 = 0;
			LOC21 = toktostr_198265((&(*tok)));
			putenv_120669(key, LOC21);
			ppgettok_203009(l, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_203009(l, tok);
			key = toktostr_198265((&(*tok)));
			ppgettok_203009(l, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_198265((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_120644(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_120669(key, LOC23);
			ppgettok_203009(l, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_203009(l, tok);
			key = toktostr_198265((&(*tok)));
			ppgettok_203009(l, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_120644(key);
			LOC29 = 0;
			LOC29 = toktostr_198265((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_120669(key, LOC27);
			ppgettok_203009(l, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_198265((&(*tok)));
			lexmessage_198283((&(*l)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_203378)(tlexer198184* l, ttoken198180* tok) {
	ppgettok_203009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1922));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_203343(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo181338, getlineinfo_198241)(tlexer198184* l, ttoken198180* tok) {
	tlineinfo181338 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_181870((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_203409)(tlexer198184* l, ttoken198180* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 71) || (*tok).Toktype >= ((NU8) 86) && (*tok).Toktype <= ((NU8) 88)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_198265(tok);
		lexmessage_198283(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_203440)(tlexer198184* l, ttoken198180* tok) {
	tlineinfo181338 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	tident185021* LOC22;
	{
		NIM_BOOL LOC3;
		tident185021* LOC4;
		tident185021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_185463(((NimStringDesc*) &TMP1931));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_185463(((NimStringDesc*) &TMP1932));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_203378(l, tok);
	}
	LA7: ;
	info = getlineinfo_198241((&(*l)), (&(*tok)));
	checksymbol_203409((&(*l)), (&(*tok)));
	s = toktostr_198265((&(*tok)));
	conftok_203378(l, tok);
	val = copyString(((NimStringDesc*) &TMP1933));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 109))) goto LA10;
			s = addChar(s, 46);
			conftok_203378(l, tok);
			checksymbol_203409((&(*l)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_198265((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_203378(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 94))) goto LA14;
		conftok_203378(l, tok);
		checksymbol_203409((&(*l)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_198265((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_203378(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 95))) goto LA19;
			conftok_203378(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_198283((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1934));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_185463(((NimStringDesc*) &TMP1935));
	percent = ((*(*tok).Ident).Sup.Id == (*LOC22).Sup.Id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).Toktype == ((NU8) 106) || (*tok).Toktype == ((NU8) 108));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < val->Sup.len)) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_203378(l, tok);
		checksymbol_203409((&(*l)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_198265((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_203378(l, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				tident185021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_185463(((NimStringDesc*) &TMP1936));
				LOC36 = ((*(*tok).Ident).Sup.Id == (*LOC38).Sup.Id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_203378(l, tok);
				checksymbol_203409((&(*l)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_198265((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_203378(l, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_170231, 3);
		processswitch_193040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_193040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_203521)(NimStringDesc* filename) {
	tlexer198184 l;
	ttoken198180 tok;
	tllstream195204* stream;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI198184);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_195256(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_198431((&tok));
		openlexer_198271((&l), filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_203378((&l), (&tok));
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_203440((&l), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < condstack_203187->Sup.len)) goto LA9;
			lexmessage_198283((&l), ((NU16) 23), ((NimStringDesc*) &TMP1926));
		}
		LA9: ;
		closelexer_198252((&l));
		{
			if (!(((NI) 1) <= gverbosity_170137)) goto LA13;
			rawmessage_183191(((NU16) 272), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_203591)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY193063 LOC1;
	result = 0;
	p = getprefixdir_170371();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1937));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY193063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1938));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1939));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_203579)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_116010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_203811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_170233) && (libpath_170233)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_170371();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1917))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_170233; libpath_170233 = copyStringRC1(((NimStringDesc*) &TMP1918));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1919))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_170233; libpath_170233 = copyStringRC1(((NimStringDesc*) &TMP1920));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_170233), nosjoinPath(prefix, ((NimStringDesc*) &TMP1921)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_203591(cfg);
		readconfigfile_203521(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_203579(cfg);
		readconfigfile_203521(LOC24);
	}
	LA22: ;
	{
		if (!(((NI) 0) < gprojectpath_170235->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_170235);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_204034;
			dir_204034 = 0;
			{
				NimStringDesc* current_204051;
				if (!NIM_FALSE) goto LA37;
				current_204051 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_204034 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_117292(dir_204034, cfg);
					readconfigfile_203521(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_204051);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_204051 = nosparentDir(current_204051);
						dir_204034 = current_204051;
						LOC51 = 0;
						LOC51 = HEX2F_117292(dir_204034, cfg);
						readconfigfile_203521(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_204053;
					NI HEX3Atmp_204055;
					NI res_204057;
					i_204053 = 0;
					HEX3Atmp_204055 = 0;
					HEX3Atmp_204055 = (NI32)(pd->Sup.len - ((NI) 2));
					res_204057 = ((NI) 0);
					{
						while (1) {
							if (!(res_204057 <= HEX3Atmp_204055)) goto LA55;
							i_204053 = res_204057;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_204053])) == ((NU8)(47)) || ((NU8)(pd->data[i_204053])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_204053 == ((NI) 0));
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI32)(i_204053 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI32)(i_204053 - ((NI) 1))])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_204034 = copyStrLast(pd, ((NI) 0), i_204053);
								LOC64 = 0;
								LOC64 = HEX2F_117292(dir_204034, cfg);
								readconfigfile_203521(LOC64);
							}
							LA62: ;
							res_204057 += ((NI) 1);
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_204034 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_117292(dir_204034, cfg);
					readconfigfile_203521(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_117292(pd, cfg);
		readconfigfile_203521(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_170234->Sup.len == ((NI) 0)))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_170236, ((NimStringDesc*) &TMP1941));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_116010(projectconfig);
				if (!!(LOC81)) goto LA82;
				projectconfig = noschangeFileExt(gprojectfull_170236, ((NimStringDesc*) &TMP1942));
			}
			LA82: ;
			{
				NIM_BOOL LOC86;
				LOC86 = 0;
				LOC86 = fileexists_116010(projectconfig);
				if (!!(LOC86)) goto LA87;
				projectconfig = noschangeFileExt(gprojectfull_170236, ((NimStringDesc*) &TMP1943));
				{
					NIM_BOOL LOC91;
					LOC91 = 0;
					LOC91 = fileexists_116010(projectconfig);
					if (!LOC91) goto LA92;
					rawmessage_183191(((NU16) 234), projectconfig);
				}
				LA92: ;
			}
			LA87: ;
			readconfigfile_203521(projectconfig);
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void) {
	if (condstack_203187) nimGCunrefNoCycle(condstack_203187);
	condstack_203187 = (TY203168*) newSeqRC1((&NTI203168), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void) {
NTI203168.size = sizeof(TY203168*);
NTI203168.kind = 24;
NTI203168.base = (&NTI138);
NTI203168.flags = 2;
NTI203168.marker = TMP720;
}

