/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMChat, IMMessage, CKMessageComposition, <CKMessage>, CKIMMessage, NSArray, CKEntity, IMService, NSString, NSMutableDictionary, NSMutableArray, NSTimer;

@interface CKConversation : NSObject  {
    NSTimer *_recalculateDowngradeStateTimer;
    int _downgradeState;
    BOOL _ignoreDowngradeStatusUpdates;
    NSArray *_recipients;
    NSString *_name;
    NSMutableDictionary *_groupMessages;
    NSMutableArray *_messages;
    NSMutableArray *_pendingMessages;
    BOOL _isStale;
    int _bulkMessageAddStack;
    BOOL _updatesDisabled;
    BOOL _needsPostAfterUpdate;
    BOOL _wantsAnimatedPost;
    BOOL _ignoringTypingUpdates;
    <CKMessage> *_placeholderMessage;
    BOOL _hasPlaceholder;
    BOOL _moreMessagesToLoad;
    int _limitToLoad;
    IMChat *_chat;
    BOOL _blockingForHistoryQuery;
    IMMessage *_incomingTypingMessage;
    IMMessage *_outgoingTypingMessage;
    IMService *_cachedPreferredService;
    int _cachedPreferredServiceError;
    NSArray *_pendingRecipients;
    NSArray *_pendingHandles;
    NSArray *_failedMessages;
}

@property(readonly) BOOL isStale;
@property(readonly) BOOL isEmpty;
@property(retain) IMChat * chat;
@property(readonly) NSArray * pendingMessages;
@property(readonly) NSArray * messages;
@property(readonly) NSArray * failedMessages;
@property(retain) NSArray * recipients;
@property(readonly) CKEntity * recipient;
@property(readonly) NSArray * recipientStrings;
@property(readonly) unsigned int recipientCount;
@property(readonly) NSString * name;
@property(readonly) void* abRecord;
@property(readonly) int propertyType;
@property(readonly) int identifier;
@property(readonly) NSString * serviceDisplayName;
@property(readonly) int buttonColor;
@property(readonly) NSString * previewText;
@property(retain) CKMessageComposition * unsentComposition;
@property(readonly) unsigned int unreadCount;
@property(readonly) BOOL hasUnreadMessages;
@property(readonly) BOOL hasUnreadiMessages;
@property BOOL updatesDisabled;
@property(retain) NSString * rememberedKeyboard;
@property(readonly) CKIMMessage * incomingTypingCKMessage;
@property(readonly) CKIMMessage * outgoingTypingCKMessage;
@property(readonly) NSString * groupID;
@property(readonly) IMService * preferredService;
@property int limitToLoad;
@property(readonly) BOOL shouldShowCharacterCount;
@property(getter=isPending,readonly) BOOL pending;
@property(copy) NSArray * pendingRecipients;
@property(readonly) NSArray * pendingEntities;
@property(readonly) NSArray * handles;
@property(readonly) int disclosureAtomStyle;
@property(getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates;
@property(retain) IMMessage * incomingTypingMessage;
@property(retain) IMMessage * outgoingTypingMessage;
@property(copy) NSArray * pendingHandles;

+ (id)_sms_localizedErrorForReason:(int)arg1;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(int*)arg2;
+ (int)_sms_maxAttachmentCount;
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)arg1;
+ (unsigned int)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1;
+ (id)_iMessage_localizedErrorForReason:(int)arg1;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(int*)arg2;
+ (int)_iMessage_maxAttachmentCount;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (BOOL)_iMessage_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
+ (BOOL)_sms_canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_iMessage_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_contentChangedFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
+ (void)_postNotification:(id)arg1 forMessage:(id)arg2;

