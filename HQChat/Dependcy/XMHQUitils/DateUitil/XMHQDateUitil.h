//
//  XMHQDateUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>


static NSString *kNSDateHelperFormatFullDateWithTime    = @"MMM d, yyyy h:mm a";
static NSString *kNSDateHelperFormatFullDate            = @"MMM d, yyyy";
static NSString *kNSDateHelperFormatShortDateWithTime   = @"MMM d h:mm a";
static NSString *kNSDateHelperFormatShortDate           = @"MMM d";
static NSString *kNSDateHelperFormatWeekday             = @"EEEE";
static NSString *kNSDateHelperFormatWeekdayWithTime     = @"EEEE h:mm a";
static NSString *kNSDateHelperFormatTime                = @"h:mm a";
static NSString *kNSDateHelperFormatTimeWithPrefix      = @"'at' h:mm a";
static NSString *kNSDateHelperFormatSQLDate             = @"yyyy-MM-dd";
static NSString *kNSDateHelperFormatSQLTime             = @"HH:mm:ss";
static NSString *kNSDateHelperFormatSQLDateWithTime     = @"yyyy-MM-dd HH:mm:ss";

@interface XMHQDateUitil : NSObject

/**
 获取当前日历

 @return <#return value description#>
 */
+ (NSCalendar *)sharedCalendar;

/**
 获取单例格式化器

 @return <#return value description#>
 */
+ (NSDateFormatter *)sharedDateFormatter;

/**
 获取一个时间与当前时间间隔详情字符串

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)detailTimeAgoString:(NSDate *)date;

/**
 获取一个时间戳与当前时间的间隔详情字符串

 @param timeInterval <#timeInterval description#>
 @return <#return value description#>
 */
+ (NSString *)detailTimeAgoStringByInterval:(long long)timeInterval;

/**
 相对现在日期得间隔天数

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)daysAgoFromNow:(NSDate *)date;

/**
 不以午夜为基准计算天数之前

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)daysAgoAgainstMidnight:(NSDate *)date;

/**
 天数间隔文本字符串

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)stringDaysAgo:(NSDate *)date;

+ (NSString *)stringDaysAgoAgainstMidnight:(BOOL)flag withDate:(NSDate *)date;

/**
 这个日期是星期几

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)weekDay:(NSDate *)date;

/**
 返回这个日期是星期几字符串

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)weekDayString:(NSDate *)date;

/**
 返回这个日期在全年中是第多少周字符串

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)weekNumberString:(NSDate *)date;

/**
 在全年中是第多少周

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)weekNumber:(NSDate *)date;

/**
 获取日期中得小时

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)hour:(NSDate *)date;

/**
 获取日期中的分钟

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)minute:(NSDate *)date;

/**
 获取日期中得月份

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)month:(NSDate *)date;

/**
 获取日期中得年份

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSUInteger)year:(NSDate *)date;

/**
 获取日期中的日

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSInteger)day:(NSDate *)date;

/**
 将时间戳转成日期

 @param timeInterval <#timeInterval description#>
 @return <#return value description#>
 */
+ (NSDate *)dateFromTimeInterval:(long long)timeInterval;

/**
 字符串转日期

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSDate *)dateFromString:(NSString *)string;

/**
 字符串转日期详细时间

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSDate *)dateTimeFromString:(NSString *)string;

/**
 按照某个格式将字符串转成日期

 @param string <#string description#>
 @param format <#format description#>
 @return <#return value description#>
 */
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;

/**
 按照某个格式将日期转成字符串

 @param date <#date description#>
 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)string;

/**
  日期转字符串

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)stringFromDate:(NSDate *)date;

+ (NSString *)stringWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle withDate:(NSDate *)date;

/**
 这个日期所在周的起始日期

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSDate *)beginningOfWeek:(NSDate *)date;

/**
 这个日期的起始时间

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSDate *)beginningOfDay:(NSDate *)date;

/**
 这个日期所在周的结束日期

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSDate *)endOfWeek:(NSDate *)date;

/**
 普通日期格式字符串

 @return <#return value description#>
 */
+ (NSString *)dateFormatString;

/**
 普通时间格式字符串

 @return <#return value description#>
 */
+ (NSString *)timeFormatString;

/**
 时间戳格式字符串

 @return <#return value description#>
 */
+ (NSString *)timestampFormatString;

/**
 数据库存储格式字符串

 @return <#return value description#>
 */
+ (NSString *)dbFormatString;

/**
 生日转年龄

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)birthdayToAge:(NSDate *)date;

/**
 生日转年龄

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)birthdayToAgeByTimeInterval:(NSTimeInterval)date;

/**
 日期转星座

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)dateToConstellation:(NSDate *)date;

/**
 时间戳转星座

 @param date <#date description#>
 @return <#return value description#>
 */
+ (NSString *)dateToConstellationByTimeInterval:(NSTimeInterval)date;

@end
