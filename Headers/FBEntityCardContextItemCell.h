//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBItemTableViewCell_DEPRECATED.h"

@class FBEntityCardContextItemIconView, FBUserSession;

@interface FBEntityCardContextItemCell : FBItemTableViewCell_DEPRECATED
{
    FBEntityCardContextItemIconView *_iconView;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_init;
- (void)_voiceOverHelper:(id)arg1;
- (void)_animateSubViews;
- (void)configureUsingContextItem:(id)arg1 overallRating:(float)arg2;
- (void)configureForPlaceTipsUsingContextItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

