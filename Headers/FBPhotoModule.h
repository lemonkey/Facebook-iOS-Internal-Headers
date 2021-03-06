//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

@interface FBPhotoModule : FBNativeAppModule
{
    BOOL _shouldUseMemModelsForPhotoVCNotifications;
}

+ (id)photosTabViewControllerForPerson:(id)arg1 tabIndex:(int)arg2 session:(id)arg3;
+ (id)photosTabViewControllerForPerson:(id)arg1 session:(id)arg2;
+ (id)_photosTabViewControllerForPerson:(id)arg1 tabIndex:(int)arg2 session:(id)arg3;
+ (id)_presentableAlbumViewControllerForOwner:(id)arg1 withSession:(id)arg2;
+ (id)_mediaSetStoreForRequestProvider:(id)arg1 session:(id)arg2;
+ (BOOL)_isFamilyMemberMediaSetToken:(id)arg1;
+ (id)_familyMemberIDFromMediaSetToken:(id)arg1;
- (id)supportedKeys;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)URLSegues;
- (id)defaultMenuItem;
- (id)ID;
- (void)dealloc;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

@end

