//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedRecentVPVProviding-Protocol.h"
#import "FBFeedSampledImpressionControllerDelegate-Protocol.h"
#import "FBFeedSampledImpressionSnapshotterDelegate-Protocol.h"
#import "FBViewableImpressionLogger-Protocol.h"

@class FBCache, FBFeedSampledImpressionController, FBFeedSampledImpressionSnapshotter, FBFeedVPVController, FBSponsoredImpressionQueueController, FBUserSession, FBViewableImpressionAnalyticsLogger, NSArray, NSDictionary, NSMutableSet, NSString;
@protocol FBFeedImpressionControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FBFeedImpressionController : NSObject <FBFeedSampledImpressionControllerDelegate, FBFeedSampledImpressionSnapshotterDelegate, FBViewableImpressionLogger, FBFeedRecentVPVProviding>
{
    CDUnknownFunctionPointerType _itemLogger;
    NSString *_analyticsModule;
    FBFeedVPVController *_vpvController;
    FBUserSession *_session;
    FBSponsoredImpressionQueueController *_sponsoredImpressionQueue;
    FBViewableImpressionAnalyticsLogger *_viewableImpressionAnalyticsLogger;
    BOOL _adsViewableImpressionsEnabled;
    BOOL _organicViewableImpressionsEnabled;
    FBCache *_hscrollRowIndexTracker;
    BOOL _useSampledImpressionController;
    BOOL _logStoryHeight;
    FBFeedSampledImpressionController *_sampledImpressionController;
    FBFeedSampledImpressionSnapshotter *_sampledImpressionSnapshotter;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    unsigned int _sponsoredImpressionLoggingDelay;
    struct Mutex _snapshotsLock;
    NSArray *_snapshots;
    int _beginSnapshot;
    int _endSnapshot;
    NSObject<OS_dispatch_source> *_snapshotterDispatch;
    BOOL _snapshotterDispatchRunning;
    BOOL _fireVPVfromVPVd;
    NSMutableSet *_previouslySeenSponsorableIDs;
    id <FBFeedImpressionControllerDelegate> _delegate;
    NSArray *_ignoreVPVDFields;
}

+ (BOOL)_shouldEnqueueUnitForSponsoredImpression:(id)arg1 session:(id)arg2;
@property(copy, nonatomic) NSArray *ignoreVPVDFields; // @synthesize ignoreVPVDFields=_ignoreVPVDFields;
@property(nonatomic) __weak id <FBFeedImpressionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_processPopulatedSnapshots;
- (void)feedSampledImpressionSnapshotterDidTrigger:(id)arg1;
- (void)sampledImpressionController:(id)arg1 activeVisibleEdgeForTwoTicks:(id)arg2;
- (void)sampledImpressionController:(id)arg1 confirmedEdgeStateForLogging:(id)arg2 duration:(double)arg3 maxHeight:(float)arg4;
- (id)mostRecentVPVs;
- (void)resume;
- (void)pause;
- (void)scrollViewDidStop;
- (void)scrollViewDidScroll;
- (void)logNonViewableImpression:(id)arg1;
- (void)logViewableImpression:(id)arg1;
- (void)logHScrollImpressionForSponsorable:(id)arg1 withParentSponsorable:(id)arg2 impressionType:(unsigned int)arg3;
- (void)setVisibleEdgesWithIndexPathToEdges:(id)arg1;
- (void)edgeDidDisappear:(id)arg1 atRowIndex:(int)arg2;
- (void)edgeDidAppear:(id)arg1 atRowIndex:(int)arg2;
- (void)_enqueueSponsoredImpression:(id)arg1 atRowIndex:(int)arg2;
@property(copy, nonatomic) NSDictionary *analyticsExtras;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2 layoutIdiom:(unsigned int)arg3;
- (id)initWithSession:(id)arg1 feedUnitItemImpressionTracker:(CDUnknownFunctionPointerType)arg2 analyticsModule:(id)arg3 queueController:(id)arg4 layoutIdiom:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

