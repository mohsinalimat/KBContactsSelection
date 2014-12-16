//
//  KBContactsSelectionViewController.h
//  KBContactsSelectionExample
//
//  Created by Kamil Burczyk on 13.12.2014.
//  Copyright (c) 2014 Sigmapoint. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KBContactsSelectionConfiguration.h"

@interface KBContactsSelectionViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;

+ (KBContactsSelectionViewController*)contactsSelectionViewControllerWithConfiguration:(void (^)(KBContactsSelectionConfiguration* configuration))configurationBlock;

@end
