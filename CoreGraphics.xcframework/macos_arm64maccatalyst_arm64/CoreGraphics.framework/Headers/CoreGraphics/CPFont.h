//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPFont_h
#define CPFont_h
@import Foundation;

#include "CPDisposable-Protocol.h"

@interface CPFont : NSObject <CPDisposable> {
    /* instance variables */
    struct CGPDFFont *cgPDFFont;
    struct CGFont *cgFont;
    NSString *fontName;
    _Bool exactMatch;
    struct {
        double fontStretch;
        double fontWeight;
        unsigned int flags;
        struct CGRect {
            struct CGPoint {
                double x;
                double y;
            } origin;
            struct CGSize {
                double width;
                double height;
            } size;
        } fontBBox;
        double italicAngle;
        double ascent;
        double descent;
        double leading;
        double capHeight;
        double xHeight;
        double stemV;
        double stemH;
        double avgWidth;
        double maxWidth;
        double missingWidth;
        double spaceWidth;
        double underlinePosition;
        double underlineThickness;
    } descriptor;
    struct __CFDictionary *kernDictionary;
    double kernUnitsPerEm;
    _Bool isHorizontal;
    double defaultWidth;
    _Bool disposed;
}

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (unsigned int)flags;
- (id)initWith:(struct CGPDFDictionary *)with;
- (void)dispose;
- (double)leading;
- (double)capHeight;
- (id)fontName;
- (_Bool)isHorizontal;
- (double)maxWidth;
- (double)xHeight;
- (double)italicAngle;
- (double)underlinePosition;
- (double)underlineThickness;
- (double)descent;
- (double)ascent;
- (double)avgWidth;
- (struct CGFont *)cgFont;
- (struct CGPDFFont *)cgPDFFont;
- (struct CGRect {
    struct CGPoint {
        double x0;
        double x1;
    } x0;
    struct CGSize {
        double x0;
        double x1;
    } x1;
})fontBBox;
- (double)fontStretch;
- (double)fontWeight;
- (void)getFontName;
- (_Bool)getGlyphs:(unsigned short *)glyphs
          forCodes:(const unsigned short *)codes
             count:(unsigned int)count;
- (_Bool)isSameFontAs:(id)as;
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)for;
- (id)matchingFontName;
- (double)missingWidth;
- (double)spaceWidth;
- (double)stemH;
- (double)stemV;
- (void)uniCharsFor:(unsigned long long)for count:(unsigned long long *)count toArray:(unsigned short *)array maxChars:(unsigned int)chars;

@end

#endif /* CPFont_h */