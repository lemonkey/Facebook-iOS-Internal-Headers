//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNavigationCoordinator-Protocol.h"

@class FBNavigationInfo, NSString;

@interface FBViewControllerStealingNavigationCoordinator : NSObject <FBNavigationCoordinator>
{
    FBNavigationInfo *_lastPresentedNavigationInfo;
}

- (void).cxx_destruct;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissViewController:(id)arg1;
- (BOOL)presentWithNavigationInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentWithNavigationInfo:(id)arg1;
- (id)getAndClearPresentedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

