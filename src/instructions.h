// Generated by ./tools/geninstrs

#ifndef INT
#define INT(...)
#endif

#ifndef FLT
#define FLT(...)
#endif

#ifndef CMP
#define CMP(...)
#endif

#ifndef REL
#define REL(...)
#endif

#ifndef BIT
#define BIT(...)
#endif

INT(ADDI8,   "add", "+",  8)
INT(SUBI8,   "sub", "-",  8)
INT(MULI8,   "mul", "*",  8)
INT(QUOI8,   "quo", "/",  8)
INT(REMI8,   "rem", "%",  8)
INT(ADDI16,  "add", "+",  16)
INT(SUBI16,  "sub", "-",  16)
INT(MULI16,  "mul", "*",  16)
INT(QUOI16,  "quo", "/",  16)
INT(REMI16,  "rem", "%",  16)
INT(ADDI32,  "add", "+",  32)
INT(SUBI32,  "sub", "-",  32)
INT(MULI32,  "mul", "*",  32)
INT(QUOI32,  "quo", "/",  32)
INT(REMI32,  "rem", "%",  32)
INT(ADDI64,  "add", "+",  64)
INT(SUBI64,  "sub", "-",  64)
INT(MULI64,  "mul", "*",  64)
INT(QUOI64,  "quo", "/",  64)
INT(REMI64,  "rem", "%",  64)
INT(ADDI128, "add", "+",  128)
INT(SUBI128, "sub", "-",  128)
INT(MULI128, "mul", "*",  128)
INT(QUOI128, "quo", "/",  128)
INT(REMI128, "rem", "%",  128)

FLT(ADDF16,  "add", "+",  16)
FLT(SUBF16,  "sub", "-",  16)
FLT(MULF16,  "mul", "*",  16)
FLT(DIVF16,  "div", "/",  16)
FLT(ADDF32,  "add", "+",  32)
FLT(SUBF32,  "sub", "-",  32)
FLT(MULF32,  "mul", "*",  32)
FLT(DIVF32,  "div", "/",  32)
FLT(ADDF64,  "add", "+",  64)
FLT(SUBF64,  "sub", "-",  64)
FLT(MULF64,  "mul", "*",  64)
FLT(DIVF64,  "div", "/",  64)

CMP(EQI8,    "eq",  "==", 8)
CMP(NEI8,    "ne",  "!=", 8)
CMP(EQI16,   "eq",  "==", 16)
CMP(NEI16,   "ne",  "!=", 16)
CMP(EQI32,   "eq",  "==", 32)
CMP(NEI32,   "ne",  "!=", 32)
CMP(EQI64,   "eq",  "==", 64)
CMP(NEI64,   "ne",  "!=", 64)
CMP(EQI128,  "eq",  "==", 128)
CMP(NEI128,  "ne",  "!=", 128)
CMP(EQF16,   "eq",  "==", 16)
CMP(NEF16,   "ne",  "!=", 16)
CMP(EQF32,   "eq",  "==", 32)
CMP(NEF32,   "ne",  "!=", 32)
CMP(EQF64,   "eq",  "==", 64)
CMP(NEF64,   "ne",  "!=", 64)

REL(LTI8,    "lt",  "<",  8)
REL(LTEI8,   "lte", "<=", 8)
REL(GTI8,    "gt",  ">",  8)
REL(GTEI8,   "gte", ">=", 8)
REL(LTU8,    "lt",  "<",  8)
REL(LTEU8,   "lte", "<=", 8)
REL(GTU8,    "gt",  ">",  8)
REL(GTEU8,   "gte", ">=", 8)
REL(LTI16,   "lt",  "<",  16)
REL(LTEI16,  "lte", "<=", 16)
REL(GTI16,   "gt",  ">",  16)
REL(GTEI16,  "gte", ">=", 16)
REL(LTU16,   "lt",  "<",  16)
REL(LTEU16,  "lte", "<=", 16)
REL(GTU16,   "gt",  ">",  16)
REL(GTEU16,  "gte", ">=", 16)
REL(LTI32,   "lt",  "<",  32)
REL(LTEI32,  "lte", "<=", 32)
REL(GTI32,   "gt",  ">",  32)
REL(GTEI32,  "gte", ">=", 32)
REL(LTU32,   "lt",  "<",  32)
REL(LTEU32,  "lte", "<=", 32)
REL(GTU32,   "gt",  ">",  32)
REL(GTEU32,  "gte", ">=", 32)
REL(LTI64,   "lt",  "<",  64)
REL(LTEI64,  "lte", "<=", 64)
REL(GTI64,   "gt",  ">",  64)
REL(GTEI64,  "gte", ">=", 64)
REL(LTU64,   "lt",  "<",  64)
REL(LTEU64,  "lte", "<=", 64)
REL(GTU64,   "gt",  ">",  64)
REL(GTEU64,  "gte", ">=", 64)
REL(LTI128,  "lt",  "<",  128)
REL(LTEI128, "lte", "<=", 128)
REL(GTI128,  "gt",  ">",  128)
REL(GTEI128, "gte", ">=", 128)
REL(LTU128,  "lt",  "<",  128)
REL(LTEU128, "lte", "<=", 128)
REL(GTU128,  "gt",  ">",  128)
REL(GTEU128, "gte", ">=", 128)
REL(LTF16,   "lt",  "<",  16)
REL(LTEF16,  "lte", "<=", 16)
REL(GTF16,   "gt",  ">",  16)
REL(GTEF16,  "gte", ">=", 16)
REL(LTF32,   "lt",  "<",  32)
REL(LTEF32,  "lte", "<=", 32)
REL(GTF32,   "gt",  ">",  32)
REL(GTEF32,  "gte", ">=", 32)
REL(LTF64,   "lt",  "<",  64)
REL(LTEF64,  "lte", "<=", 64)
REL(GTF64,   "gt",  ">",  64)
REL(GTEF64,  "gte", ">=", 64)

BIT(ANDI8,   "and", "&",  8)
BIT(ORI8,    "or",  "|",  8)
BIT(XORI8,   "xor", "^",  8)
BIT(SHLI8,   "shl", "<<", 8)
BIT(SHRI8,   "shr", ">>", 8)
BIT(ANDI16,  "and", "&",  16)
BIT(ORI16,   "or",  "|",  16)
BIT(XORI16,  "xor", "^",  16)
BIT(SHLI16,  "shl", "<<", 16)
BIT(SHRI16,  "shr", ">>", 16)
BIT(ANDI32,  "and", "&",  32)
BIT(ORI32,   "or",  "|",  32)
BIT(XORI32,  "xor", "^",  32)
BIT(SHLI32,  "shl", "<<", 32)
BIT(SHRI32,  "shr", ">>", 32)
BIT(ANDI64,  "and", "&",  64)
BIT(ORI64,   "or",  "|",  64)
BIT(XORI64,  "xor", "^",  64)
BIT(SHLI64,  "shl", "<<", 64)
BIT(SHRI64,  "shr", ">>", 64)
BIT(ANDI128, "and", "&",  128)
BIT(ORI128,  "or",  "|",  128)
BIT(XORI128, "xor", "^",  128)
BIT(SHLI128, "shl", "<<", 128)
BIT(SHRI128, "shr", ">>", 128)

#undef BIT
#undef REL
#undef CMP
#undef FLT
#undef INT
