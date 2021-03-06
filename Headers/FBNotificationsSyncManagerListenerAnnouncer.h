//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBNotificationsSyncManagerListener-Protocol.h"

@class NSString;

@interface FBNotificationsSyncManagerListenerAnnouncer : FBAnnouncerBase <FBNotificationsSyncManagerListener>
{
}

- (void)notificationsSyncManagerDidUpdateSeenStates:(id)arg1;
- (void)notificationsSyncManager:(id)arg1 didUpdateWithChanges:(id)arg2;
- (void)notificationsSyncManagerFinishedInitializing:(id)arg1;
- (void)notificationsSyncManager:(id)arg1 didFinishLoading:(unsigned int)arg2 withLoadDataReason:(int)arg3 changeset:(id)arg4;
- (void)notificationsSyncManager:(id)arg1 receivedSeenStateUpdateForNotification:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

