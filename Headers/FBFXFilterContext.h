//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLContext;

@interface FBFXFilterContext : NSObject
{
    EAGLContext *_glContext;
}

+ (void)performanceTest;
+ (void)apply:(CDUnknownBlockType)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationDidBecomeActive:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)blurWithTargetSize:(struct CGSize)arg1 apply:(CDUnknownBlockType)arg2;

@end

