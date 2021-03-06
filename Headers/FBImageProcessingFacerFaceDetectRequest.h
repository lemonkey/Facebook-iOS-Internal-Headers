//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBImageProcessingConcurrentRequest.h"

#import "FBImageProcessingFaceDetectRequestProtocol-Protocol.h"

@class NSArray, NSString, UIImage;

@interface FBImageProcessingFacerFaceDetectRequest : FBImageProcessingConcurrentRequest <FBImageProcessingFaceDetectRequestProtocol>
{
    UIImage *_image;
    NSArray *_detectedFaces;
}

@property(readonly, copy, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
- (void).cxx_destruct;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) BOOL canCancelRequestIfNeeded;
@property(nonatomic) BOOL canExecuteInBackground;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double requestTime;
@property(nonatomic) unsigned int status;
@property(readonly) Class superclass;

@end

