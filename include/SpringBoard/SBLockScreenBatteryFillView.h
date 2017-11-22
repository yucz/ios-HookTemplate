/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@interface SBLockScreenBatteryFillView : UIView {

	long long _chargePercentage;
	long long _lowBatteryLevel;
	BOOL _isInternalBattery;

}
-(id)initWithFrame:(CGRect)arg1 isInternalBattery:(BOOL)arg2 lowBatteryLevel:(long long)arg3 ;
-(void)setChargePercentage:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

