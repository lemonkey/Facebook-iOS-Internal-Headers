//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBGraphQLMutationSecretary, FBUserSession;

@interface FBGraphQLMutator : NSObject
{
    FBUserSession *_session;
    FBGraphQLMutationSecretary *_secretary;
}

- (void).cxx_destruct;
- (id)requestWithMutation:(id)arg1;
- (void)startMutation:(id)arg1;
- (void)performMutation:(id)arg1;
- (void)cancelMutation:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

