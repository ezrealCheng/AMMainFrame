//
//  AMMainFrame.h
//  AMMainFrame
//
//  Created by 程宜 on 2016/10/18.
//  Copyright © 2016年 ChengYi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CYTabBarViewController.h"
#import "PageGuideViewController.h"

@interface AMMainFrame : NSObject


/**
 * 需要设置tabBar的时候先调用该方法设置每个子tabBar的title和图片
 * viewController 需要设置的视图控制器
 * selectedImageName 当前tabBar选中时的图片名称
 * normalImageName 当前tabBar未选中时的图片名称
 * strTitle 当前tabBar标题
 * @return UINavigationController
 **/
+ (UINavigationController *)setTabBarViewControlller:(UIViewController *)viewController withSelectedImageName:(NSString *)selectedImageName withNormalImageName:(NSString *)normalImageName andTitle:(NSString *)strTitle;


/**
 * 设置主视图tabBar Window
 * arrayController 需要设置的视图控制器列表称数组
 * 需要设置导航栏则先调用 setTabBarViewControlller
 * backColor tabBar背景颜色
 * tinkColor tabBar字体颜色
 **/
+ (CYTabBarViewController *)setRootViewController:(NSMutableArray *)arrayController andBackColor:(UIColor *)backColor andTinkColor:(UIColor *)tinkColor;


/**
 * 设置引导页
 * arrayPages 需要设置的引导页图片名称数组
 **/
+ (PageGuideViewController *)setPageGuideView:(NSMutableArray *)arrayPages;

/**
 * 设置当前导航栏浸透效果
 * navController 当前需要设置的导航栏控制器
 * tintColor  需要将当前控制器的导航栏字体及其按钮设置成什么颜色
 **/
+ (void) setNavBarAlpha:(UINavigationController *)navController andTintColor:(UIColor *)tintColor;

/**
 * 设置当前导航栏为默认效果
 * navController 当前需要设置的导航栏控制器
 * tintColor  需要将当前控制器的导航栏字体及其按钮设置成什么颜色
 **/
+ (void) setNavBarNomal:(UINavigationController *)navController andTintColor:(UIColor *)tintColor;

/**
 * 设置当前导航栏背景图片
 * navController 当前需要设置的导航栏控制器
 * tintColor  需要将当前控制器的导航栏字体及其按钮设置成什么颜色
 * image  需要设置其他背景图片  image @2x  320 × 64  @3x  640 × 128
 **/
+ (void) setNavBar:(UINavigationController *)navController andTintColor:(UIColor *)tintColor andBackground:(UIImage *)image;

@end
