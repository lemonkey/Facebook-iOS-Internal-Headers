//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBAnalytics, FBMStickerResourceManager, FBNetworkerRequest, NSError, NSObject, NSString, NSURL;
@protocol FBNetworkDispatch, OS_dispatch_queue;

@interface FBStickerResourceDownloadOperation : NSOperation <FBNetworkerRequestDelegate>
{
    FBAnalytics *_analytics;
    FBNetworkerRequest *_resourceNetworkerRequest;
    FBMStickerResourceManager *_resourceManager;
    NSURL *_url;
    id <FBNetworkDispatch> _networkDispatcher;
    unsigned long long _fbId;
    unsigned int _resourceType;
    double _requestBeginTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _operationExecuting;
    BOOL _operationFinished;
    NSError *_error;
}

@property BOOL operationFinished; // @synthesize operationFinished=_operationFinished;
@property BOOL operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)_finishOperation;
- (void)_startOperation;
- (void)_cancelOperation;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isAsynchronous;
- (id)initWithAnalytics:(id)arg1 stickerResourceManager:(id)arg2 networkDispatcher:(id)arg3 resourceURL:(id)arg4 fbId:(unsigned long long)arg5 resourceType:(unsigned int)arg6 userInitiated:(BOOL)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

