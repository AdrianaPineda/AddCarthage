//
//  DetailViewController.h
//  AddCarthage
//
//  Created by Adriana Pineda on 2/25/16.
//  Copyright © 2016 Adriana Pineda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

