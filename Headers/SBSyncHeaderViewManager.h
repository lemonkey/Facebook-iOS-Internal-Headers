//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SBPrivacyBar, SBStackedBarsContainerView, SBSyncWarningBar;

@interface SBSyncHeaderViewManager : NSObject
{
    SBStackedBarsContainerView *_stackedBarsView;
    SBSyncWarningBar *_warningBar;
    SBPrivacyBar *_privacyBar;
    BOOL _hasConnectivityError;
    BOOL _hasWiFiError;
    BOOL _syncIsOff;
    BOOL _hasLowBattery;
    float _headerInsetHeight;
    float _topLayoutGuideLength;
    float _yPosition;
    float _lastScrollViewYPosition;
}

@property(nonatomic) float lastScrollViewYPosition; // @synthesize lastScrollViewYPosition=_lastScrollViewYPosition;
@property(nonatomic) float yPosition; // @synthesize yPosition=_yPosition;
@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) float headerInsetHeight; // @synthesize headerInsetHeight=_headerInsetHeight;
@property(nonatomic) BOOL hasLowBattery; // @synthesize hasLowBattery=_hasLowBattery;
@property(nonatomic) BOOL syncIsOff; // @synthesize syncIsOff=_syncIsOff;
@property(nonatomic) BOOL hasWiFiError; // @synthesize hasWiFiError=_hasWiFiError;
@property(nonatomic) BOOL hasConnectivityError; // @synthesize hasConnectivityError=_hasConnectivityError;
@property(readonly, nonatomic) SBPrivacyBar *privacyBar; // @synthesize privacyBar=_privacyBar;
@property(readonly, nonatomic) SBSyncWarningBar *warningBar; // @synthesize warningBar=_warningBar;
@property(readonly, nonatomic) SBStackedBarsContainerView *stackedBarsView; // @synthesize stackedBarsView=_stackedBarsView;
- (void).cxx_destruct;
- (void)updateVerticalOffsetForScrollViewOffset:(float)arg1;
- (void)_updateBottomBarIfNeeded;
- (id)initWithHeaderWidth:(float)arg1;
- (id)init;

@end

