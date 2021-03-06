//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBMUser;

@interface FBMLoggedInUser : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isEmployee;
    FBMUser *_user;
}

@property(readonly, nonatomic) BOOL isEmployee; // @synthesize isEmployee=_isEmployee;
@property(readonly, copy, nonatomic) FBMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg1 isEmployee:(BOOL)arg2;

@end

