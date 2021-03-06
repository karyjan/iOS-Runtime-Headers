/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPSystemNowPlayingController, MPAVController;

@interface IUNowPlayingObserver : NSObject  {
    MPSystemNowPlayingController *_nowPlayingController;
    MPAVController *_player;
    BOOL _waitingForItemArtwork;
}


- (id)initWithPlayer:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_updateLastUsedDateForMediaItem:(id)arg1;
- (void)_coalescedUpdateLastUsedDateForAVItem:(id)arg1;
- (void)_mediaArtworkDidLoadNotification:(id)arg1;
- (void)_repeatTypeChanged:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_contentsChanged:(id)arg1;
- (id)_currentItem;

@end
