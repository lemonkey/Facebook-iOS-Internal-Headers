//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, NSString, UIImage, UIImageView, UILabel;

@interface FBErrorView : UIView
{
    UIImageView *_imageView;
    int _buttonIcon;
    FBButton *_button;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    float _textMarginX;
    float _titleOffsetY;
    float _buttonOffsetY;
    float _moveOffsetY;
}

@property(nonatomic) float moveOffsetY; // @synthesize moveOffsetY=_moveOffsetY;
@property(nonatomic) float buttonOffsetY; // @synthesize buttonOffsetY=_buttonOffsetY;
@property(nonatomic) float titleOffsetY; // @synthesize titleOffsetY=_titleOffsetY;
@property(nonatomic) float textMarginX; // @synthesize textMarginX=_textMarginX;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, retain, nonatomic) FBButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonText;
@property(nonatomic) int buttonIcon;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
@property(retain, nonatomic) UIImage *image;
- (float)_buttonPaddingAndHeightForButtonHeight:(float)arg1;
- (BOOL)_showButton;
- (float)_subtitlePadding;
- (float)_heightForImageHeight:(float)arg1 titleHeight:(float)arg2 subtitleHeight:(float)arg3 buttonHeight:(float)arg4;
- (void)_getSizesForWidth:(float)arg1 titleLabelSize:(out struct CGSize *)arg2 subtitleLabelSize:(out struct CGSize *)arg3 imageViewSize:(out struct CGSize *)arg4 buttonSize:(out struct CGSize *)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonIcon:(int)arg5 buttonText:(id)arg6;

@end

