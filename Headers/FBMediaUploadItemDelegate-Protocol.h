//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol FBMediaUploadItemProtocol;

@protocol FBMediaUploadItemDelegate <NSObject>
- (BOOL)isRetry;
- (void)mediaUploadItem:(id <FBMediaUploadItemProtocol>)arg1 didUpdateToProgress:(float)arg2 fromProgress:(float)arg3;
- (void)mediaUploadItemDidCancel:(id <FBMediaUploadItemProtocol>)arg1;
- (void)mediaUploadItemDidSendCancelRequest:(id <FBMediaUploadItemProtocol>)arg1;
- (void)mediaUploadItem:(id <FBMediaUploadItemProtocol>)arg1 didFailWithError:(NSError *)arg2 allowBackgroundTask:(BOOL)arg3;
- (void)mediaUploadItemDidFinish:(id <FBMediaUploadItemProtocol>)arg1;
- (void)mediaUploadItemDidFinishProcessingStep:(id <FBMediaUploadItemProtocol>)arg1;
- (void)mediaUploadItemDidStart:(id <FBMediaUploadItemProtocol>)arg1;
@end

