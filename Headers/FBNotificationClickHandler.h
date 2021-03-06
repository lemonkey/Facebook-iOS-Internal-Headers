//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNotificationClickHandlerProtocol-Protocol.h"
#import "FBNotificationDismissHandlerProtocol-Protocol.h"

@class FBNativeThirdPartyURLHandler, NSString;

@interface FBNotificationClickHandler : NSObject <FBNotificationClickHandlerProtocol, FBNotificationDismissHandlerProtocol>
{
    FBNativeThirdPartyURLHandler *_nativeThirdPartyURLHandler;
    NSString *_notificationLoggingModule;
    NSString *_actorFBID;
}

- (void).cxx_destruct;
- (void)logNativeThirdPartyNotificationClick:(id)arg1;
- (void)replaceNotification:(id)arg1 source:(id)arg2;
- (void)ignoreNotification:(id)arg1 source:(id)arg2;
- (void)dismissNotification:(id)arg1 source:(id)arg2;
- (id)encode:(id)arg1;
- (void)launchClickTarget:(id)arg1 withNavigationCoordinator:(id)arg2 intentHandler:(id)arg3 atIndexPath:(id)arg4 session:(id)arg5 source:(id)arg6;
- (id)initWithNotificationLoggingModule:(id)arg1 actorFBID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

