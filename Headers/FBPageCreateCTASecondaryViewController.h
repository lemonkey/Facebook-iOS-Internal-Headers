//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBKeyboardObserverDelegate-Protocol.h"
#import "FBPhoneInputHandlerDelegate-Protocol.h"

@class FBKeyboardObserver, FBMemPageCreateCTAItem, FBPageCTALogger, FBPageCreateCTASecondaryView, FBPhoneInputHandler, FBUserSession, NSString, UIAlertView;
@protocol FBPageCTAViewControllerDelegate;

@interface FBPageCreateCTASecondaryViewController : UIViewController <FBPhoneInputHandlerDelegate, FBKeyboardObserverDelegate>
{
    id <FBPageCTAViewControllerDelegate> _delegate;
    FBMemPageCreateCTAItem *_ctaItem;
    FBPageCreateCTASecondaryView *_createCTASecondaryView;
    FBMemPageCreateCTAItem *_currentCTAItem;
    FBUserSession *_session;
    NSString *_pageId;
    FBPhoneInputHandler *_phoneInputHandler;
    FBPageCTALogger *_logger;
    FBKeyboardObserver *_keyboardObserver;
    float _keyboardHeight;
    NSString *_countryCode;
    NSString *_pagePhoneNumber;
    UIAlertView *_emptyPhoneNumberAlertView;
    UIAlertView *_genericErrorAlertView;
}

@property(retain, nonatomic) UIAlertView *genericErrorAlertView; // @synthesize genericErrorAlertView=_genericErrorAlertView;
@property(retain, nonatomic) UIAlertView *emptyPhoneNumberAlertView; // @synthesize emptyPhoneNumberAlertView=_emptyPhoneNumberAlertView;
- (void).cxx_destruct;
- (void)_updateCountryCode;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)phoneInputHandler:(id)arg1 didReceiveValidPhoneNumber:(id)arg2;
- (void)phoneInputHandler:(id)arg1 didReceiveInvalidInput:(id)arg2;
- (void)_openConfirmationViewController;
- (void)_saveButtonItemTapped;
- (BOOL)fb_showNavBarSearchField;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 pageId:(id)arg2 createCTAItem:(id)arg3 pagePhoneNumber:(id)arg4 countryCode:(id)arg5 delegate:(id)arg6;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

