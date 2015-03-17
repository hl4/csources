/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <unistd.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/time.h>

#include <time.h>
typedef struct TY120008 TY120008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct oserror3433 oserror3433;
typedef struct systemerror3429 systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
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
typedef struct TY117589 TY117589;
typedef struct indexerror3455 indexerror3455;
typedef struct slice84978 slice84978;
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3429  {
  Exception Sup;
};
struct  oserror3433  {
  systemerror3429 Sup;
NI32 Errorcode;
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
struct TY117589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  indexerror3455  {
  Exception Sup;
};
struct  slice84978  {
NI A;
NI B;
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
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP54)(void* p, NI op);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair131008* Result);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, searchextpos_117536)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, normext_117526)(NimStringDesc* ext);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, raiseoserror_114809)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_114620)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_114833)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117589* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, getapplaux_124204)(NimStringDesc* procpath);
N_NIMCALL(NimStringDesc*, getapplheuristic_124404)(void);
N_NIMCALL(NimStringDesc*, paramstr_123809)(NI i);
N_NIMCALL(NimStringDesc*, getenv_120644)(NimStringDesc* key);
N_NIMCALL(NI, findenvvar_120605)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_120202)(void);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NI, parentdirpos_117359)(NimStringDesc* path);
N_NIMCALL(void, rawcreatedir_121843)(NimStringDesc* dir);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nososErrorMsg)(void);
N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b);
N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file);
N_NIMCALL(NimStringDesc*, HEX2F_117292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_84971)(NimStringDesc* s, slice84978 x);
static N_INLINE(slice84978, HEX2EHEX2E_103273)(NI a, NI b);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
STRING_LITERAL(TMP138, "", 0);
STRING_LITERAL(TMP1080, "unknown OS error", 16);
STRING_LITERAL(TMP1081, "/proc/self/exe", 14);
STRING_LITERAL(TMP1083, "invalid index", 13);
STRING_LITERAL(TMP1084, "PATH", 4);
STRING_LITERAL(TMP1700, "HOME", 4);
STRING_LITERAL(TMP1701, "/", 1);
STRING_LITERAL(TMP1940, "/.config/", 9);
NIM_BOOL envcomputed_120007;
TY120008* environment_120009;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI149; /* string */
TNimType NTI120008; /* seq[string] */
extern TNimType NTI114812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern tgcheap47816 gch_47844;
extern TNimType NTI123816; /* ref IndexError */
extern TNimType NTI3455; /* IndexError */
N_NIMCALL(void, TMP54)(void* p, NI op) {
	TY120008* a;
	NI LOC1;
	a = (TY120008*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair131008* Result) {
	NI seppos;
	seppos = ((NI) -1);
	{
		NI i_117324;
		NI HEX3Atmp_117337;
		NI res_117340;
		i_117324 = 0;
		HEX3Atmp_117337 = 0;
		HEX3Atmp_117337 = (NI64)(path->Sup.len - ((NI) 1));
		res_117340 = HEX3Atmp_117337;
		{
			while (1) {
				if (!(((NI) 0) <= res_117340)) goto LA3;
				i_117324 = res_117340;
				{
					if (!(((NU8)(path->data[i_117324])) == ((NU8)(47)) || ((NU8)(path->data[i_117324])) == ((NU8)(47)))) goto LA6;
					seppos = i_117324;
					goto LA1;
				}
				LA6: ;
				res_117340 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	{
		if (!(((NI) 0) <= seppos)) goto LA10;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI64)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStr(path, (NI64)(seppos + ((NI) 1))));
	}
	goto LA8;
	LA10: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TMP138)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(path));
	}
	LA8: ;
}

