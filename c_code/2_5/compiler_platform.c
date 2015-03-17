/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu175479 tinfocpu175479;
typedef struct tinfoos175049 tinfoos175049;
typedef struct tcell45946 tcell45946;
typedef struct TNimType TNimType;
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
struct tinfocpu175479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu175479 TY175497[14];
struct tinfoos175049 {
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
typedef tinfoos175049 TY175071[24];
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
typedef NimStringDesc* TY175491[2];
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
N_NIMCALL(NU8, nametocpu_175617)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_175611)(NimStringDesc* name);
N_NIMCALL(void, settarget_175634)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45946*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45946* c);
N_NOINLINE(void, addzct_49417)(tcellseq45962* s, tcell45946* c);
STRING_LITERAL(TMP61, "i386", 4);
STRING_LITERAL(TMP62, "m68k", 4);
STRING_LITERAL(TMP63, "alpha", 5);
STRING_LITERAL(TMP64, "powerpc", 7);
STRING_LITERAL(TMP65, "powerpc64", 9);
STRING_LITERAL(TMP66, "sparc", 5);
STRING_LITERAL(TMP67, "vm", 2);
STRING_LITERAL(TMP68, "ia64", 4);
STRING_LITERAL(TMP69, "amd64", 5);
STRING_LITERAL(TMP70, "mips", 4);
STRING_LITERAL(TMP71, "arm", 3);
STRING_LITERAL(TMP72, "js", 2);
STRING_LITERAL(TMP73, "nimrodvm", 8);
STRING_LITERAL(TMP74, "avr", 3);
NIM_CONST TY175497 cpu_175496 = {{((NimStringDesc*) &TMP61),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP62),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP63),
((NI) 64),
((NU8) 0),
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
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP66),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP67),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP68),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP69),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP70),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP71),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP72),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP73),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP74),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP75, "DOS", 3);
STRING_LITERAL(TMP76, "..", 2);
STRING_LITERAL(TMP77, "$1.dll", 6);
STRING_LITERAL(TMP78, "/", 1);
STRING_LITERAL(TMP79, ".obj", 4);
STRING_LITERAL(TMP80, "\015\012", 2);
STRING_LITERAL(TMP81, ";", 1);
STRING_LITERAL(TMP82, "\\", 1);
STRING_LITERAL(TMP83, ".bat", 4);
STRING_LITERAL(TMP84, ".", 1);
STRING_LITERAL(TMP85, ".exe", 4);
STRING_LITERAL(TMP86, "Windows", 7);
STRING_LITERAL(TMP87, "OS2", 3);
STRING_LITERAL(TMP88, "Linux", 5);
STRING_LITERAL(TMP89, "lib$1.so", 8);
STRING_LITERAL(TMP90, ".o", 2);
STRING_LITERAL(TMP91, "\012", 1);
STRING_LITERAL(TMP92, ":", 1);
STRING_LITERAL(TMP93, ".sh", 3);
STRING_LITERAL(TMP94, "", 0);
STRING_LITERAL(TMP95, "MorphOS", 7);
STRING_LITERAL(TMP96, "SkyOS", 5);
STRING_LITERAL(TMP97, "Solaris", 7);
STRING_LITERAL(TMP98, "Irix", 4);
STRING_LITERAL(TMP99, "NetBSD", 6);
STRING_LITERAL(TMP100, "FreeBSD", 7);
STRING_LITERAL(TMP101, "OpenBSD", 7);
STRING_LITERAL(TMP102, "AIX", 3);
STRING_LITERAL(TMP103, "PalmOS", 6);
STRING_LITERAL(TMP104, "QNX", 3);
STRING_LITERAL(TMP105, "Amiga", 5);
STRING_LITERAL(TMP106, "$1.library", 10);
STRING_LITERAL(TMP107, "Atari", 5);
STRING_LITERAL(TMP108, ".tpp", 4);
STRING_LITERAL(TMP109, "Netware", 7);
STRING_LITERAL(TMP110, "$1.nlm", 6);
STRING_LITERAL(TMP111, ".nlm", 4);
STRING_LITERAL(TMP112, "MacOS", 5);
STRING_LITERAL(TMP113, "::", 2);
STRING_LITERAL(TMP114, "$1Lib", 5);
STRING_LITERAL(TMP115, "\015", 1);
STRING_LITERAL(TMP116, ",", 1);
STRING_LITERAL(TMP117, "MacOSX", 6);
STRING_LITERAL(TMP118, "lib$1.dylib", 11);
STRING_LITERAL(TMP119, "Haiku", 5);
STRING_LITERAL(TMP120, "VxWorks", 7);
STRING_LITERAL(TMP121, ".vxe", 4);
STRING_LITERAL(TMP122, "JS", 2);
STRING_LITERAL(TMP123, "NimrodVM", 8);
STRING_LITERAL(TMP124, "Standalone", 10);
NIM_CONST TY175071 os_175070 = {{((NimStringDesc*) &TMP75),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP79),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
5}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP77),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP84),
1}
,
{((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP80),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
2}
,
{((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP84),
13}
,
{((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
,
{((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP76),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP78),
((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP84),
0}
}
;
STRING_LITERAL(TMP125, "linux", 5);
STRING_LITERAL(TMP1470, "littleEndian", 12);
STRING_LITERAL(TMP1471, "bigEndian", 9);
NIM_CONST TY175491 endiantostr_175490 = {((NimStringDesc*) &TMP1470),
((NimStringDesc*) &TMP1471)}
;
NU8 targetcpu_175600;
NU8 hostcpu_175601;
NU8 targetos_175602;
NU8 hostos_175603;
NI intsize_175623;
NI floatsize_175624;
NI ptrsize_175625;
NimStringDesc* tnl_175626;
extern tgcheap47816 gch_47844;

N_NIMCALL(NU8, nametocpu_175617)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_176432;
		NU8 res_176437;
		i_176432 = 0;
		res_176437 = ((NU8) 1);
		{
			while (1) {
				if (!(res_176437 <= ((NU8) 14))) goto LA3;
				i_176432 = res_176437;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, cpu_175496[(i_176432)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_176432;
					goto BeforeRet;
				}
				LA7: ;
				res_176437 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_175611)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_176232;
		NU8 res_176237;
		i_176232 = 0;
		res_176237 = ((NU8) 1);
		{
			while (1) {
				if (!(res_176237 <= ((NU8) 24))) goto LA3;
				i_176232 = res_176237;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, os_175070[(i_176232)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_176232;
					goto BeforeRet;
				}
				LA7: ;
				res_176237 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
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

N_NIMCALL(void, settarget_175634)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_175600 = c;
	targetos_175602 = o;
	intsize_175623 = (NI32)(cpu_175496[(c)- 1].Field1 / ((NI) 8));
	floatsize_175624 = (NI32)(cpu_175496[(c)- 1].Field3 / ((NI) 8));
	ptrsize_175625 = (NI32)(cpu_175496[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_175626; tnl_175626 = copyStringRC1(os_175070[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit)(void) {
	hostcpu_175601 = nametocpu_175617(((NimStringDesc*) &TMP66));
	hostos_175603 = nametoos_175611(((NimStringDesc*) &TMP125));
	settarget_175634(hostos_175603, hostcpu_175601);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit)(void) {
}

