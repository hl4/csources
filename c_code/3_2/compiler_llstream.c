/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>

#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream194204 tllstream194204;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell46147 tcell46147;
typedef struct tcellseq46163 tcellseq46163;
typedef struct tgcheap48016 tgcheap48016;
typedef struct tcellset46159 tcellset46159;
typedef struct tpagedesc46155 tpagedesc46155;
typedef struct tmemregion28010 tmemregion28010;
typedef struct tsmallchunk27240 tsmallchunk27240;
typedef struct tllchunk28004 tllchunk28004;
typedef struct tbigchunk27242 tbigchunk27242;
typedef struct tintset27217 tintset27217;
typedef struct ttrunk27213 ttrunk27213;
typedef struct tavlnode28008 tavlnode28008;
typedef struct tgcstat48014 tgcstat48014;
typedef struct tbasechunk27238 tbasechunk27238;
typedef struct tfreecell27230 tfreecell27230;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tllstream194204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tcell46147  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq46163  {
NI Len;
NI Cap;
tcell46147** D;
};
struct  tcellset46159  {
NI Counter;
NI Max;
tpagedesc46155* Head;
tpagedesc46155** Data;
};
typedef tsmallchunk27240* TY28022[512];
typedef ttrunk27213* ttrunkbuckets27215[256];
struct  tintset27217  {
ttrunkbuckets27215 Data;
};
struct  tmemregion28010  {
NI Minlargeobj;
NI Maxlargeobj;
TY28022 Freesmallchunks;
tllchunk28004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27242* Freechunkslist;
tintset27217 Chunkstarts;
tavlnode28008* Root;
tavlnode28008* Deleted;
tavlnode28008* Last;
tavlnode28008* Freeavlnodes;
};
struct  tgcstat48014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap48016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq46163 Zct;
tcellseq46163 Decstack;
tcellset46159 Cycleroots;
tcellseq46163 Tempstack;
NI Recgclock;
tmemregion28010 Region;
tgcstat48014 Stat;
};
typedef NU8 TY194407[32];
typedef NI TY27220[8];
struct  tpagedesc46155  {
tpagedesc46155* Next;
NI Key;
TY27220 Bits;
};
struct  tbasechunk27238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27240  {
  tbasechunk27238 Sup;
tsmallchunk27240* Next;
tsmallchunk27240* Prev;
tfreecell27230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk28004  {
NI Size;
NI Acc;
tllchunk28004* Next;
};
struct  tbigchunk27242  {
  tbasechunk27238 Sup;
tbigchunk27242* Next;
tbigchunk27242* Prev;
NI Align;
NF Data;
};
struct  ttrunk27213  {
ttrunk27213* Next;
NI Key;
TY27220 Bits;
};
typedef tavlnode28008* TY28014[2];
struct  tavlnode28008  {
TY28014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell27230  {
tfreecell27230* Next;
NI Zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1014)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_13403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_13681)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_13715)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_194528)(tllstream194204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(tcell46147* c);
N_NOINLINE(void, addzct_49617)(tcellseq46163* s, tcell46147* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_194319)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_13657)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_194483)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_194460)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_194404)(NimStringDesc* x, TY194407 s);
N_NIMCALL(NI, writebuffer_13737)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_194665)(tllstream194204* s, NimStringDesc* data);
STRING_LITERAL(TMP1030, "", 0);
STRING_LITERAL(TMP1031, "\012", 1);
STRING_LITERAL(TMP1032, ">>> ", 4);
STRING_LITERAL(TMP1033, "... ", 4);
static NIM_CONST TY194407 TMP1034 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY194407 TMP1341 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3411; /* RootObj */
TNimType NTI194204; /* TLLStream */
TNimType NTI194202; /* TLLStreamKind */
extern TNimType NTI13204; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI194206; /* PLLStream */
extern tgcheap48016 gch_48044;
N_NIMCALL(void, TMP1014)(void* p, NI op) {
	tllstream194204* a;
	a = (tllstream194204*)p;
	nimGCvisit((void*)(*a).S, op);
}

