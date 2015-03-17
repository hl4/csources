/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu174479 tinfocpu174479;
typedef struct tinfoos174049 tinfoos174049;
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
typedef struct TNimNode TNimNode;
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
struct tinfocpu174479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu174479 TY174497[14];
struct tinfoos174049 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos174049 TY174071[24];
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
typedef NimStringDesc* TY174491[2];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
N_NIMCALL(NU8, nametocpu_174617)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_174611)(NimStringDesc* name);
N_NIMCALL(void, settarget_174634)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45947*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45947* c);
N_NOINLINE(void, addzct_49417)(tcellseq45963* s, tcell45947* c);
STRING_LITERAL(TMP59, "i386", 4);
STRING_LITERAL(TMP60, "m68k", 4);
STRING_LITERAL(TMP61, "alpha", 5);
STRING_LITERAL(TMP62, "powerpc", 7);
STRING_LITERAL(TMP63, "powerpc64", 9);
STRING_LITERAL(TMP64, "sparc", 5);
STRING_LITERAL(TMP65, "vm", 2);
STRING_LITERAL(TMP66, "ia64", 4);
STRING_LITERAL(TMP67, "amd64", 5);
STRING_LITERAL(TMP68, "mips", 4);
STRING_LITERAL(TMP69, "arm", 3);
STRING_LITERAL(TMP70, "js", 2);
STRING_LITERAL(TMP71, "nimrodvm", 8);
STRING_LITERAL(TMP72, "avr", 3);
NIM_CONST TY174497 cpu_174496 = {{((NimStringDesc*) &TMP59),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP60),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP61),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP62),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP63),
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP64),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP65),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP66),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP67),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP68),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP69),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP70),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP71),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP72),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP73, "DOS", 3);
STRING_LITERAL(TMP74, "..", 2);
STRING_LITERAL(TMP75, "$1.dll", 6);
STRING_LITERAL(TMP76, "/", 1);
STRING_LITERAL(TMP77, ".obj", 4);
STRING_LITERAL(TMP78, "\015\012", 2);
STRING_LITERAL(TMP79, ";", 1);
STRING_LITERAL(TMP80, "\\", 1);
STRING_LITERAL(TMP81, ".bat", 4);
STRING_LITERAL(TMP82, ".", 1);
STRING_LITERAL(TMP83, ".exe", 4);
STRING_LITERAL(TMP84, "Windows", 7);
STRING_LITERAL(TMP85, "OS2", 3);
STRING_LITERAL(TMP86, "Linux", 5);
STRING_LITERAL(TMP87, "lib$1.so", 8);
STRING_LITERAL(TMP88, ".o", 2);
STRING_LITERAL(TMP89, "\012", 1);
STRING_LITERAL(TMP90, ":", 1);
STRING_LITERAL(TMP91, ".sh", 3);
STRING_LITERAL(TMP92, "", 0);
STRING_LITERAL(TMP93, "MorphOS", 7);
STRING_LITERAL(TMP94, "SkyOS", 5);
STRING_LITERAL(TMP95, "Solaris", 7);
STRING_LITERAL(TMP96, "Irix", 4);
STRING_LITERAL(TMP97, "NetBSD", 6);
STRING_LITERAL(TMP98, "FreeBSD", 7);
STRING_LITERAL(TMP99, "OpenBSD", 7);
STRING_LITERAL(TMP100, "AIX", 3);
STRING_LITERAL(TMP101, "PalmOS", 6);
STRING_LITERAL(TMP102, "QNX", 3);
STRING_LITERAL(TMP103, "Amiga", 5);
STRING_LITERAL(TMP104, "$1.library", 10);
STRING_LITERAL(TMP105, "Atari", 5);
STRING_LITERAL(TMP106, ".tpp", 4);
STRING_LITERAL(TMP107, "Netware", 7);
STRING_LITERAL(TMP108, "$1.nlm", 6);
STRING_LITERAL(TMP109, ".nlm", 4);
STRING_LITERAL(TMP110, "MacOS", 5);
STRING_LITERAL(TMP111, "::", 2);
STRING_LITERAL(TMP112, "$1Lib", 5);
STRING_LITERAL(TMP113, "\015", 1);
STRING_LITERAL(TMP114, ",", 1);
STRING_LITERAL(TMP115, "MacOSX", 6);
STRING_LITERAL(TMP116, "lib$1.dylib", 11);
STRING_LITERAL(TMP117, "Haiku", 5);
STRING_LITERAL(TMP118, "VxWorks", 7);
STRING_LITERAL(TMP119, ".vxe", 4);
STRING_LITERAL(TMP120, "JS", 2);
STRING_LITERAL(TMP121, "NimrodVM", 8);
STRING_LITERAL(TMP122, "Standalone", 10);
NIM_CONST TY174071 os_174070 = {{((NimStringDesc*) &TMP73),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP82),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
2}
,
{((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP82),
13}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
,
{((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP74),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
0}
}
;
STRING_LITERAL(TMP123, "netbsd", 6);
STRING_LITERAL(TMP1468, "littleEndian", 12);
STRING_LITERAL(TMP1469, "bigEndian", 9);
NIM_CONST TY174491 endiantostr_174490 = {((NimStringDesc*) &TMP1468),
((NimStringDesc*) &TMP1469)}
;
NU8 targetcpu_174600;
NU8 hostcpu_174601;
NU8 targetos_174602;
NU8 hostos_174603;
NI intsize_174623;
NI floatsize_174624;
NI ptrsize_174625;
NimStringDesc* tnl_174626;
extern tgcheap47816 gch_47844;

N_NIMCALL(NU8, nametocpu_174617)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_175432;
		NU8 res_175437;
		i_175432 = 0;
		res_175437 = ((NU8) 1);
		{
			while (1) {
				if (!(res_175437 <= ((NU8) 14))) goto LA3;
				i_175432 = res_175437;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, cpu_174496[(i_175432)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_175432;
					goto BeforeRet;
				}
				LA7: ;
				res_175437 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_174611)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_175232;
		NU8 res_175237;
		i_175232 = 0;
		res_175237 = ((NU8) 1);
		{
			while (1) {
				if (!(res_175237 <= ((NU8) 24))) goto LA3;
				i_175232 = res_175237;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, os_174070[(i_175232)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_175232;
					goto BeforeRet;
				}
				LA7: ;
				res_175237 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
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

N_NIMCALL(void, settarget_174634)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_174600 = c;
	targetos_174602 = o;
	intsize_174623 = (NI64)(cpu_174496[(c)- 1].Field1 / ((NI) 8));
	floatsize_174624 = (NI64)(cpu_174496[(c)- 1].Field3 / ((NI) 8));
	ptrsize_174625 = (NI64)(cpu_174496[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_174626; tnl_174626 = copyStringRC1(os_174070[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit)(void) {
	hostcpu_174601 = nametocpu_174617(((NimStringDesc*) &TMP67));
	hostos_174603 = nametoos_174611(((NimStringDesc*) &TMP123));
	settarget_174634(hostos_174603, hostcpu_174601);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void) {
}

