//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBContactImporterAddressbookPersonCredential-Protocol.h"

@class NSString;

@interface FBContactImporterAddressbookPersonEmail : NSObject <FBContactImporterAddressbookPersonCredential>
{
    int _type;
    NSString *_label;
    NSString *_value;
}

@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_getStringForLabel:(struct __CFString *)arg1;
- (int)_getTypeForLabel:(struct __CFString *)arg1;
- (BOOL)isBetterChoiceForPrimaryCredentialThan:(id)arg1;
- (id)initWithValue:(struct __CFString *)arg1 ABRecordLabel:(struct __CFString *)arg2;
- (id)initWithValue:(struct __CFString *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

