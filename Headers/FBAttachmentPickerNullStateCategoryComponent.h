//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBAttachmentPickerComponentContext, FBSearchComponentModel;

@interface FBAttachmentPickerNullStateCategoryComponent : CKCompositeComponent
{
    FBSearchComponentModel *_categoryEdgeModel;
    FBAttachmentPickerComponentContext *_context;
}

+ (id)newWithCategoryEdgeModel:(id)arg1 context:(id)arg2 useCustomWebView:(BOOL)arg3;
@property(readonly, nonatomic) FBAttachmentPickerComponentContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FBSearchComponentModel *categoryEdgeModel; // @synthesize categoryEdgeModel=_categoryEdgeModel;
- (void).cxx_destruct;

@end

