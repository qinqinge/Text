//
//  XMHQStringMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具宏封装了大部分字符串常用的便捷方法
 */

#import "XMHQStringUitil.h"

/**
 *  字符串是否为空
 */
#define XMHQStringIsNull(string) [XMHQStringUitil stringIsNull:string]

/**
 *  字符串是否全为空格
 */
#define XMHQStringIsAllWhiteSpace(string) [XMHQStringUitil stringIsAllWhiteSpace:string]

/**
 *  字符串转NSInteger
 */
#define XMHQStringToInt(string) [XMHQStringUitil stringToInt:string]

/**
 *  字符串转CGFloat
 */
#define XMHQStringToFloat(string) [XMHQStringUitil stringToFloat:string]

/**
 *  字符串转double
 */
#define XMHQStringToDouble(string) [XMHQStringUitil stringToDouble:string]

/**
 *  字符串转Bool
 */
#define XMHQStringToBool(string) [XMHQStringUitil stringToBool:string]

/**
 *  int转字符串
 */
#define XMHQStringFromInt(int) [XMHQStringUitil intToString:int]

/**
 *  float转字符串
 */
#define XMHQStringFromFloat(float) [XMHQStringUitil floatToString:float]

/**
 *  double转字符串
 */
#define XMHQStringFromDouble(double) [XMHQStringUitil doubleToString:double]

/**
 *  bool转字符串
 */
#define XMHQStringFromBool(bool) [XMHQStringUitil boolToString:bool]

/**
 *  字符串是否合法邮箱
 */
#define XMHQStringIsEmail(string) [XMHQStringUitil stringIsValidateEmailAddress:string]

/**
 *  字符串是否合法手机号码
 */
#define XMHQStringIsMobilePhone(string) [XMHQStringUitil stringISValidateMobilePhone:string]

/**
 *  字符串是否合法url
 */
#define XMHQStringIsUrl(string) [XMHQStringUitil stringIsValidateUrl:string]

/**
 *  字符串是否合法座机
 */
#define XMHQStringIsPhone(string) [XMHQStringUitil stringIsValidatePhone:string]

/**
 *  字符串是否合法邮政编码
 */
#define XMHQStringIsMailCode(string) [XMHQStringUitil stringIsValidateMailCode:string]

/**
 *  字符串是否合法身份证号
 */
#define XMHQStringIsPersonCardNumber(string) [XMHQStringUitil stringISValidatePersonCardNumber:string]

/**
 *  字符串是否合法车牌号
 */
#define XMHQStringIsCarNumber(string) [XMHQStringUitil stringISValidateCarNumber:string]

/**
 *  字符串是否只有中文字符
 */
#define XMHQStringChineseOnly(string) [XMHQStringUitil stringIsAllChineseWord:string]

/**
 *  字符串是否只有英文字符
 */
#define XMHQStringCharNumOnly(string) [XMHQStringUitil stringJustHasNumberAndCharacter:string]

/**
 *  字符串是否只包含字符，中文，数字
 */
#define XMHQStringCharNumChineseOnly(string) [XMHQStringUitil stringChineseNumberCharacterOnly:string]

/**
 *  字符串是否纯数字
 */
#define XMHQStringNumOnly(string) [XMHQStringUitil stringJustHasNumber:string]

/**
 *  从文件中读取出字符串
 */
#define XMHQStringFromFile(path) [XMHQStringUitil stringFromFile:path]

/**
 *  从归档路径读取出字符串
 */
#define XMHQStringUnArchieve(path) [XMHQStringUitil unarchieveFromPath:path]

/**
 *  获取一个当前时间戳字符串
 */
#define XMHQStringCurrentTimeStamp [XMHQStringUitil currentTimeStampString]

/**
 *  将字符串转为MD5字符串
 */
#define XMHQStringToMD5(string) [XMHQStringUitil MD5:string]

/**
 *  返回去除字符串首的空格的字符串
 */
#define XMHQStringClearLeadingWhiteSpace(string) [XMHQStringUitil stringByTrimingLeadingWhiteSpace:string]

/**
 *  返回去除字符串结尾的空格的字符串
 */
#define XMHQStringClearTailingWhiteSpace(string) [XMHQStringUitil stringByTrimingTailingWhiteSpace:string]

/**
 *  返回去除字符串中所有的空格的字符串
 */
#define XMHQStringClearAllWhiteSpace(string) [XMHQStringUitil stringByTrimingWhiteSpace:string]

/**
 *  Url编码对象,通常是字符串,返回编码后的字符串
 */
#define XMHQStringEncodeString(string) [XMHQStringUitil urlEncode:string]

/**
 *  Url编码一个字典,键值对用@链接,返回编码后的字符串
 */
#define XMHQStringEncodeDict(aDict) [XMHQStringUitil encodeStringFromDict:aDict]

/**
 *  返回字符串范围
 */
#define XMHQStringRange(string) [XMHQStringUitil stringRange:string]
