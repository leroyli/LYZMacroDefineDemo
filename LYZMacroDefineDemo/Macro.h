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

/** 设备是否为iPhone 4/4S 分辨率320x480，像素640x960，@2x */
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 5C/5/5S 分辨率320x568，像素640x1136，@2x */
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6 分辨率375x667，像素750x1334，@2x */
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6 Plus 分辨率414x736，像素1242x2208，@3x */
#define iPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

//----------------------ABOUT SYSTYM & VERSION 系统与版本 ----------------------------
//Get the OS version.       判断操作系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion ([[UIDevice currentDevice] systemVersion])
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//judge the simulator or hardware device        判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

/** 获取系统版本 */
#define iOS_VERSION ([[[UIDevice currentDevice] systemVersion] floatValue])
#define CurrentSystemVersion ([[UIDevice currentDevice] systemVersion])

/** 是否为iOS6 */
#define iOS6 (([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0) ? YES : NO)

/** 是否为iOS7 */
#define iOS7 (([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0) ? YES : NO)

/** 是否为iOS8 */
#define iOS8 (([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0) ? YES : NO)

/** 是否为iOS9 */
#define iOS9 (([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0) ? YES : NO)

/** 获取当前语言 */
#define kCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

/** 当前设备型号 */
#define kPhoneModel  [[UIDevice currentDevice] model]

//judge the simulator or hardware device        判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

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

//判断是否 Retina屏、设备是否iPhone 5、是否是iPad
#define isRetina ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/** 判断是否为iPhone */
#define isiPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

/** 判断是否是iPad */
#define isiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

/** 判断是否为iPod */
#define isiPod ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

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

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define kRandomColor [UIColor colorWithRed:arc4random() % 255 / 255.0 green:arc4random() % 255 / 255.0 blue:arc4random() % 255 / 255.0 alpha:arc4random() % 255 / 255.0]

#define RGBA(r, g, b, a)                    [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r, g, b)                        RGBA(r, g, b, 1.0f)

#define kColorWithHex(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]

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

