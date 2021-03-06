//
//  JGViewController.m
//  LayoutDotSyntaxExample
//
//  Created by Jaden Geller on 11/30/13.
//  Copyright (c) 2013 Jaden Geller. All rights reserved.
//

#import "JGViewController.h"
#import "JGLayoutDotSyntax.h"

@interface JGViewController ()

@end

@implementation JGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    UIView *blueView = [[UIView alloc]init];
    blueView.backgroundColor = [UIColor blueColor];
    blueView.translatesAutoresizingMaskIntoConstraints = NO;
    
    UIView *greenView = [[UIView alloc]init];
    greenView.backgroundColor = [UIColor greenColor];
    greenView.translatesAutoresizingMaskIntoConstraints = NO;
    
    UIView *yellowView = [[UIView alloc] init];
    yellowView.backgroundColor = [UIColor yellowColor];
    yellowView.translatesAutoresizingMaskIntoConstraints = NO;
    
    UIView *redView = [[UIView alloc] init];
    redView.backgroundColor = [UIColor redColor];
    redView.translatesAutoresizingMaskIntoConstraints = NO;

    UIView *purpleView = [[UIView alloc] init];
    purpleView.backgroundColor = [UIColor purpleColor];
    purpleView.translatesAutoresizingMaskIntoConstraints = NO;

    [self.view addSubview:purpleView];
    [self.view addSubview:blueView];
    [self.view addSubview:greenView];
    [blueView addSubview:yellowView];
    [self.view addSubview:redView];
    
    //Set up layout constraints using dot syntax
    
    float size = 40;
    float statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height;
    
    purpleView.width = @(2*size);
    purpleView.height = @(2*size);
    purpleView.right = self.view.right;
    purpleView.top = [self.view.top add:statusBarHeight];
    
    blueView.left = self.view.left;
    blueView.centerY = self.view.centerY;
    blueView.height = @(size);
    blueView.width = @190;
    
    redView.width = @(size);
    redView.height = @(size);
    redView.centerX = self.view.centerX[UILayoutPriorityDefaultHigh];
    redView.centerY = self.view.centerY;
    redView.left = [[blueView.right add:10] withRelation:NSLayoutRelationGreaterThanOrEqual];
    
    yellowView.left = [blueView.left add:10];
    yellowView.right = [blueView.right add:-10];
    yellowView.top = [blueView.top add:10];
    yellowView.bottom = [blueView.bottom add:-10];
    
    greenView.bottom = self.view.bottom;
    greenView.height = [self.view.height multiply:.2];
    greenView.left = self.view.left;
    greenView.right = self.view.right;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
