//
//  ViewController.h
//  Web Service
//
//  Created by Matt Tardiff on 4/21/13.
//  Copyright (c) 2013 Matthew Tardiff. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
