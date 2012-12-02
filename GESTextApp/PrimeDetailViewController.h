//
//  PrimeDetailViewController.h
//  GESTextApp
//
//  Created by Lee Main on 12/2/12.
//  Copyright (c) 2012 Lee Main. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PrimeDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
