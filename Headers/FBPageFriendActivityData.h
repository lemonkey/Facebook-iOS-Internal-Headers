//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPageFriendActivityData : NSObject <NSCopying>
{
    NSArray *_facepile;
    NSArray *_substringsToBold;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSArray *substringsToBold; // @synthesize substringsToBold=_substringsToBold;
@property(readonly, copy, nonatomic) NSArray *facepile; // @synthesize facepile=_facepile;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isArray:(id)arg1 equalToOtherArray:(id)arg2;
- (BOOL)isEqualToFriendActivityData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 substringsToBold:(id)arg2 facepile:(id)arg3;

@end

