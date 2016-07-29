//
//  DetailViewController.h
//  MFAnimationDemo
//
//  Created by 胡淼枫 on 16/7/29.
//  Copyright © 2016年 胡淼枫. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

