/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationExitInfo : NSObject <NSCopying, BKSXPCCoding> {
    long long _status;
    int _terminationReason;
    BOOL _wasReceiver;
}

@property long long status;
@property int terminationReason;
@property BOOL wasReceiver;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTerminationReason:(int)arg1;
- (void)setWasReceiver:(BOOL)arg1;
- (long long)status;
- (int)terminationReason;
- (BOOL)wasReceiver;

@end