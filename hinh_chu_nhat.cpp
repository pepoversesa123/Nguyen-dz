/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
#include <stdio.h>
#define chieucao 20

void tamgiacCan(int height)
{
    
}
int main()
{
    printf("Hello World");

    return 0;
} */

#include <iostream>

void draw_rect(int width,int height) 
{
    using std::cout;
    cout << "+";
    for (int i = 0; i < width - 2; i++)
    {
        cout << "-";
    }
    cout << "+\n";

    for (int i = 0; i < height - 2; i++)
    {
        cout << "|";
        for (int j = 0; j < width - 2; j++)
        {
            cout << " ";
        }
        cout << "|\n";
    }

    cout << "+";
    for (int i = 0; i < width - 2; i++)
    {
        cout << "-";
    }
    cout << "+\n";
}

int main ()
{
    draw_rect(10,7);
    return 0;
}
