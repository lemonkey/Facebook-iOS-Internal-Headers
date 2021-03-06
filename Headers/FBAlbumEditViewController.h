//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFormViewController.h"

#import "FBAggregatedPostsUploadBarViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBAggregatedPostsUploadBarView, FBEditAlbumRequest, FBFormSection, FBMemAlbum, FBUserSession, NSString, UIView;
@protocol FBAlbumEditViewControllerDelegate, FBGraphQLConnectionSyncStoreProtocol;

@interface FBAlbumEditViewController : FBFormViewController <FBAggregatedPostsUploadBarViewDelegate, UIAlertViewDelegate>
{
    FBUserSession *_session;
    FBMemAlbum *_album;
    id <FBGraphQLConnectionSyncStoreProtocol> _albumConnectionSyncStore;
    FBFormSection *_contributorsSection;
    FBFormSection *_audienceSection;
    FBAggregatedPostsUploadBarView *_loadingView;
    UIView *_loadingOverlayView;
    FBEditAlbumRequest *_editRequest;
    UIView *_contributorsFooterView;
    id <FBAlbumEditViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAlbumEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)fb_showNavBarSearchField;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)alertViewForAggregatedPostsUploadBarView:(id)arg1;
- (void)uploadBarDidCancelUpload:(id)arg1 withReason:(id)arg2;
- (void)uploadBarDidRetryUpload:(id)arg1;
- (void)didUpdateFormElement:(id)arg1;
- (BOOL)analyticsRequiresNetworkContent;
- (id)analyticsModule;
- (void)_deleteAlbum;
- (void)saveAlbum:(id)arg1;
- (void)cancelEditAlbum:(id)arg1;
- (id)_formResult:(id)arg1 processContributorsToRemoveWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processContributorsToAddWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processAllowContributorsWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processAlbumPrivacyWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processAlbumPlaceWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processAlbumDescriptionWithLoggingDictionary:(id)arg2;
- (id)_formResult:(id)arg1 processAlbumNameWithLoggingDictionary:(id)arg2;
- (void)_submitEditAlbumRequestForFormRequest:(id)arg1;
- (void)_syncAndDismissAlbumWithID:(id)arg1;
- (void)_animateProgressBarAndDismiss;
- (void)_dismissWithUpdatedAlbum:(id)arg1;
- (void)_cancelEditRequest;
- (void)_hideLoadingBar;
- (void)_showLoadingBar;
- (void)_setUpNavigationItem;
- (void)_refreshPrivacyElementAsShared:(BOOL)arg1;
- (void)_configureContributorsFooter;
- (void)_constructFormElementsWithAlbum:(id)arg1;
- (id)_audiencePickerElementForAlbum:(id)arg1 allowContributors:(BOOL)arg2;
- (void)_showContributorRow:(BOOL)arg1;
- (id)_contributorRowTextForVisibleContributors:(id)arg1;
- (void)_hideContributorRow:(BOOL)arg1;
- (id)_newAlbumConnectionSyncStoreForAlbumWithID:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)init;
- (id)initWithAlbum:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

