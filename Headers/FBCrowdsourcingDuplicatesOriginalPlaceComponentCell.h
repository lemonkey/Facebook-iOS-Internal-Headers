//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDetailComponentCell.h"

@class FBCrowdsourcingDuplicatesModel, FBCrowdsourcingDuplicatesOriginalPlaceComponentController, FBPlaceSummaryView;

@interface FBCrowdsourcingDuplicatesOriginalPlaceComponentCell : FBDetailComponentCell
{
    FBPlaceSummaryView *_placeSummaryView;
    FBCrowdsourcingDuplicatesOriginalPlaceComponentController *_controller;
    FBCrowdsourcingDuplicatesModel *_model;
}

@property(readonly, nonatomic) FBCrowdsourcingDuplicatesModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) __weak FBCrowdsourcingDuplicatesOriginalPlaceComponentController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1 model:(id)arg2;

@end

