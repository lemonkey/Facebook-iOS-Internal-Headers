//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDBLUserChooserSelectionTransition.h"

@class UIView;

@interface FBDBLUserChooserToLoadingTransition : FBDBLUserChooserSelectionTransition
{
    BOOL _transactionComplete;
    BOOL _headerComplete;
    UIView *_loaderUserImage;
    UIView *_userChooserFooter;
}

- (void).cxx_destruct;
- (void)startAnimations:(id)arg1;
- (void)layoutCompositeView:(id)arg1;

@end

