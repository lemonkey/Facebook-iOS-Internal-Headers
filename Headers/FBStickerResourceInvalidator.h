//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMStickerManager, FBMStickerResourceManager, FBStickerLastUpdatedInfoFetcher, FBStickerUpdateStore;
@protocol FBStickerResourceInvalidatorDelegate, OS_dispatch_queue;

@interface FBStickerResourceInvalidator : NSObject
{
    FBMStickerManager *_stickerManager;
    FBMStickerResourceManager *_stickerResourceManager;
    FBStickerLastUpdatedInfoFetcher *_updateInfoFetcher;
    FBStickerUpdateStore *_updateStore;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBStickerResourceInvalidatorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBStickerResourceInvalidatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_invalidationDidFailWithError:(id)arg1;
- (void)_invalidationDidFinish;
- (void)_invalidateStickerPacks:(id)arg1;
- (void)_fetchUpdatedPacksSince:(id)arg1;
- (BOOL)_deleteStickerResources:(id)arg1;
- (id)_unownedResourcesFromItemsOnDisk:(id)arg1;
- (void)_invalidateUnownedStickerResources:(id)arg1;
- (void)_requestListOfResourcesOnDisk;
- (void)_invalidateStickerResourcesSince:(id)arg1;
- (void)invalidateStickerResources;
- (id)initWithUpdateStore:(id)arg1 updateInfoFetcher:(id)arg2 stickerManager:(id)arg3 stickerResourceManager:(id)arg4;

@end

