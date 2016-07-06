//
//  PedometerDatePickerViewController.m
//  Diary
//
//  Created by MyMac on 2016. 7. 7..
//  Copyright © 2016년 mju12345. All rights reserved.
//

#import "PedometerDatePickerViewController.h"

@interface PedometerDatePickerViewController ()

@end

@implementation PedometerDatePickerViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.datePicker.date = self.date;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)doneButtonPressed:(id)sender {
    
    // read the date picker and return the date
    [self dismissViewControllerAnimated:YES completion:nil];
    
}


- (IBAction)cancelButtonPressed:(id)sender {
    
    // dismiss this view controller
    [self dismissViewControllerAnimated:YES completion:nil];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
