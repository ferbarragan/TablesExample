//
//  ViewController.h
//  TablesExample
//
//  Created by Christian Barragan on 17/06/16.
//  Copyright © 2016 Christian Barragan. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "Declarations.h"
#import "Intro.h"

@interface Start : UIViewController<UIPageViewControllerDelegate, UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

