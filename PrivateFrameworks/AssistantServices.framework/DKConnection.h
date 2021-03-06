/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface DKConnection : NSObject  {
    struct dispatch_queue_s { } *_queue;
    struct _xpc_connection_s { } *_conn;
    struct dispatch_queue_s { } *_deliveryQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectHandler;

    id _target;
}

@property(readonly) NSString * serviceName;
@property(copy) id messageHandler;
@property(copy) id disconnectHandler;
@property(retain) id target;


- (void)setDisconnectHandler:(id)arg1;
- (id)disconnectHandler;
- (void)remoteBarrier;
- (void)asyncBarrierWithBlock:(id)arg1;
- (void)sendMessage:(id)arg1 withReplySync:(id)arg2;
- (id)_initWithXPCConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(struct dispatch_queue_s { }*)arg2;
- (void)_handleXPCMessage:(void*)arg1;
- (void)_handleBarrierMessage:(void*)arg1;
- (BOOL)remoteBarrierWithTimeout:(double)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(struct _xpc_connection_s { }*)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (id)serviceName;
- (void)sendMessage:(id)arg1;
- (id)messageHandler;
- (void)_handleXPCError:(void*)arg1;
- (void)setMessageHandler:(id)arg1;

@end
