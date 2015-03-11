/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@class NPSDomainAccessorInternal, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface NPSDomainAccessor : NSObject {
    NSObject<OS_dispatch_queue> *_externalQueue;
    NPSDomainAccessorInternal *_internalAccessor;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
}

@property(readonly) NSString * domain;
@property(retain) NSObject<OS_dispatch_queue> * externalQueue;
@property(retain) NPSDomainAccessorInternal * internalAccessor;
@property(retain) NSObject<OS_dispatch_queue> * invalidationQueue;
@property(readonly) NSUUID * pairingID;

+ (id)copyDomainList;
+ (id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2;
+ (void)resolveActivePairedDevicePairingID:(id*)arg1 pairingDataStore:(id*)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)copyKeyList;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)domain;
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (double)doubleForKey:(id)arg1;
- (id)externalQueue;
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (float)floatForKey:(id)arg1;
- (id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3;
- (id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4;
- (id)initWithDomain:(id)arg1 queue:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2;
- (int)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (int)integerForKey:(id)arg1;
- (id)internalAccessor;
- (void)invalidate;
- (id)invalidationQueue;
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2;
- (long long)longForKey:(id)arg1;
- (void)objectForKey:(id)arg1 completionHandler:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)pairingID;
- (id)queue;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setExternalQueue:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setInternalAccessor:(id)arg1;
- (void)setInvalidationQueue:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)synchronize;
- (void)synchronizeWithCompletionHandler:(id)arg1;

@end