/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo182338 tlineinfo182338;
typedef struct tlinkedlist130028 tlinkedlist130028;
typedef struct tlistentry130022 tlistentry130022;
typedef struct stringtableobj134012 stringtableobj134012;
typedef struct twin32finddata104219 twin32finddata104219;
typedef struct tfiletime103245 tfiletime103245;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq134010 keyvaluepairseq134010;
typedef struct keyvaluepair134008 keyvaluepair134008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo182338  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tlinkedlist130028  {
tlistentry130022* Head;
tlistentry130022* Tail;
NI Counter;
};
struct  tfiletime103245  {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NI16 TY104228[260];
typedef NI16 TY104232[14];
struct  twin32finddata104219  {
NI32 Dwfileattributes;
tfiletime103245 Ftcreationtime;
tfiletime103245 Ftlastaccesstime;
tfiletime103245 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY104228 Cfilename;
TY104232 Calternatefilename;
};
typedef N_STDCALL_PTR(NI32, TY104245) (NI hfindfile, twin32finddata104219* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY104405) (NI hfindfile);
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
struct keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj134012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq134010* Data;
NU8 Mode;
};
struct  tlistentry130022  {
  TNimObject Sup;
tlistentry130022* Prev;
tlistentry130022* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq134010 {
  TGenericSeq Sup;
  keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_130219)(tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_130419)(tlinkedlist130028* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_191252)(NimStringDesc* dir, tlineinfo182338 info);
N_NIMCALL(stringtableobj134012*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NI, findfirstfile_114416)(NimStringDesc* a, twin32finddata104219* b);
N_NIMCALL(NimStringDesc*, HEX2F_117492)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, skipfinddata_114436)(twin32finddata104219* f);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_80189)(NI16* s);
N_NIMCALL(void, addpackage_191126)(stringtableobj134012* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_191023)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75843, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_191064)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_191175)(NimStringDesc* p, tlineinfo182338 info);
N_NIMCALL(void, message_184413)(tlineinfo182338 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1713, "*", 1);
STRING_LITERAL(TMP1714, "head", 4);
extern tlinkedlist130028 searchpaths_171132;
extern TY104245 Dl_104244;
extern TY104405 Dl_104404;
extern NI gverbosity_171137;
extern tlinkedlist130028 lazypaths_171133;

N_NIMCALL(void, addpath_191012)(NimStringDesc* path, tlineinfo182338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219((&searchpaths_171132), path);
		if (!!(LOC3)) goto LA4;
		prependstr_130419((&searchpaths_171132), path);
	}
	LA4: ;
}

static N_INLINE(NIM_BOOL, skipfinddata_114436)(twin32finddata104219* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NI) ((*f).Cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).Cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	LOC5 = 0;
	LOC5 = (((NI) ((*f).Cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).Cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, versionsplitpos_191023)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI64)(s->Sup.len - ((NI) 2));
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_191064)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1714))) goto LA3;
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

N_NIMCALL(void, addpackage_191126)(stringtableobj134012* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_191023(p);
	name = copyStrLast(p, ((NI) 0), (NI64)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < p->Sup.len)) goto LA3;
		version = copyStr(p, (NI64)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_191064(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1714));
	}
	LA1: ;
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

