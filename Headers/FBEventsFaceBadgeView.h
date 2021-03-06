//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAKeyframeAnimation, FBEventsInviteBadgeView, UIButton;

@interface FBEventsFaceBadgeView : UIView
{
    FBEventsInviteBadgeView *_badgeView;
    struct UIOffset _badgeViewOffset;
    CAKeyframeAnimation *_bounceAnimation;
    UIButton *_faceButton;
    unsigned int _badgeCount;
}

@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) UIButton *faceButton; // @synthesize faceButton=_faceButton;
- (void).cxx_destruct;
- (void)animateBounce;
- (id)_accessibilityLabelText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

