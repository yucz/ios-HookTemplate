/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBThermalWarningSuppressionAssertionDelegate.h>
#import <SpringBoard/SBThermalWarningAlertItemDelegate.h>

@class NSDictionary, NSMutableSet, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate> {

	BOOL _sampling;
	double _samplingStartTime;
	NSDictionary* _samplingStartCPUTimesByApp;
	int _sunlightStateToken;
	int _coldTempToken;
	int _warningAssertionToken;
	int _warningResponseToken;
	NSMutableSet* _warningSuppressionAssertions;
	BOOL _warningSuppressionPreference;
	int _level;
	BOOL _inSunlight;

}

@property (nonatomic,readonly) int level;                                        //@synthesize level=_level - In the implementation block
@property (getter=isInSunlight,nonatomic,readonly) BOOL inSunlight;              //@synthesize inSunlight=_inSunlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logThermalEvent:(id)arg1 ;
+(id)sharedInstance;
-(void)startListeningForThermalEvents;
-(BOOL)captureWarningSuppressionAssertionWithPort:(unsigned)arg1 reason:(id)arg2 ;
-(void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2 ;
-(void)respondToCurrentThermalCondition;
-(void)showThermalAlertIfNecessary;
-(void)_didReceiveWarningAction:(int)arg1 ;
-(void)_beginThermalJetsamCPUSampling;
-(void)_killThermallyActiveApplication;
-(void)_calculateAppsCPUTimesWithCompletion:(/*^block*/id)arg1 ;
-(void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1 ;
-(void)thermalWarningAssertionExpired:(id)arg1 ;
-(BOOL)isInSunlight;
-(void)dealloc;
-(id)init;
-(int)level;
@end

