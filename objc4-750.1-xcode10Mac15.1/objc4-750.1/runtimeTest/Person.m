//
//  Person.m
//  runtimeTest
//
//

#import "Person.h"

@implementation Person

- (void)say
{
    NSLog(@"hello,world!");
}


- (void)dealloc{
    NSLog(@"Person release");
}
@end
