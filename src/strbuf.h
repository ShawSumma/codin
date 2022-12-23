#ifndef CODIN_STRBUF_H
#define CODIN_STRBUF_H
#include "support.h"
#include "array.h"

typedef struct StrBuf StrBuf;

struct StrBuf {
  Array(Uint8) contents;
};

void strbug_init(StrBuf *strbuf);
void strbuf_free(StrBuf *strbuf);
Bool strbuf_put_rune(StrBuf *strbuf, Rune ch);
Bool strbuf_put_string(StrBuf *strbuf, String string);
String strbuf_result(StrBuf *strbuf);

#endif // CODIN_STRBUF