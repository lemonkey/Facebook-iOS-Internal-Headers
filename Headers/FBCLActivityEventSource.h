//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCLEventSource.h"

#import "FBCLEventChannelListener-Protocol.h"

@class CMMotionActivityManager, FBCLEventChannel, NSDate, NSOperationQueue, NSString;

@interface FBCLActivityEventSource : FBCLEventSource <FBCLEventChannelListener>
{
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_operationQueue;
    BOOL _isStarted;
    NSDate *_lastActivityDate;
    double _throttleTime;
    FBCLEventChannel *_channel;
}

- (void).cxx_destruct;
- (void)_handleMotionActivities:(id)arg1;
- (void)onEvent:(id)arg1;
- (id)queuePerformer;
- (void)stop;
- (void)start;
- (id)initWithEventChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

