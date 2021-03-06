//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

#import "FBAppService-Protocol.h"
#import "FBClassProvidable-Protocol.h"
#import "FBMessengerAuxiliaryViewControllerCreating-Protocol.h"
#import "FBMessengerJewelManagerProviding-Protocol.h"

@class FBDiodeModuleLazyDependencies, FBMessengerChatBarQuickPromotionManager, FBMessengerQuickPromotionInterstitialViewController, FBUserSession, NSSet, NSString;

@interface FBDiodeModule : FBNativeAppModule <FBAppService, FBClassProvidable, FBMessengerAuxiliaryViewControllerCreating, FBMessengerJewelManagerProviding>
{
    FBMessengerChatBarQuickPromotionManager *_quickPromotionManager;
    FBMessengerQuickPromotionInterstitialViewController *_menuItemQPInterstitialViewController;
    BOOL _quickPromotionBasedDiodeEnabled;
    FBUserSession *_session;
    FBDiodeModuleLazyDependencies *_lazyDependencies;
}

+ (id)providerModuleWithConfigurator:(id)arg1;
+ (id)providerModule;
+ (id)instanceForSession:(id)arg1 providerMap:(id)arg2;
- (void).cxx_destruct;
- (id)displayNameForMessengerRedirectMenuItem;
- (id)defaultDisplayName;
- (id)displayName;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)performRedirectFromBookmarkForMenuItem:(id)arg1;
- (BOOL)shouldRedirectFromBookmarkForMenuItem:(id)arg1;
- (void)handleAPNSWithPayLoad:(id)arg1 launchedByUser:(BOOL)arg2;
- (id)jewelManagerWithSession:(id)arg1;
- (id)auxiliaryMessengerViewController;
- (void)cleanupSession;
- (id)supportedKeys;
- (id)viewControllerForJewel:(id)arg1;
- (BOOL)handleMenuItem:(id)arg1 navigationCoordinator:(id)arg2;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)URLSegues;
- (id)defaultMenuItem;
- (id)ID;
- (id)services;
- (void)dealloc;
- (id)initWithSession:(id)arg1 lazyDependencies:(id)arg2 chatBarQuickPromotionManager:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

