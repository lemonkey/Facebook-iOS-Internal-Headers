//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBLegacyVideoPlayerView, NSError;

@protocol FBLegacyVideoPlayerViewDelegate <NSObject>

@optional
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 playerIsStalled:(BOOL)arg2;
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 didUpdateLoadedTime:(double)arg2;
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 isInFullScreenMode:(BOOL)arg2;
- (void)videoViewIsReadyToPlay:(FBLegacyVideoPlayerView *)arg1;
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 failedWithError:(NSError *)arg2;
- (void)videoView:(FBLegacyVideoPlayerView *)arg1 didMute:(BOOL)arg2;
- (void)videoViewDidPlay:(FBLegacyVideoPlayerView *)arg1;
- (void)videoViewDidStall:(FBLegacyVideoPlayerView *)arg1;
- (void)videoViewDidPause:(FBLegacyVideoPlayerView *)arg1;
- (void)videoViewDidFinishPlaying:(FBLegacyVideoPlayerView *)arg1;
@end

