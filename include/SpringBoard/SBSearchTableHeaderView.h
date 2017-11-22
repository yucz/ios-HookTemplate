/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, SBObservingLabel, UIView, NSDictionary;

@interface SBSearchTableHeaderView : UIView {

	NSString* _reuseIdentifier;
	SBObservingLabel* _titleLabel;
	UIView* _separatorView;
	NSDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier;               //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,retain) SBObservingLabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                          //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;              //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
+(char)requiresConstraintBasedLayout;
+(id)lineColor;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)isUserInteractionEnabled;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(SBObservingLabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)prepareForReuse;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setTitleLabel:(SBObservingLabel *)arg1 ;
-(void)updateFonts;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
