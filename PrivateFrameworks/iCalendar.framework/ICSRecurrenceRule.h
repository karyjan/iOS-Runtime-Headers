/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSArray, ICSDateValue, NSNumber, NSMutableDictionary;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting> {
    int _freq;
    NSMutableDictionary *_parameters;
}

@property int freq;
@property(retain) ICSDateValue * until;
@property NSNumber * count;
@property NSNumber * interval;
@property(retain) NSArray * bysecond;
@property(retain) NSArray * byminute;
@property(retain) NSArray * byhour;
@property(retain) NSArray * byday;
@property(retain) NSArray * bymonthday;
@property(retain) NSArray * byyearday;
@property(retain) NSArray * byweekno;
@property(retain) NSArray * bymonth;
@property(retain) NSArray * bysetpos;
@property NSNumber * wkst;

+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (id)recurrenceRuleFromICSCString:(const char *)arg1;

- (void)dealloc;
- (id)count;
- (id)interval;
- (void)setInterval:(id)arg1;
- (void)setCount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (void)setByhour:(id)arg1;
- (void)setByminute:(id)arg1;
- (void)setBysecond:(id)arg1;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;
- (void)setupProperty:(id)arg1 withArray:(id)arg2;
- (void)setupProperty:(id)arg1 withString:(id)arg2;
- (void)setFreq:(int)arg1;
- (void)cleanUpForStartDate:(id)arg1;
- (id)bysecond;
- (id)byminute;
- (id)byhour;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)removeParameterValueForName:(id)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (id)parameterValueForName:(id)arg1;
- (id)bysetpos;
- (id)byyearday;
- (id)byweekno;
- (id)bymonthday;
- (id)bymonth;
- (id)byday;
- (id)until;
- (id)wkst;
- (int)freq;
- (void)setBysetpos:(id)arg1;
- (void)setByyearday:(id)arg1;
- (void)setByweekno:(id)arg1;
- (void)setBymonthday:(id)arg1;
- (void)setBymonth:(id)arg1;
- (void)setByday:(id)arg1;
- (void)setUntil:(id)arg1;
- (void)setWkst:(id)arg1;
- (id)initWithFrequency:(int)arg1;

@end
