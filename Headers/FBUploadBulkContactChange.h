//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBContactImporterAddressbookPerson, NSArray, NSString;

@interface FBUploadBulkContactChange : NSObject
{
    NSString *_clientContactID;
    FBContactImporterAddressbookPerson *_abPerson;
    int _updateType;
    NSArray *_interactions;
}

- (void).cxx_destruct;
- (id)_abPersonPhoneTypeToString:(int)arg1;
- (id)_abPersonPhoneDictionaryForm:(id)arg1;
- (id)_abPersonEmailTypeToString:(int)arg1;
- (id)_abPersonEmailDictionaryForm:(id)arg1;
- (id)_abPersonBirthdayDictionaryForm:(id)arg1;
- (id)_abPersonNameDictionaryForm:(id)arg1;
- (id)_abPersonDictionaryForm:(id)arg1;
- (id)_changeUpdateType;
- (id)dictionaryForm;
- (id)initWithABPerson:(id)arg1 updateType:(int)arg2 interactions:(id)arg3;

@end

