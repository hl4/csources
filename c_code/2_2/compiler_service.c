/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell45947 tcell45947;
typedef struct TNimType TNimType;
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
typedef struct optparser192011 optparser192011;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY529428 TY529428;
typedef struct socketimpl521407 socketimpl521407;
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
struct  optparser192011  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY235722[1];
typedef N_NIMCALL_PTR(void, TY529259) (void);
struct  TY529428  {
NI HEX3Astate;
socketimpl521407* Stdoutsocket529408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY182061;
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
typedef NIM_CHAR TY521420[4001];
struct  socketimpl521407  {
int Fd;
NIM_BOOL Isbuffered;
union{
struct {TY521420 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NI32 Lasterror;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, initoptparser_192030)(NimStringDesc* cmdline, optparser192011* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(optparser192011* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_194686)(NU8 pass, optparser192011* p, NI* argscount);
N_NIMCALL(void, processswitch_194673)(NU8 pass, optparser192011* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_183119)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4946)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_170340)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_13478)(FILE* f);
N_NIMCALL(void, processcmdline_529209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(socketimpl521407*, newsocket_521830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_522620)(socketimpl521407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_522610)(socketimpl521407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_529409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_526208)(socketimpl521407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51822)(tcell45947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45947* c);
static N_INLINE(void, rtladdcycleroot_50223)(tcell45947* c);
N_NOINLINE(void, incl_46667)(tcellset45959* s, tcell45947* cell);
static N_INLINE(void, decref_51404)(tcell45947* c);
N_NIMCALL(void, accept_523401)(socketimpl521407* server, socketimpl521407** client, NU8 flags);
N_NIMCALL(void, readline_525608)(socketimpl521407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_523417)(socketimpl521407* socket);
N_NIMCALL(void, msgquit_182274)(NI8 x);
STRING_LITERAL(TMP995, "", 0);
STRING_LITERAL(TMP1586, " ", 1);
STRING_LITERAL(TMP1587, "-", 1);
STRING_LITERAL(TMP1914, "run", 3);
STRING_LITERAL(TMP4947, "server.type", 11);
STRING_LITERAL(TMP4948, "stdin", 5);
STRING_LITERAL(TMP4949, "tcp", 3);
STRING_LITERAL(TMP4951, "quit", 4);
STRING_LITERAL(TMP4952, "server.port", 11);
STRING_LITERAL(TMP4953, "server.address", 14);
STRING_LITERAL(TMP4956, "\015\012", 2);
STRING_LITERAL(TMP4965, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_529204;
extern tgcheap47816 gch_47844;
NimStringDesc* lastcaascmd_529205;
extern TNimType NTI192011; /* OptParser */
extern NU32 gglobaloptions_170128;
extern NimStringDesc* arguments_194669;
extern NimStringDesc* command_170239;
TNimType NTI529428; /* object */
extern TNimType NTI326033; /* range -1..0(int) */
extern TNimType NTI521409; /* Socket */
TNimType NTI529450; /* ref object */
extern NI gerrorcounter_182015;
extern TY182061 writelnhook_182064;

static N_INLINE(tcell45947*, usrtocell_49446)(void* usr) {
	tcell45947* result;
	result = 0;
	result = ((tcell45947*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45947))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(((NI) 8)))) goto LA3;
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

N_NIMCALL(void, processcmdline_529209)(NU8 pass, NimStringDesc* cmd) {
	optparser192011 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI192011);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI192011);
	initoptparser_192030(cmd, (&p));
	argscount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.Kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				{
					if (!eqStrings(p.Key, ((NimStringDesc*) &TMP1586))) goto LA7;
					p.Key = copyString(((NimStringDesc*) &TMP1587));
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_194686(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_194673(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_194686(pass, (&p), (&argscount));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY235722 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_170128 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_194669) && (arguments_194669)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_170239);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP1914)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_183119(((NU16) 57), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP4946)(void* p, NI op) {
	TY529428* a;
	a = (TY529428*)p;
	nimGCvisit((void*)(*a).Stdoutsocket529408, op);
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

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_529409)(NimStringDesc* line, void* ClEnv) {
	TY529428* HEX3Aenvp_529440;
	NimStringDesc* LOC1;
	HEX3Aenvp_529440 = (TY529428*) ClEnv;
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP4956));
	send_526208((*HEX3Aenvp_529440).Stdoutsocket529408, LOC1, 2);
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

