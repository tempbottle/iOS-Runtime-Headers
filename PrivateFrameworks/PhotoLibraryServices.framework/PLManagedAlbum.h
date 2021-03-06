/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAssetContainer> {
    BOOL _resolvingConflicts;
    BOOL albumShouldBeAutomaticallyDeleted;
    BOOL stackedImageNeedsUpdate;
}

@property BOOL albumShouldBeAutomaticallyDeleted;
@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canShowComments;
@property(readonly) unsigned int count;
@property(readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property BOOL resolvingConflicts;
@property(readonly) id sectioningComparator;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) id sortingComparator;
@property BOOL stackedImageNeedsUpdate;
@property(readonly) NSString * title;
@property(readonly) NSMutableOrderedSet * userEditableAssets;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)assetOrderByAbumUUIDs;
+ (void)clearAssetOrderByAbumUUIDs;
+ (BOOL)deviceSupportsStackedImages;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)pathToAssetAlbumOrderStructure;

- (id)_assetOrderByAssetUUID;
- (unsigned int)_cachedCountForMigration;
- (id)_expectedKeyAsset;
- (void)_handleStackedImageNeedsUpdate:(BOOL)arg1;
- (id)_keysToBeObserved;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)_recalculateCachedCounts;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)_updateKeyAssetIfNeeded;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (BOOL)albumShouldBeAutomaticallyDeleted;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (unsigned int)countOfInternalUserEditableAssets;
- (void)didSave;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (id)mutableAssets;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistMetadataToFileSystem;
- (unsigned int)photosCount;
- (void)refreshAssets;
- (void)registerForChanges;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (BOOL)resolvingConflicts;
- (void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1;
- (void)setResolvingConflicts:(BOOL)arg1;
- (void)setStackedImageNeedsUpdate:(BOOL)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (BOOL)stackedImageNeedsUpdate;
- (void)unregisterForChanges;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (id)userEditableAssets;
- (unsigned int)videosCount;

@end
