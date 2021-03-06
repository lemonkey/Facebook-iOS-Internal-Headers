//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class FBGraphSearchStructuredText, NSString;

@interface FBGraphSearchTypeaheadRequest : FBNetworkerRequest
{
    FBGraphSearchStructuredText *_query;
    unsigned int _maxNumResults;
    NSString *_typeaheadSessionID;
    NSString *_keywordMode;
    NSString *_keywordQueryID;
    NSString *_keywordQueryParams;
}

@property(readonly, copy, nonatomic) NSString *keywordQueryParams; // @synthesize keywordQueryParams=_keywordQueryParams;
@property(readonly, copy, nonatomic) NSString *keywordQueryID; // @synthesize keywordQueryID=_keywordQueryID;
@property(readonly, copy, nonatomic) NSString *keywordMode; // @synthesize keywordMode=_keywordMode;
@property(readonly, copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(readonly, nonatomic) unsigned int maxNumResults; // @synthesize maxNumResults=_maxNumResults;
@property(readonly, nonatomic) FBGraphSearchStructuredText *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)_formatQuery:(id)arg1;
- (id)networkRequest;
- (id)initWithQuery:(id)arg1 maxNumResults:(unsigned int)arg2 typeaheadSessionID:(id)arg3 keywordMode:(id)arg4 keywordQueryID:(id)arg5 keywordQueryParams:(id)arg6 callbackPerformer:(id)arg7;

@end

