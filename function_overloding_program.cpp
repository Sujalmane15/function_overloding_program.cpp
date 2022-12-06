#include<iostream>
void add(int ,int );
void add(int ,double );
void add(int ,int ,int );

int main()
{
     add(2,3);
     add(10,2.1);
     add(10,20,30);

     return 0;
}
void add(int a,int b)
{
     std::cout<<"\n a:"<<a<<"\n b:"<<b;
     std::cout<<"\n Addtion:"<<a+b;
}
void add(int a,int b,int c)
{
     std::cout<<"\n a:"<<a<<"\n b:"<<b<<"\n c:"<<c;
     std::cout<<"\n Addtion:"<<a+b+c;
}
void add(int a,double b)
{
     std::cout<<"\n a:"<<a<<"\n b:"<<b;
     std::cout<<"\n Addtion:"<<a+b;
}