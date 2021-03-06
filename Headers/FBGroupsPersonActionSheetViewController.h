//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGroupsBasicPersonActionSheetViewController.h"

#import "FBGroupsPersonActionSheetViewControllerProtocol-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBGroupDownloadRequestProvider, FBMemGroup;

@interface FBGroupsPersonActionSheetViewController : FBGroupsBasicPersonActionSheetViewController <FBGroupsPersonActionSheetViewControllerProtocol>
{
    FBMemGroup *_group;
    FBGroupDownloadRequestProvider *_downloadProvider;
    FBConsistentLookasideCacheObservationHandle *_groupObservationHandle;
}

- (void).cxx_destruct;
- (void)_groupModelUpdated:(id)arg1;
- (void)_loadGroup:(id)arg1;
- (void)leaveGroupWithGroupID:(id)arg1;
- (id)groupWithGroupID:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 groupID:(id)arg2;

@end

