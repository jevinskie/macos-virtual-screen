//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPLayoutArea_h
#define CPLayoutArea_h
@import Foundation;

#include "CPRotatedRegion.h"

@interface CPLayoutArea : CPRotatedRegion {
    /* instance variables */
    _Bool isFirstLayout;
    _Bool hasRotatedCharacters;
}

/* instance methods */
- (id)description;
- (id)init;
- (id)properties;
- (void)accept:(id)accept;
- (void)addColumnBreaks;
- (double)selectionBottom;
- (_Bool)hasRotatedCharacters;
- (_Bool)isBoxRegion;
- (_Bool)isFirstLayout;
- (_Bool)isGraphicalRegion;
- (_Bool)isImageRegion;
- (_Bool)isRowRegion;
- (_Bool)isShapeRegion;
- (_Bool)isSimilarTo:(id)to;
- (struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
})layoutAreaBounds;
- (void)setHasRotatedCharacters:(_Bool)characters;
- (void)setIsFirstLayout:(_Bool)layout;
- (void)setIsImageRegion:(_Bool)region;

@end

#endif /* CPLayoutArea_h */