N_NIMCALL(void, serve_529257)(TY529259 action) {
	TY529428* HEX3Aenv_529449;
	NimStringDesc* typ;
	HEX3Aenv_529449 = 0;
	HEX3Aenv_529449 = (TY529428*) newObj((&NTI529450), sizeof(TY529428));
	typ = getconfigvar_170340(((NimStringDesc*) &TMP4947));
	if (eqStrings(typ, ((NimStringDesc*) &TMP4948))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP4949))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP995))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_13478(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP4951))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_529204; curcaascmd_529204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_529209(((NU8) 1), line);
				action();
				gerrorcounter_182015 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP995)? (((NimStringDesc*) &TMP995))->data:"nil");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		socketimpl521407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY182061 LOC21;
		server = newsocket_521830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		p = getconfigvar_170340(((NimStringDesc*) &TMP4952));
		{
			NI LOC18;
			if (!(((NI) 0) < p->Sup.len)) goto LA16;
			LOC18 = 0;
			LOC18 = nsuParseInt(p);
			port = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = 0;
		LOC20 = getconfigvar_170340(((NimStringDesc*) &TMP4953));
		bindaddr_522620(server, port, LOC20);
		inp = copyString(((NimStringDesc*) &TMP995));
		listen_522610(server, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_529449).Stdoutsocket529408), newsocket_521830(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_529409; LOC21.ClEnv = HEX3Aenv_529449;
		asgnRef((void**) (&writelnhook_182064.ClEnv), LOC21.ClEnv);
		writelnhook_182064.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_523401(server, &(*HEX3Aenv_529449).Stdoutsocket529408, 2);
				readline_525608((*HEX3Aenv_529449).Stdoutsocket529408, (&inp), ((NI) -1), 2);
				LOC24 = 0;
				LOC24 = curcaascmd_529204; curcaascmd_529204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_529209(((NU8) 1), inp);
				action();
				gerrorcounter_182015 = ((NI) 0);
				send_526208((*HEX3Aenv_529449).Stdoutsocket529408, ((NimStringDesc*) &TMP4956), 2);
				close_523417((*HEX3Aenv_529449).Stdoutsocket529408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP4965)? (((NimStringDesc*) &TMP4965))->data:"nil", typ? (typ)->data:"nil");
		msgquit_182274(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_529204; curcaascmd_529204 = copyStringRC1(((NimStringDesc*) &TMP995));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_529205; lastcaascmd_529205 = copyStringRC1(((NimStringDesc*) &TMP995));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit)(void) {
static TNimNode* TMP4942[2];
static TNimNode TMP989[3];
NTI529428.size = sizeof(TY529428);
NTI529428.kind = 18;
NTI529428.base = 0;
NTI529428.flags = 2;
TMP4942[0] = &TMP989[1];
TMP989[1].kind = 1;
TMP989[1].offset = offsetof(TY529428, HEX3Astate);
TMP989[1].typ = (&NTI326033);
TMP989[1].name = ":state";
TMP4942[1] = &TMP989[2];
TMP989[2].kind = 1;
TMP989[2].offset = offsetof(TY529428, Stdoutsocket529408);
TMP989[2].typ = (&NTI521409);
TMP989[2].name = "stdoutSocket529408";
TMP989[0].len = 2; TMP989[0].kind = 2; TMP989[0].sons = &TMP4942[0];
NTI529428.node = &TMP989[0];
NTI529450.size = sizeof(TY529428*);
NTI529450.kind = 22;
NTI529450.base = (&NTI529428);
NTI529450.flags = 2;
NTI529450.marker = TMP4946;
}

