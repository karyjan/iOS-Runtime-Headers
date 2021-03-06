/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<PLAlbumContainer>, NSDictionary;

@interface PLAlbumListChangeNotification : PLContainerChangeNotification  {
    NSDictionary *_userInfo;
}

@property(readonly) NSObject<PLAlbumContainer> * albumList;

+ (id)notificationWithAlbumList:(id)arg1 snapshot:(id)arg2 changedAlbums:(id)arg3;

- (id)name;
- (id)description;
- (id)userInfo;
- (void)dealloc;
- (id)_contentRelationshipName;
- (struct NSObject { Class x1; }*)albumList;

@end
