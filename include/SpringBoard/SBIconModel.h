/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconModelStore, SBIconModelApplicationDataSource, SBIconModelDelegate;
@class NSDictionary, NSOrderedSet, NSMutableDictionary, NSSet, SBRootFolder;

@interface SBIconModel : NSObject {

	NSDictionary* _desiredIconState;
	NSOrderedSet* _desiredIconStateFlattened;
	NSMutableDictionary* _leafIconsByIdentifier;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
	BOOL _tagsHaveBeenSet;
	SBRootFolder* _rootFolder;
	id<SBIconModelStore> _store;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	id<SBIconModelDelegate> _delegate;
	BOOL _allowsSaving;
	BOOL _ignoresIconsNotInIconState;
	BOOL _sortsIconsAlphabetically;
	NSSet* _archivedLeafIdentifiers;

}

@property (assign,nonatomic) BOOL allowsSaving;                                                         //@synthesize allowsSaving=_allowsSaving - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconModelDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SBIconModelStore> store;                                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<SBIconModelApplicationDataSource> applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (assign,nonatomic) BOOL ignoresIconsNotInIconState;                                           //@synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState - In the implementation block
@property (assign,nonatomic) BOOL sortsIconsAlphabetically;                                             //@synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically - In the implementation block
@property (nonatomic,retain) NSDictionary * leafIconsByIdentifier;                                      //@synthesize leafIconsByIdentifier=_leafIconsByIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * archivedLeafIdentifiers;                                             //@synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers - In the implementation block
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(void)clearDesiredIconState;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(id)leafIconForIdentifier:(id)arg1 ;
-(id)downloadingIconForBundleIdentifier:(id)arg1 ;
-(id)exportState:(BOOL)arg1 ;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)removeIcon:(id)arg1 ;
-(BOOL)hasDesiredIconState;
-(void)saveIconStateIfNeeded;
-(id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(BOOL*)arg2 replaceExistingIconAtIndexPath:(id*)arg3 ;
-(id)iconsOfClass:(Class)arg1 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(BOOL)sortsIconsAlphabetically;
-(void)setSortsIconsAlphabetically:(BOOL)arg1 ;
-(void)loadAllIcons;
-(void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(BOOL)importState:(id)arg1 ;
-(id)leafIcons;
-(BOOL)_canAddDownloadingIconForBundleID:(id)arg1 ;
-(void)addIconForApplication:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(void)removeIconForIdentifier:(id)arg1 ;
-(id)_iconState;
-(id)iconState;
-(BOOL)ignoresIconsNotInIconState;
-(void)deleteIconState;
-(id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(BOOL*)arg3 replaceExistingIconAtIndexPath:(id*)arg4 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(NSSet *)archivedLeafIdentifiers;
-(void)_saveIconState;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(id)_unarchiveRootFolder;
-(void)setArchivedLeafIdentifiers:(NSSet *)arg1 ;
-(void)clearDesiredIconStateIfPossible;
-(void)_saveDesiredIconState;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(id)visibleIconIdentifiers;
-(void)setLeafIconsByIdentifier:(NSDictionary *)arg1 ;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2 ;
-(id)leafIconsWithIdentifiers:(id)arg1 ;
-(id)_applicationIcons;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(NSDictionary *)leafIconsByIdentifier;
-(BOOL)allowsSaving;
-(void)setAllowsSaving:(BOOL)arg1 ;
-(void)setIgnoresIconsNotInIconState:(BOOL)arg1 ;
-(id<SBIconModelStore>)store;
-(void)setDelegate:(id<SBIconModelDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SBIconModelDelegate>)delegate;
-(void)layout;
-(void)localeChanged;
-(void)addIcon:(id)arg1 ;
-(id)rootFolder;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(BOOL)isIconVisible:(id)arg1 ;
@end

