/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject;

@interface _NSFaultingMutableSet : NSMutableSet  {
    int _cd_rc;
    struct _NSFaultingMutableSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _reserved : 14; 
        unsigned int _relationship : 16; 
    } _flags;
    id _realSet;
    NSManagedObject *_source;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)unionSet:(id)arg1;
- (id)description;
- (unsigned int)retainCount;
- (BOOL)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (oneway void)release;
- (unsigned int)count;
- (Class)classForArchiver;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)_isIdenticalFault:(id)arg1;
- (BOOL)_shouldProcessKVOChange;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)relationship;
- (void)turnIntoFault;
- (BOOL)isFault;
- (void)willRead;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)member:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (id)source;
- (BOOL)isEqualToSet:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (id)valueForKeyPath:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)objectEnumerator;
- (Class)classForCoder;
- (void)minusSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeObject:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)setSet:(id)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1;

@end
