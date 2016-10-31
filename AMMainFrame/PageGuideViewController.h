//
//  PageGuideViewController.h
//  HavePicture
//
//  Created by Huan on 16/6/29.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageGuideViewController : UIViewController
@property (nonatomic, copy) void(^CallBackGuidePageOver)(NSString *);

@property (nonatomic , strong) NSMutableArray *arrayPage;

@end
