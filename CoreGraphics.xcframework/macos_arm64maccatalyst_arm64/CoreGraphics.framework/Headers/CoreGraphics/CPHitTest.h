//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPHitTest_h
#define CPHitTest_h
@import Foundation;

#include "CPPage.h"

@interface CPHitTest : NSObject {
    /* instance variables */
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}

/* instance methods */
- (void)dealloc;
- (id)page;
- (id)column:(struct CGPoint {
    double x0;
    double x1;
})column;
- (unsigned int)columnsAt:(struct CGPoint {
    double x0;
    double x1;
})at;
- (long long)compareByReadingOrder:(struct CGPoint {
    double x0;
    double x1;
})order to:(struct CGPoint {
    double x0;
    double x1; })to;
- (id)findBestMatch:(id)match atPoint:(struct CGPoint {
    double x0;
    double x1;
})point;
- (void)findClickableObjects:(_Bool)objects;
- (id)findObjectIn:(id)in at:(struct CGPoint {
    double x0;
    double x1;
})at count:(int *)count;
- (_Bool)hitTestGraphicObject:(id)object point:(struct CGPoint {
    double x0;
    double x1;
})point;
- (_Bool)hitTestParagraph:(id)paragraph point:(struct CGPoint {
    double x0;
    double x1;
})point;
- (id)initWithPage:(id)page;
- (id)layoutArea:(struct CGPoint {
    double x0;
    double x1;
})area;
- (id)objectAtPoint:(struct CGPoint {
    double x0;
    double x1;
})point;
- (id)paragraph:(struct CGPoint {
    double x0;
    double x1;
})paragraph;
- (id)paragraphNear:(struct CGPoint {
    double x0;
    double x1;
})near;
- (id)textLine:(struct CGPoint {
    double x0;
    double x1;
})line;

@end

#endif /* CPHitTest_h */