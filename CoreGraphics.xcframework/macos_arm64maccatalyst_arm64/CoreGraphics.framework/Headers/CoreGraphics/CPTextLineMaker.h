//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPTextLineMaker_h
#define CPTextLineMaker_h
@import Foundation;

@interface CPTextLineMaker : NSObject {
    /* instance variables */
    NSMutableArray *textLines;
}

/* instance methods */
- (void)dealloc;
- (unsigned int)makeTextLines:(id)lines;
- (void)splitByGraphic:(id)graphic with:(struct CPPDFContext {
    struct CGRect {
        struct CGPoint {
            double x0;
            double x1;
        } x0;
        struct CGSize {
            double x0;
            double x1;
        } x1;
    } x0;
    unsigned int x1;
    struct CPPDFGraphicState *x2;
    struct CPPDFGraphicState *x3;
    struct CGPDFContentStream *x4[250] unsigned int x5;
    struct PrimitiveBuffer {
        void *x0;
        void *x1;
        void *x2;
        unsigned int x3;
        unsigned int x4;
        unsigned int x5;
        unsigned int x6;
        int x7;
    } x6;
    struct PrimitiveBuffer {
        void *x0;
        void *x1;
        void *x2;
        unsigned int x3;
        unsigned int x4;
        unsigned int x5;
        unsigned int x6;
        int x7;
    } x7;
    struct PrimitiveBuffer {
        void *x0;
        void *x1;
        void *x2;
        unsigned int x3;
        unsigned int x4;
        unsigned int x5;
        unsigned int x6;
        int x7;
    } x8;
    struct CPPDFClipBuffer {
        unsigned int x0;
        unsigned int x1;
        unsigned int x2;
        struct CPPDFClipSequence *x3;
    } x9;
    struct __CFDictionary *x10;
    struct __CFDictionary *x11;
    struct __CFDictionary *x12;
    struct CPPDFStyle *x13;
    int *x14;
    unsigned int x15;
    unsigned int x16;
    unsigned int x17;
    int x18;
    struct CGPDFPage *x19;
    struct CPMultiUnicodes *x20;
    long long x21;
    long long x22;
    unsigned int *x23;
    struct CGPath **x24;
    _Bool x25;
    struct CGPDFTaggedContext *x26;
} *)with;
- (id)textLines;
- (void)zOrderSplitLines:(id)lines;

@end

#endif /* CPTextLineMaker_h */
