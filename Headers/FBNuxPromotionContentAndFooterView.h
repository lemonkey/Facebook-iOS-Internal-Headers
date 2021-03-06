//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface FBNuxPromotionContentAndFooterView : UIView
{
    UIScrollView *_firstContentScrollView;
    UIView *_contentView;
    UIView *_footerView;
    float _bottomLayoutGuideLength;
    struct UIEdgeInsets _viewMargins;
}

@property(nonatomic) struct UIEdgeInsets viewMargins; // @synthesize viewMargins=_viewMargins;
@property(nonatomic) float bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end

