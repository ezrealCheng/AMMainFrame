//
//  CYTabBarViewController.h
//  HavePicture
//
//  Created by Huan on 16/6/29.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CYTabBarViewController : UITabBarController

+(CYTabBarViewController * )sharedMainTabbar;

-(void)initTabbar:(NSMutableArray *)tabArray andBackColor:(UIColor *)color andTinkColor:(UIColor *)tinkColor;

@end
