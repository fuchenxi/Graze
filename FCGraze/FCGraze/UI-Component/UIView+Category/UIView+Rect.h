//
//  UIView+Rect.h
//  FCGraze
//
//  Created by fcx on 2018/3/21.
//  Copyright © 2018年 fuchenxi. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  UIScreen width.
 */
#define  Width   [UIScreen mainScreen].bounds.size.width

/**
 *  UIScreen height.
 */
#define  Height  [UIScreen mainScreen].bounds.size.height

/**
 *  iPhone4 or iPhone4s
 */
#define  iPhone4_4s     (Width == 320.f && Height == 480.f ? YES : NO)

/**
 *  iPhone5 or iPhone5s or iPhoneSE
 */
#define  iPhone5_5s     (Width == 320.f && Height == 568.f ? YES : NO)

/**
 *  iPhone6 or iPhone6s or iPhone 7 or iPhone 8
 */
#define  iPhone6_6s     (Width == 375.f && Height == 667.f ? YES : NO)

/**
 *  iPhone6Plus or iPhone6sPlus or iPhone7sPlus or iPhone8sPlus
 */
#define  iPhone6_6sPlus (Width == 414.f && Height == 736.f ? YES : NO)

/**
 *  iPhoneX
 */
#define  iPhoneX        (Width == 375.f && Height == 812.f ? YES : NO)

#define kSafeArea_Top (iPhoneX ? 44: 20)
#define kSafeArea_Bottom (iPhoneX ? 34 : 0)

#define kNavigationBarHeight 44
#define kNavigationBarAndStatusBarHeight (kNavigationBarHeight + kSafeArea_Top)
#define kTabBarHeight (49 + kSafeArea_Bottom)

@interface UIView (Rect)

/*----------------------
 * Absolute coordinate *
 ----------------------*/

@property (nonatomic) CGPoint viewOrigin;
@property (nonatomic) CGSize  viewSize;

@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;

@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat right;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;

/*----------------------
 * Relative coordinate *
 ----------------------*/

@property (nonatomic, readonly) CGFloat middleX;
@property (nonatomic, readonly) CGFloat middleY;
@property (nonatomic, readonly) CGPoint middlePoint;

/*-----------
 * iPhone X *
 -----------*/

@property (class, nonatomic, readonly) CGFloat additionaliPhoneXBottomSafeHeight;
@property (class, nonatomic, readonly) CGFloat additionaliPhoneXTopSafeHeight;

@end
