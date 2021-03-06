//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBMusicApplication, FBMusicMusician, NSArray, NSString, NSURL;

@interface FBMusicSong : FBValueObject <NSCopying>
{
    NSString *_fbid;
    NSString *_title;
    NSArray *_iOSURLs;
    NSURL *_previewURL;
    NSURL *_artworkURL;
    FBMusicApplication *_application;
    FBMusicMusician *_musician;
}

@property(readonly, copy, nonatomic) FBMusicMusician *musician; // @synthesize musician=_musician;
@property(readonly, copy, nonatomic) FBMusicApplication *application; // @synthesize application=_application;
@property(readonly, copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, copy, nonatomic) NSArray *iOSURLs; // @synthesize iOSURLs=_iOSURLs;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
- (void).cxx_destruct;
- (id)initWithFbid:(id)arg1 title:(id)arg2 iOSURLs:(id)arg3 previewURL:(id)arg4 artworkURL:(id)arg5 application:(id)arg6 musician:(id)arg7;

@end

