//
//  AppDelegate.h
//  SubTabDemo
//
//  Created by n3tr on 5/14/55 BE.
//  Copyright (c) 2555 Simpletail. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
