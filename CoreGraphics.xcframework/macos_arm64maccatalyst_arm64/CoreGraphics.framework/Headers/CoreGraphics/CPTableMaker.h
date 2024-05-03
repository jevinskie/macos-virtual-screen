//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPTableMaker_h
#define CPTableMaker_h
@import Foundation;

#include "CPTable.h"
#include "CPZone.h"

@interface CPTableMaker : NSObject {
    /* instance variables */
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    struct {
        double x0;
        double x1;
    } *rowYIntervals;
    struct {
        double x0;
        double x1;
    } *columnXIntervals;
}

/* class methods */
+ (_Bool)isTable:(id)table;
+ (void)makeTableFrom:(id)from;
+ (void)makeTablesInPage:(id)page;
+ (void)makeTablesInZone:(id)zone;

/* instance methods */
- (void)dealloc;
- (void)determineRowsAndColumns:(_Bool)columns;
- (id)initWithZone:(id)zone;
- (void)makeTable;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)zone;
- (id)newTableCellFromZone:(id)zone;

@end

#endif /* CPTableMaker_h */
