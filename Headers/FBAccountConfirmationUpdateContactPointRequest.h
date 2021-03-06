//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class FBContactPoint, NSString;

@interface FBAccountConfirmationUpdateContactPointRequest : FBNetworkerRequest
{
    FBContactPoint *_currentContactPoint;
    FBContactPoint *_updatedContactPoint;
    NSString *_normalizedUpdatedContactPoint;
}

@property(copy, nonatomic) NSString *normalizedUpdatedContactPoint; // @synthesize normalizedUpdatedContactPoint=_normalizedUpdatedContactPoint;
@property(retain, nonatomic) FBContactPoint *updatedContactPoint; // @synthesize updatedContactPoint=_updatedContactPoint;
@property(retain, nonatomic) FBContactPoint *currentContactPoint; // @synthesize currentContactPoint=_currentContactPoint;
- (void).cxx_destruct;
- (BOOL)allowRetry;
- (id)networkRequest;
- (id)initWithCurrentContactPoint:(id)arg1 updatedContactPoint:(id)arg2 callbackPerformer:(id)arg3;

@end

