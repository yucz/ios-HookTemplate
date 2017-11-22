/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNode.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SBIconIndexMutableList, NSHashTable, SBFolder, NSString;

@interface SBIconListModel : NSObject <SBIconIndexNode, NSFastEnumeration> {

	SBIconIndexMutableList* _icons;
	unsigned long long _maxIconCount;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	BOOL _iconStateIsDirty;
	SBFolder* _folder;

}

@property (nonatomic,__weak,readonly) SBFolder * folder;              //@synthesize folder=_folder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)needsCompacting;
-(unsigned long long)compactIcons;
-(BOOL)containsIcon:(id)arg1 ;
-(unsigned long long)firstFreeSlotIndexForType:(int)arg1 ;
-(id)placeIcon:(id)arg1 atIndex:(unsigned long long*)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned long long*)arg2 ;
-(void)removeIconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForIcon:(id)arg1 ;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)firstFreeSlotIndex;
-(void)removeIcon:(id)arg1 ;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(unsigned long long)numberOfIcons;
-(void)markIconStateClean;
-(BOOL)allowsAddingIcon:(id)arg1 ;
-(BOOL)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)removeListObserver:(id)arg1 ;
-(void)addListObserver:(id)arg1 ;
-(void)enumerateFolderIconsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2 ;
-(unsigned long long)maxNumberOfIcons;
-(BOOL)containsLeafIconWithIdentifier:(id)arg1 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned long long)indexForLeafIconWithIdentifier:(id)arg1 ;
-(BOOL)addIcon:(id)arg1 asDirty:(BOOL)arg2 ;
-(void)_notifyListObservers:(/*^block*/id)arg1 ;
-(void)warmUpIconImagesForLocation:(int)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB31*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(BOOL)isEmpty;
-(void)sortUsingSelector:(SEL)arg1 ;
-(id)icons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(BOOL)addIcon:(id)arg1 ;
-(BOOL)isFull;
-(SBFolder *)folder;
@end

