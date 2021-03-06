/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _SBOrientationTransformedContentView, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	long long _contentOrientation;
	long long _containerOrientation;

}

@property (assign,nonatomic) long long contentOrientation;                //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * contentViews; 
-(void)addContentView:(id)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)_updateGeometry;
-(CGAffineTransform)_transformForContainerOrientation:(long long)arg1 contentOrientation:(long long)arg2 ;
-(NSArray *)contentViews;
-(long long)contentOrientation;
-(long long)containerOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
@end

