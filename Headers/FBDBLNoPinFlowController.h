//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthControllingDelegate-Protocol.h"

@class FBDBLPasswordFlowController, FBDBLStoredUser, FBRequesterConfiguration, NSString;
@protocol FBAuthControllingDelegate, FBAuthUIPresenting, FBDBLNoPinFlowUIProviding;

@interface FBDBLNoPinFlowController : NSObject <FBAuthControllingDelegate, FBAuthControlling>
{
    id <FBAuthControllingDelegate> _authDelegate;
    FBDBLStoredUser *_storedUser;
    id <FBDBLNoPinFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBRequesterConfiguration *_requesterConfiguration;
    FBDBLPasswordFlowController *_passwordFlowController;
}

@property(retain, nonatomic) FBDBLPasswordFlowController *passwordFlowController; // @synthesize passwordFlowController=_passwordFlowController;
@property(readonly, nonatomic) FBRequesterConfiguration *requesterConfiguration; // @synthesize requesterConfiguration=_requesterConfiguration;
@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBDBLNoPinFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) FBDBLStoredUser *storedUser; // @synthesize storedUser=_storedUser;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_successWithCredential:(id)arg1 response:(id)arg2;
- (void)_authenticateWithPin;
- (void)_authenticateWithPassword;
- (void)_authenticateWithCredential:(id)arg1;
- (void)authenticationDeferred:(id)arg1 withReason:(id)arg2;
- (void)authenticationCompleted:(id)arg1 withResponse:(id)arg2;
- (void)authenticate;
- (id)init;
- (id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

