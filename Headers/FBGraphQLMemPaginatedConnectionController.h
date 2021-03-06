//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLPaginatedConnectionController-Protocol.h"

@class FBMemPageInfo, FBUserSession, NSArray, NSString;
@protocol FBGraphQLObjectFactory, FBQueriedNodeFields, FBQueriedNodeFieldsProtocol;

@interface FBGraphQLMemPaginatedConnectionController : NSObject <FBGraphQLPaginatedConnectionController>
{
    id <FBGraphQLObjectFactory> _objectFactory;
    NSString *_connectionModelKey;
    NSArray *_currentConnectionContents;
    FBMemPageInfo *_tailPageInfo;
    id <FBQueriedNodeFieldsProtocol> _lastQueriedNode;
    id _lookupHandle;
    FBUserSession *_session;
    unsigned int _networkRequestThresholdInSeconds;
}

@property(readonly, nonatomic) unsigned int networkRequestThresholdInSeconds; // @synthesize networkRequestThresholdInSeconds=_networkRequestThresholdInSeconds;
@property(readonly, retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, retain, nonatomic) id <FBQueriedNodeFields> lastQueriedNode;
- (id)tailPageInfo;
- (id)currentConnectionContents;
- (void)_setCurrentConnectionContents:(id)arg1;
- (void)_includeObjectContainingConnection:(id)arg1;
- (void)_clearLookupHandle;
- (void)cancelCurrentLookup;
- (void)includeDataFromResponseForQuery:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)includeDataFromResponseForDownloadRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithObjectFactory:(id)arg1 connectionModelKey:(id)arg2 initialObject:(id)arg3 networkRequestThresholdInSeconds:(unsigned int)arg4 session:(id)arg5;
- (id)initWithObjectFactory:(id)arg1 connectionModelKey:(id)arg2 networkRequestThresholdInSeconds:(unsigned int)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

