/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tident185021 tident185021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY189333[255];
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initspecials_189404)(void);
N_NIMCALL(tident185021*, getident_185473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_128887)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_189384)(tident185021* id);
N_NIMCALL(tident185021*, getident_185463)(NimStringDesc* identifier);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
STRING_LITERAL(TMP451, "", 0);
STRING_LITERAL(TMP452, "addr", 4);
STRING_LITERAL(TMP453, "and", 3);
STRING_LITERAL(TMP454, "as", 2);
STRING_LITERAL(TMP455, "asm", 3);
STRING_LITERAL(TMP456, "atomic", 6);
STRING_LITERAL(TMP457, "bind", 4);
STRING_LITERAL(TMP458, "block", 5);
STRING_LITERAL(TMP459, "break", 5);
STRING_LITERAL(TMP460, "case", 4);
STRING_LITERAL(TMP461, "cast", 4);
STRING_LITERAL(TMP462, "const", 5);
STRING_LITERAL(TMP463, "continue", 8);
STRING_LITERAL(TMP464, "converter", 9);
STRING_LITERAL(TMP465, "defer", 5);
STRING_LITERAL(TMP466, "discard", 7);
STRING_LITERAL(TMP467, "distinct", 8);
STRING_LITERAL(TMP468, "div", 3);
STRING_LITERAL(TMP469, "do", 2);
STRING_LITERAL(TMP470, "elif", 4);
STRING_LITERAL(TMP471, "else", 4);
STRING_LITERAL(TMP472, "end", 3);
STRING_LITERAL(TMP473, "enum", 4);
STRING_LITERAL(TMP474, "except", 6);
STRING_LITERAL(TMP475, "export", 6);
STRING_LITERAL(TMP476, "finally", 7);
STRING_LITERAL(TMP477, "for", 3);
STRING_LITERAL(TMP478, "from", 4);
STRING_LITERAL(TMP479, "func", 4);
STRING_LITERAL(TMP480, "generic", 7);
STRING_LITERAL(TMP481, "if", 2);
STRING_LITERAL(TMP482, "import", 6);
STRING_LITERAL(TMP483, "in", 2);
STRING_LITERAL(TMP484, "include", 7);
STRING_LITERAL(TMP485, "interface", 9);
STRING_LITERAL(TMP486, "is", 2);
STRING_LITERAL(TMP487, "isnot", 5);
STRING_LITERAL(TMP488, "iterator", 8);
STRING_LITERAL(TMP489, "let", 3);
STRING_LITERAL(TMP490, "macro", 5);
STRING_LITERAL(TMP491, "method", 6);
STRING_LITERAL(TMP492, "mixin", 5);
STRING_LITERAL(TMP493, "mod", 3);
STRING_LITERAL(TMP494, "nil", 3);
STRING_LITERAL(TMP495, "not", 3);
STRING_LITERAL(TMP496, "notin", 5);
STRING_LITERAL(TMP497, "object", 6);
STRING_LITERAL(TMP498, "of", 2);
STRING_LITERAL(TMP499, "or", 2);
STRING_LITERAL(TMP500, "out", 3);
STRING_LITERAL(TMP501, "proc", 4);
STRING_LITERAL(TMP502, "ptr", 3);
STRING_LITERAL(TMP503, "raise", 5);
STRING_LITERAL(TMP504, "ref", 3);
STRING_LITERAL(TMP505, "return", 6);
STRING_LITERAL(TMP506, "shl", 3);
STRING_LITERAL(TMP507, "shr", 3);
STRING_LITERAL(TMP508, "static", 6);
STRING_LITERAL(TMP509, "template", 8);
STRING_LITERAL(TMP510, "try", 3);
STRING_LITERAL(TMP511, "tuple", 5);
STRING_LITERAL(TMP512, "type", 4);
STRING_LITERAL(TMP513, "using", 5);
STRING_LITERAL(TMP514, "var", 3);
STRING_LITERAL(TMP515, "when", 4);
STRING_LITERAL(TMP516, "while", 5);
STRING_LITERAL(TMP517, "with", 4);
STRING_LITERAL(TMP518, "without", 7);
STRING_LITERAL(TMP519, "xor", 3);
STRING_LITERAL(TMP520, "yield", 5);
STRING_LITERAL(TMP521, ":", 1);
STRING_LITERAL(TMP522, "::", 2);
STRING_LITERAL(TMP523, "=", 1);
STRING_LITERAL(TMP524, ".", 1);
STRING_LITERAL(TMP525, "..", 2);
STRING_LITERAL(TMP526, "*", 1);
STRING_LITERAL(TMP527, "-", 1);
STRING_LITERAL(TMP528, "magic", 5);
STRING_LITERAL(TMP529, "thread", 6);
STRING_LITERAL(TMP530, "final", 5);
STRING_LITERAL(TMP531, "profiler", 8);
STRING_LITERAL(TMP532, "objchecks", 9);
STRING_LITERAL(TMP533, "destroy", 7);
STRING_LITERAL(TMP534, "immediate", 9);
STRING_LITERAL(TMP535, "destructor", 10);
STRING_LITERAL(TMP536, "delegator", 9);
STRING_LITERAL(TMP537, "override", 8);
STRING_LITERAL(TMP538, "importcpp", 9);
STRING_LITERAL(TMP539, "importobjc", 10);
STRING_LITERAL(TMP540, "importcompilerproc", 18);
STRING_LITERAL(TMP541, "importc", 7);
STRING_LITERAL(TMP542, "exportc", 7);
STRING_LITERAL(TMP543, "incompletestruct", 16);
STRING_LITERAL(TMP544, "requiresinit", 12);
STRING_LITERAL(TMP545, "align", 5);
STRING_LITERAL(TMP546, "nodecl", 6);
STRING_LITERAL(TMP547, "pure", 4);
STRING_LITERAL(TMP548, "sideeffect", 10);
STRING_LITERAL(TMP549, "header", 6);
STRING_LITERAL(TMP550, "nosideeffect", 12);
STRING_LITERAL(TMP551, "gcsafe", 6);
STRING_LITERAL(TMP552, "noreturn", 8);
STRING_LITERAL(TMP553, "merge", 5);
STRING_LITERAL(TMP554, "lib", 3);
STRING_LITERAL(TMP555, "dynlib", 6);
STRING_LITERAL(TMP556, "compilerproc", 12);
STRING_LITERAL(TMP557, "procvar", 7);
STRING_LITERAL(TMP558, "fatal", 5);
STRING_LITERAL(TMP559, "error", 5);
STRING_LITERAL(TMP560, "warning", 7);
STRING_LITERAL(TMP561, "hint", 4);
STRING_LITERAL(TMP562, "line", 4);
STRING_LITERAL(TMP563, "push", 4);
STRING_LITERAL(TMP564, "pop", 3);
STRING_LITERAL(TMP565, "define", 6);
STRING_LITERAL(TMP566, "undef", 5);
STRING_LITERAL(TMP567, "linedir", 7);
STRING_LITERAL(TMP568, "stacktrace", 10);
STRING_LITERAL(TMP569, "linetrace", 9);
STRING_LITERAL(TMP570, "link", 4);
STRING_LITERAL(TMP571, "compile", 7);
STRING_LITERAL(TMP572, "linksys", 7);
STRING_LITERAL(TMP573, "deprecated", 10);
STRING_LITERAL(TMP574, "varargs", 7);
STRING_LITERAL(TMP575, "callconv", 8);
STRING_LITERAL(TMP576, "breakpoint", 10);
STRING_LITERAL(TMP577, "debugger", 8);
STRING_LITERAL(TMP578, "nimcall", 7);
STRING_LITERAL(TMP579, "stdcall", 7);
STRING_LITERAL(TMP580, "cdecl", 5);
STRING_LITERAL(TMP581, "safecall", 8);
STRING_LITERAL(TMP582, "syscall", 7);
STRING_LITERAL(TMP583, "inline", 6);
STRING_LITERAL(TMP584, "noinline", 8);
STRING_LITERAL(TMP585, "fastcall", 8);
STRING_LITERAL(TMP586, "closure", 7);
STRING_LITERAL(TMP587, "noconv", 6);
STRING_LITERAL(TMP588, "on", 2);
STRING_LITERAL(TMP589, "off", 3);
STRING_LITERAL(TMP590, "checks", 6);
STRING_LITERAL(TMP591, "rangechecks", 11);
STRING_LITERAL(TMP592, "boundchecks", 11);
STRING_LITERAL(TMP593, "overflowchecks", 14);
STRING_LITERAL(TMP594, "nilchecks", 9);
STRING_LITERAL(TMP595, "floatchecks", 11);
STRING_LITERAL(TMP596, "nanchecks", 9);
STRING_LITERAL(TMP597, "infchecks", 9);
STRING_LITERAL(TMP598, "assertions", 10);
STRING_LITERAL(TMP599, "patterns", 8);
STRING_LITERAL(TMP600, "warnings", 8);
STRING_LITERAL(TMP601, "hints", 5);
STRING_LITERAL(TMP602, "optimization", 12);
STRING_LITERAL(TMP603, "raises", 6);
STRING_LITERAL(TMP604, "writes", 6);
STRING_LITERAL(TMP605, "reads", 5);
STRING_LITERAL(TMP606, "size", 4);
STRING_LITERAL(TMP607, "effects", 7);
STRING_LITERAL(TMP608, "tags", 4);
STRING_LITERAL(TMP609, "deadcodeelim", 12);
STRING_LITERAL(TMP610, "safecode", 8);
STRING_LITERAL(TMP611, "noforward", 9);
STRING_LITERAL(TMP612, "pragma", 6);
STRING_LITERAL(TMP613, "compiletime", 11);
STRING_LITERAL(TMP614, "noinit", 6);
STRING_LITERAL(TMP615, "passc", 5);
STRING_LITERAL(TMP616, "passl", 5);
STRING_LITERAL(TMP617, "borrow", 6);
STRING_LITERAL(TMP618, "discardable", 11);
STRING_LITERAL(TMP619, "fieldchecks", 11);
STRING_LITERAL(TMP620, "watchpoint", 10);
STRING_LITERAL(TMP621, "subschar", 8);
STRING_LITERAL(TMP622, "acyclic", 7);
STRING_LITERAL(TMP623, "shallow", 7);
STRING_LITERAL(TMP624, "unroll", 6);
STRING_LITERAL(TMP625, "linearscanend", 13);
STRING_LITERAL(TMP626, "computedgoto", 12);
STRING_LITERAL(TMP627, "injectstmt", 10);
STRING_LITERAL(TMP628, "experimental", 12);
STRING_LITERAL(TMP629, "write", 5);
STRING_LITERAL(TMP630, "gensym", 6);
STRING_LITERAL(TMP631, "inject", 6);
STRING_LITERAL(TMP632, "dirty", 5);
STRING_LITERAL(TMP633, "inheritable", 11);
STRING_LITERAL(TMP634, "threadvar", 9);
STRING_LITERAL(TMP635, "emit", 4);
STRING_LITERAL(TMP636, "asmnostackframe", 15);
STRING_LITERAL(TMP637, "implicitstatic", 14);
STRING_LITERAL(TMP638, "global", 6);
STRING_LITERAL(TMP639, "codegendecl", 11);
STRING_LITERAL(TMP640, "unchecked", 9);
STRING_LITERAL(TMP641, "guard", 5);
STRING_LITERAL(TMP642, "locks", 5);
STRING_LITERAL(TMP643, "auto", 4);
STRING_LITERAL(TMP644, "bool", 4);
STRING_LITERAL(TMP645, "catch", 5);
STRING_LITERAL(TMP646, "char", 4);
STRING_LITERAL(TMP647, "class", 5);
STRING_LITERAL(TMP648, "const_cast", 10);
STRING_LITERAL(TMP649, "default", 7);
STRING_LITERAL(TMP650, "delete", 6);
STRING_LITERAL(TMP651, "double", 6);
STRING_LITERAL(TMP652, "dynamic_cast", 12);
STRING_LITERAL(TMP653, "explicit", 8);
STRING_LITERAL(TMP654, "extern", 6);
STRING_LITERAL(TMP655, "false", 5);
STRING_LITERAL(TMP656, "float", 5);
STRING_LITERAL(TMP657, "friend", 6);
STRING_LITERAL(TMP658, "goto", 4);
STRING_LITERAL(TMP659, "int", 3);
STRING_LITERAL(TMP660, "long", 4);
STRING_LITERAL(TMP661, "mutable", 7);
STRING_LITERAL(TMP662, "namespace", 9);
STRING_LITERAL(TMP663, "new", 3);
STRING_LITERAL(TMP664, "operator", 8);
STRING_LITERAL(TMP665, "private", 7);
STRING_LITERAL(TMP666, "protected", 9);
STRING_LITERAL(TMP667, "public", 6);
STRING_LITERAL(TMP668, "register", 8);
STRING_LITERAL(TMP669, "reinterpret_cast", 16);
STRING_LITERAL(TMP670, "short", 5);
STRING_LITERAL(TMP671, "signed", 6);
STRING_LITERAL(TMP672, "sizeof", 6);
STRING_LITERAL(TMP673, "static_cast", 11);
STRING_LITERAL(TMP674, "struct", 6);
STRING_LITERAL(TMP675, "switch", 6);
STRING_LITERAL(TMP676, "this", 4);
STRING_LITERAL(TMP677, "throw", 5);
STRING_LITERAL(TMP678, "true", 4);
STRING_LITERAL(TMP679, "typedef", 7);
STRING_LITERAL(TMP680, "typeid", 6);
STRING_LITERAL(TMP681, "typename", 8);
STRING_LITERAL(TMP682, "union", 5);
STRING_LITERAL(TMP683, "packed", 6);
STRING_LITERAL(TMP684, "unsigned", 8);
STRING_LITERAL(TMP685, "virtual", 7);
STRING_LITERAL(TMP686, "void", 4);
STRING_LITERAL(TMP687, "volatile", 8);
STRING_LITERAL(TMP688, "wchar_t", 7);
STRING_LITERAL(TMP689, "alignas", 7);
STRING_LITERAL(TMP690, "alignof", 7);
STRING_LITERAL(TMP691, "constexpr", 9);
STRING_LITERAL(TMP692, "decltype", 8);
STRING_LITERAL(TMP693, "nullptr", 7);
STRING_LITERAL(TMP694, "noexcept", 8);
STRING_LITERAL(TMP695, "thread_local", 12);
STRING_LITERAL(TMP696, "static_assert", 13);
STRING_LITERAL(TMP697, "char16_t", 8);
STRING_LITERAL(TMP698, "char32_t", 8);
STRING_LITERAL(TMP699, "stdin", 5);
STRING_LITERAL(TMP700, "stdout", 6);
STRING_LITERAL(TMP701, "stderr", 6);
STRING_LITERAL(TMP702, "inout", 5);
STRING_LITERAL(TMP703, "bycopy", 6);
STRING_LITERAL(TMP704, "byref", 5);
STRING_LITERAL(TMP705, "oneway", 6);
NIM_CONST TY189333 specialwords_189332 = {((NimStringDesc*) &TMP451),
((NimStringDesc*) &TMP452),
((NimStringDesc*) &TMP453),
((NimStringDesc*) &TMP454),
((NimStringDesc*) &TMP455),
((NimStringDesc*) &TMP456),
((NimStringDesc*) &TMP457),
((NimStringDesc*) &TMP458),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP507),
((NimStringDesc*) &TMP508),
((NimStringDesc*) &TMP509),
((NimStringDesc*) &TMP510),
((NimStringDesc*) &TMP511),
((NimStringDesc*) &TMP512),
((NimStringDesc*) &TMP513),
((NimStringDesc*) &TMP514),
((NimStringDesc*) &TMP515),
((NimStringDesc*) &TMP516),
((NimStringDesc*) &TMP517),
((NimStringDesc*) &TMP518),
((NimStringDesc*) &TMP519),
((NimStringDesc*) &TMP520),
((NimStringDesc*) &TMP521),
((NimStringDesc*) &TMP522),
((NimStringDesc*) &TMP523),
((NimStringDesc*) &TMP524),
((NimStringDesc*) &TMP525),
((NimStringDesc*) &TMP526),
((NimStringDesc*) &TMP527),
((NimStringDesc*) &TMP528),
((NimStringDesc*) &TMP529),
((NimStringDesc*) &TMP530),
((NimStringDesc*) &TMP531),
((NimStringDesc*) &TMP532),
((NimStringDesc*) &TMP533),
((NimStringDesc*) &TMP534),
((NimStringDesc*) &TMP535),
((NimStringDesc*) &TMP536),
((NimStringDesc*) &TMP537),
((NimStringDesc*) &TMP538),
((NimStringDesc*) &TMP539),
((NimStringDesc*) &TMP540),
((NimStringDesc*) &TMP541),
((NimStringDesc*) &TMP542),
((NimStringDesc*) &TMP543),
((NimStringDesc*) &TMP544),
((NimStringDesc*) &TMP545),
((NimStringDesc*) &TMP546),
((NimStringDesc*) &TMP547),
((NimStringDesc*) &TMP548),
((NimStringDesc*) &TMP549),
((NimStringDesc*) &TMP550),
((NimStringDesc*) &TMP551),
((NimStringDesc*) &TMP552),
((NimStringDesc*) &TMP553),
((NimStringDesc*) &TMP554),
((NimStringDesc*) &TMP555),
((NimStringDesc*) &TMP556),
((NimStringDesc*) &TMP557),
((NimStringDesc*) &TMP558),
((NimStringDesc*) &TMP559),
((NimStringDesc*) &TMP560),
((NimStringDesc*) &TMP561),
((NimStringDesc*) &TMP562),
((NimStringDesc*) &TMP563),
((NimStringDesc*) &TMP564),
((NimStringDesc*) &TMP565),
((NimStringDesc*) &TMP566),
((NimStringDesc*) &TMP567),
((NimStringDesc*) &TMP568),
((NimStringDesc*) &TMP569),
((NimStringDesc*) &TMP570),
((NimStringDesc*) &TMP571),
((NimStringDesc*) &TMP572),
((NimStringDesc*) &TMP573),
((NimStringDesc*) &TMP574),
((NimStringDesc*) &TMP575),
((NimStringDesc*) &TMP576),
((NimStringDesc*) &TMP577),
((NimStringDesc*) &TMP578),
((NimStringDesc*) &TMP579),
((NimStringDesc*) &TMP580),
((NimStringDesc*) &TMP581),
((NimStringDesc*) &TMP582),
((NimStringDesc*) &TMP583),
((NimStringDesc*) &TMP584),
((NimStringDesc*) &TMP585),
((NimStringDesc*) &TMP586),
((NimStringDesc*) &TMP587),
((NimStringDesc*) &TMP588),
((NimStringDesc*) &TMP589),
((NimStringDesc*) &TMP590),
((NimStringDesc*) &TMP591),
((NimStringDesc*) &TMP592),
((NimStringDesc*) &TMP593),
((NimStringDesc*) &TMP594),
((NimStringDesc*) &TMP595),
((NimStringDesc*) &TMP596),
((NimStringDesc*) &TMP597),
((NimStringDesc*) &TMP598),
((NimStringDesc*) &TMP599),
((NimStringDesc*) &TMP600),
((NimStringDesc*) &TMP601),
((NimStringDesc*) &TMP602),
((NimStringDesc*) &TMP603),
((NimStringDesc*) &TMP604),
((NimStringDesc*) &TMP605),
((NimStringDesc*) &TMP606),
((NimStringDesc*) &TMP607),
((NimStringDesc*) &TMP608),
((NimStringDesc*) &TMP609),
((NimStringDesc*) &TMP610),
((NimStringDesc*) &TMP611),
((NimStringDesc*) &TMP612),
((NimStringDesc*) &TMP613),
((NimStringDesc*) &TMP614),
((NimStringDesc*) &TMP615),
((NimStringDesc*) &TMP616),
((NimStringDesc*) &TMP617),
((NimStringDesc*) &TMP618),
((NimStringDesc*) &TMP619),
((NimStringDesc*) &TMP620),
((NimStringDesc*) &TMP621),
((NimStringDesc*) &TMP622),
((NimStringDesc*) &TMP623),
((NimStringDesc*) &TMP624),
((NimStringDesc*) &TMP625),
((NimStringDesc*) &TMP626),
((NimStringDesc*) &TMP627),
((NimStringDesc*) &TMP628),
((NimStringDesc*) &TMP629),
((NimStringDesc*) &TMP630),
((NimStringDesc*) &TMP631),
((NimStringDesc*) &TMP632),
((NimStringDesc*) &TMP633),
((NimStringDesc*) &TMP634),
((NimStringDesc*) &TMP635),
((NimStringDesc*) &TMP636),
((NimStringDesc*) &TMP637),
((NimStringDesc*) &TMP638),
((NimStringDesc*) &TMP639),
((NimStringDesc*) &TMP640),
((NimStringDesc*) &TMP641),
((NimStringDesc*) &TMP642),
((NimStringDesc*) &TMP643),
((NimStringDesc*) &TMP644),
((NimStringDesc*) &TMP645),
((NimStringDesc*) &TMP646),
((NimStringDesc*) &TMP647),
((NimStringDesc*) &TMP648),
((NimStringDesc*) &TMP649),
((NimStringDesc*) &TMP650),
((NimStringDesc*) &TMP651),
((NimStringDesc*) &TMP652),
((NimStringDesc*) &TMP653),
((NimStringDesc*) &TMP654),
((NimStringDesc*) &TMP655),
((NimStringDesc*) &TMP656),
((NimStringDesc*) &TMP657),
((NimStringDesc*) &TMP658),
((NimStringDesc*) &TMP659),
((NimStringDesc*) &TMP660),
((NimStringDesc*) &TMP661),
((NimStringDesc*) &TMP662),
((NimStringDesc*) &TMP663),
((NimStringDesc*) &TMP664),
((NimStringDesc*) &TMP665),
((NimStringDesc*) &TMP666),
((NimStringDesc*) &TMP667),
((NimStringDesc*) &TMP668),
((NimStringDesc*) &TMP669),
((NimStringDesc*) &TMP670),
((NimStringDesc*) &TMP671),
((NimStringDesc*) &TMP672),
((NimStringDesc*) &TMP673),
((NimStringDesc*) &TMP674),
((NimStringDesc*) &TMP675),
((NimStringDesc*) &TMP676),
((NimStringDesc*) &TMP677),
((NimStringDesc*) &TMP678),
((NimStringDesc*) &TMP679),
((NimStringDesc*) &TMP680),
((NimStringDesc*) &TMP681),
((NimStringDesc*) &TMP682),
((NimStringDesc*) &TMP683),
((NimStringDesc*) &TMP684),
((NimStringDesc*) &TMP685),
((NimStringDesc*) &TMP686),
((NimStringDesc*) &TMP687),
((NimStringDesc*) &TMP688),
((NimStringDesc*) &TMP689),
((NimStringDesc*) &TMP690),
((NimStringDesc*) &TMP691),
((NimStringDesc*) &TMP692),
((NimStringDesc*) &TMP693),
((NimStringDesc*) &TMP694),
((NimStringDesc*) &TMP695),
((NimStringDesc*) &TMP696),
((NimStringDesc*) &TMP697),
((NimStringDesc*) &TMP698),
((NimStringDesc*) &TMP699),
((NimStringDesc*) &TMP700),
((NimStringDesc*) &TMP701),
((NimStringDesc*) &TMP702),
((NimStringDesc*) &TMP703),
((NimStringDesc*) &TMP704),
((NimStringDesc*) &TMP705)}
;

