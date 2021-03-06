//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBModalStandardizationExperimentContext : FBExperimentContext
{
    BOOL _useStandardModalWebView;
    BOOL _useStandardModalPhotoAlbum;
    BOOL _isPushBackEnabled;
    BOOL _isReverseAnimationEnabledInPhotoAlbum;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL isReverseAnimationEnabledInPhotoAlbum; // @synthesize isReverseAnimationEnabledInPhotoAlbum=_isReverseAnimationEnabledInPhotoAlbum;
@property(readonly, nonatomic) BOOL isPushBackEnabled; // @synthesize isPushBackEnabled=_isPushBackEnabled;
@property(readonly, nonatomic) BOOL useStandardModalPhotoAlbum; // @synthesize useStandardModalPhotoAlbum=_useStandardModalPhotoAlbum;
@property(readonly, nonatomic) BOOL useStandardModalWebView; // @synthesize useStandardModalWebView=_useStandardModalWebView;

@end

