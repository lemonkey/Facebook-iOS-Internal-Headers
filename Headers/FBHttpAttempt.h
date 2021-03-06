//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBURLProtocolUploadDelegate-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class FBHttpExecutorListenerAnnouncer, FBMobileTraceRemoteTokenPtr, FBNetworker, FBNetworkerRequestState, FBURLRequestPriorityHandle, FBURLRequestProtocolIdentificationHandle, NSHTTPURLResponse, NSOperationQueue, NSString, NSURLConnection, NSURLRequest;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FBHttpAttempt : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, FBURLProtocolUploadDelegate>
{
    FBNetworkerRequestState *_requestState;
    FBNetworker *_networker;
    FBHttpExecutorListenerAnnouncer *_announcer;
    NSOperationQueue *_connectionQueue;
    NSObject<OS_dispatch_queue> *_requestDelegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_networkerCallbackQueue;
    NSObject<OS_dispatch_queue> *_announcementQueue;
    NSObject<OS_dispatch_source> *_timeoutIntervalTimer;
    int _priority;
    double _timeoutInterval;
    BOOL _disableCustomProtocols;
    NSURLRequest *_urlRequest;
    NSHTTPURLResponse *_urlResponse;
    NSURLConnection *_connection;
    FBURLRequestPriorityHandle *_priorityHandle;
    FBURLRequestProtocolIdentificationHandle *_protocolIdentificationHandle;
    FBMobileTraceRemoteTokenPtr *_remoteToken;
    int _fbtraceDataReceivedTraceCount;
    unsigned int _lastUploadProgressBytes;
    double _requestAddTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    double _requestFlushBeginTime;
    unsigned int _bytesDownUncompressed;
    unsigned int _expectedBytesDownUncompressed;
    unsigned int _bytesUp;
    unsigned int _expectedBytesUp;
    NSString *_protocolEngineUsed;
    double _roundtripLatency;
    double _downloadBandwidth;
    double _uploadBandwidth;
    unsigned int _operatingConnectionType;
    BOOL _cleanedUp;
}

+ (id)operationQueueForConnectionDelegate;
- (void).cxx_destruct;
- (id)_statusSnapshotWithState:(unsigned int)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)URLProtocol:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)changePriorityTo:(int)arg1;
- (void)cancel;
- (void)_setCustomPropertiesOn:(id)arg1;
- (void)start;
- (void)_resetTimeoutIntervalTimer;
- (void)_failWithError:(id)arg1;
- (BOOL)_cleanup;
- (id)init;
- (id)initWithRequest:(id)arg1 networker:(id)arg2 networkerCallbackQueue:(id)arg3 requestState:(id)arg4 announcer:(id)arg5 announcementQueue:(id)arg6 idleTimeout:(double)arg7 disableCustomProtocols:(BOOL)arg8 initialDownloadBandwidth:(double)arg9 initialUploadBandwidth:(double)arg10 initialLatency:(double)arg11 operatingConnectionType:(unsigned int)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

