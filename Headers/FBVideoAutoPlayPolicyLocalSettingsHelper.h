//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBVideoAutoPlayPolicySettingsHelperProtocol-Protocol.h"

@class FBUserSession;

@interface FBVideoAutoPlayPolicyLocalSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol>
{
    FBUserSession *_session;
    BOOL _defaultsRegistered;
    int _defaultAutoplaySetting;
}

- (void).cxx_destruct;
- (void)_setPreviousAutoplaySettingLocalCache:(int)arg1;
- (BOOL)localCacheHasSettings;
- (void)setAutoplaySettingLocalCache:(int)arg1 postLocalCacheUpdateCallback:(CDUnknownBlockType)arg2;
- (void)setSmartAutoplayLocalCache:(BOOL)arg1 autoplaySetting:(int)arg2 postLocalCacheUpdateCallback:(CDUnknownBlockType)arg3;
- (void)setDefaultAutoplaySettings:(int)arg1;
- (int)getGatekeeperDefaultAutoplaySetting;
- (void)cancelServerSettingUpdateIfInProgress;
- (BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
- (BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
- (void)syncServerAndLocalAutoplaySettingsIfNeeded:(CDUnknownBlockType)arg1;
- (void)setAutoplaySetting:(int)arg1 postLocalCacheUpdateCallback:(CDUnknownBlockType)arg2 localCacheGKCallback:(CDUnknownBlockType)arg3;
- (void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(CDUnknownBlockType)arg2 localCacheGKCallback:(CDUnknownBlockType)arg3;
- (int)currentDefaultAutoplaySetting;
- (void)setDefaultAutoplaySettings;
- (id)initWithSession:(id)arg1;

@end

