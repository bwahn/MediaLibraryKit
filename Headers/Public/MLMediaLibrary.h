//
//  MLMediaLibrary.h
//  MobileMediaLibraryKit
//
//  Created by Pierre d'Herbemont on 7/14/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface MLMediaLibrary : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel   *_managedObjectModel;
}

+ (id)sharedMediaLibrary;

- (void)addFilePaths:(NSArray *)filepaths;

// May be internal
- (NSFetchRequest *)fetchRequestForEntity:(NSString *)entity;
- (id)createObjectForEntity:(NSString *)entity;

- (void)save;
- (void)libraryDidDisappear;
- (void)libraryDidAppear;
@end