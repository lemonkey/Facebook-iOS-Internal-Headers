//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol FBMStickerPresenterDataSource, FBMStickerPresenterDelegate;

@protocol FBMStickerTrayPresenter <NSObject>
@property(nonatomic) __weak id <FBMStickerPresenterDelegate> presenterDelegate;
@property(nonatomic) __weak id <FBMStickerPresenterDataSource> presenterDataSource;
- (void)setSearchingInFullScreen:(BOOL)arg1;
- (void)tearDown;
- (void)reloadPresenter;
- (void)setSelectedTabIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (UIView *)getView;
@end

