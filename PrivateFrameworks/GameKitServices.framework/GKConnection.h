/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */



@interface GKConnection : NSObject 
{
}

@property id eventDelegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)connect;
- (id)init;
- (void)dealloc;
- (id)initWithParticipantID:(id)arg1;
- (void)addRemoteParticipandID:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (id)getLocalConnectionData;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (void)setRemoteConnectionData:(id)arg1 fromParticipantID:(id)arg2;
- (id)eventDelegate;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (NSUInteger)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (void)setEventDelegate:(id)arg1;

@end