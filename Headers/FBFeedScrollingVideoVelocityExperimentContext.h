//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBFeedScrollingVideoVelocityExperimentContext : FBExperimentContext
{
    double _playThreshold;
    double _slowdownMultiplier;
    double _scrollDirectionChangeCostRatio;
    double _lastScrollVelocityRatio;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) double lastScrollVelocityRatio; // @synthesize lastScrollVelocityRatio=_lastScrollVelocityRatio;
@property(readonly, nonatomic) double scrollDirectionChangeCostRatio; // @synthesize scrollDirectionChangeCostRatio=_scrollDirectionChangeCostRatio;
@property(readonly, nonatomic) double slowdownMultiplier; // @synthesize slowdownMultiplier=_slowdownMultiplier;
@property(readonly, nonatomic) double playThreshold; // @synthesize playThreshold=_playThreshold;

@end

