//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemPageCardController.h"

#import "FBCardViewProvider-Protocol.h"
#import "FBPageGameMoreGamesCellDelegate-Protocol.h"

@class FBPageGameMoreGamesCell, NSString, UIView;
@protocol FBPageCardProtocol;

@interface FBMemPageGameMoreGamesCardController : FBMemPageCardController <FBPageGameMoreGamesCellDelegate, FBCardViewProvider>
{
    FBPageGameMoreGamesCell *_cardCell;
}

- (void).cxx_destruct;
- (void)didTapApp:(id)arg1 atIndex:(unsigned int)arg2;
- (void)configureWithPage:(id)arg1;
@property(readonly, nonatomic) UIView<FBPageCardProtocol> *cardView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

