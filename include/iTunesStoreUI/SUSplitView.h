/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:03 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SUSplitView : UIView {

	UIView* _firstView;
	long long _layoutType;
	double _minimumPaneSize;
	UIView* _secondView;
	double _splitPosition;
	BOOL _vertical;

}

@property (nonatomic,retain) UIView * firstView;                           //@synthesize firstView=_firstView - In the implementation block
@property (assign,nonatomic) long long layoutType;                         //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * secondView;                          //@synthesize secondView=_secondView - In the implementation block
@property (assign,nonatomic) double splitPosition;                         //@synthesize splitPosition=_splitPosition - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;              //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) double minimumPaneSize;                       //@synthesize minimumPaneSize=_minimumPaneSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isVertical;
-(void)setVertical:(BOOL)arg1 ;
-(long long)layoutType;
-(double)minimumPaneSize;
-(double)splitPosition;
-(void)setLayoutType:(long long)arg1 ;
-(void)setSplitPosition:(double)arg1 ;
-(void)setMinimumPaneSize:(double)arg1 ;
-(void)setFirstView:(UIView *)arg1 ;
-(void)setSecondView:(UIView *)arg1 ;
-(double)_minimumPaneSizeForLayout;
-(UIView *)firstView;
-(UIView *)secondView;
@end

