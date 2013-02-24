//
//  BIDDoubleComponentPickerViewController.h
//  Pickers
//
//  Created by JMac on 23.02.13.
//  Copyright (c) 2013 JMac. All rights reserved.
//
#define kFillingComponent 0
#define kBreadComponent 1

#import <UIKit/UIKit.h>

@interface BIDDoubleComponentPickerViewController : UIViewController
    <UIPickerViewDelegate, UIPickerViewDataSource>

@property (strong, nonatomic) IBOutlet UIPickerView *doublePicker;
@property (strong, nonatomic) NSArray *fillingTypes;
@property (strong, nonatomic) NSArray *breadTypes;

-(IBAction)buttonPressed;

@end
