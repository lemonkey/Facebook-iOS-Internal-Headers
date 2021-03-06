//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsPlayableVideoThumbnailComponent : CKCompositeComponent
{
    id _video;
    FBSearchResultsContext *_context;
    CKComponent *_thumbnailComponent;
    int _thumbnailType;
    FBSearchComponentModel *_videoEdgeModel;
}

+ (id)newWithVideoEdgeModel:(id)arg1 playerStyle:(unsigned int)arg2 size:(const struct CKComponentSize *)arg3 context:(id)arg4;
@property(readonly, nonatomic) FBSearchComponentModel *videoEdgeModel; // @synthesize videoEdgeModel=_videoEdgeModel;
@property(readonly, nonatomic) int thumbnailType; // @synthesize thumbnailType=_thumbnailType;
@property(readonly, nonatomic) CKComponent *thumbnailComponent; // @synthesize thumbnailComponent=_thumbnailComponent;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id video; // @synthesize video=_video;
- (void).cxx_destruct;

@end

