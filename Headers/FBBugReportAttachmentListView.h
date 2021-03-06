//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class FBBugReportAddAttachmentView, NSMutableArray;

@interface FBBugReportAttachmentListView : UIScrollView
{
    float _attachmentHeight;
    float _horizontalInterAttachmentOffset;
    float _verticalTopMargin;
    int _maxNumScreenshots;
    NSMutableArray *_attachmentViews;
    float _attachmentWidth;
    FBBugReportAddAttachmentView *_addScreenshotView;
}

@property(retain, nonatomic) FBBugReportAddAttachmentView *addScreenshotView; // @synthesize addScreenshotView=_addScreenshotView;
@property(readonly, nonatomic) float attachmentWidth; // @synthesize attachmentWidth=_attachmentWidth;
@property(retain, nonatomic) NSMutableArray *attachmentViews; // @synthesize attachmentViews=_attachmentViews;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)calculateSizeThatFitsAndLayoutSubviews:(BOOL)arg1;
- (void)initializeLayoutParameters;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

@end

