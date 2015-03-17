/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trstnode312011 trstnode312011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq312009 trstnodeseq312009;
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
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode312011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq312009* Sons;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct trstnodeseq312009 {
  TGenericSeq Sup;
  trstnode312011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2498)(void* p, NI op);
N_NIMCALL(void, TMP2499)(void* p, NI op);
N_NIMCALL(trstnode312011*, newrstnode_312102)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_312167)(trstnode312011* father, trstnode312011* son);
TNimType NTI312011; /* TRstNode */
TNimType NTI312005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI312009; /* TRstNodeSeq */
TNimType NTI312007; /* PRstNode */
extern tgcheap47816 gch_47844;

N_NIMCALL(NI, len_312084)(trstnode312011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode312011*, lastson_312149)(trstnode312011* n) {
	trstnode312011* result;
	result = 0;
	result = (*n).Sons->data[(NI32)((*n).Sons->Sup.len - ((NI) 1))];
	return result;
}
N_NIMCALL(void, TMP2498)(void* p, NI op) {
	trstnodeseq312009* a;
	NI LOC1;
	a = (trstnodeseq312009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2499)(void* p, NI op) {
	trstnode312011* a;
	a = (trstnode312011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
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

N_NIMCALL(trstnode312011*, newrstnode_312102)(NU8 kind) {
	trstnode312011* result;
	result = 0;
	result = (trstnode312011*) newObj((&NTI312007), sizeof(trstnode312011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq312009*) newSeqRC1((&NTI312009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode312011*, newrstnode_312138)(NU8 kind, NimStringDesc* s) {
	trstnode312011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_312102(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
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

N_NIMCALL(void, add_312167)(trstnode312011* father, trstnode312011* son) {
	(*father).Sons = (trstnodeseq312009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode312011*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_312187)(trstnode312011* father, trstnode312011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_312167(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2494[4];
static TNimNode* TMP2495[65];
NI TMP2497;
static char* NIM_CONST TMP2496[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP882[71];
NTI312011.size = sizeof(trstnode312011);
NTI312011.kind = 18;
NTI312011.base = 0;
NTI312011.flags = 2;
TMP2494[0] = &TMP882[1];
NTI312005.size = sizeof(NU8);
NTI312005.kind = 14;
NTI312005.base = 0;
NTI312005.flags = 3;
for (TMP2497 = 0; TMP2497 < 65; TMP2497++) {
TMP882[TMP2497+2].kind = 1;
TMP882[TMP2497+2].offset = TMP2497;
TMP882[TMP2497+2].name = TMP2496[TMP2497];
TMP2495[TMP2497] = &TMP882[TMP2497+2];
}
TMP882[67].len = 65; TMP882[67].kind = 2; TMP882[67].sons = &TMP2495[0];
NTI312005.node = &TMP882[67];
TMP882[1].kind = 1;
TMP882[1].offset = offsetof(trstnode312011, Kind);
TMP882[1].typ = (&NTI312005);
TMP882[1].name = "kind";
TMP2494[1] = &TMP882[68];
TMP882[68].kind = 1;
TMP882[68].offset = offsetof(trstnode312011, Text);
TMP882[68].typ = (&NTI149);
TMP882[68].name = "text";
TMP2494[2] = &TMP882[69];
TMP882[69].kind = 1;
TMP882[69].offset = offsetof(trstnode312011, Level);
TMP882[69].typ = (&NTI108);
TMP882[69].name = "level";
TMP2494[3] = &TMP882[70];
NTI312009.size = sizeof(trstnodeseq312009*);
NTI312009.kind = 24;
NTI312009.base = (&NTI312007);
NTI312009.flags = 2;
NTI312009.marker = TMP2498;
TMP882[70].kind = 1;
TMP882[70].offset = offsetof(trstnode312011, Sons);
TMP882[70].typ = (&NTI312009);
TMP882[70].name = "sons";
TMP882[0].len = 4; TMP882[0].kind = 2; TMP882[0].sons = &TMP2494[0];
NTI312011.node = &TMP882[0];
NTI312007.size = sizeof(trstnode312011*);
NTI312007.kind = 22;
NTI312007.base = (&NTI312011);
NTI312007.flags = 2;
NTI312007.marker = TMP2499;
}

