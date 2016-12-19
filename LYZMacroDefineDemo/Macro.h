//
//  Macro.h
//  LYZMacroDefineDemo
//
//  Created by artios on 2016/12/19.
//  Copyright © 2016年 artios. All rights reserved.
//

#define GetDefaults(key)             [[NSUserDefaults standardUserDefaults] objectForKey:key]
#define SetDefaults(key,value)       [[NSUserDefaults standardUserDefaults] setObject:value forKey:key]
#define USERDEFAULTE                 [NSUserDefaults standardUserDefaults]
#define ISLOGINSTATUS                [GetDefaults(ISLOGIN) boolValue]


#define LYZWeakSelf __weak typeof(self) weakSelf = self;
/**
 *  简单粗暴的获取手机型号
 */
#define IS_IPHONE4_4S ((480 == [[UIScreen mainScreen] bounds].size.height) ? YES : NO)
#define IS_IPHONE5_5S ((568 == [[UIScreen mainScreen] bounds].size.height) ? YES : NO)
#define IS_IPhone6_6S (667 == [[UIScreen mainScreen] bounds].size.height ? YES : NO)
#define IS_IPhone6plus_6Splus (736 == [[UIScreen mainScreen] bounds].size.height ? YES : NO)
/**
 *  当前系统版本
 */
#define IOS_VERSION ([[[UIDevice currentDevice] systemVersion] floatValue])

#define iOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)
#define IOS8 ([[[UIDevice currentDevice] systemVersion] doubleValue] >= 8.0)

/**
 *  当前设备型号
 */
#define kPhoneModel  [[UIDevice currentDevice] model]
/**
 *  当前设备的UUID
 */
#define kUUID [[UIDevice currentDevice] identifierForVendor]
/**
 *  当前屏幕大小
 */
#define kScreenBounds ([[UIScreen mainScreen] bounds])
#define kScreenWidth (kScreenBounds.size.width)
#define kScreenHeight (kScreenBounds.size.height)

#define kWindow [[[UIApplication sharedApplication] delegate]window]

/**
 *  判断字符串是否为空
 */
#define lyz_StrIsEmpty(str) ([str isKindOfClass:[NSNull class]] || [str length] < 1 ? YES : NO || [str isEqualToString:@"(null)"] || [str isEqualToString:@"null"])

/**用户配置*/
#define kUSER_DEFAULT [NSUserDefaults standardUserDefaults]
/**通知中心*/
#define kNOTIFICATION_DEFAULT  [NSNotificationCenter defaultCenter]

/**设置颜色*/
#define kCOLOR_RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define RGBA(r, g, b, a)                    [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r, g, b)                        RGBA(r, g, b, 1.0f)

#define navigationBarColor RGB(6, 190, 4)
#define separaterColor RGB(200, 199, 204)

//字体
#define kFONT16                  [UIFont systemFontOfSize:16.0f]
#define kFONT15                  [UIFont systemFontOfSize:15.0f]
#define kFONT12                  [UIFont systemFontOfSize:12.0f]
#define kFONT10                  [UIFont systemFontOfSize:10.0f]

//frame
#define kX(a)             CGRectGetMinX(a.frame)//(v).frame.origin.x
#define kY(a)             CGRectGetMinY(a.frame)//(v).frame.origin.y
#define kXW(a)            CGRectGetMaxX(a.frame)//(v).frame.origin.x + (v).frame.size.width
#define kYH(a)            CGRectGetMaxY(a.frame)//(v).frame.origin.y + (v).frame.size.height
#define kWIDTH(a)         CGRectGetWidth(a.frame)//(v).frame.size.width
#define kHEIGHT(a)        CGRectGetHeight(a.frame)//(v).frame.size.height

/**沙盒目录下Documents*/
#define kDocuments [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
/**沙盒目录下的cache*/
#define kCachesPath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]
/**沙盒目录下Library*/
#define kLibraryPath [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) objectAtIndex:0]
/**沙盒目录下Cache的文件路径*/
#define kFilesPath [kCachesPath stringByAppendingPathComponent:@"/Files"]

/**项目中的Files文件夹*/
//#define kFilesPath [[NSBundle mainBundle] pathsForResourcesOfType:nil inDirectory:@"Files"]

/**
 *  调试模式的标签
 */
#define DEBUG_FLAG

/**
 *  如果是调试模式，QFLog就和NSLog一样，如果不是调试模式，QFLog就什么都不做
 *  __VA_ARGS__ 表示见面...的参数列表
 */

//----------------------ABOUT PRINTING LOG 打印日志 ----------------------------
//Using dlog to print while in debug model.        调试状态下打印日志
#ifdef DEBUG_FLAG
#   define LYZLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define LYZLog(...)
#endif


//只在Debug模式下执行NSLog
#ifndef __OPTIMIZE__
#define NSLog(fmt, ...) NSLog((@"[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" fmt"\n\n"), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define NSLog(...) {}
#endif

