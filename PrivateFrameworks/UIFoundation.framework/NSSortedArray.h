/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray;

@interface NSSortedArray : NSMutableArray  {
    NSMutableArray *_array;
    SEL _compareSelector;
    unsigned int _cachedCount;
    id _cachedFirstObject;
}

+ (void)initialize;

- (BOOL)conformsToProtocol:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithArray:(id)arg1;
- (void)setArray:(id)arg1;
- (id)initWithObjects:(id*)arg1 count:(unsigned int)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCompareSelector:(SEL)arg1;
- (SEL)compareSelector;
- (id)initWithCompareSelector:(SEL)arg1;
- (void)_insertObjectInSortOrder:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1 compareSelector:(SEL)arg2;

@end
