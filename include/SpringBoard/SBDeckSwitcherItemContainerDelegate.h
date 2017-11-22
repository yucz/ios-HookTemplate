/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDeckSwitcherItemContainerDelegate <NSObject>
@required
-(BOOL)isDisplayItemOfContainerRemovable:(id)arg1;
-(BOOL)shouldShowIconAndLabelOfContainer:(id)arg1;
-(void)killDisplayItemOfContainer:(id)arg1 withVelocity:(double)arg2;
-(BOOL)canSelectDisplayItemOfContainer:(id)arg1 numberOfTaps:(long long)arg2;
-(void)selectedDisplayItemOfContainer:(id)arg1;
-(CGRect*)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
-(double)minimumVerticalTranslationForKillingOfContainer:(id)arg1;

@end

