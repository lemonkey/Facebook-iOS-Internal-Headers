//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPhoto, FBStoryAttachmentAlbumPhotoView, NSArray, NSString;

@protocol FBMemPagePhotoCardCellDelegate <NSObject>
- (void)swipeCellPhoto:(FBMemPhoto *)arg1;
- (void)viewCellPhotosTapped:(id)arg1 withFBID:(NSString *)arg2 mediaKey:(NSString *)arg3 photoSource:(NSString *)arg4;
- (void)openCellPhoto:(FBMemPhoto *)arg1 withPhotoArray:(NSArray *)arg2 photoView:(FBStoryAttachmentAlbumPhotoView *)arg3 logEventName:(NSString *)arg4 mediaKey:(NSString *)arg5 photoIndex:(unsigned int)arg6;
@end

