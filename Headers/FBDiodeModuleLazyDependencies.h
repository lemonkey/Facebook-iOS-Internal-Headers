//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBDiodeModuleMQTTServiceCoordinator, FBDiodeModuleStartupManager, FBDiodeRootViewController, FBMessagesJewelNetworkDataSource, FBMessengerChatBarViewController, FBMessengerInboxCountsFetcher, FBMessengerInboxCountsMQTTService, FBMessengerInboxCountsManager, FBMessengerRedirectionController, FBUserSession, NSString;
@protocol FBProvider;

@interface FBDiodeModuleLazyDependencies : NSObject <FBClassProvidable>
{
    id <FBProvider> _rootViewControllerProvider;
    FBDiodeRootViewController *_menuItemRootViewController;
    FBDiodeRootViewController *_modalRootViewController;
    FBDiodeRootViewController *_jewelRootViewController;
    id <FBProvider> _divebarViewControllerProvider;
    FBMessengerChatBarViewController *_divebarViewController;
    id <FBProvider> _redirectionControllerProvider;
    FBMessengerRedirectionController *_redirectionController;
    id <FBProvider> _startupManagerProvider;
    FBDiodeModuleStartupManager *_startupManager;
    id <FBProvider> _mqttCoordinatorProvider;
    FBDiodeModuleMQTTServiceCoordinator *_mqttCoordinator;
    id <FBProvider> _sessionProvider;
    FBUserSession *_session;
    FBMessagesJewelNetworkDataSource *_messagesJewelNetworkDataSource;
    FBMessengerInboxCountsMQTTService *_messengerInboxCountsMQTTService;
    FBMessengerInboxCountsFetcher *_messengerInboxCountsFetcher;
    FBMessengerInboxCountsManager *_messengerInboxCountsManager;
}

- (void).cxx_destruct;
- (id)messagesJewelNetworkDataSource;
- (id)messengerInboxCountsManager;
- (id)messengerInboxCountsMQTTService;
- (id)mqttCoordinator;
- (id)startupManager;
- (id)redirectionController;
- (id)divebarViewController;
- (id)jewelRootViewController;
- (id)modalRootViewController;
- (id)menuItemRootViewController;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithRootViewControllerProvider:(id)arg1 divebarViewControllerProvider:(id)arg2 redirectionControllerProvider:(id)arg3 startupManagerProvider:(id)arg4 mqttCoordinatorProvider:(id)arg5 sessionProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

