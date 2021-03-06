//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView, UILabel, UIProgressView, UIScrollView, UITextView;

@interface FBMStickerPackDetailView : UIView
{
    UIScrollView *_contentView;
    UIImageView *_profileImageView;
    UILabel *_priceLabel;
    NSArray *_copyrightLabels;
    UITextView *_descriptionTextView;
    UIButton *_downloadButton;
    UIImageView *_previewImageView;
    UIProgressView *_progressBar;
    UIButton *_viewPackButton;
    unsigned int _layoutIdiom;
    BOOL _compactMode;
    UILabel *_titleLabel;
    float _topLayoutGuideLength;
}

@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(readonly, nonatomic) UIButton *viewPackButton; // @synthesize viewPackButton=_viewPackButton;
@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(readonly, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(readonly, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(readonly, nonatomic) NSArray *copyrightLabels; // @synthesize copyrightLabels=_copyrightLabels;
@property(readonly, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void).cxx_destruct;
- (id)_blueActionButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isCompactMode:(BOOL)arg2 layoutIdiom:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

