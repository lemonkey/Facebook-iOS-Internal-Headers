//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"

@class FBFeedComponentToolbox, FBFeedComponentToolboxManagerListenerAnnouncer, FBScenePath, FBUserSession, NSDictionary, NSString;
@protocol FBIntentHandler, FBNavigationCoordinator;

@interface FBFeedComponentToolboxManager : NSObject <FBAccessibilityInvalidationEventsListener>
{
    FBFeedComponentToolboxManagerListenerAnnouncer *_announcer;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    id <FBIntentHandler> _intentHandler;
    unsigned int _layoutIdiom;
    NSString *_analyticsModule;
    FBScenePath *_scenePath;
    NSDictionary *_optionalDependencies;
    FBFeedComponentToolbox *_toolbox;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)invalidateToolbox;
- (id)createToolbox;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didReceiveAccessibilityInvalidation;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 layoutIdiom:(unsigned int)arg4 analyticsModule:(id)arg5 scenePath:(id)arg6 optionalDependencies:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

