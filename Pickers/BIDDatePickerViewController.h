//
//  BIDDatePickerViewController.h
//  Pickers
//
//  Created by JMac on 23.02.13.
//  Copyright (c) 2013 JMac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDDatePickerViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
-(IBAction)buttonPressed;
@end
