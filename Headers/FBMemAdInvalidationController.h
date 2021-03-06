//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAdInvalidationController.h"

#import "FBFeedGraphQLConnectionManagerListener-Protocol.h"
#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionStoreEdgeFiltering-Protocol.h"
#import "FBGraphQLConnectionStoreListener-Protocol.h"

@class FBInvalidlySpacedAdEdgesQueue, FBUserSession, NSString;

@interface FBMemAdInvalidationController : FBAdInvalidationController <FBGraphQLConnectionStoreEdgeFiltering, FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBFeedGraphQLConnectionManagerListener>
{
    FBUserSession *_session;
    BOOL _isValid;
    BOOL _shouldTryToRearrangeEdges;
    BOOL _shouldSaveSpacingViolationAds;
    FBInvalidlySpacedAdEdgesQueue *_invalidlySpacedAdEdgesQueue;
}

@property(retain, nonatomic) FBInvalidlySpacedAdEdgesQueue *invalidlySpacedAdEdgesQueue; // @synthesize invalidlySpacedAdEdgesQueue=_invalidlySpacedAdEdgesQueue;
@property(nonatomic) BOOL shouldSaveSpacingViolationAds; // @synthesize shouldSaveSpacingViolationAds=_shouldSaveSpacingViolationAds;
@property(nonatomic) BOOL shouldTryToRearrangeEdges; // @synthesize shouldTryToRearrangeEdges=_shouldTryToRearrangeEdges;
- (void).cxx_destruct;
- (id)_stateModificationWithInvalidlySpacedAdEdgesQueue:(id)arg1 callbackState:(id)arg2;
- (id)_stateModificationWithSource:(id)arg1 callbackState:(id)arg2;
- (void)_invalidateAdsForRemovedEdgesConnection:(id)arg1 deletionReason:(id)arg2;
- (void)_invalidateAdsForInsertedEdgesConnection:(id)arg1;
- (void)_invalidateAdsForMergedChunkConnection:(id)arg1;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned int)arg3;
- (id)_filterAppInstallStoriesFromEdgesToBeAdded:(id)arg1;
- (void)_logAdValidationForFeedEdges:(id)arg1;
- (BOOL)_shouldCheckForFirstPositionInvalidationsWithLocationType:(unsigned int)arg1 state:(id)arg2 chunkIndex:(unsigned int)arg3;
- (id)_filteredFirstPositionAndInvalidlySpacedAdsFromEdgesToBeAdded:(id)arg1 state:(id)arg2 chunkIndex:(unsigned int)arg3 locationType:(unsigned int)arg4;
- (id)_filterEdgesFromEdgesToBeAdded:(id)arg1 state:(id)arg2 chunkIndex:(unsigned int)arg3 locationType:(unsigned int)arg4;
- (id)filteredEdgesFromEdgesToBeAdded:(id)arg1 atChunkIndex:(unsigned int)arg2 state:(id)arg3 locationType:(unsigned int)arg4;
- (void)feedGraphQLConnectionManager:(id)arg1 didCreateConnection:(id)arg2 forConnectionInfo:(id)arg3;
- (void)invalidateOnLogout:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

