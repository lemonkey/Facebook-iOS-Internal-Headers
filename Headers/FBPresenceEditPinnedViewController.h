//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPresenceEditPinnedChangeListener-Protocol.h"
#import "FBPresenceEditPinnedViewListener-Protocol.h"

@class FBErrorView, FBLoadingIndicatorView, FBMessengerSyncEngineManager, FBPresenceEditPinnedController, FBPresenceEditPinnedTableViewDataSource, FBPresenceEditPinnedView, FBPresenceFriendsDataSource, FBPresenceFriendsSearcher, FBUserSession, NSString, UIActivityIndicatorView, UIBarButtonItem;
@protocol FBNavigationCoordinator;

@interface FBPresenceEditPinnedViewController : UIViewController <FBPresenceEditPinnedViewListener, FBPresenceEditPinnedChangeListener>
{
    FBUserSession *_session;
    FBPresenceEditPinnedController *_editPinnedController;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBPresenceFriendsDataSource *_friendsDataSource;
    FBPresenceFriendsSearcher *_friendsSearcher;
    FBPresenceEditPinnedTableViewDataSource *_editPinnedTableViewDataSource;
    FBPresenceEditPinnedView *_editPinnedView;
    FBMessengerSyncEngineManager *_syncEngineManager;
    UIActivityIndicatorView *_activityIndicator;
    UIBarButtonItem *_doneInProgressIndicator;
    FBLoadingIndicatorView *_loadingView;
    FBErrorView *_errorLoadingView;
    UIBarButtonItem *_updateButton;
}

@property(retain, nonatomic) UIBarButtonItem *updateButton; // @synthesize updateButton=_updateButton;
- (void).cxx_destruct;
- (BOOL)fb_showNavigationJewels;
- (BOOL)fb_showNavBarSearchField;
- (id)analyticsModule;
- (void)reset;
- (void)dismissAndReset;
- (void)updateTapped;
- (void)editPinnedChangesCommitted:(id)arg1;
- (void)editPinnedChangesPending:(BOOL)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)startLoading;
- (void)retryButtonTapped;
- (void)showLoadingErrorViewAnimated;
- (void)clearLoadingViewAnimated;
- (void)showLoadingView;
- (void)loadView;
- (int)preferredStatusBarStyle;
- (void)dealloc;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 editPinnedController:(id)arg2 friendsDataSource:(id)arg3 navigationCoordinator:(id)arg4 syncEngineManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