N_NIMCALL(tllstream194204*, llstreamopen_194256)(NimStringDesc* filename, NU8 mode) {
	tllstream194204* result;
	result = 0;
	result = (tllstream194204*) newObj((&NTI194206), sizeof(tllstream194204));
	(*result).Sup.m_type = (&NTI194204);
	(*result).Kind = ((NU8) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13403(&(*result).F, filename, mode, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_194610)(tllstream194204* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	(*line) = setLengthStr((*line), ((NI) 0));
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s).Rd < (*s).S->Sup.len)) goto LA4;
				switch (((NU8)((*s).S->data[(*s).Rd]))) {
				case 13:
				{
					(*s).Rd += ((NI) 1);
					{
						if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA8;
						(*s).Rd += ((NI) 1);
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).Rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
					(*s).Rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = 0;
		LOC12 = (((NI) 0) < (*line)->Sup.len);
		if (LOC12) goto LA13;
		LOC12 = ((*s).Rd < (*s).S->Sup.len);
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		result = readline_13681((*s).F, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_13681(stdin, line);
	}
	break;
	}
	return result;
}

static N_INLINE(tcell46147*, usrtocell_49646)(void* usr) {
	tcell46147* result;
	result = 0;
	result = ((tcell46147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(tcell46147* c) {
	addzct_49617((&gch_48044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_194319)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_13657(stdout, prompt);
	result = readline_13681(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_13657(stdout, ((NimStringDesc*) &TMP1031));
		exit(((NI) 0));
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, counttriples_194483)(NimStringDesc* s) {
	NI result;
	NI i;
	result = 0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < s->Sup.len)) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = 0;
				LOC6 = 0;
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s->data[(NI64)(i + ((NI) 1))]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s->data[(NI64)(i + ((NI) 2))]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result += ((NI) 1);
				i += ((NI) 2);
			}
			LA9: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endswith_194404)(NimStringDesc* x, TY194407 s) {
	NIM_BOOL result;
	NI i;
	result = 0;
	i = (NI64)(x->Sup.len - ((NI) 1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 0) <= i);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (((NI) 0) <= i);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_TRUE;
	}
	LA9: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueline_194460)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_194404(line, TMP1034);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, llreadfromstdin_194528)(tllstream194204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	result = 0;
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1030));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s).Rd = ((NI) 0);
	line = rawNewString(((NI) 120));
	triples = ((NI) 0);
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = 0;
			{
				if (!((*s).S->Sup.len == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1032));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1033));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_194319(LOC4, (&line));
			if (!LOC10) goto LA3;
			(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
			(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1031));
			LOC11 = 0;
			LOC11 = counttriples_194483(line);
			triples += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_194460(line, (((NI) ((NI)(triples & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s).Lineoffset += ((NI) 1);
	result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
	{
		if (!(((NI) 0) < result)) goto LA19;
		memcpy(buf, ((void*) ((&(*s).S->data[(*s).Rd]))), result);
		(*s).Rd += result;
	}
	LA19: ;
	return result;
}

N_NIMCALL(NI, llstreamread_194584)(tllstream194204* s, void* buf, NI buflen) {
	NI result;
	result = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = ((NI) 0);
	}
	break;
	case ((NU8) 1):
	{
		result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
		{
			if (!(((NI) 0) < result)) goto LA5;
			memcpy(buf, ((void*) ((&(*s).S->data[(NI64)(((NI) 0) + (*s).Rd)]))), result);
			(*s).Rd += result;
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		result = readbuffer_13715((*s).F, buf, buflen);
	}
	break;
	case ((NU8) 3):
	{
		result = llreadfromstdin_194528(s, buf, buflen);
	}
	break;
	}
	return result;
}

N_NIMCALL(tllstream194204*, llstreamopen_194220)(NimStringDesc* data) {
	tllstream194204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream194204*) newObj((&NTI194206), sizeof(tllstream194204));
	(*result).Sup.m_type = (&NTI194204);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Kind = ((NU8) 1);
	return result;
}

N_NIMCALL(void, llstreamclose_194310)(tllstream194204* s) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		fclose((*s).F);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_194665)(tllstream194204* s, NimStringDesc* data) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		(*s).Wr += data->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		write_13657((*s).F, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_194450)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_194404(x, TMP1341);
	return result;
}

