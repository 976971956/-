//
//  LoginrigestJudge.h
//  项目基本框架
//
//  Created by 王志威 on 2017/3/16.
//  Copyright © 2017年 王志威. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LoginrigestJudge : NSObject


+(LoginrigestJudge *)shardManager;


/**
 判断手机号

 @param username 传入手机号码字符串
 @return \(^o^)/YES!表示手机号正确
 */
-(BOOL)JudgePhoneNum:(NSString *)username;


/**
 判断密码

 @param password 传入密码字符串
 @param index 判断密码输入的范围
 @return \(^o^)/YES!表示密码正确
 */
-(BOOL)JudgePassword:(NSString *)password Passwordindex:(NSRange)index;

/**
 判断验证码

 @param code 传入验证码字符串
 @param index 判断验证码输入个数
 @return \(^o^)/YES!表示验证码正确
 */
-(BOOL)JudgeCode:(NSString *)code codeindex:(NSInteger)index;

/**
 判断邮箱

 @param email 邮箱字符串
 @return \(^o^)/YES!表示邮箱正确
 */
-(BOOL)JudgedateEmail:(NSString *)email;
@end
