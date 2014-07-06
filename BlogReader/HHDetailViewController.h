//
//  HHDetailViewController.h
//  BlogReader
//
//  Created by Habib Hussain on 2014-07-06.
//  Copyright (c) 2014 HABIBHUSSAIN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HHDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
