//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVideoPlaybackEventListener-Protocol.h"
#import "FBVideoPluginEventListener-Protocol.h"

@protocol FBVideoPlaybackController;

@protocol FBVideoPluginView <FBVideoPlaybackEventListener, FBVideoPluginEventListener>
@property(readonly, nonatomic) unsigned int visibilityOptions;
@property(nonatomic) __weak id <FBVideoPlaybackController> videoController;
@property(nonatomic) struct CGRect videoFrame;
- (id)deepCopy;
@end

