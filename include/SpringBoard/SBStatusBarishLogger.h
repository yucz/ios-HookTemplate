/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBFileLogger.h>

@interface SBStatusBarishLogger : SBFileLogger {

	BOOL _useCustomDestinations;
	unsigned long long _customDestinations;

}
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2 ;
-(void)reloadFromDefaults;
-(unsigned long long)logDestinations;
-(BOOL)shouldEnableOnInternalBuilds;
@end

