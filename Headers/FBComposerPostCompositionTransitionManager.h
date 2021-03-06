//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface FBComposerPostCompositionTransitionManager : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate>
{
    UIView *_backgroundView;
    BOOL _isPresenting;
    UIView *_postButton;
    UIView *_postCompositionView;
    float _postCompositionViewOffset;
    UIView *_postCompositionExtendedView;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

- (void).cxx_destruct;
- (void)_setupAnimationWithTransitionContext:(id)arg1;
- (void)_performOpeningAnimation;
- (void)_performClosingAnimation;
- (void)_performOpeningFrameAnimationsInContainerView:(id)arg1 animationGroup:(id)arg2;
- (void)_performOpeningFadeAnimationInAnimationGroup:(id)arg1;
- (void)_performClosingFrameAnimationsInContainerView:(id)arg1 animationGroup:(id)arg2;
- (void)_performClosingFadeAnimationInAnimationGroup:(id)arg1;
- (void)_completeAnimation;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)forceImmediateCompletionOfAnimationIfNeeded;
- (void)updatePostCompositionViewOffset:(float)arg1;
- (void)configureWithBackgroundView:(id)arg1 postCompositionView:(id)arg2 postButton:(id)arg3 postButtonColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

