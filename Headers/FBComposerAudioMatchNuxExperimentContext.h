//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBComposerAudioMatchNuxExperimentContext : FBExperimentContext
{
    unsigned int _occurrences;
    NSString *_contentWatching;
    NSString *_contentListening;
    NSString *_categories;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(copy, nonatomic) NSString *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *contentListening; // @synthesize contentListening=_contentListening;
@property(copy, nonatomic) NSString *contentWatching; // @synthesize contentWatching=_contentWatching;
@property(nonatomic) unsigned int occurrences; // @synthesize occurrences=_occurrences;
- (void).cxx_destruct;

@end

