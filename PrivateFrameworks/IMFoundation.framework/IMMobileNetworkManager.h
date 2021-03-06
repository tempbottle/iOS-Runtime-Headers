/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : IMNetworkManager {
    int _applySkipCount;
    BOOL _cachedAirplaneMode;
    void *_cellAssertion;
    NSMutableSet *_cellAutoAssociationTokens;
    struct __CTServerConnection { } *_ctServerConnection;
    BOOL _dataContextActive;
    NSMutableSet *_disableFastDormancyTokens;
    BOOL _isCachedAirplaneModeValid;
    NSRecursiveLock *_lock;
    struct __SCPreferences { } *_prefs;
    BOOL _registered;
    void *_serverConnection;
    BOOL _shouldBringUpDataContext;
    void *_suspendDormancyAssertion;
    NSMutableSet *_wiFiAutoAssociationTokens;
    void *_wifiManager;
}

@property int _applySkipCount;
@property BOOL _cachedAirplaneMode;
@property void* _cellAssertion;
@property struct __CTServerConnection { }* _ctServerConnection;
@property BOOL _isCachedAirplaneModeValid;
@property struct __SCPreferences { }* _prefs;
@property void* _serverConnection;
@property void* _suspendDormancyAssertion;
@property(readonly) BOOL autoAssociateCellular;
@property(readonly) BOOL autoAssociateWiFi;
@property(retain) NSMutableSet * cellularAutoAssociationTokens;
@property(readonly) BOOL dataConnectionExists;
@property BOOL dataContextActive;
@property(readonly) BOOL disableFastDormancy;
@property(retain) NSMutableSet * disableFastDormancyTokens;
@property(readonly) BOOL has2GDataConnection;
@property(readonly) BOOL hasLTEDataConnection;
@property(readonly) BOOL inValidSIMState;
@property(readonly) BOOL isAirplaneModeEnabled;
@property(readonly) BOOL isDataConnectionActive;
@property(readonly) BOOL isDataSwitchEnabled;
@property(readonly) BOOL isHostingWiFiHotSpot;
@property(readonly) BOOL isWiFiAssociated;
@property(readonly) BOOL isWiFiEnabled;
@property(retain) NSRecursiveLock * lock;
@property BOOL registered;
@property BOOL shouldBringUpDataContext;
@property(retain) NSMutableSet * wiFiAutoAssociationTokens;
@property(readonly) NSNumber * wiFiScaledRSSI;
@property(readonly) NSNumber * wiFiScaledRate;
@property(readonly) NSNumber * wiFiSignalStrength;
@property void* wifiManager;
@property(readonly) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly) BOOL willTryToSearchForWiFiNetwork;

- (void)__adjustFastDormancyTokens;
- (void)_adjustCelluarAutoAssociation;
- (void)_adjustCellularAutoAssociation;
- (void)_adjustFastDormancyTokens;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (int)_applySkipCount;
- (BOOL)_cachedAirplaneMode;
- (void*)_cellAssertion;
- (void)_createCTServerConnection;
- (void)_createWiFiManager;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (struct __CTServerConnection { }*)_ctServerConnection;
- (void*)_getValueForKey:(id)arg1;
- (void)_initializeSCPrefs:(id)arg1;
- (BOOL)_isCachedAirplaneModeValid;
- (BOOL)_isDataConnectionAvailable;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (void)_notifyTarget:(unsigned int)arg1;
- (struct __SCPreferences { }*)_prefs;
- (void)_releaseCTServerConnection;
- (void*)_serverConnection;
- (void)_setFastDormancySuspended:(BOOL)arg1;
- (void*)_suspendDormancyAssertion;
- (void)_synchronize;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)autoAssociateCellular;
- (BOOL)autoAssociateWiFi;
- (id)cellularAutoAssociationTokens;
- (BOOL)dataConnectionExists;
- (BOOL)dataContextActive;
- (void)dealloc;
- (BOOL)disableFastDormancy;
- (id)disableFastDormancyTokens;
- (BOOL)has2GDataConnection;
- (BOOL)hasLTEDataConnection;
- (BOOL)inValidSIMState;
- (id)init;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)isDataConnectionActive;
- (BOOL)isDataSwitchEnabled;
- (BOOL)isHostingWiFiHotSpot;
- (BOOL)isWiFiAssociated;
- (BOOL)isWiFiEnabled;
- (id)lock;
- (void)refresh;
- (BOOL)registered;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)setCellularAutoAssociationTokens:(id)arg1;
- (void)setDataConnectionActive:(BOOL)arg1;
- (void)setDataContextActive:(BOOL)arg1;
- (void)setDisableFastDormancyTokens:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setRegistered:(BOOL)arg1;
- (void)setShouldBringUpDataContext:(BOOL)arg1;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)set_applySkipCount:(int)arg1;
- (void)set_cachedAirplaneMode:(BOOL)arg1;
- (void)set_cellAssertion:(void*)arg1;
- (void)set_ctServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)set_isCachedAirplaneModeValid:(BOOL)arg1;
- (void)set_prefs:(struct __SCPreferences { }*)arg1;
- (void)set_serverConnection:(void*)arg1;
- (void)set_suspendDormancyAssertion:(void*)arg1;
- (BOOL)shouldBringUpDataContext;
- (void)showNetworkOptions;
- (id)wiFiAutoAssociationTokens;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (void*)wifiManager;
- (BOOL)willTryToAutoAssociateWiFiNetwork;
- (BOOL)willTryToSearchForWiFiNetwork;

@end
