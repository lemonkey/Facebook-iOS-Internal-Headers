//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBEventAnalyticTracker, FBFeedComponentToolbox, FBFeedEventBus, FBIntentAnalyticsInfo, FBMemEvent, NSArray, NSString;
@protocol FBGenericEventComponentDelegate;

@interface FBGenericEventComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemEvent *_event;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
    SEL _feedbackAction;
    id <FBGenericEventComponentDelegate> _feedbackDelegate;
    FBEventAnalyticTracker *_tracker;
    NSArray *_trackingCodes;
    NSString *_cutType;
    FBFeedEventBus *_eventBus;
}

+ (id)newWithEvent:(id)arg1 attachmentMedia:(id)arg2 socialContextText:(id)arg3 showsBlankCoverPhoto:(BOOL)arg4 feedbackAction:(SEL)arg5 feedbackDelegate:(id)arg6 cutType:(id)arg7 tracker:(id)arg8 eventBus:(id)arg9 toolbox:(id)arg10;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)didTapAttachmentCard:(id)arg1;
- (void)didTapHideButton:(id)arg1;

@end

