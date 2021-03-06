/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder  {
    NSArray *_queueItems;
}

@property(readonly) NSArray * items;


- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)pathAtIndex:(unsigned int)arg1;

@end
