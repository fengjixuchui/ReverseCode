//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class AddressBookArchive, NSLocale, NSMutableArray, NSMutableDictionary, NSString;

@interface MMAddressBookMgr : MMService <PBMessageObserverDelegate, MMService, IMsgExt>
{
    NSMutableArray *m_phoneContacts;
    NSMutableDictionary *m_phoneAddressBooks;
    NSMutableDictionary *m_emailAddressBooks;
    AddressBookArchive *m_addressBookArchive;
    _Bool m_isSyningAddressBook;
    _Bool m_isFirstSync;
    _Bool m_bLocalAddressBookChanged;
    _Bool m_bShouldResponeAddressBookChange;
    NSLocale *m_curLocale;
    NSMutableArray *m_countryCodes;
    _Bool m_bTempCanSyncAddressBook;
    _Bool m_bHasLoadAddressBook;
}

+ (_Bool)isMobileVerifiedForStatic;
+ (_Bool)isBindMobile;
+ (_Bool)isPhoneUploaded:(id)arg1;
+ (id)getDefaultPhoneLabel;
+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3;
+ (id)validEmail:(id)arg1;
+ (id)validPhoneNumber:(id)arg1;
@property(nonatomic) _Bool m_bTempCanSyncAddressBook; // @synthesize m_bTempCanSyncAddressBook;
@property(nonatomic) _Bool m_bShouldResponeAddressBookChange; // @synthesize m_bShouldResponeAddressBookChange;
- (void).cxx_destruct;
- (void)BlockLoadAddressMobile:(id)arg1 Email:(id)arg2 Status:(unsigned int *)arg3;
- (id)newContactStore:(unsigned int *)arg1;
- (unsigned int)getAddressBookStatus;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (id)getCurCountryCode;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (id)findCountryWrapFromCountryCode:(id)arg1 WithLocaleIdentifier:(id)arg2;
- (id)getAllCountryCodeForLocaleIdentifier:(id)arg1;
- (id)findCountryWrapFromCountryCode:(id)arg1;
- (id)getAllCountryCode;
- (void)setCanSyncAddressBook:(_Bool)arg1;
- (_Bool)canSyncAddressBook;
- (_Bool)isMobileVerified;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)safeSyncedData:(id)arg1;
- (void)revertLocalAddressBook;
- (void)checkReloadByLocalAddressBookChanged;
- (void)setLocalAddressBookChanged;
- (void)clearLocalSnapshot;
- (void)trySyncAddressBook;
- (void)uploadNewPhones:(id)arg1 withNewMD5Emails:(id)arg2;
- (id)getNewMD5Emails;
- (id)getNewPhones;
- (void)updateUploadedList;
- (void)LoadAddressBookArchive;
- (_Bool)SaveAddressBookArchive;
- (id)getPhoneAddressBooks;
- (id)getAddressBooks;
- (id)getPhoneContacts;
- (id)getNickNameForPhone:(id)arg1;
- (_Bool)CheckPhoneInAddressBook:(id)arg1;
- (id)getAddressBookForPhone:(id)arg1;
- (void)onServiceInit;
- (id)init;
- (void)removeNotificationCenterObservers;
- (void)addNotificationCenterObservers;
- (void)tryLoad;
- (void)onContactStoreDidChange:(id)arg1;
- (void)load;
- (void)doLoadFromDBUseBlock:(_Bool)arg1;
- (void)addToCacheInMainThreadWithPhone:(id)arg1 email:(id)arg2 phoneContacts:(id)arg3;
- (_Bool)isAddressBookLoaded;
- (id)newContactStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

