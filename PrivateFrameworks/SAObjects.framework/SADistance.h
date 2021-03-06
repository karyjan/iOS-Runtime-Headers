/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SADistance : AceObject <SAAceSerializable> {
}

@property(copy) NSString * unit;
@property(copy) NSString * units;
@property(retain) NSNumber * value;

+ (id)distance;
+ (id)distanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setUnits:(id)arg1;
- (id)units;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;
- (id)encodedClassName;
- (int)afui_compare:(id)arg1;
- (id)afui_abbreviatedUnit;
- (id)afui_metersValue;

@end
