//
//  SQTool.h
//  SQTool
//
//  Created by rvakva on 2019/4/28.
//  Copyright © 2019 rvakva. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface SQTool : NSObject

/**
 字符串转utf-8编码
 
 @param string 字符串
 @return 转码完成字符串
 */
+(NSString*)SQ_STringUTF8:(NSString*)string;

/**
 获取今日的日期,根据输入的年月日格式返回对应字符串
 
 @param format 年月日格式
 @return 字符串
 */
+(NSString*)SQ_getTodayTimeandFormatter:(NSString *)format;

/**
 获取当前时间戳
 
 @return 返回时间戳
 */
+(NSString *)SQ_getNowTimeTimestamp3;


/**
 将某个时间戳转换成时间

 @param timestamp 需要转的时间戳
 @param format 格式 可为空有默认 YYYY-MM-dd HH:mm
 @return 对应格式的时间
 */
+(NSString *)SQ_timestampSwitchTime:(NSString*)timestamp andFormatter:(NSString *)format;

/**
 字符串转时间戳
 
 @param stringr 字符串
 @return 返回时间戳
 */
+(NSString*)SQ_NSdatestring:(NSString *)stringr Formatter:(NSString *)format;

/**
 拨打电话
 
 @param phoneString 电话号码
 */
+(void)SQ_MakeAPhoneCall:(NSString*)phoneString;

/**
 * 字符传判空
 
 @param obj obj
 @return return value description yes 为空 no 为非空
 */
+ (BOOL)SQ_isEqualNull:(id)obj;

/**
 判断参数是否是数组,并返回数据
 
 @param responseObject 传入的数据
 @param key 对应的key
 @return 返回数组
 */
+(NSArray*)SQ_addObjectsFromArray:(id)responseObject Key:(NSString*)key;

/**
 判断参数是否是数组,并返回数据
 
 @param responseObject 传入的数据
 @param key 对应的key
 @return 返回数组
 */
+(NSDictionary*)SQ_addObjectsFromDictionary:(id)responseObject Key:(NSString*)key;

/**
 给控件添加阴影
 
 @param View 控件
 */
+(void)SQ_UILayAddShadow:(UIView *)View;

/**
 截取小数点后两位并不四舍五入
 
 @param price 金额
 @param position 小数点
 @return 返回字符串
 */
+(NSString *)SQ_notRounding:(id)price afterPoint:(int)position;

/**
 验证密码
 @param strs 密码
 @return 是否符合规则
 */
+(BOOL)SQ_checkPassWord:(NSString*)strs;

/**
 对新密码和确认密码进行比对,也可以用于判断两个字符串是否相等
 
 @param strs 新密码
 @param strss 确认密码
 @return 返回yes 相同 no 不同
 */
+(BOOL)SQ_PassWord:(NSString*)strs Confirmpassword:(NSString*)strss;

/**
 校验身份证
 
 @param IDNumber 身份证号码
 @return 是否正确
 */
+(BOOL)SQ_isCorrect:(NSString *)IDNumber;

/**
 根据key来存储数据
 
 @param stringKey 用于存储key是什么
 */
+(void)SQ_STring:(NSString*)str keyString:(NSString*)stringKey;

/**
 存储数据的提取
 
 @param stringKey 存储的key是什么
 @return 返回存储的值
 */
+(NSString*)SQ_nssTring:(NSString*)stringKey;

/**
 删除存储的值
 
 @param removestringKey 删除的key
 */
+(void)SQ_removeTring:(NSString*)removestringKey;


/**
 获取当前屏幕的控制器n是哪个

 @return 返回当前控制器
 */
+(UIViewController *)SQ_getCurrentVC;

/**
 判断当前是否允许定位
 
 @return return yes是允许定位
 */
+ (BOOL)SQ_isLocationServiceOpen;


@end

NS_ASSUME_NONNULL_END
