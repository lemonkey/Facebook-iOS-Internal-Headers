//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface FBPresencePostPublicationResponse : FBValueObject <NSCopying>
{
    NSString *_postID;
    NSDate *_postDate;
}

@property(readonly, copy, nonatomic) NSDate *postDate; // @synthesize postDate=_postDate;
@property(readonly, copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
- (void).cxx_destruct;
- (id)initWithPostID:(id)arg1 postDate:(id)arg2;

@end

