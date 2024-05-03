//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPTextLineMerge_h
#define CPTextLineMerge_h
@import Foundation;

@interface CPTextLineMerge : NSObject {
    /* instance variables */
    NSMutableArray *avail;
}

/* instance methods */
- (void)addInterval:(id)interval to:(id)to;
- (id)findLineFor:(id)for in:(id)in;
- (double)averageHeight:(id)height;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)index in:(id)in;
- (void)detachDropCaps:(id)caps to:(id)to;
- (void)dropCaps:(id)caps to:(id)to;
- (void)eliminate:(id)eliminate;
- (_Bool)fits:(id)fits into:(id)into;
- (_Bool)hasOverlappingLines;
- (void)makeOverlappingLinesTo:(id)to;
- (void)mergeByColumn:(id)column;
- (void)mergeColumn:(id)column overlapping:(id)overlapping;
- (void)mergeLinesIn:(id)in;
- (void)mergeLinesInInterval:(id)interval from:(id)from;
- (void)removeOverlapping:(id)overlapping;

@end

#endif /* CPTextLineMerge_h */
