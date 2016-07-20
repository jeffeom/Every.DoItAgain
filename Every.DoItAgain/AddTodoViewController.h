//
//  AddTodoViewController.h
//  Every.DoItAgain
//
//  Created by Jeff Eom on 2016-07-20.
//  Copyright © 2016 Jeff Eom. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddTodoViewControllerProtocol <NSObject>

-(void)pressedButtonSaveTitle:(NSString *)title body:(NSString *)body priorityNumber:(NSNumber *)priorityNumber andIsCompleted:(BOOL)isCompleted;

@end

@interface AddTodoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *titleLabel;
@property (weak, nonatomic) IBOutlet UITextField *bodyLabel;
@property (weak, nonatomic) IBOutlet UITextField *priorityNumberLabel;

@property (weak, nonatomic) id <AddTodoViewControllerProtocol> delegate;

@end
