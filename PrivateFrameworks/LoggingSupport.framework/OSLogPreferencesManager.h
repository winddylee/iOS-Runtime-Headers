/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogPreferencesManager : NSObject {
    NSString * _name;
    NSMutableDictionary * _prefs;
    NSString * _prefsFile;
}

@property (nonatomic) int enabledLevel;
@property (nonatomic) int persistedLevel;
@property (nonatomic, readonly) NSArray *processes;
@property (nonatomic, readonly) NSArray *subsystems;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_levelPrefs;
- (int)enabledLevel;
- (id)init;
- (int)persistedLevel;
- (id)processes;
- (void)reset;
- (void)resetAll;
- (void)resetAllProcesses;
- (void)resetAllSubsystems;
- (void)setEnabledLevel:(int)arg1;
- (void)setPersistedLevel:(int)arg1;
- (id)subsystems;

@end
