/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY263019 TY263019;
typedef struct tsourcefile263008 tsourcefile263008;
typedef struct TY120008 TY120008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tsym207843 tsym207843;
typedef struct tident184021 tident184021;
typedef struct TY117589 TY117589;
typedef struct baselexer261024 baselexer261024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135027 streamobj135027;
typedef struct filestreamobj135692 filestreamobj135692;
typedef struct slice84977 slice84977;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct ttype207849 ttype207849;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tnode207813 tnode207813;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tlib207831 tlib207831;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct TY207933 TY207933;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile263008  {
TY120008* Lines;
NIM_BOOL Dirty;
NIM_BOOL Isnimfixfile;
NimStringDesc* Fullpath;
NimStringDesc* Newline;
NI32 Fileidx;
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
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY117589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer261024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj135027* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice84977  {
NI A;
NI B;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
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
struct  filestreamobj135692  {
  streamobj135027 Sup;
FILE* F;
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
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY263019 {
  TGenericSeq Sup;
  tsourcefile263008 data[SEQ_DECL_SIZE];
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
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
};
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP859)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_263212)(tlineinfo180338 info, tident184021* oldsym, tident184021* newsym);
N_NIMCALL(void, loadfile_263043)(tlineinfo180338 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_181446)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117589* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13217)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13481)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_261040)(baselexer261024* l, streamobj135027* input, NI buflen);
N_NIMCALL(filestreamobj135692*, newfilestream_135773)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_261050)(baselexer261024* l);
N_NIMCALL(NI, identlen_263151)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_84970)(NimStringDesc* s, slice84977 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice84977, HEX2EHEX2E_103273)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2741, ".nimfix", 7);
STRING_LITERAL(TMP2749, "\015\012", 2);
STRING_LITERAL(TMP2750, "\012", 1);
TY263019* gsourcefiles_263038;
TNimType NTI263008; /* TSourceFile */
extern TNimType NTI120008; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI263019; /* seq[TSourceFile] */
extern tgcheap47816 gch_47844;
extern TNimType NTI261024; /* BaseLexer */
N_NIMCALL(void, TMP859)(void* p, NI op) {
	TY263019* a;
	NI LOC1;
	a = (TY263019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45947* c;
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

N_NIMCALL(void, loadfile_263043)(tlineinfo180338 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_263038->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_263038 = (TY263019*) setLengthSeq(&(gsourcefiles_263038)->Sup, sizeof(tsourcefile263008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY117589 LOC10;
		baselexer261024 lex;
		filestreamobj135692* LOC16;
		streamobj135027* LOC17;
		NI pos;
		if (!gsourcefiles_263038->data[i].Lines == 0) goto LA7;
		gsourcefiles_263038->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_263038->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_263038->data[i].Lines);
		gsourcefiles_263038->data[i].Lines = (TY120008*) newSeqRC1((&NTI120008), 0);
		path = tofullpath_181446(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_263038->data[i].Fullpath; gsourcefiles_263038->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_263038->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2741));
		{
			NimStringDesc* line_263092;
			FILE* f_263119;
			NimStringDesc* res_263121;
			line_263092 = 0;
			f_263119 = open_13217(path, ((NU8) 0), ((NI) 8000));
			res_263121 = rawNewString(((NI) 80));
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13481(f_263119, (&res_263121));
					if (!LOC14) goto LA13;
					line_263092 = res_263121;
					gsourcefiles_263038->data[i].Lines = (TY120008*) incrSeq(&(gsourcefiles_263038->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_263038->data[i].Lines->data[gsourcefiles_263038->data[i].Lines->Sup.len-1]; gsourcefiles_263038->data[i].Lines->data[gsourcefiles_263038->data[i].Lines->Sup.len-1] = copyStringRC1(line_263092);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_263119);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI261024);
		LOC16 = 0;
		LOC16 = newfilestream_135773(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_261040((&lex), LOC17, ((NI) 8192));
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_263038->data[i].Newline; gsourcefiles_263038->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2749));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_263038->data[i].Newline; gsourcefiles_263038->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2750));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += ((NI) 1);
			}
		} LA18: ;
		close_261050((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_263151)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI32)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_84970)(NimStringDesc* s, slice84977 x) {
	NimStringDesc* result;
	NI LOC1;
	NI LOC7;
	result = 0;
	LOC1 = 0;
	{
		if (!(((NI) 0) <= x.A)) goto LA4;
		LOC1 = x.A;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (NI32)(s->Sup.len + x.A);
	}
	LA2: ;
	LOC7 = 0;
	{
		if (!(((NI) 0) <= x.B)) goto LA10;
		LOC7 = x.B;
	}
	goto LA8;
	LA10: ;
	{
		LOC7 = (NI32)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice84977, HEX2EHEX2E_103273)(NI a, NI b) {
	slice84977 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a;
	result.B = b;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_263212)(tlineinfo180338 info, tident184021* oldsym, tident184021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
{	loadfile_263043(info);
	line = gsourcefiles_263038->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
	first = ((((NI) (info.Col)) <= line->Sup.len) ? ((NI) (info.Col)) : line->Sup.len);
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI32)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += ((NI) 1);
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_263151(line, first);
	last = (NI32)((NI32)(first + LOC17) - ((NI) 1));
	{
		slice84977 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_103273(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_84970(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI32)(first - ((NI) 1)));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI32)(last + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_263038->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))]), x);
		gsourcefiles_263038->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_263277)(tlineinfo180338 info, tsym207843* oldsym, tsym207843* newsym) {
	replacedeprecated_263212(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	if (gsourcefiles_263038) nimGCunrefNoCycle(gsourcefiles_263038);
	gsourcefiles_263038 = (TY263019*) newSeqRC1((&NTI263019), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP858[6];
static TNimNode TMP854[7];
NTI263008.size = sizeof(tsourcefile263008);
NTI263008.kind = 18;
NTI263008.base = 0;
NTI263008.flags = 2;
TMP858[0] = &TMP854[1];
TMP854[1].kind = 1;
TMP854[1].offset = offsetof(tsourcefile263008, Lines);
TMP854[1].typ = (&NTI120008);
TMP854[1].name = "lines";
TMP858[1] = &TMP854[2];
TMP854[2].kind = 1;
TMP854[2].offset = offsetof(tsourcefile263008, Dirty);
TMP854[2].typ = (&NTI138);
TMP854[2].name = "dirty";
TMP858[2] = &TMP854[3];
TMP854[3].kind = 1;
TMP854[3].offset = offsetof(tsourcefile263008, Isnimfixfile);
TMP854[3].typ = (&NTI138);
TMP854[3].name = "isNimfixFile";
TMP858[3] = &TMP854[4];
TMP854[4].kind = 1;
TMP854[4].offset = offsetof(tsourcefile263008, Fullpath);
TMP854[4].typ = (&NTI149);
TMP854[4].name = "fullpath";
TMP858[4] = &TMP854[5];
TMP854[5].kind = 1;
TMP854[5].offset = offsetof(tsourcefile263008, Newline);
TMP854[5].typ = (&NTI149);
TMP854[5].name = "newline";
TMP858[5] = &TMP854[6];
TMP854[6].kind = 1;
TMP854[6].offset = offsetof(tsourcefile263008, Fileidx);
TMP854[6].typ = (&NTI114);
TMP854[6].name = "fileIdx";
TMP854[0].len = 6; TMP854[0].kind = 2; TMP854[0].sons = &TMP858[0];
NTI263008.node = &TMP854[0];
NTI263019.size = sizeof(TY263019*);
NTI263019.kind = 24;
NTI263019.base = (&NTI263008);
NTI263019.flags = 2;
NTI263019.marker = TMP859;
}

