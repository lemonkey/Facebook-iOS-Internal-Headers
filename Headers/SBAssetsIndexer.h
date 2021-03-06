//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, SBIndexOperation;

@interface SBAssetsIndexer : NSObject
{
    ALAssetsLibrary *_library;
    unsigned int _numberOfAssetsInLibrary;
    BOOL _shouldReIndex;
    BOOL _isLibraryOpened;
    SBIndexOperation *_running;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (id)sharedIndexer;
- (void).cxx_destruct;
- (void)checkIfAssetIsEditedForURL:(id)arg1 checkBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchImageForURL:(id)arg1 resolution:(unsigned int)arg2 numRetriesLeft:(int)arg3 error:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (unsigned int)numberOfAssetsInLibrary;
- (void)_startIndexOperationWithDateIntervals:(id)arg1 maxAssetsToIndex:(int)arg2 callbackQueue:(id)arg3;
- (void)indexAssetsWithinDateIntervals:(id)arg1 maxAssetsToIndex:(int)arg2 completionBlock:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_onAssetsLibraryChanged:(id)arg1;
- (void)fetchImageThumbnailForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchImageForURL:(id)arg1 resolution:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (BOOL)isIndexing;
- (void)cancelIndexingOperation;
- (void)openLibraryWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

