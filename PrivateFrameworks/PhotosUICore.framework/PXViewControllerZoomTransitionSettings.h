/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerZoomTransitionSettings : PXSettings {
    BOOL  _animateEndPointsContents;
    BOOL  _animateViewControllersViews;
    int  _animationType;
    int  _crossfadeType;
    float  _maximumZoomScale;
    float  _minimumZoomScale;
    BOOL  _showRectsOfInterest;
    float  _titleCrossfadeAmount;
    double  _transitionDuration;
}

@property (nonatomic) BOOL animateEndPointsContents;
@property (nonatomic) BOOL animateViewControllersViews;
@property (nonatomic) int animationType;
@property (nonatomic) int crossfadeType;
@property (nonatomic) float maximumZoomScale;
@property (nonatomic) float minimumZoomScale;
@property (nonatomic) BOOL showRectsOfInterest;
@property (nonatomic) float titleCrossfadeAmount;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)animateEndPointsContents;
- (BOOL)animateViewControllersViews;
- (int)animationType;
- (int)crossfadeType;
- (float)maximumZoomScale;
- (float)minimumZoomScale;
- (void)setAnimateEndPointsContents:(BOOL)arg1;
- (void)setAnimateViewControllersViews:(BOOL)arg1;
- (void)setAnimationType:(int)arg1;
- (void)setCrossfadeType:(int)arg1;
- (void)setDefaultValues;
- (void)setMaximumZoomScale:(float)arg1;
- (void)setMinimumZoomScale:(float)arg1;
- (void)setShowRectsOfInterest:(BOOL)arg1;
- (void)setTitleCrossfadeAmount:(float)arg1;
- (void)setTransitionDuration:(double)arg1;
- (BOOL)showRectsOfInterest;
- (float)titleCrossfadeAmount;
- (double)transitionDuration;

@end
