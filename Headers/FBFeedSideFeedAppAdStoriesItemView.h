//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFeedSideFeedItemViewBase.h"

#import "FBFeedSideFeedDetailViewBaseDelegate-Protocol.h"

@class NSString, UIView;

@interface FBFeedSideFeedAppAdStoriesItemView : FBFeedSideFeedItemViewBase <FBFeedSideFeedDetailViewBaseDelegate>
{
    UIView *_cellSeparatorView;
    float _separatorThickness;
    BOOL _hasSeparator;
}

+ (float)heightConstrainedToSize:(struct CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 description:(id)arg4 starRatingValue:(id)arg5 showButton:(BOOL)arg6 showSeparator:(BOOL)arg7;
@property(nonatomic) BOOL hasSeparator; // @synthesize hasSeparator=_hasSeparator;
- (void).cxx_destruct;
- (void)_secondaryActionsButtonTapped:(id)arg1;
- (void)sideFeedItemDetailViewDidTapRightButton:(id)arg1;
- (id)createCtaButtonForBaseClass;
- (id)createDetailViewForBaseClass;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

