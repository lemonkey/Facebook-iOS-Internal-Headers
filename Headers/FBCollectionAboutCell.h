//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionListCell.h"

@interface FBCollectionAboutCell : FBCollectionListCell
{
}

+ (unsigned int)iconSize;
+ (float)verticalPadding;
+ (float)horizontalPadding;
+ (unsigned int)maxNumberOfSubtitleLines;
+ (unsigned int)maxNumberOfTitleLines;
+ (id)subtitleColor;
+ (id)titleColor;
+ (unsigned int)titleFontSize;
+ (float)imageBorderWidth;
+ (float)desiredHeightForCollectionItem:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (float)textBoundingWidthConstrainedToSize:(struct CGSize)arg1;
+ (float)desiredHeight;
- (void)layoutSubviews;
- (id)imageURLString;

@end

