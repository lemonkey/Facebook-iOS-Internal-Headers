//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemNegativeFeedbackAction, NSString;
@protocol FBQueriedFeedUnitFieldsProtocol;

@interface FBFeedCurationFlowStepRowComponent : CKCompositeComponent
{
    id <FBQueriedFeedUnitFieldsProtocol> _unit;
    FBMemNegativeFeedbackAction *_negativeFeedbackAction;
    NSString *_actionPath;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
}

+ (id)newWithUnit:(id)arg1 negativeFeedbackAction:(id)arg2 actionPath:(id)arg3 isLastRow:(BOOL)arg4 toolbox:(id)arg5;
+ (id)initialState;
@property(readonly, nonatomic) FBIntentAnalyticsInfo *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, copy, nonatomic) NSString *actionPath; // @synthesize actionPath=_actionPath;
@property(readonly, nonatomic) FBMemNegativeFeedbackAction *negativeFeedbackAction; // @synthesize negativeFeedbackAction=_negativeFeedbackAction;
@property(readonly, nonatomic) id <FBQueriedFeedUnitFieldsProtocol> unit; // @synthesize unit=_unit;
- (void).cxx_destruct;

@end

