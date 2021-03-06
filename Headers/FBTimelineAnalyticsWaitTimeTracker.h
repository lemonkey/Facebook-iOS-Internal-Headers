//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTimelineAnalyticsSpinnerTracking-Protocol.h"

@class FBAnalyticsPerfLogger, NSString;

@interface FBTimelineAnalyticsWaitTimeTracker : NSObject <FBTimelineAnalyticsSpinnerTracking>
{
    NSString *_perfLoggerEvent;
    FBAnalyticsPerfLogger *_perfLogger;
    int _state;
    BOOL _hasSuccessfullyLoaded;
}

- (void).cxx_destruct;
- (void)_logZeroWaitTimeForEventWithStatus:(id)arg1;
- (void)_markStopForEventWithStatus:(id)arg1;
- (void)_markStartForEvent;
- (void)_loadingHasStoppedWithStatus:(id)arg1 succeeded:(BOOL)arg2;
- (void)loadingWasAborted;
- (void)loadingDidEndWithError:(id)arg1;
- (void)loadingDidStart;
- (void)spinnerDidDisappear;
- (void)spinnerWillAppear;
- (id)initWithPerfLoggerEvent:(id)arg1 perfLogger:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

