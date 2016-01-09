//
//  ViewController.h
//  PayPal_Ejemplo_iOS
//
//  Created by Alberto Cordero on 08/01/16.
//  Copyright © 2016 Alberto Cordero. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface Start : UIViewController<PayPalPaymentDelegate>

- (IBAction)btnPagar:(UIButton *)sender;

@end


