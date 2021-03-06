//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBFriendsNearbyLocationPrefetchDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CLLocation, FBFriendsNearbyLocationPing, FBFriendsNearbyLocationPrefetch, FBFriendsNearbyPingActionView, FBImageDownloader, FBMemPerson, FBUserSession, NSDate, NSMutableArray, NSString, NSURL, UIAlertView, UIImageView, UIView;
@protocol FBFriendsNearbyPingActionViewDelegate, FBFriendsNearbyPingDataDelegate;

@interface FBFriendsNearbyPingActionViewController : UIViewController <FBFriendsNearbyLocationPrefetchDelegate, UITextViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSURL *_profilePictureURL;
    FBUserSession *_session;
    FBMemPerson *_person;
    NSString *_pingType;
    NSDate *_expireTime;
    NSDate *_endOfToday;
    UIImageView *_selectedActionView;
    NSMutableArray *_unselectedActionViews;
    NSMutableArray *_expireTimeArray;
    NSMutableArray *_expireTimeStrings;
    int _previousOption;
    int _selectedOption;
    BOOL _isCreatePing;
    FBFriendsNearbyLocationPrefetch *_locFetcher;
    CLLocation *_location;
    CLLocation *_currentUserLocation;
    NSString *_untilYouStopString;
    UIAlertView *_errorAlertView;
    NSString *_titleForCreatePing;
    NSString *_titleForCreateForeverPing;
    NSString *_titleForEditPing;
    UIView *_currentAccessoryView;
    BOOL _mapLoaded;
    BOOL _profilePicLoaded;
    id <FBFriendsNearbyPingDataDelegate> _dataDelegate;
    id <FBFriendsNearbyPingActionViewDelegate> _viewDelegate;
    FBFriendsNearbyPingActionView *_pingView;
    FBFriendsNearbyLocationPing *_locPing;
    FBImageDownloader *_imageDownloader;
}

@property(nonatomic) BOOL profilePicLoaded; // @synthesize profilePicLoaded=_profilePicLoaded;
@property(nonatomic) BOOL mapLoaded; // @synthesize mapLoaded=_mapLoaded;
@property(retain, nonatomic) FBImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) FBFriendsNearbyLocationPing *locPing; // @synthesize locPing=_locPing;
@property(retain, nonatomic) FBFriendsNearbyPingActionView *pingView; // @synthesize pingView=_pingView;
@property(nonatomic) __weak id <FBFriendsNearbyPingActionViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak id <FBFriendsNearbyPingDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
- (void).cxx_destruct;
- (void)updateLocation:(id)arg1;
- (void)finishFetchLocation:(id)arg1;
- (void)_dismissView;
- (void)_expireTimeChanged:(int)arg1;
- (void)_stopPressed;
- (void)_pingPressed;
- (void)_cancelPressed;
- (void)_didTapEditTitleButtonUpInside:(id)arg1;
- (void)_didTapEditTitleButtonDown:(id)arg1;
- (void)_didTapDurationBackButton:(id)arg1;
- (id)_formatRemainingTimeString:(double)arg1;
- (id)_formatExpireTimeString:(id)arg1;
- (id)_expireTimeLabelString;
- (void)_setExpireTimeOptions;
- (void)_configAttributedDialogTitle;
- (void)_setPing;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (unsigned int)supportedInterfaceOrientations;
- (void)_updateLoadingUI;
- (void)_setProfileImage:(struct CGImage *)arg1;
- (void)_loadCircularProfilePicture;
- (void)_loadMapSnapshot:(id)arg1;
- (void)_loadMapImage;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 session:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