N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(((NimStringDesc*) &TMP138));
	}
	goto LA1;
	LA5: ;
	{
		keyvaluepair131008 LOC8;
		memset((void*)(&LOC8), 0, sizeof(LOC8));
		nossplitPath(path, (&LOC8));
		result = copyString(LOC8.Field1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, searchextpos_117536)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = ((NI) -1);
	{
		NI i_117551;
		NI HEX3Atmp_117564;
		NI res_117567;
		i_117551 = 0;
		HEX3Atmp_117564 = 0;
		HEX3Atmp_117564 = (NI64)(s->Sup.len - ((NI) 1));
		res_117567 = HEX3Atmp_117564;
		{
			while (1) {
				if (!(((NI) 1) <= res_117567)) goto LA3;
				i_117551 = res_117567;
				{
					if (!((NU8)(s->data[i_117551]) == (NU8)(46))) goto LA6;
					result = i_117551;
					goto LA1;
				}
				goto LA4;
				LA6: ;
				{
					if (!(((NU8)(s->data[i_117551])) == ((NU8)(47)) || ((NU8)(s->data[i_117551])) == ((NU8)(47)))) goto LA9;
					goto LA1;
				}
				goto LA4;
				LA9: ;
				LA4: ;
				res_117567 -= ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, normext_117526)(NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((ext) && (ext)->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = ((NU8)(ext->data[((NI) 0)]) == (NU8)(46));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(ext);
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC8;
		LOC8 = 0;
		LOC8 = rawNewString(ext->Sup.len + 1);
appendChar(LOC8, 46);
appendString(LOC8, ext);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_117536(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_117526(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		NimStringDesc* LOC10;
		LOC8 = 0;
		LOC9 = 0;
		LOC9 = copyStrLast(filename, ((NI) 0), (NI64)(extpos - ((NI) 1)));
		LOC10 = 0;
		LOC10 = normext_117526(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_114620)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP138));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45947* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= ((NI) 8);
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_114809)(NI32 errorcode) {
	oserror3433* e;
	e = 0;
	e = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
	(*e).Sup.Sup.Sup.m_type = (&NTI3433);
	(*e).Errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_114620(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1080));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_114833)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	NI LOC6;
	result = 0;
	result = mnewString(((NI) (PATH_MAX)));
	r = realpath(filename->data, result->data);
	{
		NI32 LOC5;
		if (!r == 0) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_114833();
		raiseoserror_114809(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, LOC6);
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117589* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(path));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TMP138)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyString(((NimStringDesc*) &TMP138)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		seppos = ((NI) -1);
		dotpos = path->Sup.len;
		{
			NI i_117619;
			NI HEX3Atmp_117643;
			NI res_117646;
			i_117619 = 0;
			HEX3Atmp_117643 = 0;
			HEX3Atmp_117643 = (NI64)(path->Sup.len - ((NI) 1));
			res_117646 = HEX3Atmp_117643;
			{
				while (1) {
					if (!(((NI) 0) <= res_117646)) goto LA10;
					i_117619 = res_117646;
					{
						if (!((NU8)(path->data[i_117619]) == (NU8)(46))) goto LA13;
						{
							NIM_BOOL LOC17;
							NIM_BOOL LOC18;
							LOC17 = 0;
							LOC18 = 0;
							LOC18 = (dotpos == path->Sup.len);
							if (!(LOC18)) goto LA19;
							LOC18 = (((NI) 0) < i_117619);
							LA19: ;
							LOC17 = LOC18;
							if (!(LOC17)) goto LA20;
							LOC17 = !((((NU8)(path->data[(NI64)(i_117619 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(i_117619 - ((NI) 1))])) == ((NU8)(47))));
							LA20: ;
							if (!LOC17) goto LA21;
							dotpos = i_117619;
						}
						LA21: ;
					}
					goto LA11;
					LA13: ;
					{
						if (!(((NU8)(path->data[i_117619])) == ((NU8)(47)) || ((NU8)(path->data[i_117619])) == ((NU8)(47)))) goto LA24;
						seppos = i_117619;
						goto LA8;
					}
					goto LA11;
					LA24: ;
					LA11: ;
					res_117646 -= ((NI) 1);
				} LA10: ;
			}
		} LA8: ;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI64)(seppos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStrLast(path, (NI64)(seppos + ((NI) 1)), (NI64)(dotpos - ((NI) 1))));
		unsureAsgnRef((void**) (&(*Result).Field2), copyStr(path, dotpos));
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getapplaux_124204)(NimStringDesc* procpath) {
	NimStringDesc* result;
	NI len;
	result = 0;
	result = mnewString(((NI) 256));
	len = readlink(procpath->data, result->data, ((NI) 256));
	{
		if (!(((NI) 256) < len)) goto LA3;
		result = mnewString((NI64)(len + ((NI) 1)));
		len = readlink(procpath->data, result->data, len);
	}
	LA3: ;
	result = setLengthStr(result, len);
	return result;
}

N_NIMCALL(NimStringDesc*, paramstr_123809)(NI i) {
	NimStringDesc* result;
	indexerror3455* e_123815;
	NimStringDesc* LOC7;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (i < ((NI) (cmdCount)));
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) 0) <= i);
		LA4: ;
		if (!LOC3) goto LA5;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet;
	}
	LA5: ;
	e_123815 = 0;
	e_123815 = (indexerror3455*) newObj((&NTI123816), sizeof(indexerror3455));
	(*e_123815).Sup.Sup.m_type = (&NTI3455);
	LOC7 = 0;
	LOC7 = (*e_123815).Sup.message; (*e_123815).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1083));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	raiseException((Exception*)e_123815, "IndexError");
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, getenvvarsc_120202)(void) {
	{
		NI i;
		if (!!(envcomputed_120007)) goto LA3;
		if (environment_120009) nimGCunrefNoCycle(environment_120009);
		environment_120009 = (TY120008*) newSeqRC1((&NTI120008), 0);
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC11;
				NimStringDesc* LOC12;
				{
					if (!(environ[(i)- 0] == NIM_NIL)) goto LA9;
					goto LA5;
				}
				LA9: ;
				LOC11 = 0;
				LOC11 = cstrToNimstr(environ[(i)- 0]);
				environment_120009 = (TY120008*) incrSeq(&(environment_120009)->Sup, sizeof(NimStringDesc*));
				LOC12 = 0;
				LOC12 = environment_120009->data[environment_120009->Sup.len-1]; environment_120009->data[environment_120009->Sup.len-1] = copyStringRC1(LOC11);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				i += ((NI) 1);
			}
		} LA5: ;
		envcomputed_120007 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_120605)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
{	result = 0;
	getenvvarsc_120202();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	{
		NI i_120620;
		NI HEX3Atmp_120622;
		NI res_120625;
		i_120620 = 0;
		HEX3Atmp_120622 = 0;
		HEX3Atmp_120622 = (environment_120009->Sup.len-1);
		res_120625 = ((NI) 0);
		{
			while (1) {
				if (!(res_120625 <= HEX3Atmp_120622)) goto LA4;
				i_120620 = res_120625;
				{
					NIM_BOOL LOC7;
					LOC7 = 0;
					LOC7 = nsuStartsWith(environment_120009->data[i_120620], temp);
					if (!LOC7) goto LA8;
					result = i_120620;
					goto BeforeRet;
				}
				LA8: ;
				res_120625 += ((NI) 1);
			} LA4: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_120644)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
{	result = 0;
	i = findenvvar_120605(key);
	{
		NI LOC5;
		if (!(((NI) 0) <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_120009->data[i], 61, ((NI) 0));
		result = copyStr(environment_120009->data[i], (NI64)(LOC5 + ((NI) 1)));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP138));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(head->Sup.len == ((NI) 0))) goto LA3;
		result = copyString(tail);
	}
	goto LA1;
	LA3: ;
	{
		if (!(((NU8)(head->data[(NI64)(head->Sup.len - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(head->data[(NI64)(head->Sup.len - ((NI) 1))])) == ((NU8)(47)))) goto LA6;
		{
			NimStringDesc* LOC12;
			NimStringDesc* LOC13;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA10;
			LOC12 = 0;
			LOC13 = 0;
			LOC13 = copyStr(tail, ((NI) 1));
			LOC12 = rawNewString(head->Sup.len + LOC13->Sup.len + 0);
appendString(LOC12, head);
appendString(LOC12, LOC13);
			result = LOC12;
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC15;
			LOC15 = 0;
			LOC15 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC15, head);
appendString(LOC15, tail);
			result = LOC15;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		{
			NimStringDesc* LOC21;
			if (!(((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)))) goto LA19;
			LOC21 = 0;
			LOC21 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC21, head);
appendString(LOC21, tail);
			result = LOC21;
		}
		goto LA17;
		LA19: ;
		{
			NimStringDesc* LOC23;
			LOC23 = 0;
			LOC23 = rawNewString(head->Sup.len + tail->Sup.len + 1);
appendString(LOC23, head);
appendChar(LOC23, 47);
appendString(LOC23, tail);
			result = LOC23;
		}
		LA17: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getapplheuristic_124404)(void) {
	NimStringDesc* result;
{	result = 0;
	result = paramstr_123809(((NI) 0));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) < result->Sup.len);
		if (!(LOC3)) goto LA4;
		LOC3 = !(((NU8)(result->data[((NI) 0)]) == (NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			NimStringDesc* p_124602;
			NimStringDesc* HEX3Atmp_124609;
			NI last_124614;
			p_124602 = 0;
			HEX3Atmp_124609 = 0;
			HEX3Atmp_124609 = getenv_120644(((NimStringDesc*) &TMP1084));
			last_124614 = ((NI) 0);
			{
				while (1) {
					NI first_124616;
					if (!(last_124614 < HEX3Atmp_124609->Sup.len)) goto LA9;
					{
						while (1) {
							if (!(((NU8)(HEX3Atmp_124609->data[last_124614])) == ((NU8)(58)))) goto LA11;
							last_124614 += ((NI) 1);
						} LA11: ;
					}
					first_124616 = last_124614;
					{
						while (1) {
							NIM_BOOL LOC14;
							LOC14 = 0;
							LOC14 = (last_124614 < HEX3Atmp_124609->Sup.len);
							if (!(LOC14)) goto LA15;
							LOC14 = !((((NU8)(HEX3Atmp_124609->data[last_124614])) == ((NU8)(58))));
							LA15: ;
							if (!LOC14) goto LA13;
							last_124614 += ((NI) 1);
						} LA13: ;
					}
					{
						NimStringDesc* x;
						if (!(first_124616 <= (NI64)(last_124614 - ((NI) 1)))) goto LA18;
						p_124602 = copyStrLast(HEX3Atmp_124609, first_124616, (NI64)(last_124614 - ((NI) 1)));
						x = nosjoinPath(p_124602, result);
						{
							NIM_BOOL LOC22;
							LOC22 = 0;
							LOC22 = nosexistsFile(x);
							if (!LOC22) goto LA23;
							result = copyString(x);
							goto BeforeRet;
						}
						LA23: ;
					}
					LA18: ;
				} LA9: ;
			}
		}
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	result = 0;
	result = getapplaux_124204(((NimStringDesc*) &TMP1081));
	{
		if (!(result->Sup.len == ((NI) 0))) goto LA3;
		result = getapplheuristic_124404();
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	TY117589 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppFilename();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitFile(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

N_NIMCALL(NI, parentdirpos_117359)(NimStringDesc* path) {
	NI result;
	NI q;
{	result = 0;
	q = ((NI) 1);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 1) <= path->Sup.len);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(path->data[(NI64)(path->Sup.len - ((NI) 1))])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		q = ((NI) 2);
	}
	LA5: ;
	{
		NI i_117386;
		NI HEX3Atmp_117399;
		NI res_117402;
		i_117386 = 0;
		HEX3Atmp_117399 = 0;
		HEX3Atmp_117399 = (NI64)(path->Sup.len - q);
		res_117402 = HEX3Atmp_117399;
		{
			while (1) {
				if (!(((NI) 0) <= res_117402)) goto LA9;
				i_117386 = res_117402;
				{
					if (!(((NU8)(path->data[i_117386])) == ((NU8)(47)) || ((NU8)(path->data[i_117386])) == ((NU8)(47)))) goto LA12;
					result = i_117386;
					goto BeforeRet;
				}
				LA12: ;
				res_117402 -= ((NI) 1);
			} LA9: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path) {
	NimStringDesc* result;
	NI seppos;
	result = 0;
	seppos = parentdirpos_117359(path);
	{
		if (!(((NI) 0) <= seppos)) goto LA3;
		result = copyStrLast(path, ((NI) 0), (NI64)(seppos - ((NI) 1)));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP138));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX2F_117292)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
{	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawcreatedir_121843)(NimStringDesc* dir) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		NI32 LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = mkdir(dir->data, ((mode_t) 511));
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == EEXIST));
		LA5: ;
		if (!LOC3) goto LA6;
		LOC8 = 0;
		LOC8 = oslasterror_114833();
		raiseoserror_114809(LOC8);
	}
	LA6: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	{
		NI i_122211;
		NI HEX3Atmp_122224;
		NI res_122227;
		i_122211 = 0;
		HEX3Atmp_122224 = 0;
		HEX3Atmp_122224 = (NI64)(dir->Sup.len - ((NI) 1));
		res_122227 = ((NI) 1);
		{
			while (1) {
				if (!(res_122227 <= HEX3Atmp_122224)) goto LA3;
				i_122211 = res_122227;
				{
					if (!(((NU8)(dir->data[i_122211])) == ((NU8)(47)) || ((NU8)(dir->data[i_122211])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, ((NI) 0), (NI64)(i_122211 - ((NI) 1)));
						rawcreatedir_121843(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_122227 += ((NI) 1);
			} LA3: ;
		}
	}
	rawcreatedir_121843(dir);
}

N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0) {
	NimStringDesc* result;
	result = 0;
	result = copyString(parts[((NI) 0)]);
	{
		NI i_117266;
		NI HEX3Atmp_117270;
		NI res_117273;
		i_117266 = 0;
		HEX3Atmp_117270 = 0;
		HEX3Atmp_117270 = (partsLen0-1);
		res_117273 = ((NI) 1);
		{
			while (1) {
				if (!(res_117273 <= HEX3Atmp_117270)) goto LA3;
				i_117266 = res_117273;
				result = nosjoinPath(result, parts[i_117266]);
				res_117273 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_117536(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_117526(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(filename);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, paramcount_123830)(void) {
	NI result;
	result = 0;
	result = ((NI) ((NI32)(cmdCount - ((NI32) 1))));
	return result;
}

N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive) {
	NimStringDesc* result;
	result = 0;
	result = copyString(path);
	return result;
}

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	result = 0;
	result = ((NU8)(path->data[((NI) 0)]) == (NU8)(47));
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_120644(((NimStringDesc*) &TMP1700));
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1701));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb) {
	NI result;
	result = 0;
	{
		if (!NIM_TRUE) goto LA3;
		result = cmp_4717(patha, pathb);
	}
	goto LA1;
	LA3: ;
	{
		result = nsuCmpIgnoreCase(patha, pathb);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, putenv_120669)(NimStringDesc* key, NimStringDesc* val) {
	NI indx;
	indx = findenvvar_120605(key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= indx)) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC5, key);
appendChar(LOC5, 61);
appendString(LOC5, val);
		asgnRefNoCycle((void**) (&environment_120009->data[indx]), LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		LOC7 = 0;
		LOC7 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC7, key);
appendChar(LOC7, 61);
appendString(LOC7, val);
		environment_120009 = (TY120008*) incrSeq(&(environment_120009)->Sup, sizeof(NimStringDesc*));
		LOC8 = 0;
		LOC8 = environment_120009->data[environment_120009->Sup.len-1]; environment_120009->data[environment_120009->Sup.len-1] = copyStringRC1(LOC7);
		if (LOC8) nimGCunrefNoCycle(LOC8);
		indx = (environment_120009->Sup.len-1);
	}
	LA1: ;
	{
		int LOC11;
		NI32 LOC14;
		LOC11 = 0;
		LOC11 = putenv(environment_120009->data[indx]->data);
		if (!!((LOC11 == ((NI32) 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_114833();
		raiseoserror_114809(LOC14);
	}
	LA12: ;
}

N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	result = 0;
	result = mnewString(((NI) 512));
	{
		NCSTRING LOC3;
		NI LOC6;
		LOC3 = 0;
		LOC3 = getcwd(result->data, ((NI) 512));
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		LOC6 = 0;
		LOC6 = strlen(result->data);
		result = setLengthStr(result, LOC6);
	}
	goto LA1;
	LA4: ;
	{
		NI32 LOC8;
		LOC8 = 0;
		LOC8 = oslasterror_114833();
		raiseoserror_114809(LOC8);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_120644(((NimStringDesc*) &TMP1700));
	LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1940));
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = parentdirpos_117359(path);
	result = (LOC1 < ((NI) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, existsenv_120659)(NimStringDesc* key) {
	NIM_BOOL result;
{	result = 0;
	{
		NCSTRING LOC3;
		LOC3 = 0;
		LOC3 = getenv(key->data);
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA1;
	LA4: ;
	{
		NI LOC7;
		LOC7 = 0;
		LOC7 = findenvvar_120605(key);
		result = (((NI) 0) <= LOC7);
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(dir->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISDIR(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nososErrorMsg)(void) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP138));
	{
		NCSTRING LOC5;
		if (!!((errno == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errno);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

N_NOINLINE(void, nosraiseOSError)(NimStringDesc* msg) {
	{
		NimStringDesc* m;
		oserror3433* e_114416;
		if (!(msg->Sup.len == ((NI) 0))) goto LA3;
		m = nososErrorMsg();
		e_114416 = 0;
		e_114416 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_114416).Sup.Sup.Sup.m_type = (&NTI3433);
		{
			NimStringDesc* LOC9;
			if (!(((NI) 0) < m->Sup.len)) goto LA7;
			LOC9 = 0;
			LOC9 = (*e_114416).Sup.Sup.message; (*e_114416).Sup.Sup.message = copyStringRC1(m);
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC11;
			LOC11 = 0;
			LOC11 = (*e_114416).Sup.Sup.message; (*e_114416).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1080));
			if (LOC11) nimGCunrefNoCycle(LOC11);
		}
		LA5: ;
		raiseException((Exception*)e_114416, "OSError");
	}
	goto LA1;
	LA3: ;
	{
		oserror3433* e_114428;
		NimStringDesc* LOC13;
		e_114428 = 0;
		e_114428 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_114428).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC13 = 0;
		LOC13 = (*e_114428).Sup.Sup.message; (*e_114428).Sup.Sup.message = copyStringRC1(msg);
		if (LOC13) nimGCunrefNoCycle(LOC13);
		raiseException((Exception*)e_114428, "OSError");
	}
	LA1: ;
}

N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file) {
	time_t result;
	struct stat res;
{	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = stat(file->data, (&res));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114833();
		raiseoserror_114809(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	time_t LOC1;
	time_t LOC2;
	NI64 LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetLastModificationTime(a);
	LOC2 = 0;
	LOC2 = nosgetLastModificationTime(b);
	LOC3 = 0;
	LOC3 = ntDiffTime(LOC1, LOC2);
	result = (IL64(0) <= LOC3);
	return result;
}

N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int LOC1;
	memset((void*)(&a), 0, sizeof(a));
	memset((void*)(&b), 0, sizeof(b));
	a.tv_sec = (NI64)(milsecs / ((NI) 1000));
	a.tv_nsec = ((NI) ((NI64)(((NI) ((NI64)(((NI) ((NI64)(milsecs % ((NI) 1000)))) * ((NI) 1000)))) * ((NI) 1000))));
	LOC1 = 0;
	LOC1 = nanosleep((&a), (&b));
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_84971)(NimStringDesc* s, slice84978 x) {
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
		LOC1 = (NI64)(s->Sup.len + x.A);
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
		LOC7 = (NI64)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice84978, HEX2EHEX2E_103273)(NI a, NI b) {
	slice84978 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a;
	result.B = b;
	return result;
}

N_NIMCALL(NimStringDesc*, expandtilde_125646)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC7;
		NimStringDesc* LOC11;
		slice84978 LOC12;
		NimStringDesc* LOC13;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = (((NI) 1) < path->Sup.len);
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(path->data[((NI) 0)]) == (NU8)(126));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC7 = 0;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(47));
		if (LOC7) goto LA8;
		LOC7 = ((NU8)(path->data[((NI) 1)]) == (NU8)(92));
		LA8: ;
		LOC3 = LOC7;
		LA6: ;
		if (!LOC3) goto LA9;
		LOC11 = 0;
		LOC11 = nosgetHomeDir();
		LOC12 = HEX2EHEX2E_103273(((NI) 2), (NI64)(path->Sup.len - ((NI) 1)));
		LOC13 = 0;
		LOC13 = HEX5BHEX5D_84971(path, LOC12);
		result = HEX2F_117292(LOC11, LOC13);
	}
	goto LA1;
	LA9: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findexe_125610)(NimStringDesc* exe) {
	NimStringDesc* result;
	NimStringDesc* path;
{	result = 0;
	result = nosaddFileExt(exe, ((NimStringDesc*) &TMP138));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nosexistsFile(result);
		if (!LOC3) goto LA4;
		goto BeforeRet;
	}
	LA4: ;
	path = getenv_120644(((NimStringDesc*) &TMP1084));
	{
		NimStringDesc* candidate_125615;
		NI last_125622;
		candidate_125615 = 0;
		last_125622 = ((NI) 0);
		{
			if (!(((NI) 0) < path->Sup.len)) goto LA9;
			{
				while (1) {
					NI first_125624;
					NimStringDesc* x;
					if (!(last_125622 <= path->Sup.len)) goto LA12;
					first_125624 = last_125622;
					{
						while (1) {
							NIM_BOOL LOC15;
							LOC15 = 0;
							LOC15 = (last_125622 < path->Sup.len);
							if (!(LOC15)) goto LA16;
							LOC15 = !(((NU8)(path->data[last_125622]) == (NU8)(58)));
							LA16: ;
							if (!LOC15) goto LA14;
							last_125622 += ((NI) 1);
						} LA14: ;
					}
					candidate_125615 = copyStrLast(path, first_125624, (NI64)(last_125622 - ((NI) 1)));
					x = HEX2F_117292(candidate_125615, result);
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = nosexistsFile(x);
						if (!LOC19) goto LA20;
						result = copyString(x);
						goto BeforeRet;
					}
					LA20: ;
					last_125622 += ((NI) 1);
				} LA12: ;
			}
		}
		LA9: ;
	}
	result = copyString(((NimStringDesc*) &TMP138));
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
NTI120008.size = sizeof(TY120008*);
NTI120008.kind = 24;
NTI120008.base = (&NTI149);
NTI120008.flags = 2;
NTI120008.marker = TMP54;
}

