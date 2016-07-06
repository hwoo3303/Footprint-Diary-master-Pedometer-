//
//  PedometerDatePickerViewController.h
//  Diary
//
//  Created by MyMac on 2016. 7. 7..
//  Copyright © 2016년 mju12345. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PedometerDatePickerViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (strong, nonatomic) NSString *dateType;
@property (strong, nonatomic) NSDate *date;

@end
