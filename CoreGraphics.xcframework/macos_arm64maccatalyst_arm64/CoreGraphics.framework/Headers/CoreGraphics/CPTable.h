//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPTable_h
#define CPTable_h
@import Foundation;

#include "CPChunk.h"
#include "CPDisposable-Protocol.h"
#include "CPGraphicUser-Protocol.h"

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
    /* instance variables */
    struct CGColor *backgroundColor;
    id *backgroundGraphics;
    unsigned int usedGraphicCount;
    _Bool disposed;
}

@property(readonly, nonatomic) struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
} tableBounds;
@property(nonatomic) unsigned int rowCount;
@property(readonly, nonatomic) double *rowY;
@property(nonatomic) unsigned int columnCount;
@property(readonly, nonatomic) double *columnX;
@property(readonly, nonatomic) unsigned int backgroundGraphicCount;

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (struct CGColor *)backgroundColor;
- (id)initWithBounds:(struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
})bounds;
- (id)backgroundGraphicAtIndex:(unsigned int)index;
- (void)incrementUsedGraphicCount;
- (void)setBackgroundGraphics:(id)graphics;
- (unsigned int)usedGraphicCount;

@end

#endif /* CPTable_h */
