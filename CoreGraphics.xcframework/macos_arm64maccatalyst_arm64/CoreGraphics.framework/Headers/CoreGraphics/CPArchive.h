//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPArchive_h
#define CPArchive_h
@import Foundation;

#include "CPDisposable-Protocol.h"

@interface CPArchive : NSObject <CPDisposable> {
    /* instance variables */
    struct __CFArray *selections;
    struct __CFArray *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
    NSAttributedString *structuredString;
    NSData *RTFDData;
}

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)dispose;
- (id)webArchiveData;
- (id)RTFDData;
- (void)addSelection:(struct CGPDFSelection *)selection;
- (id)html;
- (id)plainText;
- (id)structuredString;

@end

#endif /* CPArchive_h */
