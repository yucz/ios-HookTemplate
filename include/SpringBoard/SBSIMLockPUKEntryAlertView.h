/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:10 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSIMLockEntryAlertView.h>

@class NSString;

@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView {

	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;

}
-(void)setupSuccess;
-(void)setupFailureState;
-(id)_pukAttemptsRemainingLabel;
-(void)_attemptPUKUnlock;
-(void)_unlock;
-(id)label;
-(id)titleText;
@end

