//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBInboxNuxBannerView-Protocol.h"

@class NSString, UIToolbar;

@interface FBNuxPromotionFooterContainerView : UIView <FBInboxNuxBannerView>
{
    UIView *_contentView;
    float _borderWidth;
    UIToolbar *_toolbar;
}

- (void).cxx_destruct;
- (BOOL)isTakeOverView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

