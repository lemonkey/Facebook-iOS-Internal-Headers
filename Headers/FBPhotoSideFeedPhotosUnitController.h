//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSideFeedUnitController.h"

#import "FBClonePhotoViewProviderDelegate-Protocol.h"
#import "FBPhotoSideFeedPhotosUnitDataSourceDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBPhotoSideFeedPhotosUnitDataSource, NSMutableDictionary, NSString, UICollectionView;

@interface FBPhotoSideFeedPhotosUnitController : FBSideFeedUnitController <FBPhotoSideFeedPhotosUnitDataSourceDelegate, UICollectionViewDelegate, FBClonePhotoViewProviderDelegate>
{
    NSMutableDictionary *_impressionHistory;
    UICollectionView *_photosView;
    float _photoHeight;
    float _photoWidth;
    float _photoCellInset;
    FBPhotoSideFeedPhotosUnitDataSource *_dataSource;
    NSMutableDictionary *_clickHistory;
}

@property(retain, nonatomic) NSMutableDictionary *clickHistory; // @synthesize clickHistory=_clickHistory;
- (void).cxx_destruct;
- (float)_photoViewHeight;
- (void)_resetLoggingHistory;
- (unsigned int)_photosShownCount;
- (void)_setupPhotoView;
- (id)clonePhotoViewProvider:(id)arg1 cloneViewForPhoto:(id)arg2;
- (void)sideFeedPhotosUnitDataSource:(id)arg1 downloadDidFailWithError:(id)arg2;
- (void)sideFeedPhotosUnitDataSourcePhotosDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)graphQLIDForItemPosition:(unsigned int)arg1;
- (id)trackingStringForItemPosition:(unsigned int)arg1;
- (id)getUnitNameForAnalytics;
- (BOOL)validateModel;
- (void)seeMoreButtonTapped:(id)arg1;
- (BOOL)shouldShowSeeMoreButton;
- (unsigned int)maxPhotosShown;
- (unsigned int)totalPhotosCount;
- (id)cellReuseIdentifier;
@property(retain, nonatomic) FBPhotoSideFeedPhotosUnitDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

