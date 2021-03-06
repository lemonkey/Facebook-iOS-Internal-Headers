//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBLeadGenModalDialogContentViewController, FBLeadGenModalPopupDurationTracker, FBUserSession, NSArray, UIView;
@protocol FBNavigationCoordinator;

@interface FBLeadGenModalDialogViewController : UIViewController
{
    NSArray *_trackingCodes;
    FBLeadGenModalPopupDurationTracker *_tracker;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBLeadGenModalDialogContentViewController *_contentVC;
    FBUserSession *_userSession;
    BOOL _hasTCPA;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)userDidTapTextField:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1 onPageType:(unsigned int)arg2;
- (void)presentModal;
- (id)initWithContentView:(id)arg1 trackingCodes:(id)arg2 durationTracker:(id)arg3 navigationCoordinator:(id)arg4 userSession:(id)arg5 hasTCPA:(BOOL)arg6;

@end

