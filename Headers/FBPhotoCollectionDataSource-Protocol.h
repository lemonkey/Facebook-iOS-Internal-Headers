//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBMemPhoto;

@protocol FBPhotoCollectionDataSource
@property(readonly, nonatomic) unsigned int photosCount;
@property(nonatomic) unsigned int photoIndex;
@property(nonatomic) BOOL selectedPhotoIsInvalid;
@property(readonly, nonatomic) FBMemPhoto *photo;
@property(readonly, nonatomic) BOOL hasMoreToSync;
@end

