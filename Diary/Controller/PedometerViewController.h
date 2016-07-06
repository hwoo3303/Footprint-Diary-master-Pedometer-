//
//  PedometerViewController.h
//  Diary
//
//  Created by MyMac on 2016. 7. 7..
//  Copyright © 2016년 mju12345. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CoreMotion;

@interface PedometerViewController : UIViewController

@property (strong, nonatomic) CMPedometer *pedometer;
@property (strong, nonatomic) IBOutlet UILabel *stepsLabel;
@property (strong, nonatomic) IBOutlet UILabel *distanceLabel;
@property (strong, nonatomic) IBOutlet UILabel *cadenceLabel;
@property (strong, nonatomic) IBOutlet UILabel *paceLabel;
@property (strong, nonatomic) IBOutlet UILabel *flightsUpLabel;
@property (strong, nonatomic) IBOutlet UILabel *flightsDownLabel;

@end