N_NIMCALL(void, addnimblepath_191175)(NimStringDesc* p, tlineinfo182338 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_130219((&searchpaths_171132), p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(((NI) 1) <= gverbosity_171137)) goto LA8;
			message_184413(info, ((NU16) 273), p);
		}
		LA8: ;
		prependstr_130419((&lazypaths_171133), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_191252)(NimStringDesc* dir, tlineinfo182338 info) {
	stringtableobj134012* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI64)(dir->Sup.len - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(92)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_191278;
		NimStringDesc* p_191279;
		twin32finddata104219 f_191293;
		NI h_191295;
		NimStringDesc* LOC6;
		k_191278 = 0;
		p_191279 = 0;
		memset((void*)(&f_191293), 0, sizeof(f_191293));
		LOC6 = 0;
		LOC6 = HEX2F_117492(dir, ((NimStringDesc*) &TMP1713));
		h_191295 = findfirstfile_114416(LOC6, (&f_191293));
		{
			if (!!((h_191295 == ((NI) -1)))) goto LA9;
			{
				while (1) {
					NU8 k_191297;
					k_191297 = ((NU8) 0);
					{
						NIM_BOOL LOC15;
						NimStringDesc* LOC26;
						NimStringDesc* LOC27;
						LOC15 = 0;
						LOC15 = skipfinddata_114436((&f_191293));
						if (!!(LOC15)) goto LA16;
						{
							if (!!(((NI32)(f_191293.Dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA20;
							k_191297 = ((NU8) 2);
						}
						LA20: ;
						{
							if (!!(((NI32)(f_191293.Dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA24;
							k_191297 = (k_191297 + ((NI) 1));
						}
						LA24: ;
						k_191278 = k_191297;
						LOC26 = 0;
						LOC26 = HEX24_80189(((NI16*) ((&f_191293.Cfilename[(((NI) 0))- 0]))));
						LOC27 = 0;
						LOC27 = nosextractFilename(LOC26);
						p_191279 = HEX2F_117492(dir, LOC27);
						{
							NIM_BOOL LOC30;
							LOC30 = 0;
							LOC30 = (k_191278 == ((NU8) 2));
							if (!(LOC30)) goto LA31;
							LOC30 = !(((NU8)(p_191279->data[pos]) == (NU8)(46)));
							LA31: ;
							if (!LOC30) goto LA32;
							addpackage_191126(packages, p_191279);
						}
						LA32: ;
					}
					LA16: ;
					{
						NI32 LOC36;
						LOC36 = 0;
						LOC36 = Dl_104244(h_191295, (&f_191293));
						if (!(LOC36 == ((NI32) 0))) goto LA37;
						goto LA11;
					}
					LA37: ;
				}
			} LA11: ;
			Dl_104404(h_191295);
		}
		LA9: ;
	}
	{
		NimStringDesc* p_191289;
		p_191289 = 0;
		{
			NimStringDesc* key_191304;
			NimStringDesc* val_191306;
			key_191304 = 0;
			val_191306 = 0;
			{
				NI h_191308;
				NI HEX3Atmp_191310;
				NI res_191312;
				h_191308 = 0;
				HEX3Atmp_191310 = 0;
				HEX3Atmp_191310 = ((*packages).Data->Sup.len-1);
				res_191312 = ((NI) 0);
				{
					while (1) {
						if (!(res_191312 <= HEX3Atmp_191310)) goto LA43;
						h_191308 = res_191312;
						{
							NimStringDesc* res_191316;
							if (!!((*packages).Data->data[h_191308].Field0 == 0)) goto LA46;
							key_191304 = (*packages).Data->data[h_191308].Field0;
							val_191306 = (*packages).Data->data[h_191308].Field1;
							{
								if (!eqStrings(val_191306, ((NimStringDesc*) &TMP1714))) goto LA50;
								res_191316 = key_191304;
							}
							goto LA48;
							LA50: ;
							{
								NimStringDesc* LOC53;
								LOC53 = 0;
								LOC53 = rawNewString(key_191304->Sup.len + val_191306->Sup.len + 1);
appendString(LOC53, key_191304);
appendChar(LOC53, 45);
appendString(LOC53, val_191306);
								res_191316 = LOC53;
							}
							LA48: ;
							p_191289 = res_191316;
							addnimblepath_191175(p_191289, info);
						}
						LA46: ;
						res_191312 += ((NI) 1);
					} LA43: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_191347)(NimStringDesc* path, tlineinfo182338 info) {
	addpathrec_191252(path, info);
	addnimblepath_191175(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit)(void) {
}

