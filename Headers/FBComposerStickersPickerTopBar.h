//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol FBComposerStickersPickerTopBarDelegate;

@interface FBComposerStickersPickerTopBar : UIView
{
    UIButton *_closeButton;
    float _statusBarHeight;
    UILabel *_titleLabel;
    id <FBComposerStickersPickerTopBarDelegate> _delegate;
    float _topLayoutGuideLength;
}

@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) __weak id <FBComposerStickersPickerTopBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_closeButtonHit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

