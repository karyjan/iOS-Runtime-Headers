/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}


- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3;
- (BOOL)streamingDone;
- (BOOL)streaming;

@end
