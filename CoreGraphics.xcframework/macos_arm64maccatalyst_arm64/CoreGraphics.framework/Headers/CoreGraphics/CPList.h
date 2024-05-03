//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPList_h
#define CPList_h
@import Foundation;

#include "CPDisposable-Protocol.h"
#include "CPParagraphListItem.h"

@interface CPList : NSObject <CPDisposable> {
    /* instance variables */
    struct __CFArray *items;
}

@property(nonatomic) struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
} spacer;
@property(nonatomic) int type;
@property(nonatomic) unsigned int ordinalPrefixLength;
@property(nonatomic) unsigned int ordinalSuffixLength;
@property(retain, nonatomic) CPParagraphListItem *parentItem;

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)itemAtIndex:(unsigned int)index;
- (unsigned int)itemCount;
- (void)addItem:(id)item;
- (void)dispose;
- (_Bool)containsParagraph:(id)paragraph;
- (_Bool)isMultilevel;

@end

#endif /* CPList_h */
