//
//  ViewController.h
//  HelloWorldApp
//
//  Created by Ashley Pope on 3/08/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *helloWorldLabel;
- (IBAction)pushButton:(UIButton *)sender;

@end
