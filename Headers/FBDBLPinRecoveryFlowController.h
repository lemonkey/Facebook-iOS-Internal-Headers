//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBDBLPinRecoveryAuthenticating-Protocol.h"

@class FBAuthenticationHandlerResponse, FBDBLStoredUser, FBRequesterConfiguration, NSString;
@protocol FBAuthControllingDelegate, FBAuthUIPresenting, FBDBLPinRecoveryFlowUIProviding;

@interface FBDBLPinRecoveryFlowController : NSObject <FBDBLPinRecoveryAuthenticating, FBAuthControlling>
{
    FBRequesterConfiguration *_requesterConfiguration;
    id <FBAuthControllingDelegate> _authDelegate;
    FBDBLStoredUser *_storedUser;
    FBAuthenticationHandlerResponse *_authResponse;
    id <FBDBLPinRecoveryFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
}

@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBDBLPinRecoveryFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) FBAuthenticationHandlerResponse *authResponse; // @synthesize authResponse=_authResponse;
@property(readonly, nonatomic) FBDBLStoredUser *storedUser; // @synthesize storedUser=_storedUser;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_setPinFailedShouldHavePin:(BOOL)arg1;
- (void)_saveAccountFromResponse:(id)arg1 userID:(id)arg2;
- (void)_setPin:(id)arg1;
- (void)removePinFromViewController:(id)arg1;
- (void)setPin:(id)arg1 fromViewController:(id)arg2;
- (void)authenticate;
- (id)init;
- (id)initWithUserInfo:(id)arg1 authenticationResponse:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 requesterConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

