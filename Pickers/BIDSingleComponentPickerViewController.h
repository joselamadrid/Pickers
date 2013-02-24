//
//  BIDSingleComponentPickerViewController.h
//  Pickers
//
//  Created by JMac on 23.02.13.
//  Copyright (c) 2013 JMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDSingleComponentPickerViewController : UIViewController
    <UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *singlePicker;
@property (strong, nonatomic) NSArray *characterNames;
-(IBAction)buttonPressed;

@end
