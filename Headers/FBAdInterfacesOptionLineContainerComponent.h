//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBAdInterfacesOptionLineContainerComponent : CKCompositeComponent
{
    SEL _optionSelectedAction;
    id _context;
}

+ (id)newWithComponent:(id)arg1 selected:(BOOL)arg2 optionSelectedAction:(SEL)arg3 context:(id)arg4;
+ (id)newWithComponent:(id)arg1 selected:(BOOL)arg2 optionSelectedAction:(SEL)arg3 context:(id)arg4 checkmarkImageNameSelected:(id)arg5 checkmarkImageNameDefault:(id)arg6;
- (void).cxx_destruct;
- (void)optionSelected;

@end

