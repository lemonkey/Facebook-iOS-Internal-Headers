//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol FBFacecastNuxViewDelegate;

@interface FBFacecastNuxView : UIView
{
    UIImageView *_nuxImage;
    UILabel *_nuxTitleText;
    UILabel *_nuxText;
    UIButton *_proceedButton;
    UILabel *_proceedLabel;
    id <FBFacecastNuxViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFacecastNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)proceedButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

