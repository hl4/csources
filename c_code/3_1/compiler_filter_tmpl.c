/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tllstream194204 tllstream194204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode207813 tnode207813;
typedef struct ttmplparser233020 ttmplparser233020;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype207849 ttype207849;
typedef struct tsym207843 tsym207843;
typedef struct tident184021 tident184021;
typedef struct tnodeseq207807 tnodeseq207807;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq207845 ttypeseq207845;
typedef struct tloc207827 tloc207827;
typedef struct trope177009 trope177009;
typedef struct tscope207837 tscope207837;
typedef struct TY207944 TY207944;
typedef struct tinstantiation207833 tinstantiation207833;
typedef struct tstrtable207817 tstrtable207817;
typedef struct tsymseq207815 tsymseq207815;
typedef struct tlib207831 tlib207831;
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
struct  tlineinfo180338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  ttmplparser233020  {
tllstream194204* Inp;
NU8 State;
tlineinfo180338 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream194204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
};
typedef NU8 TY194407[32];
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
struct  tllstream194204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tloc207827  {
NU8 K;
NU8 S;
NU16 Flags;
ttype207849* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tstrtable207817  {
NI Counter;
tsymseq207815* Data;
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
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct tnodeseq207807 {
  TGenericSeq Sup;
  tnode207813* data[SEQ_DECL_SIZE];
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
struct TY207933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(tlineinfo180338, newlineinfo_180882)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo180338, newlineinfo_180870)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_180857)(NimStringDesc* filename);
N_NIMCALL(tllstream194204*, llstreamopen_194220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_232020)(tnode207813* n, NimStringDesc* name, NI pos, NIM_CHAR default_232025);
N_NIMCALL(NimStringDesc*, strarg_232029)(tnode207813* n, NimStringDesc* name, NI pos, NimStringDesc* default_232034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_194610)(tllstream194204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_233149)(ttmplparser233020* p);
N_NIMCALL(void, newline_233047)(ttmplparser233020* p);
N_NIMCALL(void, llstreamwrite_194665)(tllstream194204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_233057)(ttmplparser233020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_233139)(ttmplparser233020* p);
N_NIMCALL(NIM_BOOL, endswithopr_194450)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_188394)(NimStringDesc* id);
N_NIMCALL(void, localerror_182392)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_97907)(NimStringDesc* s, TY194407 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_194696)(tllstream194204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_194310)(tllstream194204* s);
STRING_LITERAL(TMP1331, "", 0);
STRING_LITERAL(TMP1332, "subschar", 8);
STRING_LITERAL(TMP1333, "metachar", 8);
STRING_LITERAL(TMP1334, "emit", 4);
STRING_LITERAL(TMP1335, "result.add", 10);
STRING_LITERAL(TMP1336, "conc", 4);
STRING_LITERAL(TMP1337, " & ", 3);
STRING_LITERAL(TMP1338, "tostring", 8);
STRING_LITERAL(TMP1339, "$", 1);
STRING_LITERAL(TMP1340, "\012", 1);
STRING_LITERAL(TMP1342, "end", 3);
STRING_LITERAL(TMP1343, "#end", 4);
static NIM_CONST TY194407 TMP1344 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1345, "\"", 1);
STRING_LITERAL(TMP1346, "(\"", 2);
STRING_LITERAL(TMP1347, "\\x", 2);
STRING_LITERAL(TMP1348, "\\\\", 2);
STRING_LITERAL(TMP1349, "\\\'", 2);
STRING_LITERAL(TMP1350, "\\\"", 2);
STRING_LITERAL(TMP1351, "}", 1);
STRING_LITERAL(TMP1352, "\\n\"", 3);

