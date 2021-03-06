//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCheckinSearchController, FBUserSession, NSMutableDictionary;

@interface FBNearbyCache : NSObject
{
    unsigned int _checkinSearchHandle;
    unsigned int _citySearchHandle;
    FBCheckinSearchController *_searchController;
    NSMutableDictionary *_cache;
    FBUserSession *_session;
}

+ (int)_version;
+ (void)updateShareCity:(BOOL)arg1 session:(id)arg2;
@property(readonly, nonatomic) FBCheckinSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (BOOL)_verifyDataSet:(id)arg1 withLocation:(id)arg2;
- (void)_storeUserDefaultsNearbySetsCache:(id)arg1;
- (id)_getUserDefaultsNearbySetsCache;
- (id)_mostRecentDataSetWithNearbyCityInCache:(id)arg1;
- (id)_keyForQuery:(id)arg1 searchType:(int)arg2;
- (void)clearDiskCache;
- (void)clearMemoryCache;
- (void)cancelPreheatRequest;
- (void)cancelNearbyRequest;
- (void)getFBNearbyCityDataSetWithLocation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)retrieveOfflineResults:(id)arg1 query:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getFBNearbyDataSetWithLocation:(id)arg1 locationDate:(id)arg2 query:(id)arg3 offset:(int)arg4 searchType:(int)arg5 lifeEventType:(unsigned int)arg6 schoolType:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)preheatWithLocation:(id)arg1 searchType:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

