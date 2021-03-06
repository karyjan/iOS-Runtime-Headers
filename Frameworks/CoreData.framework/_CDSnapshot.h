/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { 
        unsigned int _readOnly : 1; 
        unsigned int _reservedFlags : 31; 
    } _cd_flags;
    unsigned int _cd_nullFlags_;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (unsigned int)newBatchAllocation:(id*)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id*)arg3;
+ (Class)classForEntity:(id)arg1;
+ (void)_entityDeallocated;
+ (void)initialize;

- (id)mutableCopy;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)entity;
- (id)description;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)copy;
- (id)_descriptionValues;
- (id)initWithObjectID:(id)arg1;
- (id)objectID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end
