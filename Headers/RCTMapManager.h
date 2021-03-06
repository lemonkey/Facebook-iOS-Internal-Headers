//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "MKMapViewDelegate-Protocol.h"

@class NSString;

@interface RCTMapManager : RCTViewManager <MKMapViewDelegate>
{
}

+ (id)getPropConfigView_region;
+ (id)getPropConfigView_annotations;
+ (id)getPropConfigView_mapType;
+ (id)getPropConfigView_legalLabelInsets;
+ (id)getPropConfigView_minDelta;
+ (id)getPropConfigView_maxDelta;
+ (id)getPropConfigView_scrollEnabled;
+ (id)getPropConfigView_pitchEnabled;
+ (id)getPropConfigView_rotateEnabled;
+ (id)getPropConfigView_zoomEnabled;
+ (id)getPropConfigView_showsUserLocation;
+ (void)load;
+ (id)moduleName;
- (void)_emitRegionChangeEvent:(id)arg1 continuous:(BOOL)arg2;
- (void)_regionChanged:(id)arg1;
- (void)_onTick:(id)arg1;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)set_region:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_annotations:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_mapType:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_legalLabelInsets:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_minDelta:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_maxDelta:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_scrollEnabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_pitchEnabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_rotateEnabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_zoomEnabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_showsUserLocation:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

