//
//  XMHQDateUitilMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//


/**
 *  日期相关工具宏
 */
#import "XMHQDateUitil.h"

/**
 *  获取当前日历
 */
#define XMHQDateCurrentCalendar [XMHQDateUitil sharedDateFormatter]

/**
 *  获取单例格式化器
 */
#define XMHQDateShareFormatter [XMHQDateUitil sharedDateFormatter]

/**
 *  相对现在日期得间隔天数
 */
#define XMHQDateDaysAgo(aDate) [XMHQDateUitil daysAgoFromNow:aDate]

/**
 *  不以午夜为基准计算天数之前
 */
#define XMHQDateDaysAgoAgainstMidNight(aDate) [XMHQDateUitil daysAgoAgainstMidnight:aDate]

/**
 *  获取一个时间与当前时间间隔详情字符串
 */
#define XMHQDateTimeAgoString(aDate) [XMHQDateUitil detailTimeAgoString:aDate]

/**
 *  获取一个时间戳与当前时间的间隔详情字符串
 */
#define XMHQDateTimeAgoStringByTimeInterval(timeInterval) [XMHQDateUitil detailTimeAgoStringByInterval:timeInterval]

/**
 *  天数间隔文本字符串
 */
#define XMHQDateStringDaysAgo(aDate) [XMHQDateUitil stringDaysAgo:aDate]

/**
 *  这个日期是星期几
 */
#define XMHQDateGetWeekDay(aDate) [XMHQDateUitil weekDay:aDate]

/**
 *  返回这个日期是星期几字符串
 */
#define  XMHQDateGetWeekDayString(aDate) [XMHQDateUitil weekDayString:aDate]

/**
 *  返回这个日期在全年中是第多少周字符串
 */
#define  XMHQDateGetWeekNumString(aDate) [XMHQDateUitil weekNumberString:aDate]

/**
 *  在全年中是第多少周
 */
#define XMHQDateGetWeekNum(aDate) [XMHQDateUitil weekNumber:aDate]

/**
 *  获取日期中得年份
 */
#define XMHQDateGetYear(aDate) [XMHQDateUitil year:aDate]

/**
 *  获取日期中得月份
 */
#define XMHQDateGetMonth(aDate) [XMHQDateUitil month:aDate]

/**
 *  获取日期中的日
 */
#define XMHQDateGetDay(aDate) [XMHQDateUitil day:aDate]

/**
 *  获取日期中得小时
 */
#define XMHQDateGetHour(aDate) [XMHQDateUitil hour:aDate]

/**
 *  获取日期中的分钟
 */
#define XMHQDateGetMinute(aDate) [XMHQDateUitil minute:aDate]

/**
 *  日期转字符串
 */
#define XMHQDateToString(aDate) [XMHQDateUitil stringFromDate:aDate]

/**
 *  字符串转日期
 */
#define XMHQDateFromString(aString) [XMHQDateUitil dateFromString:aString]

/**
 *  字符串转日期详细时间
 */
#define XMHQDateTimeFromString(aString) [XMHQDateUitil dateTimeFromString:aString]

/**
 *  将时间戳转成日期
 */
#define XMHQDateFromTimeInterval(timeInterval) [XMHQDateUitil dateFromTimeInterval:timeInterval]

/**
 *  按照某个格式将日期转成字符串
 */
#define XMHQDateToStringByFormat(aDate,format) [XMHQDateUitil stringFromDate:aDate withFormat:format]

/**
 *  按照某个格式将字符串转成日期
 */
#define XMHQDateFromStringByFormat(aString,format) [XMHQDateUitil dateFromString:aString withFormat:format]

/**
 *  这个日期所在周的起始日期
 */
#define XMHQDateBeginningOfWeek(aDate) [XMHQDateUitil beginningOfWeek:aDate]

/**
 *  这个日期的起始时间
 */
#define XMHQDateBeginningOfDay(aDate) [XMHQDateUitil beginningOfDay:aDate]

/**
 *  这个日期所在周的结束日期
 */
#define XMHQDateEndOfWeek(aDate) [XMHQDateUitil endOfWeek:aDate]

/**
 *  普通日期格式字符串
 */
#define XMHQDateFormatString [XMHQDateUitil dateFormatString]

/**
 *  普通时间格式字符串
 */
#define XMHQDateTimeFormatString [XMHQDateUitil timeFormatString]

/**
 *  时间戳格式字符串
 */
#define XMHQDateTimeStampFormatString [XMHQDateUitil timestampFormatString]

/**
 *  数据库存储格式字符串
 */
#define XMHQDateDataBaseFormatString [XMHQDateUitil dbFormatString]

/**
 *  生日转年龄
 */
#define XMHQDateBirthDayToAge(date) [XMHQDateUitil birthdayToAge:date]

/**
 *  生日转年龄
 */
#define XMHQDateBirthDayToAgeByTimeInterval(timeInterval) [XMHQDateUitil birthdayToAgeByTimeInterval:timeInterval]

/**
 *  日期转星座
 */
#define XMHQDateToConstellation(date) [XMHQDateUitil dateToConstellation:date]

/**
 *  时间戳转星座
 */
#define XMHQDateToConstellationByTimeInterval(timeInterval) [XMHQDateUitil dateToConstellationByTimeInterval:timeInterval]