N_NIMCALL(void, llstreamwrite_194696)(tllstream194204* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = addChar((*s).S, data);
		(*s).Wr += ((NI) 1);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		c = data;
		LOC4 = 0;
		LOC4 = writebuffer_13737((*s).F, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_194686)(tllstream194204* s, NimStringDesc* data) {
	llstreamwrite_194665(s, data);
	llstreamwrite_194665(s, ((NimStringDesc*) &TMP1031));
}

N_NIMCALL(tllstream194204*, llstreamopen_194238)(FILE* f) {
	tllstream194204* result;
	result = 0;
	result = (tllstream194204*) newObj((&NTI194206), sizeof(tllstream194204));
	(*result).Sup.m_type = (&NTI194204);
	(*result).F = f;
	(*result).Kind = ((NU8) 2);
	return result;
}

N_NIMCALL(tllstream194204*, llstreamopenstdin_194293)(void) {
	tllstream194204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream194204*) newObj((&NTI194206), sizeof(tllstream194204));
	(*result).Sup.m_type = (&NTI194204);
	(*result).Kind = ((NU8) 3);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1030));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Lineoffset = ((NI) -1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit)(void) {
static TNimNode* TMP1010[6];
static TNimNode* TMP1011[4];
NI TMP1013;
static char* NIM_CONST TMP1012[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP713[12];
NTI194204.size = sizeof(tllstream194204);
NTI194204.kind = 17;
NTI194204.base = (&NTI3411);
TMP1010[0] = &TMP713[1];
NTI194202.size = sizeof(NU8);
NTI194202.kind = 14;
NTI194202.base = 0;
NTI194202.flags = 3;
for (TMP1013 = 0; TMP1013 < 4; TMP1013++) {
TMP713[TMP1013+2].kind = 1;
TMP713[TMP1013+2].offset = TMP1013;
TMP713[TMP1013+2].name = TMP1012[TMP1013];
TMP1011[TMP1013] = &TMP713[TMP1013+2];
}
TMP713[6].len = 4; TMP713[6].kind = 2; TMP713[6].sons = &TMP1011[0];
NTI194202.node = &TMP713[6];
TMP713[1].kind = 1;
TMP713[1].offset = offsetof(tllstream194204, Kind);
TMP713[1].typ = (&NTI194202);
TMP713[1].name = "kind";
TMP1010[1] = &TMP713[7];
TMP713[7].kind = 1;
TMP713[7].offset = offsetof(tllstream194204, F);
TMP713[7].typ = (&NTI13204);
TMP713[7].name = "f";
TMP1010[2] = &TMP713[8];
TMP713[8].kind = 1;
TMP713[8].offset = offsetof(tllstream194204, S);
TMP713[8].typ = (&NTI149);
TMP713[8].name = "s";
TMP1010[3] = &TMP713[9];
TMP713[9].kind = 1;
TMP713[9].offset = offsetof(tllstream194204, Rd);
TMP713[9].typ = (&NTI108);
TMP713[9].name = "rd";
TMP1010[4] = &TMP713[10];
TMP713[10].kind = 1;
TMP713[10].offset = offsetof(tllstream194204, Wr);
TMP713[10].typ = (&NTI108);
TMP713[10].name = "wr";
TMP1010[5] = &TMP713[11];
TMP713[11].kind = 1;
TMP713[11].offset = offsetof(tllstream194204, Lineoffset);
TMP713[11].typ = (&NTI108);
TMP713[11].name = "lineOffset";
TMP713[0].len = 6; TMP713[0].kind = 2; TMP713[0].sons = &TMP1010[0];
NTI194204.node = &TMP713[0];
NTI194206.size = sizeof(tllstream194204*);
NTI194206.kind = 22;
NTI194206.base = (&NTI194204);
NTI194206.marker = TMP1014;
}

