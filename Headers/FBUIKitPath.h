//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FBUIKitPath : NSObject <NSCopying>
{
    struct CGPath *_CGPath;
}

@property(readonly, nonatomic) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCGPath:(struct CGPath *)arg1;

@end

