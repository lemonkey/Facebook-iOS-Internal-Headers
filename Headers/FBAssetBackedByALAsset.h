//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAssetProtocol-Protocol.h"

@class ALAsset, NSString;

@interface FBAssetBackedByALAsset : NSObject <FBAssetProtocol>
{
    int _frameCountGIF;
    ALAsset *_asset;
}

@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)metadata;
- (struct CGSize)dimensions;
- (id)_fullResolutionImageWithTargetDimension:(int)arg1;
- (id)_fullResolutionImage;
- (id)_fullScreenImage;
- (id)imageWithMode:(unsigned int)arg1 targetDimension:(int)arg2 networkAccessAllowed:(BOOL)arg3;
- (id)imageWithMode:(unsigned int)arg1;
- (id)aspectRatioThumbnail;
- (id)thumbnail;
- (id)assetURL;
- (BOOL)assetIsPlayable;
- (id)assetUTIType;
- (id)assetType;
- (BOOL)canUseFullResolutionImage;
- (id)valueForProperty:(id)arg1;
- (id)phAsset;
- (id)alAsset;
- (unsigned int)backedStorage;
- (id)initWithALAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

