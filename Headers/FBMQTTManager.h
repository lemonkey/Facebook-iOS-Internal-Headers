//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBDelayServicesOnColdStartExperimentContext, FBMQTTClientManager, FBUserSession, NSNotificationCenter, NSSet, NSString, NSUserDefaults, UIApplication, VOIPConfiguration, VOIPConfigurationChecker;
@protocol OS_dispatch_queue;

@interface FBMQTTManager : NSObject <FBAppService>
{
    FBUserSession *_session;
    FBMQTTClientManager *_clientManager;
    struct __CFUUID *_clientIDUUID;
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    NSUserDefaults *_userDefaults;
    VOIPConfigurationChecker *_voipConfigChecker;
    NSObject<OS_dispatch_queue> *_applicationQueue;
    FBDelayServicesOnColdStartExperimentContext *_delayServiceOnColdStartExperimentContext;
    BOOL _running;
    BOOL _shouldStart;
    id _didBecomeActiveObserver;
    id _didEnterBackgroundObserver;
    id _sessionStoreKeychainDidUnlockObserver;
    NSString *_userAgent;
    VOIPConfiguration *_voipConfig;
}

@property(nonatomic) BOOL shouldStart; // @synthesize shouldStart=_shouldStart;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) VOIPConfiguration *voipConfig; // @synthesize voipConfig=_voipConfig;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) id sessionStoreKeychainDidUnlockObserver; // @synthesize sessionStoreKeychainDidUnlockObserver=_sessionStoreKeychainDidUnlockObserver;
@property(retain, nonatomic) id didEnterBackgroundObserver; // @synthesize didEnterBackgroundObserver=_didEnterBackgroundObserver;
@property(retain, nonatomic) id didBecomeActiveObserver; // @synthesize didBecomeActiveObserver=_didBecomeActiveObserver;
@property(readonly, nonatomic) FBMQTTClientManager *clientManager; // @synthesize clientManager=_clientManager;
- (void).cxx_destruct;
- (id)_mqttClientID;
- (BOOL)setVOIPCapability;
- (void)handlePersistentConnectionEnabled;
- (void)voipConfigurationChecker:(id)arg1 didGetResult:(id)arg2;
- (id)initWithSession:(id)arg1 clientManager:(id)arg2 clientIDUUID:(struct __CFUUID *)arg3 application:(id)arg4 notificationCenter:(id)arg5 userDefaults:(id)arg6;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
- (BOOL)isConnected;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)stopMQTT;
- (void)setClientManagerFromConfig;
- (void)startMQTT:(BOOL)arg1;
- (void)startMQTT;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)configureWithUserAgent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

