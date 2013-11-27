//
//  BSAppDelegate.h
//  bootstragram
//
//  Created by Mickaël Floc'hlay on 19/11/2013.
//  Copyright (c) 2013 Bootstragram. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
