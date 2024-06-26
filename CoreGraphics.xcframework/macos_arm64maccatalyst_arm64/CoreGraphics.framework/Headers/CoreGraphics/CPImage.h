//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPImage_h
#define CPImage_h
@import Foundation;

#include "CPGraphicObject.h"

@interface CPImage : CPGraphicObject {
    /* instance variables */
    struct CPPDFImage {
        struct CPPDFObject {
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
            struct CGRect {
                struct CGPoint {
                    double x0;
                    double x1;
                } x0;
                struct CGSize {
                    double x0;
                    double x1;
                } x1;
            } x1;
            unsigned int x2;
            unsigned int x3;
        } x0;
        unsigned int x1;
        struct CGPDFStream *x2;
        int x3;
        struct CGImage *x4;
        struct CGAffineTransform {
            double x0;
            double x1;
            double x2;
            double x3;
            double x4;
            double x5;
        } x5;
        struct CGPDFDictionary *x6;
        double x7;
        struct CGColor *x8;
        long long x9;
    } *imageData;
    _Bool renderedBoundsComputed;
}

/* instance methods */
- (struct CPPDFImage {
    struct CPPDFObject {
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
        struct CGRect {
            struct CGPoint {
                double x0;
                double x1;
            } x0;
            struct CGSize {
                double x0;
                double x1;
            } x1;
        } x1;
        unsigned int x2;
        unsigned int x3;
    } x0;
    unsigned int x1;
    struct CGPDFStream *x2;
    int x3;
    struct CGImage *x4;
    struct CGAffineTransform {
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
    } x5;
    struct CGPDFDictionary *x6;
    double x7;
    struct CGColor *x8;
    long long x9;
} *)imageData;
- (struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
})bounds;
- (_Bool)isVisible;
- (void)accept:(id)accept;
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
- (id)initWithPDFImage:(struct CPPDFImage {
    struct CPPDFObject {
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
        struct CGRect {
            struct CGPoint {
                double x0;
                double x1;
            } x0;
            struct CGSize {
                double x0;
                double x1;
            } x1;
        } x1;
        unsigned int x2;
        unsigned int x3;
    } x0;
    unsigned int x1;
    struct CGPDFStream *x2;
    int x3;
    struct CGImage *x4;
    struct CGAffineTransform {
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
    } x5;
    struct CGPDFDictionary *x6;
    double x7;
    struct CGColor *x8;
    long long x9;
} *)pdfimage;
- (void)recomputeRenderedBounds;
- (struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
})renderedBounds;
- (long long)zOrder;

@end

#endif /* CPImage_h */
