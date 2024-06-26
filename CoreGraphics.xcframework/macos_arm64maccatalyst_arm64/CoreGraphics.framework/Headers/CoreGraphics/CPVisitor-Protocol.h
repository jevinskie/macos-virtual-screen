//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPVisitor_Protocol_h
#define CPVisitor_Protocol_h
@import Foundation;

@protocol CPVisitor

@required

/* required instance methods */
- (void)visitParagraph:(id)paragraph;
- (void)visitBody:(id)body;
- (void)visitChunk:(id)chunk;
- (void)visitColumn:(id)column;
- (void)visitCompoundGraphic:(id)graphic;
- (void)visitImage:(id)image;
- (void)visitImageRegion:(id)region;
- (void)visitLayoutArea:(id)area;
- (void)visitPage:(id)page;
- (void)visitRegion:(id)region;
- (void)visitRotation:(id)rotation;
- (void)visitShape:(id)shape;
- (void)visitShapeRegion:(id)region;
- (void)visitTextBox:(id)box;
- (void)visitTextLine:(id)line;
- (void)visitZone:(id)zone;

@optional

@end

#endif /* CPVisitor_Protocol_h */
