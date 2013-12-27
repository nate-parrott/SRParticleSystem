//
//  SRViewController.h
//  SRParticleSystem
//
//  Created by Nate Parrott on 12/26/13.
//  Copyright (c) 2013 Nate Parrott. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "SRParticleSystem.h"

@interface SRViewController : GLKViewController {
    SRParticleSystem* _particleSystem;
    IBOutlet UILabel* _label;
    IBOutlet UIStepper* _particleCountStepper;
    
    int _prevFPS;
}

@end
