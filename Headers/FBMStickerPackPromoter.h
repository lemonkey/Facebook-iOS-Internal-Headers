//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBMStickerPackPromoter : NSObject
{
    unsigned int _layoutIdiom;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_queueDownloadForStickerPack:(id)arg1;
- (void)promoteStickerPacks:(id)arg1;
- (id)initWithLayoutIdiom:(unsigned int)arg1 session:(id)arg2;

@end

