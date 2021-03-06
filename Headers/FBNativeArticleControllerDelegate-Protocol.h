//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentHandler-Protocol.h"
#import "FBModalPresentationSource-Protocol.h"
#import "FBNativeArticleInteractionResponderForwarding-Protocol.h"
#import "NSObject-Protocol.h"

@class FBNativeArticleController, FBRichStoryBlock, NSDictionary, UIScrollView;

@protocol FBNativeArticleControllerDelegate <NSObject, FBIntentHandler, FBModalPresentationSource, FBNativeArticleInteractionResponderForwarding>

@optional
- (void)nativeArticleController:(FBNativeArticleController *)arg1 didFinishTransitionToPresentationAttributes:(NSDictionary *)arg2 forStoryBlock:(FBRichStoryBlock *)arg3;
- (void)nativeArticleController:(FBNativeArticleController *)arg1 willFinishTransitionToPresentationAttributes:(NSDictionary *)arg2 forStoryBlock:(FBRichStoryBlock *)arg3 animationConfig:(CDStruct_29228278)arg4;
- (void)nativeArticleController:(FBNativeArticleController *)arg1 didUpdateTransitionToPresentationAttributes:(NSDictionary *)arg2 forStoryBlock:(FBRichStoryBlock *)arg3 withProgress:(float)arg4;
- (void)nativeArticleController:(FBNativeArticleController *)arg1 didBeginTransitionToPresentationAttributes:(NSDictionary *)arg2 forStoryBlock:(FBRichStoryBlock *)arg3;
- (void)nativeArticleWillBeginDragging:(UIScrollView *)arg1;
- (void)nativeArticleDidScroll:(UIScrollView *)arg1;
- (void)nativeArticleControllerDidUpdateRendering:(FBNativeArticleController *)arg1;
@end

