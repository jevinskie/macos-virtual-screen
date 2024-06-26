//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPRegion_h
#define CPRegion_h
@import Foundation;

#include "CPChunk.h"

@interface CPRegion : CPChunk {
    /* instance variables */
    _Bool isTextRegion;
    _Bool isImageRegion;
    _Bool isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (int)order;
- (void)accept:(id)accept;
- (_Bool)isCompoundShape;
- (_Bool)isBodyZone;
- (_Bool)isBoxRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isImageRegion;
- (_Bool)isIndivisible;
- (_Bool)isListItemRegion;
- (_Bool)isParagraphRegion;
- (_Bool)isRotated;
- (_Bool)isRowRegion;
- (_Bool)isShapeRegion;
- (_Bool)isTableCellRegion;
- (_Bool)isTextRegion;
- (_Bool)isZone;
- (id)link;
- (id)nextRegion;
- (void)setIsCompoundShape:(_Bool)shape;
- (void)setIsImageRegion:(_Bool)region;
- (void)setIsTextRegion:(_Bool)region;
- (void)setLink:(id)link;
- (void)setNextRegion:(id)region;
- (void)setOrder:(int)order;

@end

#endif /* CPRegion_h */
