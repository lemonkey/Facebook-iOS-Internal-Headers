//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface FBAdInterfacesTargetingSpecBuilder : NSObject
{
    NSMutableDictionary *_targetingSpec;
}

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 withKey:(id)arg2 toDictionary:(id)arg3;
- (id)geoLocations;
- (id)build;
- (id)withLocationTypes:(id)arg1;
- (id)withCustomGeoLocation:(id)arg1;
- (id)withMaxAge:(unsigned int)arg1;
- (id)withMinAge:(unsigned int)arg1;
- (id)withGender:(unsigned int)arg1;
- (id)init;

@end

