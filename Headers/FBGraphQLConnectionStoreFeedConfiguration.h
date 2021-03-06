//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLConnectionStoreConfiguration-Protocol.h"

@class FBAnalytics, FBFeedGraphQLConnectionInfo, NSString;

@interface FBGraphQLConnectionStoreFeedConfiguration : NSObject <FBGraphQLConnectionStoreConfiguration>
{
    FBFeedGraphQLConnectionInfo *_storeInfo;
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)didInsertEdgesInStore:(id)arg1 didFilterAllEdgesInNewChunk:(BOOL)arg2;
- (id)storeDescription;
- (id)initWithEdgesStoreInfo:(id)arg1 analytics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

