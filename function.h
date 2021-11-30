/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jack Nelson
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


int output(string operation, string number1, string number2)
{
    vector<string> inputs1{"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> inputs2{"0","1","2","3","4","5","6","7","8","9"};
    double n1;
    double n2;
    double n3;
    for(int i=0; i<10; i++)
    {
        if(number1==inputs1[i])
        {
            for(int j=0; j<10; j++)
            {
                if(number2==inputs1[j])
                {
                    if(operation=="+")
                    {
                        n1=i;
                        n2=j;
                        n3=n1+n2;
                        printf("The sum of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="-")
                    {
                        n1=i;
                        n2=j;
                        n3=n1-n2;
                        printf("The minuend of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="*")
                    {
                        n1=i;
                        n2=j;
                        n3=n1*n2;
                        printf("The product of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="/")
                    {
                        n1=i;
                        n2=j;
                        n3=n1/n2;
                        printf("The quotent of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                }
                else if(number2==inputs2[j])
                {
                    if(operation=="+")
                    {
                        n1=i;
                        n2=j;
                        n3=n1+n2;
                        printf("The sum of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="-")
                    {
                        n1=i;
                        n2=j;
                        n3=n1-n2;
                        printf("The minuend of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="*")
                    {
                        n1=i;
                        n2=j;
                        n3=n1*n2;
                        printf("The product of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="/")
                    {
                        n1=i;
                        n2=j;
                        n3=n1/n2;
                        printf("The quotent of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                }
            }
        }
        else if(number1==inputs2[i])
        {
            for(int j=0; j<10; j++)
            {
                if(number2==inputs1[j])
                {
                    if(operation=="+")
                    {
                        n1=i;
                        n2=j;
                        n3=n1+n2;
                        printf("The sum of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="-")
                    {
                        n1=i;
                        n2=j;
                        n3=n1-n2;
                        printf("The minuend of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="*")
                    {
                        n1=i;
                        n2=j;
                        n3=n1*n2;
                        printf("The product of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="/")
                    {
                        n1=i;
                        n2=j;
                        n3=n1/n2;
                        printf("The quotent of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                }
                else if(number2==inputs2[j])
                {
                    if(operation=="+")
                    {
                        n1=i;
                        n2=j;
                        n3=n1+n2;
                        printf("The sum of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="-")
                    {
                        n1=i;
                        n2=j;
                        n3=n1-n2;
                        printf("The minuend of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="*")
                    {
                        n1=i;
                        n2=j;
                        n3=n1*n2;
                        printf("The product of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                    if(operation=="/")
                    {
                        n1=i;
                        n2=j;
                        n3=n1/n2;
                        printf("The quotent of %lf and %lf is %lf",n1,n2,n3);
                        return 0;
                    }
                }
            }
        }
    }
    cout << "One of the inputs is invalid";
    return 0;
}

int function()
{
    std::string number1;
    std::string number2;
    std::string operation;
    cout << "Enter the operation: ";
    getline(cin,operation);
    cout << "Enter the first single digit number: ";
    getline(cin,number1);
    cout << "Enter the second single digit number: ";
    getline(cin,number2);
    output(operation,number1,number2);
    
    return 0;
}
