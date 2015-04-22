//
//  TGRCoreDataTableViewController.h
//  
//
//  Created by José Miguel Galván on 25/9/14.
//  Copyright (c) 2015 Tagorito. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
@interface TGRCoreDataTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>

// The controller (this class fetches nothing if this is not set).
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;


- (void)performFetch;


@property (nonatomic) BOOL suspendAutomaticTrackingOfChangesInManagedObjectContext;

@property BOOL debug;


-(id) initWithFetchedResultsController: (NSFetchedResultsController *) aFetchedResultsController
                                 style: (UITableViewStyle) aStyle;


@end
