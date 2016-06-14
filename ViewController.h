//
//  ViewController.h
//  Death_Dodger
//
//  Created by Joseph Jin on 5/22/16.
//  Copyright (c) 2016 Animator Joe. All rights reserved.

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    IBOutlet UILabel *directionStatus;
    IBOutlet UILabel *xCoordStatus;
    IBOutlet UIImageView *finnCharc;
    CGFloat finnCoordX;
    CGFloat finnCoordY;
    char Direct;
    bool debug;
    
}


- (IBAction)leftButton:(id)sender;
- (IBAction)rightButton:(id)sender;

@end