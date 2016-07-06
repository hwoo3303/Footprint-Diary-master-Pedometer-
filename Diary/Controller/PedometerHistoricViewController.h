//
//  PedometerHistoricViewController.h
//  Diary
//
//  Created by MyMac on 2016. 7. 7..
//  Copyright © 2016년 mju12345. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CoreMotion;

@interface PedometerHistoricViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *startDateLabel;
@property (strong, nonatomic) IBOutlet UILabel *endDateLabel;
@property (strong, nonatomic) NSDate *startDate;
@property (strong, nonatomic) NSDate *endDate;
@property (strong, nonatomic) NSDate *tempDate;
@property (strong, nonatomic) CMPedometer *pedometer;

@end
