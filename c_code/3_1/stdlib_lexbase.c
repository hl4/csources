/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct baselexer261024 baselexer261024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135027 streamobj135027;
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
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, fillbuffer_261102)(baselexer261024* l);
N_NIMCALL(NI, readdata_135174)(streamobj135027* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_262416)(baselexer261024* l);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_135085)(streamobj135027* s);
extern TNimType NTI3411; /* RootObj */
TNimType NTI261024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI135025; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_261102)(baselexer261024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI32)((NI32)((*l).Buflen - (*l).Sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) ((&(*l).Buf[(NI32)((*l).Sentinel + ((NI) 1))]))), (NI32)(tocopy * ((NI) 1)));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_135174((*l).Input, ((void*) ((&(*l).Buf[tocopy]))), (NI32)((NI32)((*l).Sentinel + ((NI) 1)) * ((NI) 1)));
	charsread = (NI32)(LOC5 / ((NI) 1));
	s = (NI32)(tocopy + charsread);
	{
		if (!(charsread < (NI32)((*l).Sentinel + ((NI) 1)))) goto LA8;
		(*l).Buf[s] = 0;
		(*l).Sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (((NI) 0) <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19;
					(*l).Sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*l).Buflen;
					(*l).Buflen = (NI32)((*l).Buflen * ((NI) 2));
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*l).Buf)), (NI32)((*l).Buflen * ((NI) 1)));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_135174((*l).Input, ((void*) ((&(*l).Buf[oldbuflen]))), (NI32)(oldbuflen * ((NI) 1)));
					charsread = (NI32)(LOC23 / ((NI) 1));
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI32)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI32)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI32)((*l).Buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_262416)(baselexer261024* l) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*l).Buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*l).Buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*l).Buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*l).Bufpos += ((NI) 3);
		(*l).Linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, open_261040)(baselexer261024* l, streamobj135027* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*l).Input), input);
	(*l).Bufpos = ((NI) 0);
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001((NI32)(buflen * ((NI) 1)));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI32)(buflen - ((NI) 1));
	(*l).Linestart = ((NI) 0);
	(*l).Linenumber = ((NI) 1);
	fillbuffer_261102(l);
	skiputf8bom_262416(l);
}

N_NIMCALL(void, close_261050)(baselexer261024* l) {
	dealloc_6048(((void*) ((*l).Buf)));
	close_135085((*l).Input);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP2740[8];
static TNimNode TMP856[9];
NTI261024.size = sizeof(baselexer261024);
NTI261024.kind = 17;
NTI261024.base = (&NTI3411);
TMP2740[0] = &TMP856[1];
TMP856[1].kind = 1;
TMP856[1].offset = offsetof(baselexer261024, Bufpos);
TMP856[1].typ = (&NTI108);
TMP856[1].name = "bufpos";
TMP2740[1] = &TMP856[2];
TMP856[2].kind = 1;
TMP856[2].offset = offsetof(baselexer261024, Buf);
TMP856[2].typ = (&NTI151);
TMP856[2].name = "buf";
TMP2740[2] = &TMP856[3];
TMP856[3].kind = 1;
TMP856[3].offset = offsetof(baselexer261024, Buflen);
TMP856[3].typ = (&NTI108);
TMP856[3].name = "bufLen";
TMP2740[3] = &TMP856[4];
TMP856[4].kind = 1;
TMP856[4].offset = offsetof(baselexer261024, Input);
TMP856[4].typ = (&NTI135025);
TMP856[4].name = "input";
TMP2740[4] = &TMP856[5];
TMP856[5].kind = 1;
TMP856[5].offset = offsetof(baselexer261024, Linenumber);
TMP856[5].typ = (&NTI108);
TMP856[5].name = "lineNumber";
TMP2740[5] = &TMP856[6];
TMP856[6].kind = 1;
TMP856[6].offset = offsetof(baselexer261024, Sentinel);
TMP856[6].typ = (&NTI108);
TMP856[6].name = "sentinel";
TMP2740[6] = &TMP856[7];
TMP856[7].kind = 1;
TMP856[7].offset = offsetof(baselexer261024, Linestart);
TMP856[7].typ = (&NTI108);
TMP856[7].name = "lineStart";
TMP2740[7] = &TMP856[8];
TMP856[8].kind = 1;
TMP856[8].offset = offsetof(baselexer261024, Fileopened);
TMP856[8].typ = (&NTI138);
TMP856[8].name = "fileOpened";
TMP856[0].len = 8; TMP856[0].kind = 2; TMP856[0].sons = &TMP2740[0];
NTI261024.node = &TMP856[0];
}

