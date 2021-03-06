//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerDataFetchListener-Protocol.h"

@class FBUserSession, NSString;
@protocol FBFeedInlineComposerInfoUpdaterDelegate;

@interface FBFeedInlineComposerInfoUpdater : NSObject <FBComposerDataFetchListener>
{
    FBUserSession *_session;
    id <FBFeedInlineComposerInfoUpdaterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)loadedDataWithResponse:(id)arg1;
- (void)failedToLoadDataForRequest:(id)arg1;
- (void)_registerAsComposerDataFetchListener;
- (void)_requestUpdatedComposerInfoIfNeeded;
- (void)stopUpdater;
- (void)startUpdater;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

