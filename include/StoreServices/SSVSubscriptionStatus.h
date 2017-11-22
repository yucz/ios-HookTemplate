//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVSubscriptionStatus : NSObject
-(id)initWithUserDefaultsRepresentation:(id)representation ;
-(void)resetAccountBasedProperties;
-(void)resetCarrierBundlingProperties;
-(void)setAcceptedStoreTermsVersion:(unsigned long long)version ;
-(void)setCellularOperatorName:(NSString *)name ;
-(void)setDiscoveryModeEligible:(BOOL)eligible ;
-(void)setSubscriptionExpirationDate:(NSDate *)date ;
-(void)setFamilyOrganizer:(BOOL)organizer ;
-(void)setFamilySubscription:(BOOL)subscription ;
-(void)setFreeTrialIneligible:(BOOL)ineligible ;
-(void)setHasFamily:(BOOL)family ;
-(void)setHasFamilyMembers:(BOOL)members ;
-(void)setHasOfflineSlots:(BOOL)slots ;
-(void)setLatestStoreTermsVersion:(unsigned long long)version ;
-(void)setSubscriptionPurchaser:(BOOL)purchaser ;
-(void)_setSubscribed:(BOOL)subscribed ;
-(void)setAccountPermissions:(NSArray *)permissions ;
-(void)setRawResponseData:(NSDictionary *)data ;
-(NSArray *)accountPermissions;
-(NSString *)cellularOperatorName;
-(BOOL)hasOfflineSlots;
-(BOOL)isSubscriptionPurchaser;
-(NSDate *)subscriptionExpirationDate;
-(id)copyUserDefaultsRepresentation;
-(void)setValuesUsingStatusDictionary:(id)dictionary ;
-(BOOL)hasOfflineSlot;
-(NSString *)description;
-(NSString *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)phoneNumber;
-(void)setSubscribed:(BOOL)subscribed ;
-(long long)carrierBundlingStatus;
-(BOOL)isSubscribed;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setCarrierBundlingStatus:(long long)status ;
-(BOOL)isDiscoveryModeEligible;
-(NSDictionary *)rawResponseData;
-(NSNumber *)accountIdentifier;
-(void)setPhoneNumber:(NSString *)number ;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(long long)accountStatus;
-(BOOL)isFamilySubscription;
-(BOOL)hasFamily;
-(BOOL)isFamilyOrganizer;
-(BOOL)hasFamilyMembers;
-(BOOL)isFreeTrialIneligible;
-(unsigned long long)latestStoreTermsVersion;
-(unsigned long long)acceptedStoreTermsVersion;
-(void)setAccountStatus:(long long)status ;
-(void)setSessionIdentifier:(NSString *)identifier ;
@end
