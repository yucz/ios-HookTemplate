/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSCoding, NSCopying> {

	double _duration;
	SUDOMElement* _sourceElement;
	long long _type;

}

@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceElement;              //@synthesize sourceElement=_sourceElement - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(long long)transitionTypeFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SUDOMElement *)sourceElement;
-(void)setSourceElement:(SUDOMElement *)arg1 ;
@end

