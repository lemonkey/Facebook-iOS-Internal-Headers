//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBComposerPhotoOverlayView;
@protocol FBComposerPhotoOverlayAttachmentGestureHandler;

@interface FBComposerPhotoOverlayGestureHandlerHelpers : NSObject
{
    FBComposerPhotoOverlayView *_photoOverlayView;
    id <FBComposerPhotoOverlayAttachmentGestureHandler> _gestureHandler;
    struct CGPoint _attachmentStartCenter;
}

- (void).cxx_destruct;
- (void)handlePanGesture:(id)arg1;
- (id)initWithGestureHandler:(id)arg1 photoOverlayView:(id)arg2;

@end

