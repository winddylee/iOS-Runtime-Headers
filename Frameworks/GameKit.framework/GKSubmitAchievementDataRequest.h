/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame;

@interface GKSubmitAchievementDataRequest : GKDataRequest {
    NSInteger _achievementID;
    GKGame *_game;
    BOOL _isAchieved;
    NSInteger _percentComplete;
    NSInteger _points;
}

@property(retain) GKGame *game;
@property NSInteger achievementID;
@property BOOL isAchieved;
@property NSInteger percentComplete;
@property NSInteger points;

- (NSInteger)achievementID;
- (NSInteger)cacheType;
- (void)dealloc;
- (id)game;
- (id)invalidateCacheKeys;
- (BOOL)isAchieved;
- (id)key;
- (NSInteger)percentComplete;
- (NSInteger)points;
- (id)request;
- (void)setAchievementID:(NSInteger)arg1;
- (void)setGame:(id)arg1;
- (void)setIsAchieved:(BOOL)arg1;
- (void)setPercentComplete:(NSInteger)arg1;
- (void)setPoints:(NSInteger)arg1;

@end