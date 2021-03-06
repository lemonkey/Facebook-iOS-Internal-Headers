//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBReactionFixedAspectRatioContentWithTextOverlayViewDelegate-Protocol.h"

@class CKComponentHostingView, FBFeedComponentToolbox, FBReactionAdapterContext, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionActionAdapter;

@interface FBReactionVideoUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBReactionFixedAspectRatioContentWithTextOverlayViewDelegate>
{
    UIView *_componentView;
    id <FBQueriedReactionUnitComponentFieldsProtocol> _unitComponent;
    CKComponentHostingView *_videoView;
    FBReactionAdapterContext *_reactionContext;
    id <FBReactionActionAdapter> _fallBackActionAdapter;
    BOOL _videoIsInFullScreen;
    FBFeedComponentToolbox *_toolbox;
}

+ (BOOL)shouldPresentVideoWithUnitComponent:(id)arg1;
+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (struct CGRect)fullScreenVideoPresentationViewController:(id)arg1 animationBoundsForView:(id)arg2;
- (void)fixedAspectRatioContentWithTextOverlayView:(id)arg1 isHighlighted:(BOOL)arg2;
- (BOOL)isHighlightable;
- (id)videoView;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

