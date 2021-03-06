//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDirectionalPanGestureRecognizerDelegate-Protocol.h"
#import "FBOrientationStateDelegate-Protocol.h"

@class ASDisplayNode, FBDirectionalPanGestureRecognizer, FBOrientationState, NSMutableOrderedSet, NSString, UIView;
@protocol FBPageableItem, FBPagingControllerDataSource, FBPagingControllerDelegate;

@interface FBPagingController : NSObject <FBDirectionalPanGestureRecognizerDelegate, FBOrientationStateDelegate>
{
    FBDirectionalPanGestureRecognizer *_panGestureRecognizer;
    id <FBPagingControllerDelegate> _delegate;
    id <FBPagingControllerDataSource> _dataSource;
    UIView *_gestureView;
    unsigned int _pagingAxis;
    float _nodePadding;
    BOOL _isPaging;
    struct _NSRange _pagingRange;
    ASDisplayNode<FBPageableItem> *_activeNode;
    ASDisplayNode<FBPageableItem> *_nodeThatWasActiveOrBecomingActive;
    ASDisplayNode<FBPageableItem> *_nodeThatMaySettleAsActivePage;
    NSMutableOrderedSet *_nodesThatBeganMoving;
    NSMutableOrderedSet *_pagingRangeNodes;
    NSMutableOrderedSet *_nodesPreparedForPaging;
    id _viewStateConfiguration;
    float _systemTranslation;
    float _systemTranslationAtGestureBegin;
    FBOrientationState *_orientationState;
    BOOL _supportsOrientationRotation;
    BOOL _temporarilyDisableOrientationRotation;
}

@property(readonly, nonatomic) BOOL isPaging; // @synthesize isPaging=_isPaging;
@property(retain, nonatomic) ASDisplayNode<FBPageableItem> *displayedNode; // @synthesize displayedNode=_activeNode;
@property(nonatomic) float nodePadding; // @synthesize nodePadding=_nodePadding;
@property(nonatomic) unsigned int pagingAxis; // @synthesize pagingAxis=_pagingAxis;
@property(nonatomic) __weak UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(nonatomic) __weak id <FBPagingControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FBPagingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBDirectionalPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(int)arg2;
- (BOOL)orientationState:(id)arg1 shouldBlockChangeToInterfaceOrientation:(int)arg2;
- (BOOL)orientationState:(id)arg1 supportsDeviceOrientation:(int)arg2;
- (void)orientationState:(id)arg1 didChangeToInterfaceOrientation:(int)arg2;
- (int)_activePagingDirectionForGestureRecognizer:(id)arg1;
- (float)_pagingVelocityForPanRecognizer:(id)arg1;
- (float)_pagingTranslationForPanRecognizer:(id)arg1;
- (struct CGPoint)_nodeTranslationForSystemTranslation:(float)arg1 underOrientation:(int)arg2;
- (float)_pagingComponentForPanTranslation:(struct CGPoint)arg1 underOrientation:(int)arg2;
- (void)_setTranslation:(float)arg1 forNode:(id)arg2;
- (void)_setSystemTranslation:(float)arg1;
- (float)_relevantSizeDimensionForNode:(id)arg1 underOrientation:(int)arg2;
- (id)_pagingRangeNodesCenteredAtNode:(id)arg1 beforeNode:(id *)arg2 afterNode:(id *)arg3 includeNeighbors:(BOOL)arg4;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleRotation;
- (void)_handlePan:(id)arg1;
- (void)_setOrientationTemporarilyDisabled:(BOOL)arg1;
- (BOOL)_currentlySupportsRotation;
- (void)_updatePagingRangeWithCenterNode:(id)arg1 includeNeighbors:(BOOL)arg2 cullPreviousItems:(BOOL)arg3 forOrientation:(int)arg4;
- (void)_activePageSettledAnimated:(BOOL)arg1;
- (void)_activePageMayChange;
- (void)_nodeMaySettleAsActivePage:(id)arg1 animated:(BOOL)arg2;
- (void)_setViewStateConfiguration:(id)arg1;
- (void)_setDisplayedNode:(id)arg1 animated:(BOOL)arg2 withVelocity:(float)arg3;
- (void)resetOrientation;
- (void)endPaging;
- (void)beginPagingWithNode:(id)arg1;
- (void)_reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

