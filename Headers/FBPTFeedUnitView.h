//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBUserSession, NSString, UIImageView, UILabel;

@interface FBPTFeedUnitView : UIView
{
    FBUserSession *_session;
    UIImageView *_locationImageView;
    UIView *_backgroundView;
    UIImageView *_actionChevron;
    BOOL _showLocationIcon;
    BOOL _isEdgeToEdge;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;
- (float)_contentInset;
- (void)_setEntityRangesForString:(id)arg1 atLabel:(id)arg2;
- (void)_createAndAddSubtitleLabel;
- (void)configureWithPlaceTipFeedUnit:(id)arg1 fallbackTitle:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end

