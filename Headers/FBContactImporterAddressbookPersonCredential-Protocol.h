//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol FBContactImporterAddressbookPersonCredential;

@protocol FBContactImporterAddressbookPersonCredential <NSObject>
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *label;
- (BOOL)isBetterChoiceForPrimaryCredentialThan:(id <FBContactImporterAddressbookPersonCredential>)arg1;
- (id)initWithValue:(struct __CFString *)arg1 ABRecordLabel:(struct __CFString *)arg2;
- (id)initWithValue:(struct __CFString *)arg1;
@end

