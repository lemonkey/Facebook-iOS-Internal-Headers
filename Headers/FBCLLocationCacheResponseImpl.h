//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCLLocationCacheResponse-Protocol.h"

@class NSArray, NSString;
@protocol FBCLLocationCacheResponseDelegate;

@interface FBCLLocationCacheResponseImpl : NSObject <FBCLLocationCacheResponse>
{
    id <FBCLLocationCacheResponseDelegate> _delegate;
    NSArray *_locations;
    unsigned int _savepoint;
}

@property(readonly, nonatomic) unsigned int savepoint; // @synthesize savepoint=_savepoint;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (void)persistLocations;
- (void)removeLocationsFromCache;
- (id)initWithLocations:(id)arg1 savepoint:(unsigned int)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

