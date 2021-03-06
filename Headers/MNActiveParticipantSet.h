//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class NSMutableOrderedSet, NSMutableSet, NSString;
@protocol MNAuthenticationManager;

@interface MNActiveParticipantSet : NSObject <FBSessionClassProvidable>
{
    NSMutableOrderedSet *_activeUserIds;
    NSMutableSet *_observers;
    id <MNAuthenticationManager> _authManager;
}

- (id)activeUserIds;
- (BOOL)removeActiveParticipantObserver:(id)arg1;
- (void)addActiveParticipantObserver:(id)arg1;
- (void)addUsersWithIds:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAuthenticationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

