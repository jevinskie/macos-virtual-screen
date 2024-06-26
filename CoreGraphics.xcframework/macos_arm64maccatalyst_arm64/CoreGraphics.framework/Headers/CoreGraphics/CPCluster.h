//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.480, BuildCommit: c8897fa0f)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.3.4.0.0
//
#ifndef CPCluster_h
#define CPCluster_h
@import Foundation;

#include "CPDisposable-Protocol.h"

@interface CPCluster : NSObject <CPDisposable> {
    /* instance variables */
    const struct {
        double x0;
        unsigned int x1;
        double x2;
        double x3;
        unsigned int x4;
        double x5;
        double x6;
        _Bool x7;
        double x8;
        double x9;
        double x10;
        double x11;
        double x12;
        double x13;
        double x14;
        double x15;
        double x16;
        double x17;
        double x18;
        _Bool x19;
    } *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    struct {
        unsigned int x0;
        double x1;
        double x2;
        double x3;
    } *xStats;
    unsigned int levels;
    struct {
        unsigned int x0;
        double x1;
        double x2;
        double x3;
    } *dxStats;
    _Bool ownData;
    _Bool ownDifferences;
}

/* class methods */
+ (void)clusterTextLine:(id)line;
+ (void)clusterTextLine:(id)line
            withCluster:(id)cluster
                atLevel:(unsigned int)level
     withMaximumWordGap:(double *)gap
    andMaximumLetterGap:(double *)gap;
+ (unsigned int *)createOrderIndexFor:(double *)for ofSize:(unsigned int)size;
+ (void)reclusterTextLine:(id)line fromWordIndex:(unsigned int)index count:(unsigned int *)count;

/* instance methods */
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)dispose;
- (void)analyzeDensities;
- (void)analyzeDifferences;
- (_Bool)applyDifferenceHints:(struct {
    unsigned int x0;
    double x1;
    double x2;
    double x3;
} *)hints count:(unsigned int)count;
- (void)assembleDataStats;
- (void)assembleDensityDifferenceStats;
- (void)assembleDifferenceStats;
- (unsigned int)clusterCount;
- (struct {
    unsigned int x0;
    double x1;
    double x2;
    double x3;
})clusterStatisticsAtIndex:(unsigned int)index;
- (_Bool)coalesceFrom:(unsigned int)from to:(unsigned int)to;
- (void)computeDataFromDifferences;
- (void)computeDifferencesFromData;
- (struct {
    unsigned int x0;
    double x1;
    double x2;
    double x3;
})differenceClusterStatisticsAtIndex:(unsigned int)index;
- (void)findClusters:(double *)clusters count:(unsigned int)count;
- (void)findClustersFromCharacterSequence:(id)sequence withSpaceHint:(_Bool)hint;
- (void)findClustersFromDifferences:(double *)differences count:(unsigned int)count;
- (void)findDensityClusters:(double *)clusters count:(unsigned int)count;
- (id)initWithProfile:(const struct {
    double x0;
    unsigned int x1;
    double x2;
    double x3;
    unsigned int x4;
    double x5;
    double x6;
    _Bool x7;
    double x8;
    double x9;
    double x10;
    double x11;
    double x12;
    double x13;
    double x14;
    double x15;
    double x16;
    double x17;
    double x18;
    _Bool x19;
} *)profile;
- (_Bool)joinClosestLevelPairFrom:(unsigned int)from to:(unsigned int)to;
- (_Bool)joinLevelsFrom:(unsigned int)from to:(unsigned int)to;
- (struct {
    unsigned int x0;
    double x1;
    double x2;
    double x3;
})largestClusterStatistics;
- (unsigned int)levels;
- (void)makeWords:(struct {
    unsigned int x0;
    unsigned int x1;
    int x2;
    int x3;
    struct CGRect {
        struct CGPoint {
            double x0;
            double x1;
        } x0;
        struct CGSize {
            double x0;
            double x1;
        } x1;
    } x4;
} *)words count:(unsigned int)count fromCharacterSequence:(id)sequence charOffset:(unsigned int)offset;
- (void)resetAnalysis;
- (void)setMaximumClusterSpread:(double)spread;
- (void)setMinimumClusterSize:(unsigned int)size;
- (void)setMinimumRecognizedInterClusterDifference:(double)difference;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)difference;
- (_Bool)splitLevelAtIndex:(unsigned int)index betweenValue:(double)value andValue:(double)value;
- (void)splitSecondDifferences;
- (void)tryLevel0SplitBetween:(double)between and:(double)and usingHints:(struct {
    unsigned int x0;
    double x1;
    double x2;
    double x3;
} *)hints;

@end

#endif /* CPCluster_h */
