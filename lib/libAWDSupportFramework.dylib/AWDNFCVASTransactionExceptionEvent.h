/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {
    unsigned int _commandType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int commandType : 1; 
        unsigned int swStatus : 1; 
    } _has;
    unsigned int _swStatus;
    unsigned long long _timestamp;
    NSData *_uuidReference;
}

@property (nonatomic) unsigned int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) BOOL hasSwStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned int swStatus;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (unsigned int)commandType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCommandType;
- (BOOL)hasSwStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCommandType:(unsigned int)arg1;
- (void)setHasCommandType:(BOOL)arg1;
- (void)setHasSwStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSwStatus:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)swStatus;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end