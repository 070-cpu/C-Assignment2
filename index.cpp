#include<iostream.h>
#include<conio.h>
void main()
{
    int i;
    clrscr();
    cout<<"Enter the value of i:";
    cin>>i;
    if(i%2==0)
    {
        cout<<"Number is even:";
    }
    else
    {
        cout<<"Number is odd:";
    }
    getch();
}