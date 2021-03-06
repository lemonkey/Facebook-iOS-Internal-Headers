//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBKeyboardObserverDelegate-Protocol.h"

@class FBKeyboardObserver, NSString;

@interface FBKeyboardStateTracker : NSObject <FBKeyboardObserverDelegate>
{
    struct CGRect _keyboardBeginFrame;
    struct CGRect _keyboardEndFrame;
    BOOL _trackingKeyboardState;
    FBKeyboardObserver *_keyboardObserver;
    int _keyboardState;
}

+ (id)sharedKeyboardStateTracker;
@property(nonatomic) int keyboardState; // @synthesize keyboardState=_keyboardState;
- (void).cxx_destruct;
- (void)_clearKeyboardState;
@property(readonly, nonatomic) struct CGRect keyboardEndFrame;
@property(readonly, nonatomic) struct CGRect keyboardBeginFrame;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)stopTrackingKeyboardState;
- (void)startTrackingKeyboardState;
- (void)dealloc;
- (id)init;
- (BOOL)willKeyboardShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

