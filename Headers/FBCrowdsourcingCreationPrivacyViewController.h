//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBPrivacySettingPickerDelegate-Protocol.h"

@class FBCacheAndRemoteComposerPrivacySettingFetcher, FBComposerPrivacySetting, FBMemPerson, FBPrivacySettingPicker, FBUserSession, NSArray;
@protocol FBCrowdsourcingCreationPrivacyViewControllerDelegate;

@interface FBCrowdsourcingCreationPrivacyViewController : UIViewController <FBPrivacySettingPickerDelegate>
{
    FBPrivacySettingPicker *_privacyView;
    FBComposerPrivacySetting *_privacySetting;
    FBMemPerson *_viewer;
    FBCacheAndRemoteComposerPrivacySettingFetcher *_fetcher;
    FBUserSession *_session;
    id <FBCrowdsourcingCreationPrivacyViewControllerDelegate> _delegate;
    NSArray *_settings;
}

@property(copy, nonatomic) NSArray *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <FBCrowdsourcingCreationPrivacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)privacyPicker:(id)arg1 didSelectPrivacySetting:(id)arg2;
- (void)_didTapDone;
- (void)_didTapCancel;
- (id)filterPrivacySetting:(id)arg1;
- (void)viewDidLoad;
- (BOOL)fb_showNavigationJewels;
- (id)initWithUserSession:(id)arg1 privacySetting:(id)arg2 person:(id)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

@end

