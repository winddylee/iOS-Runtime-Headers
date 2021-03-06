/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECNowPlayingConsumer : _DECInternalConsumer <_DECNowPlayingFeedbackProviderProtocol> {
    void * _activity;
    _DECNowPlayingFeedbackProvider * _feedbackProvider;
    NSObject<OS_dispatch_queue> * _mediaremoteQueue;
    NSString * _mostRecentPredictionBundleId;
    int  _mostRecentPredictionReason;
    BOOL  _providedEngagementFeedback;
    NSObject<OS_dispatch_queue> * _queue;
}

@property void*activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _DECNowPlayingFeedbackProvider *feedbackProvider;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaremoteQueue;
@property (nonatomic, retain) NSString *mostRecentPredictionBundleId;
@property (nonatomic) int mostRecentPredictionReason;
@property (nonatomic) BOOL providedEngagementFeedback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupRecommendation;
- (void)_handleNowPlayingApplicationIsPlayingDidChange;
- (void)_provideRecommendationFeedback:(BOOL)arg1;
- (void)_recommend:(id)arg1;
- (void*)activity;
- (unsigned int)currentPlaybackState;
- (void)dealloc;
- (id)feedbackProvider;
- (void)feedbackProvider:(id)arg1 userEngaged:(BOOL)arg2;
- (void)fetchMediaRemoteNowPlayingApplicationBundleId:(id /* block */)arg1;
- (void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(id /* block */)arg1;
- (void)handleNowPlayingApplicationIsPlayingDidChange;
- (id)init;
- (BOOL)isLocked;
- (id)mediaremoteQueue;
- (id)mostRecentPredictionBundleId;
- (int)mostRecentPredictionReason;
- (BOOL)providedEngagementFeedback;
- (id)queue;
- (void)receivePrediction:(id)arg1 reply:(id /* block */)arg2;
- (void)setActivity:(void*)arg1;
- (void)setFeedbackProvider:(id)arg1;
- (void)setMediaremoteQueue:(id)arg1;
- (void)setMostRecentPredictionBundleId:(id)arg1;
- (void)setMostRecentPredictionReason:(int)arg1;
- (void)setProvidedEngagementFeedback:(BOOL)arg1;
- (void)setQueue:(id)arg1;

@end
