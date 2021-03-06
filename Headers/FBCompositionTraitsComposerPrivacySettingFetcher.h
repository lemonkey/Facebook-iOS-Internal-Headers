//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerPrivacySettingFetcher-Protocol.h"

@class FBCacheAndRemoteComposerPrivacySettingFetcher, FBComposerPrivacySetting, FBUserSession, NSString;

@interface FBCompositionTraitsComposerPrivacySettingFetcher : NSObject <FBComposerPrivacySettingFetcher>
{
    FBComposerPrivacySetting *_initialPrivacySetting;
    FBCacheAndRemoteComposerPrivacySettingFetcher *_privacySettingFetcher;
    FBUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)loadForReviewWithCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)fetchPrivacySettingsForPrivacySettingLoadType:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 initialPrivacySetting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

