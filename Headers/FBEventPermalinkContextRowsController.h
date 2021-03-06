//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBEventContextRowsViewDelegateProtocol-Protocol.h"

@class FBEventAnalyticTracker, FBEventPermalinkToolbox, FBMemEvent, NSString;

@interface FBEventPermalinkContextRowsController : NSObject <FBEventContextRowsViewDelegateProtocol>
{
    FBEventPermalinkToolbox *_toolbox;
    FBEventAnalyticTracker *_tracker;
    FBMemEvent *_event;
}

@property(retain, nonatomic) FBMemEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)didTapHostEventsItem:(id)arg1;
- (void)didTapInvitedByItem:(id)arg1;
- (void)didTapGroupItem:(id)arg1;
- (void)didTapTicketsItem:(id)arg1;
- (void)didTapJoinedList:(id)arg1;
- (void)didTapTimeItem:(id)arg1;
- (void)didTapLocationItem:(id)arg1;
- (id)initWithEvent:(id)arg1 toolbox:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

