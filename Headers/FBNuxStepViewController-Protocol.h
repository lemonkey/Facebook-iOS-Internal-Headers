//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBNUXViewControllerDelegate, FBNuxStep;

@protocol FBNuxStepViewController <NSObject>
@property(nonatomic) __weak id <FBNUXViewControllerDelegate> delegate;
- (void)setStepProgress:(unsigned int)arg1 ofTotal:(unsigned int)arg2;
- (void)transitionToSubStep:(id <FBNuxStep>)arg1;
- (id)initWithStep:(id <FBNuxStep>)arg1;
@end

