//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FBMemPage, FBUserSession, NSString, UIAlertView;

@interface FBCrowdsourcingHomeRemovalHelper : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_confirmationDialog;
    UIAlertView *_deletedDialog;
    FBMemPage *_residence;
    FBUserSession *_session;
}

@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBMemPage *residence; // @synthesize residence=_residence;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_showDialogForError:(id)arg1;
- (void)_showDeletedDialog;
- (void)_showConfirmationDialog;
- (void)_performDeleteRequest;
- (void)deleteResidence:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

