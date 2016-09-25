/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterPersistance : NSObject {
    struct sqlite3 { } * _db;
    BOOL  _enabled;
    struct sqlite3_stmt { } * _insertStmt;
    double  _maxAge;
    NSObject<OS_dispatch_queue> * _queue;
    NSDateFormatter * _sqlDateFormatter;
}

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (void)countsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)createTableWithDrop:(BOOL)arg1;
- (void)dealloc;
- (BOOL)enabled;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 withCompletion:(id /* block */)arg5;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 withCompletion:(id /* block */)arg4;
- (id)init;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (void)purgeAllCounts;
- (void)purgeOlderThan:(id)arg1;
- (void)setEnabled:(BOOL)arg1;

@end