/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUserCharacteristicsManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    <HDHealthDaemon> *_healthDaemon;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldUpdateQuantityCharacteristics;
    BOOL _shouldUpdateUserProfile;
    NSDate *_userProfileLastUpdated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, copy) NSDictionary *lastUserProfile;
@property (nonatomic) BOOL needsUpdateAfterUnlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BOOL shouldUpdateQuantityCharacteristics;
@property (nonatomic, readonly) BOOL shouldUpdateUserProfile;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *userProfileLastUpdated;

- (void).cxx_destruct;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateUserProfile;
- (BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id*)arg5;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1;
- (id)lastUserProfile;
- (BOOL)needsUpdateAfterUnlock;
- (id)queue;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setHealthDaemon:(id)arg1;
- (void)setLastUserProfile:(id)arg1;
- (void)setNeedsUpdateAfterUnlock:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)setUserProfileLastUpdated:(id)arg1;
- (BOOL)shouldUpdateQuantityCharacteristics;
- (BOOL)shouldUpdateUserProfile;
- (id)userCharacteristicForType:(id)arg1 error:(id*)arg2;
- (id)userProfileLastUpdated;

@end
