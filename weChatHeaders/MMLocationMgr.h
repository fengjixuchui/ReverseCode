//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CLLocationManagerDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "TencentLBSLocationManagerDelegate.h"

@class AESEncryptObject, CLLocationManager, MMLocationCacheItem, MMLocationCacheStorage, MMLocationDB, MMWifiSSIDRetriever, NSMutableArray, NSString, RSAEncryptObject;

@interface MMLocationMgr : MMService <PBMessageObserverDelegate, TencentLBSLocationManagerDelegate, MMService, CLLocationManagerDelegate>
{
    NSMutableArray *m_loactionMgrList;
    NSMutableArray *m_unusedLocationMgr;
    MMLocationDB *m_locationDB;
    NSMutableArray *m_reversGeolocators;
    MMLocationCacheStorage *_locationCacheStorage;
    CLLocationManager *_locationMgrForAuthorization;
    _Bool _hasReportLocateError;
    NSMutableArray *_lbsLocationMgrList;
    RSAEncryptObject *_m_rsaEncryptObject;
    AESEncryptObject *_m_aesEncryptObject;
    MMLocationCacheItem *_m_realtimeLocationCache;
    MMWifiSSIDRetriever *_m_wifiSSIDRetriever;
    struct CGPath *_chinaBorder;
}

@property(nonatomic) struct CGPath *chinaBorder; // @synthesize chinaBorder=_chinaBorder;
@property(retain, nonatomic) MMWifiSSIDRetriever *m_wifiSSIDRetriever; // @synthesize m_wifiSSIDRetriever=_m_wifiSSIDRetriever;
@property(retain, nonatomic) MMLocationCacheItem *m_realtimeLocationCache; // @synthesize m_realtimeLocationCache=_m_realtimeLocationCache;
@property(retain, nonatomic) AESEncryptObject *m_aesEncryptObject; // @synthesize m_aesEncryptObject=_m_aesEncryptObject;
@property(retain, nonatomic) RSAEncryptObject *m_rsaEncryptObject; // @synthesize m_rsaEncryptObject=_m_rsaEncryptObject;
@property(retain, nonatomic) NSMutableArray *lbsLocationMgrList; // @synthesize lbsLocationMgrList=_lbsLocationMgrList;
@property(readonly, nonatomic) MMLocationCacheStorage *locationCacheStorage; // @synthesize locationCacheStorage=_locationCacheStorage;
@property(retain, nonatomic) NSMutableArray *unusedLocationMgr; // @synthesize unusedLocationMgr=m_unusedLocationMgr;
@property(retain, nonatomic) NSMutableArray *loactionMgrList; // @synthesize loactionMgrList=m_loactionMgrList;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestWXGeocodeWithParam:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestReverseGeoWithParam:(id)arg1;
- (_Bool)isCoordinateInChina:(struct CLLocationCoordinate2D)arg1;
- (id)countryCodeFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (id)routeFromAddressDic:(id)arg1;
- (id)subLocalityFromAddressDic:(id)arg1;
- (id)evolvedCityFromAddressDic:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)provinceFromAddressDic:(id)arg1;
- (id)roughAddressFromAddressDic:(id)arg1;
- (id)shortAddressFromAddressDic:(id)arg1;
- (id)findDictionaryByKey:(id)arg1;
- (id)findDictionaryByGeo:(id)arg1;
- (void)stopUpdateAddressByTag:(unsigned long long)arg1;
- (void)stopGeoAddress:(id)arg1;
- (unsigned long long)updateAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)keyForLocation:(struct CLLocationCoordinate2D)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)onUpdateLocationFromLocationManager:(id)arg1;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)onUpdateLBSLocationFromLocationManager:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getRealtimeLocationCache;
- (id)getLastLocationCache;
- (void)updateLocationCache:(id)arg1 isMarsLocation:(_Bool)arg2;
- (void)saveLocationCacheStorage;
- (void)loadLocationCacheStorage;
- (id)getLocationCacheStorage;
- (_Bool)isUpdatingHeading:(unsigned long long)arg1;
- (void)stopUpdateHeading:(unsigned long long)arg1;
- (unsigned long long)startUpdateHeading;
- (_Bool)isUpdatingGPSLBSLocation:(unsigned long long)arg1;
- (void)stopUpdateGPSLBSLocation:(unsigned long long)arg1;
- (unsigned long long)startUpdateGPSLBSLocation:(_Bool)arg1 detailLevel:(unsigned long long)arg2 coordType:(unsigned long long)arg3 subKey:(id)arg4 enableIndoor:(_Bool)arg5;
- (_Bool)isUpdatingGPSLocation:(unsigned long long)arg1;
- (void)stopUpdateGPSLocation:(unsigned long long)arg1;
- (unsigned long long)startUpdateGPSLocation:(_Bool)arg1;
- (void)requestForAuthorization;
- (void)cleanUpUnusedLocationMgr;
- (void)addToUnusedLocationMgr:(id)arg1;
- (_Bool)isAccurateLocation:(id)arg1;
- (double)locationAccuracy:(id)arg1;
- (unsigned int)getCurrentWiFiInfoUpdateTimeStamp;
- (id)getCurrentWiFiBSSID;
- (id)getAESKeyWithRSAEncrypted;
- (id)getEncryptReportWithLocation:(_Bool)arg1 WithSSID:(_Bool)arg2;
- (id)getReportWithLocation:(_Bool)arg1 WithSSID:(_Bool)arg2;
- (void)updateWifiInfo;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)getExtraInfoFromAddressDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

