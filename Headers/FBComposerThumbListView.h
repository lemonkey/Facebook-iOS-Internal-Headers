//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray;

@interface FBComposerThumbListView : UIScrollView
{
    BOOL _showRemoveButton;
    BOOL _stacked;
    NSMutableArray *_thumbnails;
    BOOL _spansEntireWidth;
}

@property(nonatomic) BOOL stacked; // @synthesize stacked=_stacked;
@property(nonatomic) BOOL showRemoveButton; // @synthesize showRemoveButton=_showRemoveButton;
- (void).cxx_destruct;
- (void)updateImageLayout:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)clearAllThumbnails;
- (id)thumbViewAtIndex:(unsigned int)arg1;
- (void)removeThumbnailAtIndex:(unsigned int)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeThumbnail:(id)arg1;
- (void)addThumbnail:(id)arg1;
@property(readonly, nonatomic) unsigned int thumbnailCount;
- (id)viewForAnimationAtIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 spansEntireWidth:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

