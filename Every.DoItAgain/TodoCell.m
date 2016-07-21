//
//  TodoCell.m
//  Every.DoItAgain
//
//  Created by Jeff Eom on 2016-07-20.
//  Copyright © 2016 Jeff Eom. All rights reserved.
//

#import "TodoCell.h"

@implementation TodoCell

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.gr = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(swipedCell:)];
    self.gr.direction = UISwipeGestureRecognizerDirectionRight;
    [self addGestureRecognizer:self.gr];

}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void)swipedCell: (UISwipeGestureRecognizer *)sender{
    
    [self.delegate swipedCell:self];
    
    NSLog(@"Swipe recognized");
    
}

@end
