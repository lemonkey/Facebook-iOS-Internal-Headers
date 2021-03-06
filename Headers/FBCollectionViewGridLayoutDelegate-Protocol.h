//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, UIView;

@protocol FBCollectionViewGridLayoutDelegate <UICollectionViewDelegate>
- (BOOL)collectionView:(UIView *)arg1 shouldShowBackgroundViewForIndexPath:(NSIndexPath *)arg2;
- (int)collectionView:(UIView *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (struct UIEdgeInsets)collectionView:(UIView *)arg1 sectionInsetsForSection:(unsigned int)arg2;
- (float)collectionView:(UIView *)arg1 spacingBetweenRowsInSection:(unsigned int)arg2;
- (float)collectionView:(UIView *)arg1 heightForRowCellInSection:(unsigned int)arg2;
- (struct CGSize)collectionView:(UIView *)arg1 sizeForBackgroundHeaderViewInSection:(unsigned int)arg2;
@end

