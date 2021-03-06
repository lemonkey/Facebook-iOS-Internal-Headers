//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNetworkImageView, FBRichTextView, UIButton;

@interface FBFeedInstallNotificationBannerView : UIView
{
    FBNetworkImageView *_primaryIconView;
    FBNetworkImageView *_secondaryIconView;
    FBRichTextView *_primaryLabel;
    FBRichTextView *_secondaryLabel;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)_performSecondaryAnimation:(BOOL)arg1 withInitialDelay:(BOOL)arg2;
- (void)_showSecondaryNotification:(BOOL)arg1;
- (void)showSecondaryNotification:(BOOL)arg1;
- (void)_initSecondaryLabelInView:(id)arg1 session:(id)arg2;
- (void)_initPrimaryLabelInView:(id)arg1 session:(id)arg2;
- (void)_initSecondaryIconViewInView:(id)arg1 iconURL:(id)arg2 session:(id)arg3;
- (void)_initPrimaryIconViewInView:(id)arg1 iconURL:(id)arg2 session:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setLayoutForIcon:(id)arg1 label:(id)arg2 bounds:(struct CGRect)arg3 alpha:(float)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconURL:(id)arg2 session:(id)arg3;

@end

