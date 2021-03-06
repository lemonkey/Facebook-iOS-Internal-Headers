//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBGroupGroupCommerceMenuViewDelegate-Protocol.h"

@class FBGroupGroupCommerceMenuView, FBGroupGroupCommerceView, FBUserSession, NSArray, NSMutableArray, NSString;

@interface FBGroupGroupCommerceViewController : UIViewController <FBGroupGroupCommerceMenuViewDelegate>
{
    FBGroupGroupCommerceView *_filteredGroupFeedView;
    FBGroupGroupCommerceMenuView *_menuView;
    FBUserSession *_session;
    NSMutableArray *_menuButtons;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
    unsigned int _selectedIndex;
}

@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)analyticsModule;
- (BOOL)fb_showNavBarSearchField;
- (void)_switchToItemIndex:(unsigned int)arg1 fromIndex:(unsigned int)arg2;
- (void)menuItemTapped:(unsigned int)arg1;
- (void)_initSelectedIndex:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 groupFBID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

