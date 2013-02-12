/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAddress, GEOLatLng, NSString;

@interface GEOFeature : PBCodable {
    GEOAddress *_address;
    GEOLatLng *_center;
    NSInteger _featureType;
    NSString *_name;
}

@property(retain) GEOAddress *address;
@property(retain) GEOLatLng *center;
@property(retain) NSString *name;
@property NSInteger featureType;
@property(readonly) BOOL hasCenter;

- (id)address;
- (id)center;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)featureType;
- (BOOL)hasCenter;
- (id)init;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setFeatureType:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end