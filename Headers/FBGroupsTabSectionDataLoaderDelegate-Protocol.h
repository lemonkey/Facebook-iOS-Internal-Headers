//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGroupsTabSectionDataLoader, NSError;

@protocol FBGroupsTabSectionDataLoaderDelegate <NSObject>
- (void)dataLoader:(FBGroupsTabSectionDataLoader *)arg1 didEndDownloadForType:(int)arg2 error:(NSError *)arg3;
@end

