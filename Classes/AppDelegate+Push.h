//
//  AppDelegate+Push.h
//  MiaoHuShiPatient
//
//  Created by 黄超 on 2017/6/28.
//  Copyright © 2017年 安徽软云科技. All rights reserved.
//

#import "AppDelegate.h"
// 引入JPush功能所需头文件
#import "JPUSHService.h"

@interface AppDelegate(Push)<JPUSHRegisterDelegate>

-(void)initPushWith:(NSDictionary *)launchOptions appKey:(NSString *)key channel:(NSString *)channel;

@end
