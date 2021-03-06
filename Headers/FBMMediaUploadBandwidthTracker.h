//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSingletonClassProvidable-Protocol.h"

@class FBCache, FBReachabilityAnnouncer, NSString;

@interface FBMMediaUploadBandwidthTracker : NSObject <FBSingletonClassProvidable>
{
    FBCache *_cache;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
}

- (void).cxx_destruct;
- (id)_getNetworkId;
- (id)_getNetworkQualityMeasurement:(id)arg1;
- (void)recordUploadFailure;
- (void)addNewBandwidthMeasurement:(double)arg1;
- (struct FBMUploadConnectionQualityMeasurement)currentUploadConnectionQuality;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

