/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2017 at 12:02:23 AM China Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AuthKit/AuthKit-Structs.h>
@class NSDate;

@interface AKAbsintheSigner : NSObject {

	NACContextOpaque_Ref _context;
	NSDate* _contextCreationDate;

}
+(id)sharedSigner;
-(void)dealloc;
-(id)signatureForURLRequest:(id)arg1 ;
-(NACContextOpaque_Ref)_createSigningContext;
-(BOOL)_didSigningContextExpire;
-(void)_destroySigningContext;
@end

