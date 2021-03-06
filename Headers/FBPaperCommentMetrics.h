//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PAScalableMetrics.h"

@class PAInterfaceGuide;
@protocol FBNativeArticleUFIBarMetrics;

@interface FBPaperCommentMetrics : PAScalableMetrics
{
    PAInterfaceGuide *_interfaceGuide;
    id <FBNativeArticleUFIBarMetrics> _UFIBarMetrics;
    float _actorImageDimension;
    float _topMarginForAttachment;
}

@property(readonly, nonatomic) float topMarginForAttachment; // @synthesize topMarginForAttachment=_topMarginForAttachment;
@property(readonly, nonatomic) float actorImageDimension; // @synthesize actorImageDimension=_actorImageDimension;
@property(readonly, nonatomic) id <FBNativeArticleUFIBarMetrics> UFIBarMetrics; // @synthesize UFIBarMetrics=_UFIBarMetrics;
@property(readonly, nonatomic) PAInterfaceGuide *interfaceGuide; // @synthesize interfaceGuide=_interfaceGuide;
- (void).cxx_destruct;
- (void)defineIntrinsicMetricsForDeviceType:(unsigned int)arg1;
- (void)addScalableMetrics;
@property(readonly, nonatomic) float bottomPadding;
@property(readonly, nonatomic) float distanceBetweenAttachmentAndUFIBar;
@property(readonly, nonatomic) float distanceBetweenAttachmentAndTimestamp;
@property(readonly, nonatomic) float distanceBetweenActorImageAndActorNameLabel;
@property(readonly, nonatomic) struct FBTextMetrics timestampLabelText;
@property(readonly, nonatomic) struct FBTextMetrics actorNameTextMetrics;
@property(readonly, nonatomic) struct FBTextMetrics messageTextMetrics;
@property(readonly, nonatomic) float attachmentScale;
- (id)initWithInterfaceGuide:(id)arg1 UFIBarMetrics:(id)arg2;

@end

