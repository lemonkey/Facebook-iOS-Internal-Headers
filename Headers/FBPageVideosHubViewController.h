//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBFeedNewStoriesPillDelegate-Protocol.h"
#import "FBLegacyFullScreenVideoViewControllerDelegate-Protocol.h"
#import "FBPageVideoHubComponentTableViewCellProviderDelegate-Protocol.h"
#import "FBPageVideosHubCardControllerDelegate-Protocol.h"
#import "FBStreamListener-Protocol.h"

@class FBComponentTableViewDataSource, FBFeedStreamingTableView, FBLegacyFeedVideoPlayerView, FBMemPage, FBPageVideoHubComponentDecider, FBPageVideoHubComponentTableViewCellProvider, FBStream, FBTransientViewStateManager, FBUserSession, FBViewMarginCalculator, NSMutableArray, NSString;

@interface FBPageVideosHubViewController : UIViewController <FBStreamListener, FBLegacyFullScreenVideoViewControllerDelegate, FBPageVideosHubCardControllerDelegate, FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBFeedNewStoriesPillDelegate, FBPageVideoHubComponentTableViewCellProviderDelegate>
{
    NSString *_pageFBID;
    FBUserSession *_userSession;
    FBMemPage *_page;
    BOOL _reachedEndOfFeed;
    NSMutableArray *_cardControllers;
    FBLegacyFeedVideoPlayerView *_videoView;
    BOOL _shouldReloadData;
    FBComponentTableViewDataSource *_dataSource;
    FBPageVideoHubComponentDecider *_decider;
    FBFeedStreamingTableView *_feedView;
    FBPageVideoHubComponentTableViewCellProvider *_fallbackCellProvider;
    FBStream *_stream;
    FBTransientViewStateManager *_viewStateManager;
    int _storyDataSourceIndex;
    NSString *_previousVideListID;
    FBViewMarginCalculator *_viewMarginCalculator;
    BOOL _shouldApplyViewMargin;
    NSMutableArray *_videosList;
}

@property(copy, nonatomic) NSMutableArray *videosList; // @synthesize videosList=_videosList;
- (void).cxx_destruct;
- (BOOL)fb_showNavBarSearchField;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)logPageActionWithEventName:(id)arg1;
- (id)navigationCoordinator;
- (void)enterFullScreenForVideoView:(id)arg1 creationStory:(id)arg2;
- (void)fullScreenVideoPresentationViewControllerDidTapToChangeState:(id)arg1;
- (void)fullScreenVideoPresentationViewControllerDidDismiss:(id)arg1;
- (struct CGRect)fullScreenVideoPresentationViewController:(id)arg1 animationBoundsForView:(id)arg2;
- (void)_addVideoListToDataSource:(id)arg1 withItems:(struct Items)arg2;
- (void)_resetDataSourceWithVideoList:(id)arg1;
- (void)_fetchTitle;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)isAtOrAboveFirstFeedUnit;
- (BOOL)isPresented;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (id)cardControllers;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPageFBID:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

