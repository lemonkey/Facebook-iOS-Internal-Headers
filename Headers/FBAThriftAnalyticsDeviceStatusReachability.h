//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding-Protocol.h"
#import "TBase-Protocol.h"

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusReachability : TBaseStruct <TBase, NSCoding>
{
    int __thrift_radioTechnology;
    int __thrift_connectionType;
    BOOL __thrift_radioTechnology_set;
    BOOL __thrift_connectionType_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetConnectionType;
- (BOOL)connectionTypeIsSet;
@property(nonatomic) int connectionType;
- (void)unsetRadioTechnology;
- (BOOL)radioTechnologyIsSet;
@property(nonatomic) int radioTechnology;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadioTechnology:(int)arg1 connectionType:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

