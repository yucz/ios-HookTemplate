/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:04 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDisplay <NSObject,SBDisplaySettings>
@required
-(id)statusBarStyleRequest;
-(BOOL)allowsEventOnlySuspension;
-(long long)starkStatusBarStyle;
-(id)effectiveStatusBarStyleRequest;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(id)copyDisplaySettings;
-(long long)statusBarStyle;
-(void)deactivate;
-(void)activate;

@end
