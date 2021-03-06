//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBCommentDetailView-Protocol.h"
#import "FBTimestampUpdating-Protocol.h"

@class FBCommentLikeCountView, FBMemComment, FBSimpleTextButton, NSError, NSString, UILabel;
@protocol FBCommentDetailViewDelegate;

@interface FBCommentCellDetailView : UIView <FBAccessibilityInvalidationEventsListener, FBCommentDetailView, FBTimestampUpdating>
{
    UILabel *_dateLabel;
    FBSimpleTextButton *_likeButton;
    FBSimpleTextButton *_replyButton;
    FBSimpleTextButton *_editHistoryButton;
    FBSimpleTextButton *_shareLinkButton;
    UILabel *_dateDotLabel;
    UILabel *_likeDotLabel;
    UILabel *_replyDotLabel;
    UILabel *_editHistoryDotLabel;
    UILabel *_shareLinkDotLabel;
    FBCommentLikeCountView *_likeCountView;
    BOOL _dateNeedsShortFormat;
    FBMemComment *_comment;
    unsigned int _feedbackContainerType;
    NSError *_postingError;
    id <FBCommentDetailViewDelegate> _delegate;
}

+ (float)estimatedHeightForWidth:(float)arg1 forComment:(id)arg2 feedbackContainerType:(unsigned int)arg3 shouldAllowLinkShares:(BOOL)arg4;
@property(nonatomic) __weak id <FBCommentDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *postingError; // @synthesize postingError=_postingError;
@property(readonly, nonatomic) unsigned int feedbackContainerType; // @synthesize feedbackContainerType=_feedbackContainerType;
@property(retain, nonatomic) FBMemComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGPoint)_setLayoutForView:(id)arg1 dotLabel:(id)arg2 startingPoint:(struct CGPoint)arg3 lineHeight:(float)arg4 width:(float)arg5 shouldHide:(BOOL)arg6;
- (struct CGPoint)_layoutView:(id)arg1 withMaxX:(float)arg2 withMinY:(float)arg3 lineHeight:(float)arg4 width:(float)arg5;
- (void)didMoveToWindow;
- (void)_updateViewWithComment:(id)arg1;
- (void)updateTimestamp;
- (BOOL)_updateDateLabelIfNeeded;
- (void)didReceiveAccessibilityInvalidation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFeedbackContainerType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

