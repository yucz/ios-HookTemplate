/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBFolder.h>

@protocol SBRootFolderDelegate;
@class SBIconListModel;

@interface SBRootFolder : SBFolder {

	id<SBRootFolderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBRootFolderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsDock; 
@property (nonatomic,retain) SBIconListModel * dock; 
+(BOOL)isRootFolderClass;
-(id)nodeIdentifier;
-(BOOL)supportsDock;
-(void)placeIconsOnFirstPage:(id)arg1 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)_listsForCompaction;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(void)_setDock:(id)arg1 ;
-(void)setDelegate:(id<SBRootFolderDelegate>)arg1 ;
-(id<SBRootFolderDelegate>)delegate;
-(SBIconListModel *)dock;
-(BOOL)isRootFolder;
@end

