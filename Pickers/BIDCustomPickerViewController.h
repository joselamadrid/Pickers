//
//  BIDCustomPickerViewController.h
//  Pickers
//
//  Created by JMac on 23.02.13.
//  Copyright (c) 2013 JMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDCustomPickerViewController : UIViewController
    <UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *picker;
@property (strong, nonatomic) IBOutlet UILabel *winLabel;
@property (strong, nonatomic) NSArray *images;
- (IBAction)spin;

@end
