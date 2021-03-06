/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSURL, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup  {
    NSSet *_calendarHomes;
    NSSet *_userAddresses;
    NSSet *_originalUserAddresses;
    NSURL *_inboxURL;
    NSURL *_outboxURL;
    NSURL *_dropboxURL;
    NSURL *_notificationURL;
    NSURL *_delegatePrincipalURL;
    NSURL *_updatedPrincipalURL;
    CalDAVServerVersion *_serverVersion;
}

@property(retain) NSURL * delegatePrincipalURL;
@property(readonly) NSSet * calendarHomes;
@property(readonly) NSSet * userAddresses;
@property(readonly) NSSet * originalUserAddresses;
@property(readonly) NSURL * inboxURL;
@property(readonly) NSURL * outboxURL;
@property(readonly) NSURL * dropboxURL;
@property(readonly) NSURL * notificationURL;
@property(readonly) NSURL * updatedPrincipalURL;
@property(readonly) CalDAVServerVersion * serverVersion;


- (id)description;
- (void)dealloc;
- (id)outboxURL;
- (id)inboxURL;
- (id)serverVersion;
- (id)updatedPrincipalURL;
- (id)originalUserAddresses;
- (id)userAddresses;
- (id)notificationURL;
- (id)dropboxURL;
- (void)setDelegatePrincipalURL:(id)arg1;
- (id)calendarHomes;
- (id)delegatePrincipalURL;
- (void)processPrincipalHeaders:(id)arg1;
- (BOOL)forceOptionsRequest;
- (void)startTaskGroup;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)_copyAccountPropertiesPropFindElements;

@end
