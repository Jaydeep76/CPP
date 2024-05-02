#include<iostream>
#include<string>
using namespace std;
class student
{
    public :int  n,i,prn,grade,gracemarks;
            char name;

    public :
     void getdata()
    {
        cout<<"enter the number of student"<<endl;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            cout<<"enter the name of student"<<endl;
            cin>>name;
            cout<<"enter the grade of student"<<endl;
            cin>>grade;
            cout<<"enter the prn of student"<<endl;
            cin>>prn;
        }
    }
    void calculategracemarks()
    {
      if(grade>=9) 
      {
        gracemarks=5;
      }
      else if(grade>=8 && grade<9)
      {
        gracemarks=4;
      }
      else if(grade>=7 && grade<8)
      {
        gracemarks=3;
      }
      else if(grade>=6 && grade<7)
      {
        gracemarks=2;
      }
      else if(grade>=5 && grade<6)
      {
        gracemarks=1;
      }
    }
    void display()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"prn is:"<<prn<<endl;
        cout<<"grade is:"<<grade<<endl;
        cout<<"gracemarks is:"<<gracemarks<<endl;
    }
};

    int main()
    {
       student s1,s2,s3;

       s1.getdata();
       s1.calculategracemarks();
       s1.display();
       s2.getdata();
       s2.calculategracemarks();
       s2.display();
       s3.getdata();
       s3.calculategracemarks();
       s3.display();

       return 0;
    }
    
