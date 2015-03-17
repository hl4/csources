/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <netinet/in.h>

#include <sys/socket.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <arpa/inet.h>

#include <setjmp.h>
typedef struct socketimpl520407 socketimpl520407;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct timeouterror520415 timeouterror520415;
typedef struct TY523225 TY523225;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef NIM_CHAR TY520420[4001];
struct  socketimpl520407  {
int Fd;
NIM_BOOL Isbuffered;
union{
struct {TY520420 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NI32 Lasterror;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  timeouterror520415  {
  Exception Sup;
};
typedef int TY523227[1];
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
typedef NIM_CHAR TY105380[256];
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
struct TY523225 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP4943)(void* p, NI op);
N_NIMCALL(int, newrawsocket_515804)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(void, raiseoserror_114809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114833)(void);
N_NIMCALL(socketimpl520407*, newsocket_520724)(int fd, NIM_BOOL isbuff);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_515629)(NU8 domain);
N_NIMCALL(NI16, htons_516817)(NI16 x);
N_NIMCALL(NI32, htonl_516807)(NI32 x);
N_NIMCALL(int, bindaddr_516014)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_516208)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(void, dealloc_516421)(struct addrinfo* ai);
N_NIMCALL(int, listen_516027)(int socket, int backlog);
N_NIMCALL(NI, send_524716)(socketimpl520407* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_520481)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_521027)(socketimpl520407* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_521001)(socketimpl520407* socket);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_521813)(socketimpl520407* server, socketimpl520407** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_523819)(socketimpl520407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4956)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_523207)(socketimpl520407* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_523001)(socketimpl520407* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_518713)(TY523225** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_101688)(NF* x, NF y);
N_NIMCALL(NI, recv_523425)(socketimpl520407* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_523237)(socketimpl520407* socket, NI32 flags);
N_NIMCALL(NI, peekchar_524444)(socketimpl520407* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_515828)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_520407_isbuffered[3];
STRING_LITERAL(TMP4952, "No valid socket error code available", 36);
STRING_LITERAL(TMP4953, "Could not send all data.", 24);
STRING_LITERAL(TMP4955, "", 0);
STRING_LITERAL(TMP4957, "Call to \'", 9);
STRING_LITERAL(TMP4958, "\' timed out.", 12);
STRING_LITERAL(TMP4960, "readLine", 8);
STRING_LITERAL(TMP4961, "\015\012", 2);
TNimType NTI520407; /* SocketImpl */
extern TNimType NTI5811; /* cint */
extern TNimType NTI138; /* bool */
extern TNimType NTI147; /* char */
TNimType NTI520420; /* array[0..4000, char] */
extern TNimType NTI108; /* int */
extern TNimType NTI114; /* int32 */
TNimType NTI520409; /* Socket */
extern int osinvalidsocket_515460;
extern TNimType NTI114812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern tgcheap47816 gch_47844;
extern TNimType NTI3427; /* Exception */
TNimType NTI520415; /* TimeoutError */
TNimType NTI524014; /* ref TimeoutError */
extern TNimType NTI523225; /* seq[SocketHandle] */
extern TSafePoint* exchandler_16843;
N_NIMCALL(void, TMP4943)(void* p, NI op) {
	socketimpl520407* a;
	NI LOC1;
	a = (socketimpl520407*)p;
	switch ((*a).Isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(socketimpl520407*, newsocket_520724)(int fd, NIM_BOOL isbuff) {
	socketimpl520407* result;
	result = 0;
	result = (socketimpl520407*) newObj((&NTI520409), sizeof(socketimpl520407));
	(*result).Fd = fd;
	(*result).Isbuffered = isbuff;
	{
		if (!isbuff) goto LA3;
		(*result).isbufferedU.S1.Currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(socketimpl520407*, newsocket_520830)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered) {
	socketimpl520407* result;
	int fd;
	result = 0;
	fd = newrawsocket_515804(domain, typ, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_515460)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_114833();
		raiseoserror_114809(LOC5);
	}
	LA3: ;
	result = newsocket_520724(fd, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_521620)(socketimpl520407* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_515629(((NU8) 2));
		name.sin_port = htons_516817(((NI16) (port)));
		name.sin_addr.s_addr = htonl_516807(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_516014((*socket).Fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_114833();
			raiseoserror_114809(LOC10);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_516208(address, port, ((NU8) 2), ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_516014((*socket).Fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_516421(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_114833();
			raiseoserror_114809(LOC17);
		}
		LA15: ;
		dealloc_516421(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_521610)(socketimpl520407* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_516027((*socket).Fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114833();
		raiseoserror_114809(LOC6);
	}
	LA4: ;
}

N_NIMCALL(NI, send_524716)(socketimpl520407* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).Fd, data, size, ((NI32) 0));
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_520481)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1<<((((NU8) 1))&7)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
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

N_NIMCALL(NI32, getsocketerror_521001)(socketimpl520407* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_114833();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).Lasterror;
	}
	LA3: ;
	{
		oserror3433* e_521008;
		NimStringDesc* LOC9;
		if (!(result == ((NI32) 0))) goto LA7;
		e_521008 = 0;
		e_521008 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_521008).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC9 = 0;
		LOC9 = (*e_521008).Sup.Sup.message; (*e_521008).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4952));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		raiseException((Exception*)e_521008, "OSError");
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_521027)(socketimpl520407* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_521001(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_114809(laste);
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_114809(laste);
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_525209)(socketimpl520407* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_524716(socket, ((void*) (data->data)), data->Sup.len);
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_114833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_520481(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_521027(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		oserror3433* e_525220;
		NimStringDesc* LOC14;
		if (!!((sent == data->Sup.len))) goto LA12;
		e_525220 = 0;
		e_525220 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_525220).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC14 = 0;
		LOC14 = (*e_525220).Sup.Sup.message; (*e_525220).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4953));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		raiseException((Exception*)e_525220, "OSError");
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_521813)(socketimpl520407* server, socketimpl520407** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).Fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_515460)) goto LA3;
		err = oslasterror_114833();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_520481(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_521813(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_114809(err);
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).Fd = sock;
		(*(*client)).Isbuffered = (*server).Isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_522401)(socketimpl520407* server, socketimpl520407** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP4955));
	acceptaddr_521813(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP4956)(void* p, NI op) {
	timeouterror520415* a;
	a = (timeouterror520415*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
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

N_NIMCALL(NIM_BOOL, hasdatabuffered_523001)(socketimpl520407* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).Isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.Buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.Currpos == (*s).isbufferedU.S1.Buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_523207)(socketimpl520407* readfd, NI timeout) {
	NI result;
	TY523225* fds;
	TY523227 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_523001(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY523225*) newSeq((&NTI523225), 1);
	LOC6[0] = (*readfd).Fd;
	fds->data[0] = LOC6[0];
	result = select_518713((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_101688)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_523819)(socketimpl520407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).Isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.Buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.Buflen == (*socket).isbufferedU.S1.Currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI32)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			timeouterror520415* e_524013;
			NimStringDesc* LOC22;
			if (!((NI32)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_524013 = 0;
			e_524013 = (timeouterror520415*) newObj((&NTI524014), sizeof(timeouterror520415));
			(*e_524013).Sup.Sup.m_type = (&NTI520415);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP4957));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP4958));
			asgnRefNoCycle((void**) (&(*e_524013).Sup.message), LOC22);
			raiseException((Exception*)e_524013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_523207(socket, (NI32)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_114833();
			raiseoserror_114809(LOC27);
		}
		LA25: ;
		{
			timeouterror520415* e_524206;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_524206 = 0;
			e_524206 = (timeouterror520415*) newObj((&NTI524014), sizeof(timeouterror520415));
			(*e_524206).Sup.Sup.m_type = (&NTI520415);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP4957));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP4958));
			asgnRefNoCycle((void**) (&(*e_524206).Sup.message), LOC32);
			raiseException((Exception*)e_524206, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_101688(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_523237)(socketimpl520407* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = ((NI) 0);
	result = recv((*socket).Fd, ((void*) ((*socket).isbufferedU.S1.Buffer)), ((NI) 4000), flags);
	{
		if (!(result < ((NI) 0))) goto LA3;
		(*socket).Lasterror = oslasterror_114833();
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		(*socket).isbufferedU.S1.Buflen = ((NI) 0);
		(*socket).isbufferedU.S1.Currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket).isbufferedU.S1.Buflen = result;
	(*socket).isbufferedU.S1.Currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_523425)(socketimpl520407* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).Isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.Buflen == ((NI) 0))) goto LA11;
			res = readintobuf_523237(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.Buflen <= (*socket).isbufferedU.S1.Currpos)) goto LA26;
					res = readintobuf_523237(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI32)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) <= (NI32)(size - read)) ? (NI32)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) : (NI32)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0]))), chunk);
				read += chunk;
				(*socket).isbufferedU.S1.Currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).Fd, data, ((NI) (((int) (size)))), ((NI32) 0));
		{
			if (!(result < ((NI) 0))) goto LA40;
			(*socket).Lasterror = oslasterror_114833();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_524444)(socketimpl520407* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).Isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.Buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI32)((*socket).isbufferedU.S1.Buflen - ((NI) 1)) < (*socket).isbufferedU.S1.Currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_523237(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).Fd, ((void*) (c)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_524608)(socketimpl520407* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_523819(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP4960));
			n = recv_523425(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_521001(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_520481(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_521027(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_523819(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP4960));
				n = peekchar_524444(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_523425(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_521001(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_520481(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_521027(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!((*line)->Sup.len == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4961));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!((*line)->Sup.len == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4961));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16843;
	exchandler_16843 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16843 = (*exchandler_16843).prev;
}

N_NIMCALL(void, close_522417)(socketimpl520407* socket) {
	TSafePoint TMP4962;
	pushSafePoint(&TMP4962);
	TMP4962.status = _setjmp(TMP4962.context);
	if (TMP4962.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_515828((*socket).Fd);
	}
	if (TMP4962.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void) {
static TNimNode* TMP4941[3];
static TNimNode* TMP4942[3];
static TNimNode TMP989[10];
NTI520407.size = sizeof(socketimpl520407);
NTI520407.kind = 18;
NTI520407.base = 0;
NTI520407.flags = 3;
TMP4941[0] = &TMP989[1];
TMP989[1].kind = 1;
TMP989[1].offset = offsetof(socketimpl520407, Fd);
TMP989[1].typ = (&NTI5811);
TMP989[1].name = "fd";
TMP4941[1] = &TMP989[2];
TMP989[2].kind = 3;
TMP989[2].offset = offsetof(socketimpl520407, Isbuffered);
TMP989[2].typ = (&NTI138);
TMP989[2].name = "isBuffered";
TMP989[2].sons = &NimDT_520407_isbuffered[0];
TMP989[2].len = 2;
TMP4942[0] = &TMP989[4];
NTI520420.size = sizeof(TY520420);
NTI520420.kind = 16;
NTI520420.base = (&NTI147);
NTI520420.flags = 3;
TMP989[4].kind = 1;
TMP989[4].offset = offsetof(socketimpl520407, isbufferedU.S1.Buffer);
TMP989[4].typ = (&NTI520420);
TMP989[4].name = "buffer";
TMP4942[1] = &TMP989[5];
TMP989[5].kind = 1;
TMP989[5].offset = offsetof(socketimpl520407, isbufferedU.S1.Currpos);
TMP989[5].typ = (&NTI108);
TMP989[5].name = "currPos";
TMP4942[2] = &TMP989[6];
TMP989[6].kind = 1;
TMP989[6].offset = offsetof(socketimpl520407, isbufferedU.S1.Buflen);
TMP989[6].typ = (&NTI108);
TMP989[6].name = "bufLen";
TMP989[3].len = 3; TMP989[3].kind = 2; TMP989[3].sons = &TMP4942[0];
NimDT_520407_isbuffered[1] = &TMP989[3];
TMP989[7].len = 0; TMP989[7].kind = 2;
NimDT_520407_isbuffered[0] = &TMP989[7];
TMP4941[2] = &TMP989[8];
TMP989[8].kind = 1;
TMP989[8].offset = offsetof(socketimpl520407, Lasterror);
TMP989[8].typ = (&NTI114);
TMP989[8].name = "lastError";
TMP989[0].len = 3; TMP989[0].kind = 2; TMP989[0].sons = &TMP4941[0];
NTI520407.node = &TMP989[0];
NTI520409.size = sizeof(socketimpl520407*);
NTI520409.kind = 22;
NTI520409.base = (&NTI520407);
NTI520409.flags = 2;
NTI520409.marker = TMP4943;
NTI520415.size = sizeof(timeouterror520415);
NTI520415.kind = 17;
NTI520415.base = (&NTI3427);
TMP989[9].len = 0; TMP989[9].kind = 2;
NTI520415.node = &TMP989[9];
NTI524014.size = sizeof(timeouterror520415*);
NTI524014.kind = 22;
NTI524014.base = (&NTI520415);
NTI524014.marker = TMP4956;
}

