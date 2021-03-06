//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;
@protocol FBFeedSwitcherAnimatorDelegate;

@interface FBFeedSwitcherAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresenting;
    UIView *_tabBarView;
    id <FBFeedSwitcherAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFeedSwitcherAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTabBarView:(id)arg1 isPresenting:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

