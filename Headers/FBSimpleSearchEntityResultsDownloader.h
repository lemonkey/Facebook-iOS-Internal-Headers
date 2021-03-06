//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSearchResultsDownloaderProtocol-Protocol.h"

@class FBGraphQLMemPaginatedConnectionController, FBMemPageInfo, FBUserSession, NSString;
@protocol FBSearchResultsDownloaderDelegate;

@interface FBSimpleSearchEntityResultsDownloader : NSObject <FBSearchResultsDownloaderProtocol>
{
    FBUserSession *_session;
    FBGraphQLMemPaginatedConnectionController *_connectionController;
    unsigned int _entityType;
    BOOL _isPad;
    BOOL _loading;
    id <FBSearchResultsDownloaderDelegate> _delegate;
    NSString *_queryString;
}

@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <FBSearchResultsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isOptionalized;
@property(readonly, nonatomic) FBMemPageInfo *tailPageInfo;
- (id)edges;
- (BOOL)supportsFilters;
- (BOOL)hasMoreData;
- (void)_load;
- (void)loadTail;
- (void)loadHead;
- (id)initWithSession:(id)arg1 queryString:(id)arg2 entityType:(unsigned int)arg3 isPad:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

