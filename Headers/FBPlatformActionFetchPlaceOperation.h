//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPlatformActionOperation.h"

@class NSString;

@interface FBPlatformActionFetchPlaceOperation : FBPlatformActionOperation
{
    NSString *_placeFBID;
    NSString *_placeName;
}

+ (unsigned int)cachedResponseThreshold;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(readonly, copy, nonatomic) NSString *placeFBID; // @synthesize placeFBID=_placeFBID;
- (void).cxx_destruct;
- (void)process;
- (id)defaultErrorMessage;
- (id)initWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 placeFBID:(id)arg2;

@end

