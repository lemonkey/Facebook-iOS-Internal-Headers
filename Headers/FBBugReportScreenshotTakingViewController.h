//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton;

@interface FBBugReportScreenshotTakingViewController : UIViewController
{
    CDUnknownBlockType _userEventBlock;
    UIButton *_takeScreenshotButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *takeScreenshotButton; // @synthesize takeScreenshotButton=_takeScreenshotButton;
@property(copy, nonatomic) CDUnknownBlockType userEventBlock; // @synthesize userEventBlock=_userEventBlock;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)cancel;
- (void)takeScreenshot;
- (id)createButtonWithText:(id)arg1 color:(id)arg2 backgoundColor:(id)arg3;

@end

