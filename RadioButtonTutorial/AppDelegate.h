//
//  AppDelegate.h
//  RadioButtonTutorial
//
//  Created by Abinodh Thomas on 2017-05-11.
//  Copyright © 2017 Abinodh Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