N_NIMCALL(void, initspecials_189404)(void) {
	{
		NU8 s_189632;
		NU8 res_189644;
		s_189632 = 0;
		res_189644 = ((NU8) 1);
		{
			while (1) {
				NI LOC4;
				tident185021* LOC5;
				if (!(res_189644 <= ((NU8) 254))) goto LA3;
				s_189632 = res_189644;
				LOC4 = 0;
				LOC4 = hashignorestyle_128887(specialwords_189332[(s_189632)- 0]);
				LOC5 = 0;
				LOC5 = getident_185473(specialwords_189332[(s_189632)- 0], LOC4);
				(*LOC5).Sup.Id = ((NI) (s_189632));
				res_189644 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NU8, whichkeyword_189384)(tident185021* id) {
	NU8 result;
	result = 0;
	{
		if (!((*id).Sup.Id < ((NI) 0))) goto LA3;
		result = ((NU8) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) ((*id).Sup.Id));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, whichkeyword_189394)(NimStringDesc* id) {
	NU8 result;
	tident185021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_185463(id);
	result = whichkeyword_189384(LOC1);
	return result;
}

N_NIMCALL(NI, findstr_189342)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
{	result = 0;
	{
		NI i_189360;
		NI HEX3Atmp_189362;
		NI res_189365;
		i_189360 = 0;
		HEX3Atmp_189362 = 0;
		HEX3Atmp_189362 = (aLen0-1);
		res_189365 = ((NI) 0);
		{
			while (1) {
				if (!(res_189365 <= HEX3Atmp_189362)) goto LA3;
				i_189360 = res_189365;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_189360], s);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_189360;
					goto BeforeRet;
				}
				LA7: ;
				res_189365 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit)(void) {
	initspecials_189404();
}

NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit)(void) {
}

