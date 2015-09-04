//
//  ViewController.h
//  iAdFullView
//
//  Created by Sathish Chinniah on 02/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface ViewController : UIViewController <ADBannerViewDelegate>



@property (weak, nonatomic) IBOutlet ADBannerView *adBanner;

@property (weak, nonatomic) IBOutlet UILabel *lblTimerMessage;


@end