static N_INLINE(tlineinfo180338, newlineinfo_180882)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo180338 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_180857(filename);
	result = newlineinfo_180870(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_233047)(ttmplparser233020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, (*p).Emitpar);
	llstreamwrite_194665((*p).Outp, LOC1);
	(*p).Emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1340));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_194665((*p).Outp, LOC10);
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_233057)(ttmplparser233020* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).X->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).Par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).Par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).Bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).Bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).Curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).Curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_233139)(ttmplparser233020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (((NI) 0) < (*p).Par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p).Bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p).Curly);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, parseline_233149)(ttmplparser233020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	j = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = ((NU8)((*p).X->data[((NI) 0)]) == (NU8)((*p).Nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p).X->data[((NI) 1)]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_233047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU8 LOC18;
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA10;
		newline_233047(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1331));
		{
			while (1) {
				if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).X->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanpar_233057(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_233139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_194450((*p).X);
		LA17: ;
		(*p).Pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_188394(keyw);
		switch (LOC18) {
		case ((NU8) 21):
		{
			NimStringDesc* LOC25;
			{
				if (!(((NI) 2) <= (*p).Indent)) goto LA22;
				(*p).Indent -= ((NI) 2);
			}
			goto LA20;
			LA22: ;
			{
				(*p).Info.Col = ((NI16) (j));
				localerror_182392((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP1342));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_194665((*p).Outp, LOC25);
			llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1343));
		}
		break;
		case ((NU8) 30):
		case ((NU8) 64):
		case ((NU8) 59):
		case ((NU8) 65):
		case ((NU8) 26):
		case ((NU8) 7):
		case ((NU8) 9):
		case ((NU8) 50):
		case ((NU8) 37):
		case ((NU8) 13):
		case ((NU8) 39):
		case ((NU8) 58):
		case ((NU8) 40):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = 0;
			LOC27 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_194665((*p).Outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_194665((*p).Outp, LOC28);
			(*p).Indent += ((NI) 2);
		}
		break;
		case ((NU8) 19):
		case ((NU8) 47):
		case ((NU8) 20):
		case ((NU8) 23):
		case ((NU8) 25):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = 0;
			LOC30 = nsuRepeatChar(32, (NI32)((*p).Indent - ((NI) 2)));
			llstreamwrite_194665((*p).Outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_194665((*p).Outp, LOC31);
		}
		break;
		case ((NU8) 38):
		case ((NU8) 63):
		case ((NU8) 11):
		case ((NU8) 61):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = 0;
			LOC33 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_194665((*p).Outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).X, d);
			llstreamwrite_194665((*p).Outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_97907((*p).X, TMP1344);
				if (!!(LOC37)) goto LA38;
				(*p).Indent += ((NI) 2);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = 0;
			LOC41 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_194665((*p).Outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).X, d);
			llstreamwrite_194665((*p).Outp, LOC42);
		}
		break;
		}
		(*p).State = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p).Par = ((NI) 0);
		(*p).Curly = ((NI) 0);
		(*p).Bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).State) {
		case ((NU8) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_194665((*p).Outp, (*p).Conc);
			llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1340));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, (NI32)((*p).Indent + ((NI) 2)));
			llstreamwrite_194665((*p).Outp, LOC45);
			llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1345));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_233047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, (*p).Indent);
			llstreamwrite_194665((*p).Outp, LOC47);
			llstreamwrite_194665((*p).Outp, (*p).Emit);
			llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1346));
			(*p).Emitpar += ((NI) 1);
		}
		break;
		}
		(*p).State = ((NU8) 1);
		{
			while (1) {
				switch (((NU8)((*p).X->data[j]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1347));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), ((NI) 2));
					llstreamwrite_194665((*p).Outp, LOC52);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1348));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1349));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1350));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA59;
						j += ((NI) 1);
						switch (((NU8)((*p).X->data[j]))) {
						case 123:
						{
							(*p).Info.Col = ((NI16) (j));
							llstreamwrite_194696((*p).Outp, 34);
							llstreamwrite_194665((*p).Outp, (*p).Conc);
							llstreamwrite_194665((*p).Outp, (*p).Tostr);
							llstreamwrite_194696((*p).Outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).X->data[j]))) {
									case 0:
									{
										localerror_182392((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP1351));
										goto LA62;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llstreamwrite_194696((*p).Outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(((NI) 0) < curly)) goto LA73;
											curly -= ((NI) 1);
										}
										LA73: ;
										llstreamwrite_194696((*p).Outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_194696((*p).Outp, (*p).X->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_194696((*p).Outp, 41);
							llstreamwrite_194665((*p).Outp, (*p).Conc);
							llstreamwrite_194696((*p).Outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_194696((*p).Outp, 34);
							llstreamwrite_194665((*p).Outp, (*p).Conc);
							llstreamwrite_194665((*p).Outp, (*p).Tostr);
							llstreamwrite_194696((*p).Outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_194696((*p).Outp, (*p).X->data[j]);
									j += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_194696((*p).Outp, 41);
							llstreamwrite_194665((*p).Outp, (*p).Conc);
							llstreamwrite_194696((*p).Outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA82;
								llstreamwrite_194696((*p).Outp, (*p).Subschar);
								j += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p).Info.Col = ((NI16) (j));
								localerror_182392((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP1339));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_194696((*p).Outp, (*p).X->data[j]);
						j += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_194665((*p).Outp, ((NimStringDesc*) &TMP1352));
	}
	LA3: ;
}

N_NIMCALL(tllstream194204*, filtertmpl_233009)(tllstream194204* stdin_233011, NimStringDesc* filename, tnode207813* call) {
	tllstream194204* result;
	ttmplparser233020 p;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	p.Info = newlineinfo_180882(filename, ((NI) 0), ((NI) 0));
	p.Outp = llstreamopen_194220(((NimStringDesc*) &TMP1331));
	p.Inp = stdin_233011;
	p.Subschar = chararg_232020(call, ((NimStringDesc*) &TMP1332), ((NI) 1), 36);
	p.Nimdirective = chararg_232020(call, ((NimStringDesc*) &TMP1333), ((NI) 2), 35);
	p.Emit = strarg_232029(call, ((NimStringDesc*) &TMP1334), ((NI) 3), ((NimStringDesc*) &TMP1335));
	p.Conc = strarg_232029(call, ((NimStringDesc*) &TMP1336), ((NI) 4), ((NimStringDesc*) &TMP1337));
	p.Tostr = strarg_232029(call, ((NimStringDesc*) &TMP1338), ((NI) 5), ((NimStringDesc*) &TMP1339));
	p.X = rawNewString(((NI) 120));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_194610(p.Inp, (&p.X));
			if (!LOC3) goto LA2;
			p.Info.Line = (NI16)(p.Info.Line + ((NI16) 1));
			parseline_233149((&p));
		} LA2: ;
	}
	newline_233047((&p));
	result = p.Outp;
	llstreamclose_194310(p.Inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit)(void) {
}

