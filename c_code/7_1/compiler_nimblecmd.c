/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <dirent.h>

#include <sys/types.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo180338 tlineinfo180338;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
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
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
typedef NIM_CHAR TY105380[256];
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_127219)(tlinkedlist127028 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_127419)(tlinkedlist127028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_189266)(NimStringDesc* dir, tlineinfo180338 info);
N_NIMCALL(stringtableobj131012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_117292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_189126)(stringtableobj131012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_189023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_189064)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj131012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(stringtableobj131012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_189175)(NimStringDesc* p, tlineinfo180338 info);
N_NIMCALL(void, message_182413)(tlineinfo180338 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1702, ".", 1);
STRING_LITERAL(TMP1703, "..", 2);
STRING_LITERAL(TMP1704, "head", 4);
extern tlinkedlist127028 searchpaths_169132;
extern NI gverbosity_169137;
extern tlinkedlist127028 lazypaths_169133;

N_NIMCALL(void, addpath_189012)(NimStringDesc* path, tlineinfo180338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_127219(searchpaths_169132, path);
		if (!!(LOC3)) goto LA4;
		prependstr_127419((&searchpaths_169132), path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_189023)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI32)(s->Sup.len - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = s->Sup.len;
	}
	LA7: ;
	return result;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_189064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1704))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	vera = ((NI) 0);
	verb = ((NI) 0);
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, (&vera), i);
			jj = npuParseInt(b, (&verb), j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result = (((NI) 0) < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_189126)(stringtableobj131012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_189023(p);
	name = copyStrLast(p, ((NI) 0), (NI32)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < p->Sup.len)) goto LA3;
		version = copyStr(p, (NI32)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_189064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1704));
	}
	LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_189175)(NimStringDesc* p, tlineinfo180338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_127219(searchpaths_169132, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(((NI) 1) <= gverbosity_169137)) goto LA8;
			message_182413(info, ((NU16) 273), p);
		}
		LA8: ;
		prependstr_127419((&lazypaths_169133), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_189266)(NimStringDesc* dir, tlineinfo180338 info) {
	stringtableobj131012* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI32)(dir->Sup.len - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_189292;
		NimStringDesc* p_189293;
		DIR* d_189308;
		k_189292 = 0;
		p_189293 = 0;
		d_189308 = opendir(dir->data);
		{
			int LOC62;
			if (!!((d_189308 == NIM_NIL))) goto LA8;
			{
				while (1) {
					{
						struct dirent* x_189310;
						NimStringDesc* y_189312;
						x_189310 = readdir(d_189308);
						{
							if (!(x_189310 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						y_189312 = cstrToNimstr(((NCSTRING) ((*x_189310).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_189314;
							NU8 k_189316;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_189312, ((NimStringDesc*) &TMP1702)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_189312, ((NimStringDesc*) &TMP1703)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_189314), 0, sizeof(s_189314));
							y_189312 = HEX2F_117292(dir, y_189312);
							k_189316 = ((NU8) 0);
							{
								if (!!(((*x_189310).d_type == ((NI8) 0)))) goto LA25;
								{
									if (!((*x_189310).d_type == ((NI8) 4))) goto LA29;
									k_189316 = ((NU8) 2);
								}
								LA29: ;
								{
									if (!((*x_189310).d_type == ((NI8) 10))) goto LA33;
									k_189316 = (k_189316 + ((NI) 1));
								}
								LA33: ;
								k_189292 = k_189316;
								p_189293 = y_189312;
								{
									NIM_BOOL LOC37;
									LOC37 = 0;
									LOC37 = (k_189292 == ((NU8) 2));
									if (!(LOC37)) goto LA38;
									LOC37 = !(((NU8)(p_189293->data[pos]) == (NU8)(46)));
									LA38: ;
									if (!LOC37) goto LA39;
									addpackage_189126(packages, p_189293);
								}
								LA39: ;
								goto LA12;
							}
							LA25: ;
							{
								int LOC43;
								LOC43 = 0;
								LOC43 = lstat(y_189312->data, (&s_189314));
								if (!(LOC43 < ((NI32) 0))) goto LA44;
								goto LA10;
							}
							LA44: ;
							{
								NIM_BOOL LOC48;
								LOC48 = 0;
								LOC48 = S_ISDIR(s_189314.st_mode);
								if (!LOC48) goto LA49;
								k_189316 = ((NU8) 2);
							}
							LA49: ;
							{
								NIM_BOOL LOC53;
								LOC53 = 0;
								LOC53 = S_ISLNK(s_189314.st_mode);
								if (!LOC53) goto LA54;
								k_189316 = (k_189316 + ((NI) 1));
							}
							LA54: ;
							k_189292 = k_189316;
							p_189293 = y_189312;
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = (k_189292 == ((NU8) 2));
								if (!(LOC58)) goto LA59;
								LOC58 = !(((NU8)(p_189293->data[pos]) == (NU8)(46)));
								LA59: ;
								if (!LOC58) goto LA60;
								addpackage_189126(packages, p_189293);
							}
							LA60: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			LOC62 = 0;
			LOC62 = closedir(d_189308);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_189303;
		p_189303 = 0;
		{
			NimStringDesc* key_189322;
			NimStringDesc* val_189324;
			key_189322 = 0;
			val_189324 = 0;
			{
				NI h_189326;
				NI HEX3Atmp_189328;
				NI res_189330;
				h_189326 = 0;
				HEX3Atmp_189328 = 0;
				HEX3Atmp_189328 = ((*packages).Data->Sup.len-1);
				res_189330 = ((NI) 0);
				{
					while (1) {
						if (!(res_189330 <= HEX3Atmp_189328)) goto LA67;
						h_189326 = res_189330;
						{
							NimStringDesc* res_189334;
							if (!!((*packages).Data->data[h_189326].Field0 == 0)) goto LA70;
							key_189322 = (*packages).Data->data[h_189326].Field0;
							val_189324 = (*packages).Data->data[h_189326].Field1;
							{
								if (!eqStrings(val_189324, ((NimStringDesc*) &TMP1704))) goto LA74;
								res_189334 = key_189322;
							}
							goto LA72;
							LA74: ;
							{
								NimStringDesc* LOC77;
								LOC77 = 0;
								LOC77 = rawNewString(key_189322->Sup.len + val_189324->Sup.len + 1);
appendString(LOC77, key_189322);
appendChar(LOC77, 45);
appendString(LOC77, val_189324);
								res_189334 = LOC77;
							}
							LA72: ;
							p_189303 = res_189334;
							addnimblepath_189175(p_189303, info);
						}
						LA70: ;
						res_189330 += ((NI) 1);
					} LA67: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_189368)(NimStringDesc* path, tlineinfo180338 info) {
	addpathrec_189266(path, info);
	addnimblepath_189175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

