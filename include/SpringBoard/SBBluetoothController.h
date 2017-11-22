/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBBluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;

}
+(id)sharedInstance;
-(void)startWatchingForDevices;
-(void)updateBattery;
-(BOOL)tetheringConnected;
-(void)stopWatchingForDevices;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)iapDeviceChanged:(id)arg1 ;
-(void)connectionChanged:(id)arg1 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)batteryChanged:(id)arg1 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)noteDevicesChanged;
-(void)updateTetheringConnected;
-(BOOL)canReportBatteryLevel;
-(id)deviceForAudioRoute:(id)arg1 ;
-(void)dealloc;
-(int)batteryLevel;
@end
