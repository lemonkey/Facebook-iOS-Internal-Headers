//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBContactImporterAddressBookReaderDelegate-Protocol.h"

@class FBContactImporterAddressBookAccessRequester, FBContactImporterAddressBookReader, FBUserSession, NSEnumerator, NSError;
@protocol FBMessagingContactUploaderDelegate;

@interface FBMessagingContactUploader : NSObject <FBContactImporterAddressBookReaderDelegate>
{
    FBContactImporterAddressBookAccessRequester *_addressBookAccessRequester;
    FBContactImporterAddressBookReader *_addressBookReader;
    FBUserSession *_session;
    NSEnumerator *_contactsIterator;
    NSError *_lastUploadError;
    BOOL _isUploadingContacts;
    BOOL _isUploadingComplete;
    id <FBMessagingContactUploaderDelegate> _delegate;
    int _numberOfContactsFound;
    int _numberOfContactsProcessed;
    int _numberOfContactsMatched;
}

@property(readonly, nonatomic) BOOL isUploadingComplete; // @synthesize isUploadingComplete=_isUploadingComplete;
@property(readonly, nonatomic) BOOL isUploadingContacts; // @synthesize isUploadingContacts=_isUploadingContacts;
@property(readonly, nonatomic) int numberOfContactsMatched; // @synthesize numberOfContactsMatched=_numberOfContactsMatched;
@property(readonly, nonatomic) int numberOfContactsProcessed; // @synthesize numberOfContactsProcessed=_numberOfContactsProcessed;
@property(readonly, nonatomic) int numberOfContactsFound; // @synthesize numberOfContactsFound=_numberOfContactsFound;
@property(nonatomic) __weak id <FBMessagingContactUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didFinishUploadingContacts;
- (void)_uploadContactsBatch:(id)arg1 attemptNumber:(int)arg2;
- (void)_prepareAndUploadContactsBatch;
- (void)_uploadContacts:(id)arg1;
- (void)_parseSuccessResponse:(id)arg1 forNumberOfContacts:(int)arg2;
- (void)_handleUploadResponse:(id)arg1 forNumberOfContacts:(int)arg2;
- (void)_handleUploadError:(id)arg1;
- (void)logEvent:(id)arg1 extraData:(id)arg2;
- (void)makeRequest:(id)arg1;
- (void)didAddressBookReadFailWithError:(id)arg1;
- (void)didAddressBookReadSucceedWithContacts:(id)arg1;
- (void)upload;
- (id)initWithSession:(id)arg1;

@end

