/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSDictionary, NSArray, NSString;

@interface SBLogoutDebugBlockingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSDictionary* _debugBlockingTasks;
	NSArray* _applicationKeys;

}

@property (nonatomic,retain) NSDictionary * debugBlockingTasks;              //@synthesize debugBlockingTasks=_debugBlockingTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureCell:(id)arg1 withBlockingTask:(id)arg2 ;
-(void)setDebugBlockingTasks:(NSDictionary *)arg1 ;
-(NSDictionary *)debugBlockingTasks;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)_tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

