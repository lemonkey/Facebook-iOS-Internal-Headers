//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface FBContainerViewController : UIViewController
{
    int _containerVisibilityState;
}

- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewController:(id)arg1 didDisappearAnimated:(BOOL)arg2;
- (void)viewController:(id)arg1 willDisappearAnimated:(BOOL)arg2;
- (void)viewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
- (void)viewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)init;

@end

