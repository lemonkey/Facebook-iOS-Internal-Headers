//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol FBModalAnimatedTransitioning, OS_dispatch_group;

@interface FBModalAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <FBModalAnimatedTransitioning> _transitioning;
    BOOL _isPresenting;
    NSObject<OS_dispatch_group> *_animationGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *animationGroup; // @synthesize animationGroup=_animationGroup;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initForPresentation:(BOOL)arg1 withTransitioning:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

