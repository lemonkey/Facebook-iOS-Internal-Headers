//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveFactoryView.h"

@class FBVerveLabelViewValues, UIFont;

@interface FBVerveFactoryLabelView : FBVerveFactoryView
{
    FBVerveLabelViewValues *_values;
}

+ (void)prefetchViewResources:(id)arg1 factory:(id)arg2 transform:(CDStruct_225388b8)arg3;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)invalidateResource:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UIFont *platformFont;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

