//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBReactionAttachmentActionAdapterDelegate-Protocol.h"
#import "FBReactionAttachmentsDataSourceInteractionDelegate-Protocol.h"

@class FBReactionAdapterContext, FBReactionExperienceLogger, FBUserSession, NSString;
@protocol FBQueriedReactionUnitFieldsProtocol, UITableViewDataSource;

@interface FBReactionSeeMoreAttachmentsTableViewController : UITableViewController <FBReactionAttachmentsDataSourceInteractionDelegate, FBReactionAttachmentActionAdapterDelegate>
{
    id <FBQueriedReactionUnitFieldsProtocol> _unit;
    FBUserSession *_session;
    NSString *_reactionSessionId;
    NSString *_surface;
    FBUserSession *_userSession;
    FBReactionAdapterContext *_reactionContext;
    id <UITableViewDataSource> _strongDataSource;
    FBReactionExperienceLogger *_logger;
}

@property(retain, nonatomic) FBReactionExperienceLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <UITableViewDataSource> strongDataSource; // @synthesize strongDataSource=_strongDataSource;
- (void).cxx_destruct;
- (void)downloadUnitForReactionAttachmentActionAdapter:(id)arg1;
- (void)presentActionSheet:(id)arg1 forReactionAttachmentActionAdapter:(id)arg2;
- (void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (void)presentComposerWithBootstrapContent:(id)arg1 delegate:(id)arg2 forReactionAttachmentActionAdapter:(id)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)fb_showNavBarSearchField;
- (id)analyticsContentEventExtra;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)interactionTriggered:(id)arg1 withURL:(id)arg2 loggingExtras:(id)arg3 forAttachmentsDataSource:(id)arg4;
- (void)interactionTriggered:(id)arg1 withEntityAtIndex:(unsigned int)arg2 allEntitiesIDs:(id)arg3 entityGraphQLTypeName:(id)arg4 loggingExtras:(id)arg5 forAttachmentsDataSource:(id)arg6;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithReactionContext:(id)arg1 style:(int)arg2 reactionUnit:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

