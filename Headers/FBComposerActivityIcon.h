//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBComposerActivityIcon : FBValueObject <NSCopying>
{
    unsigned int _height;
    unsigned int _width;
    NSString *_uri;
}

@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)initWithHeight:(unsigned int)arg1 width:(unsigned int)arg2 uri:(id)arg3;

@end

