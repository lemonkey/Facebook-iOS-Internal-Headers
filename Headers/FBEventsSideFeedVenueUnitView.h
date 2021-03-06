//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBFacepileView, FBLocationMapView, FBMemLocation, FBNetworkImageView, FBUserSession, NSString, UILabel;
@protocol FBEventsSideFeedVenueUnitViewDelegate;

@interface FBEventsSideFeedVenueUnitView : UIView
{
    FBUserSession *_session;
    NSString *_venueID;
    FBNetworkImageView *_coverPhoto;
    FBNetworkImageView *_profilePhoto;
    UILabel *_name;
    UILabel *_address;
    UILabel *_directions;
    FBLocationMapView *_mapView;
    FBMemLocation *_location;
    UILabel *_facepileTitle;
    FBFacepileView *_facepile;
    id <FBEventsSideFeedVenueUnitViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBEventsSideFeedVenueUnitViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_populateFacepileWithItems:(id)arg1;
- (BOOL)_shouldAnnotate:(id)arg1;
- (float)_spanLevelOf:(id)arg1;
- (void)_launchVenue;
- (void)_launchGoogleMaps;
- (void)_launchAppleMaps;
- (void)_launchMaps;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCoverPhotoURL:(id)arg1 profilePhotoURL:(id)arg2 name:(id)arg3 address:(id)arg4 location:(id)arg5 placeType:(id)arg6 facepileTitle:(id)arg7 facepileItems:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 venueID:(id)arg3;

@end

