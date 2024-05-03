//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPFontKerning_h
#define CPFontKerning_h
@import Foundation;

#include "CPDisposable-Protocol.h"

@interface CPFontKerning : NSObject <CPDisposable> {
    /* instance variables */
    struct __CFData *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary *kernDictionary;
    _Bool override;
    _Bool valid;
}

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (struct __CFDictionary *)createKernTable;
- (void)doTable;
- (id)initWithCGFont:(struct CGFont *)cgfont;
- (void)doKerningPair;
- (void)doOTSubtable;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (id)initWithKernData:(struct __CFData *)data;
- (unsigned char)readByte;
- (short)readShort;
- (unsigned int)readUnsignedLong;
- (unsigned short)readUnsignedShort;

@end

#endif /* CPFontKerning_h */
