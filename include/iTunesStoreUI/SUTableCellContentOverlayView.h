/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:00 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUCellConfiguration;

@interface SUTableCellContentOverlayView : UIView {

	SUCellConfiguration* _configuration;

}

@property (nonatomic,retain) SUCellConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(SUCellConfiguration *)configuration;
@end
