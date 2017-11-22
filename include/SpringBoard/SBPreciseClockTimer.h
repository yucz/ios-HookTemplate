/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)sharedInstance;
+(id)now;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_updateDisplayLink;
@end

