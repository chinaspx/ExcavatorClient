//
//  testOC.m
//  ECCoreData
//
//  Created by yu haijian on 15/3/10.
//  Copyright (c) 2015年 Dafada (Beijing) Technology Co. All rights reserved.
//

#import "testOC.h"
#include "testC.h"

@implementation testOC

- (void) testTestOC{
    NSLog(@"testTestOC");
    
    char *s = new char[10];
    fun5(s, "12345");
    NSLog(@"%s",s);
    
    p(5);
    
    contruct();
}

@end
