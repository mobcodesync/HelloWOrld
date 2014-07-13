//
//  DetailViewController.h
//  HelloWOrld
//
//  Created by Sameer Junaid on 7/13/14.
//  Copyright (c) 2014 Sameer Junaid. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
