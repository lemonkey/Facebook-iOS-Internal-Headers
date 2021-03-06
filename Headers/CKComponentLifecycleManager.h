//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CKComponentStateListener-Protocol.h"

@class CKComponentScopeRoot, NSSet, NSString, UIView;
@protocol CKComponentLifecycleManagerAsynchronousUpdateHandler, CKComponentLifecycleManagerDelegate, CKComponentSizeRangeProviding;

@interface CKComponentLifecycleManager : NSObject <CKComponentStateListener>
{
    UIView *_mountedView;
    NSSet *_mountedComponents;
    Class _componentProvider;
    id <CKComponentSizeRangeProviding> _sizeRangeProvider;
    struct Mutex _mutex;
    CKComponentScopeRoot *_previousRoot;
    unordered_multimap_0bf43592 _pendingStateUpdates;
    struct CKComponentLifecycleManagerState _state;
    id <CKComponentLifecycleManagerAsynchronousUpdateHandler> _asynchronousUpdateHandler;
    id <CKComponentLifecycleManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <CKComponentLifecycleManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CKComponentLifecycleManagerAsynchronousUpdateHandler> asynchronousUpdateHandler; // @synthesize asynchronousUpdateHandler=_asynchronousUpdateHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLifecycleManagerState)state;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned int)arg4;
- (id)scopeRoot;
- (id)model;
- (struct CGSize)size;
- (BOOL)isAttachedToView;
- (void)detachFromView;
- (void)attachToView:(id)arg1;
- (void)_mountLayout;
- (const struct CKComponentLayout *)componentLayout;
- (void)updateWithStateWithoutMounting:(const struct CKComponentLifecycleManagerState *)arg1;
- (void)updateWithState:(const struct CKComponentLifecycleManagerState *)arg1;
- (struct CKComponentLifecycleManagerState)prepareForUpdateWithModel:(id)arg1 constrainedSize:(struct CKSizeRange)arg2 context:(id)arg3;
- (void)dealloc;
- (id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2;
- (id)initWithComponentProvider:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

