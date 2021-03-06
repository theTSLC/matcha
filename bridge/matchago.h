// +build matcha

#ifndef MOCHIGO_H
#define MOCHIGO_H

#include "matchaforeign.h"
#include <stdbool.h>

GoRef matchaGoForeign(ObjcRef);
ObjcRef matchaGoToForeign(GoRef);

GoRef matchaGoBool(bool);
bool matchaGoToBool(GoRef);
GoRef matchaGoInt(int);
GoRef matchaGoInt64(int64_t);
int64_t matchaGoToInt64(GoRef);
GoRef matchaGoUint64(uint64_t);
uint64_t matchaGoToUint64(GoRef);
GoRef matchaGoFloat64(double);
double matchaGoToFloat64(GoRef);
GoRef matchaGoString(CGoBuffer); // Frees the buffer
CGoBuffer matchaGoToString(GoRef);
GoRef matchaGoBytes(CGoBuffer); // Frees the buffer
CGoBuffer matchaGoToBytes(GoRef);

GoRef matchaGoArray();
int64_t matchaGoArrayLen(GoRef);
GoRef matchaGoArrayAppend(GoRef, GoRef);
GoRef matchaGoArrayAt(GoRef, int64_t);

GoRef matchaGoMap();
GoRef matchaGoMapKeys(GoRef);
GoRef matchaGoMapGet(GoRef map, GoRef key);
void matchaGoMapSet(GoRef map, GoRef key, GoRef value);

GoRef matchaGoType(CGoBuffer); // Frees the buffer
GoRef matchaGoFunc(CGoBuffer); // Frees the buffer

bool matchaGoIsNil(GoRef);
bool matchaGoEqual(GoRef, GoRef);
GoRef matchaGoElem(GoRef);
GoRef matchaGoCall(GoRef, CGoBuffer, GoRef);
GoRef matchaGoField(GoRef, CGoBuffer);
void matchaGoFieldSet(GoRef, CGoBuffer, GoRef);

void matchaGoUntrack(GoRef);

#endif // MOCHIGO_H