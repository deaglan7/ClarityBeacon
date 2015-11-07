//
//  RootViewController.h
//  contextMe
//
//  Created by deag on 07/11/2015.
//  Copyright © 2015 Anu Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface RootViewController : UIViewController <CLLocationManagerDelegate,UIPageViewControllerDelegate>
{
    //CoreLocation
    CLLocationManager *locationManager;
    CLLocation *startPoint;
    
    //graphical interface
    UIView *map;
    UIImageView *locationMarker;
    BOOL outsideMap;
}

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) CLLocation *startPoint;
@property (nonatomic, retain) IBOutlet UIView *map;
@property (nonatomic, retain) IBOutlet UIImageView *locationMarker;
@property (nonatomic) BOOL outsideMap;

@end

