//
//  MasterViewController.h
//  HelloWOrld
//
//  Created by Sameer Junaid on 7/13/14.
//  Copyright (c) 2014 Sameer Junaid. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
