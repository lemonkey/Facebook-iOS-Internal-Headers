//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBJewelNetworkDataSource-Protocol.h"

@class FBGraphQLConnectionStorePersistenceCoordinator, FBNotificationPhotoPrefetcher, FBNotificationsDataSource, FBNotificationsInAppBadgeUpdateService, FBNotificationsSeenStateManager, NSString;

@interface FBNotificationsWildeNotificationsService : NSObject <FBJewelNetworkDataSource>
{
    FBNotificationPhotoPrefetcher *_photoPrefetcher;
    FBNotificationsInAppBadgeUpdateService *_badgeUpdateService;
    CDUnknownFunctionPointerType _loadConfigurationFactory;
    BOOL _needsReload;
    FBNotificationsDataSource *_notificationsDataSource;
    FBNotificationsSeenStateManager *_seenStateManager;
    FBGraphQLConnectionStorePersistenceCoordinator *_persistenceCoordinator;
    NSString *_notificationTargetFBID;
}

@property(copy, nonatomic) NSString *notificationTargetFBID; // @synthesize notificationTargetFBID=_notificationTargetFBID;
@property(readonly, nonatomic) FBGraphQLConnectionStorePersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(readonly, nonatomic) FBNotificationsSeenStateManager *seenStateManager; // @synthesize seenStateManager=_seenStateManager;
@property(readonly, nonatomic) FBNotificationsDataSource *notificationsDataSource; // @synthesize notificationsDataSource=_notificationsDataSource;
@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)reloadDataWithReason:(int)arg1;
@property(readonly, nonatomic) unsigned int unseenCount;
- (id)initWithBadgeUpdateService:(id)arg1 dataSource:(id)arg2 loadConfigurationFactory:(CDUnknownFunctionPointerType)arg3 notificationTargetFBID:(id)arg4 persistenceCoordinator:(id)arg5 photoPrefetcher:(id)arg6 seenStateManager:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

