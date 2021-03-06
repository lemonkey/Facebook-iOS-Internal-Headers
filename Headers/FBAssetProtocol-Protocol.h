//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAsset, NSDictionary, NSString, NSURL, PHAsset, UIImage;

@protocol FBAssetProtocol <NSObject>
- (PHAsset *)phAsset;
- (ALAsset *)alAsset;
- (unsigned int)backedStorage;
- (NSDictionary *)metadata;
- (struct CGSize)dimensions;
- (UIImage *)imageWithMode:(unsigned int)arg1 targetDimension:(int)arg2 networkAccessAllowed:(BOOL)arg3;
- (UIImage *)imageWithMode:(unsigned int)arg1;
- (UIImage *)aspectRatioThumbnail;
- (UIImage *)thumbnail;
- (NSURL *)assetURL;
- (BOOL)assetIsPlayable;
- (NSString *)assetUTIType;
- (NSString *)assetType;
- (BOOL)canUseFullResolutionImage;
- (id)valueForProperty:(NSString *)arg1;
@end

