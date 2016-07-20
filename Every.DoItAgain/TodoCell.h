//
//  TodoCell.h
//  Every.DoItAgain
//
//  Created by Jeff Eom on 2016-07-20.
//  Copyright © 2016 Jeff Eom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodoCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *bodyLabel;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumber;

@end
