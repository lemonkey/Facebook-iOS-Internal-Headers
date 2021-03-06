//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAnalyticsInfoSource-Protocol.h"
#import "FBAnalyticsLogging-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface UIViewController (FBAnalytics) <FBAnalyticsLogging, FBAnalyticsInfoSource>
+ (id)analyticsPresentedViewController;
- (void)_analyticsLogVisibility:(BOOL)arg1 options:(id)arg2;
- (void)analyticsLogWillShowWithOptions:(id)arg1;
- (void)analyticsLogWillShow;
- (void)analyticsLogDidHideWithOptions:(id)arg1;
- (void)analyticsLogDidHide;
- (void)analyticsLogManualRefresh;
- (void)analyticsLogCachedNetworkContentComplete;
- (void)analyticsLogNetworkContentComplete;
- (void)analyticsLogLocalContentComplete;
- (void)analyticsLogContentComplete;
- (void)analyticsLogContent;
- (void)analyticsLogContentIfAutomatic;
@property(readonly, copy, nonatomic) NSString *analyticsUUID;
@property(readonly, nonatomic) BOOL analyticsRequiresNetworkContent;
@property(readonly, copy, nonatomic) UIViewController *analyticsPresentedViewController;
@property(readonly, copy, nonatomic) NSDictionary *analyticsContentEventExtra;
@property(readonly, copy, nonatomic) NSDictionary *analyticsSourceExtras;
@property(readonly, copy, nonatomic) NSDictionary *analyticsExtras;
@property(readonly, copy, nonatomic) NSString *analyticsModule;
@property(readonly, nonatomic) BOOL analyticsHasCachedNetworkContent;
@property(copy, nonatomic) NSString *analyticsFromModule;
@property(copy, nonatomic) NSArray *analyticsFromTrackingCodes;
@property(retain, nonatomic) NSURL *analyticsFromURL;
@property(readonly, retain, nonatomic) NSURL *analyticsDestinationURL;
@property(nonatomic) UIViewController *analyticsContentDelegate;
@property(readonly, nonatomic) BOOL analyticsAutomaticallyLogContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