- (unsigned int)recipientCount;
- (id)recipient;
- (id)groupID;
- (void)resetCaches;
- (int)identifier;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (int)propertyType;
- (id)handles;
- (id)shortDescription;
- (id)uniqueIdentifier;
- (BOOL)isEmpty;
- (id)date;
- (void)setRecipients:(id)arg1;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (id)failedMessages;
- (id)outgoingTypingMessage;
- (void)setPendingHandles:(id)arg1;
- (id)pendingHandles;
- (id)outgoingTypingCKMessage;
- (id)newMessageWithComposition:(id)arg1;
- (BOOL)canSendMessageWithMediaObjectTypes:(int*)arg1;
- (void)deleteMessage:(id)arg1;
- (BOOL)updatesDisabled;
- (BOOL)isDowngraded;
- (id)rememberedKeyboard;
- (void)setRememberedKeyboard:(id)arg1;
- (BOOL)hasUnreadiMessages;
- (id)_headerTitleForService:(id)arg1;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_nameForHandle:(id)arg1;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (id)recipientStrings;
- (id)preferredServiceWithCanSend:(BOOL*)arg1 error:(int*)arg2;
- (void)__sendTypingIndicatorIfNecessary;
- (void)_targetChatToPreferredService:(id)arg1 newComposition:(BOOL)arg2;
- (void)__rescindTypingIndicatorIfNecessary;
- (BOOL)_chatSupportsTypingIndicators;
- (void)_recordRecentContact;
- (void)_targetChat:(id)arg1 toService:(id)arg2 newComposition:(BOOL)arg3;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_updateTypingIndicatorForComposition:(id)arg1;
- (BOOL)isIgnoringTypingUpdates;
- (id)newMessageWithComposition:(id)arg1 guid:(id)arg2 addToConversation:(BOOL)arg3;
- (id)_IMMessageWithMessageParts:(id)arg1 subject:(id)arg2 date:(id)arg3 isFinished:(BOOL)arg4 messageGUID:(id)arg5 needsDataDetection:(BOOL)arg6;
- (BOOL)_iMessage_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)_sms_canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 onService:(id)arg3 error:(id*)arg4;
- (id)__copyEntityForMFComposeRecipient:(id)arg1;
- (id)latestIncomingMessage;
- (id)placeholderMessage;
- (void)_setPlaceholderMessage:(id)arg1;
- (void)setOutgoingTypingMessage:(id)arg1;
- (void)setLoadedMessages:(id)arg1;
- (id)_messagesFromChat:(id)arg1;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (void)removeAllMessages;
- (id)__copyEntities;
- (void)_postChangeUpdate:(BOOL)arg1;
- (void)_refreshMoreToLoadFlag;
- (void)setMoreMessagesToLoad:(BOOL)arg1;
- (void)_updateDowngradeState:(int)arg1 checkAgainInterval:(double)arg2;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1;
- (void)_calculateDowngradeStateTimerFired;
- (void)_calculateDowngradeState;
- (void)_clearTypingIndicatorsIfNecessary;
- (BOOL)_handleIsForThisConversation:(id)arg1;
- (id)_preferredServiceCheckWithServer:(BOOL)arg1 canSend:(BOOL*)arg2 error:(int*)arg3;
- (void)_setupPreferredServiceChangeHandlers;
- (void)_invalidateDowngradeState;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_endBatchUpdates;
- (void)_beginBatchUpdates;
- (void)downgradeStateDidChange;
- (int)endBulkMessageAddForcePost:(BOOL)arg1;
- (BOOL)_handleRemovedMessage:(id)arg1;
- (BOOL)_handleChangedMessage:(id)arg1 forQuery:(id)arg2;
- (void)beginBulkMessageAdd;
- (void)removeMessage:(id)arg1 postUpdate:(BOOL)arg2;
- (id)_addCKMessageFromIMMessage:(id)arg1;
- (id)_existingMadridMessageForIMMessage:(id)arg1;
- (BOOL)_handleTypingIndicationMessage:(id)arg1;
- (id)_CKMessageFromIMMessage:(id)arg1;
- (void)setIncomingTypingMessage:(id)arg1;
- (id)incomingTypingMessage;
- (int)limitToLoad;
- (void)_cleanupMessages;
- (void)_handleChatPropertiesChangedNotification:(id)arg1;
- (void)_handleItemsDidChangeNotification:(id)arg1;
- (void)setUpdatesDisabled:(BOOL)arg1;
- (void)setChat:(id)arg1;
- (BOOL)isFromFilteredSender;
- (void)resetPendingMessages;
- (id)pendingMessages;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (int)outgoingBubbleColor;
- (id)previewText;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)invalidatePreferredServiceCache;
- (int)compareBySequenceNumberAndDateDescending:(id)arg1;
- (BOOL)reloadIfStale;
- (id)copyEntityForAddressString:(id)arg1;
- (void)markAsStale;
- (void)setUpdatesDisabled:(BOOL)arg1 quietly:(BOOL)arg2;
- (void)postChangedUpdate:(BOOL)arg1;
- (id)initWithChat:(id)arg1 updatesDisabled:(BOOL)arg2;
- (void)requestRecipientStatuses;
- (BOOL)restrictMediaObjects;
- (void)deleteAllMessages;
- (void)updateMessage:(id)arg1;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2;
- (void)loadMoreMessages;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (void)newMessageContentChangedWithComposition:(id)arg1;
- (BOOL)shouldShowCharacterCount;
- (BOOL)canSendMessageComposition:(id)arg1 error:(id*)arg2;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (id)pendingEntities;
- (id)pendingRecipients;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (id)newMessageWithComposition:(id)arg1 addToConversation:(BOOL)arg2;
- (id)preferredService;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
- (void)setLimitToLoad:(int)arg1;
- (BOOL)isPending;
- (void)setIgnoringTypingUpdates:(BOOL)arg1;
- (id)incomingTypingCKMessage;
- (BOOL)moreMessagesToLoad;
- (void)addPlaceholderMessageIfNeededWithDate:(id)arg1;
- (void)loadAllMessages;
- (void)deleteMessages:(id)arg1;
- (id)latestMessage;
- (void*)abRecord;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)unsentComposition;
- (id)serviceDisplayName;
- (int)disclosureAtomStyle;
- (BOOL)canSendWithError:(int*)arg1;
- (BOOL)hasUnreadMessages;
- (void)setPendingRecipients:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)chat;
- (void)clearTypingIndicator;
- (void)markAllMessagesAsRead;
- (void)setUnsentComposition:(id)arg1;
- (BOOL)isPlaceholder;
- (BOOL)isStale;
- (id)recipients;
- (id)messages;
- (unsigned int)unreadCount;
- (int)buttonColor;

@end
