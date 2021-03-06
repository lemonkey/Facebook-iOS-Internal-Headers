//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAccountStore, FBAuthUserInfoResolver, FBDeviceBasedLoginAccountStore, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBDBLStoredUserAsyncFetcher : NSObject
{
    unsigned int _fetchCount;
    FBAccountStore *_accountStore;
    FBDeviceBasedLoginAccountStore *_dblProvider;
    FBAuthUserInfoResolver *_infoResolver;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_mergeQueue;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_users;
    BOOL _dblFetchCompleted;
    BOOL _ssoFetchCompleted;
    BOOL _completed;
}

@property(readonly) BOOL completed; // @synthesize completed=_completed;
- (void).cxx_destruct;
- (void)_markSelfForReleaseByManager;
- (void)_addAccountWithShortName:(id)arg1 userID:(id)arg2 platformTestAppID:(id)arg3 accountType:(unsigned int)arg4;
- (void)_tryCallCompletion;
- (void)_completedDBLFetch;
- (void)_completedSSOFetch;
- (void)_mergeSSOAccount:(id)arg1;
- (void)_mergeDBLAccounts:(id)arg1;
- (void)_fetchUserInfoForAccount:(id)arg1;
- (void)_fetchDBLAccounts;
- (void)_fetchSSOAccount;
- (void)fetchUsers;
- (id)init;
- (id)initWithAccountStore:(id)arg1 dblProvider:(id)arg2 infoResolver:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithAccountStore:(id)arg1 dblProvider:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

