/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2017 at 12:02:23 AM China Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
//#import <libobjc.A.dylib/NSSecureCoding.h>
//#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, NSString, NSLocale, NSData;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isMonitoringUnlockEvents;
	NSLock* _monitoringLock;
	NSString* _serverFriendlyDescription;
	NSString* _uniqueDeviceIdentifier;
	NSString* _color;
	NSString* _enclosureColor;
	NSLocale* _locale;

}

@property (readonly) NSData * serializedData; 
@property (copy) NSString * serverFriendlyDescription;                             //@synthesize serverFriendlyDescription=_serverFriendlyDescription - In the implementation block
@property (copy) NSString * uniqueDeviceIdentifier;                                //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (copy) NSString * color;                                                 //@synthesize color=_color - In the implementation block
@property (copy) NSString * enclosureColor;                                        //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (copy) NSLocale * locale;                                                //@synthesize locale=_locale - In the implementation block
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * userChosenName; 
@property (readonly) NSString * internationalMobileEquipmentIdentity; 
@property (readonly) BOOL isProtectedWithPasscode; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * mobileEquipmentIdentifier; 
@property (readonly) NSString * integratedCircuitCardIdentifier; 
@property (readonly) BOOL isInternalBuild; 
@property (readonly) BOOL isMultiUserMode; 
@property (assign) BOOL hasBeenUnlockedSinceLastCheckIn; 
+(id)currentDevice;
+(BOOL)supportsSecureCoding;
+(id)_osVersion;
+(id)_lookUpCurrentUniqueDeviceID;
+(id)_generateServerFriendlyDescription;
+(id)_lookUpCurrentColor;
+(id)_lookUpCurrentEnclosureColor;
+(id)_hardwareModel;
+(id)_osName;
+(id)_buildNumber;
+(id)deviceWithSerializedData:(id)arg1 ;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg1 ;
-(NSString *)uniqueDeviceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)phoneNumber;
-(NSLocale *)locale;
-(NSString *)enclosureColor;
-(NSString *)serverFriendlyDescription;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(void)setServerFriendlyDescription:(NSString *)arg1 ;
-(BOOL)hasBeenUnlockedSinceLastCheckIn;
-(void)setHasBeenUnlockedSinceLastCheckIn:(BOOL)arg1 ;
-(NSString *)userChosenName;
-(BOOL)isProtectedWithPasscode;
-(NSString *)integratedCircuitCardIdentifier;
-(BOOL)isMultiUserMode;
-(NSString *)mobileEquipmentIdentifier;
-(NSString *)internationalMobileEquipmentIdentity;
-(NSData *)serializedData;
-(NSString *)serialNumber;
-(BOOL)isInternalBuild;
-(void)setEnclosureColor:(NSString *)arg1 ;
@end

