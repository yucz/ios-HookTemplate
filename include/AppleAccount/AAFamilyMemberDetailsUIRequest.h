/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString;

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest {

	NSNumber* _memberDSID;
	NSString* _memberEmail;

}

@property (nonatomic,copy) NSNumber * memberDSID;               //@synthesize memberDSID=_memberDSID - In the implementation block
@property (nonatomic,copy) NSString * memberEmail;              //@synthesize memberEmail=_memberEmail - In the implementation block
-(id)urlString;
-(char)isUserInitiated;
-(NSNumber *)memberDSID;
-(void)setMemberDSID:(NSNumber *)arg1 ;
-(NSString *)memberEmail;
-(void)setMemberEmail:(NSString *)arg1 ;
-(id)urlRequest;
@end

