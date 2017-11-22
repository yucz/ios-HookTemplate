/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBMainAppSwitcherPageView.h>

@class UIView, SBSaturatedIconView, UILabel;

@interface SBAppSwitcherContinuityAppPageView : SBMainAppSwitcherPageView {

	UIView* _infoView;
	UIView* _iconTintView;
	SBSaturatedIconView* _saturatedIconView;
	UILabel* _deviceNameLabelBackdrop;
	UILabel* _deviceNameLabelForeground;
	double _deviceLabelOffset;

}
-(void)setView:(id)arg1 animated:(BOOL)arg2 ;
-(id)auxiliaryView;
-(void)_viewDismissing:(id)arg1 ;
-(double)_heightForDeviceLabel:(id)arg1 withWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 suggestedApp:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

