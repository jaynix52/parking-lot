#include <iostream>
using namespace std;

class charge{
    private:
    int hourEnter, minuteEnter, hourLeft, minuteLeft, totalHour, totalMinute, roundedHour;
    
    public: 
    void getInput()
    {
    cout<<"Hour enter : ";
    cin>>hourEnter;
    cout<<"Minute enter : ";
    cin>>minuteEnter;
    cout<<"Hour left : ";
    cin>>hourLeft;
    cout<<"Minute left : ";
    cin>>minuteLeft;
    }
    
    void calculateCharge()
    {
        if(minuteLeft<minuteEnter)
    {
    hourLeft=hourLeft-1;
    totalMinute=minuteLeft-minuteEnter;
    }
    totalHour=hourLeft-hourEnter; 
    totalMinute=minuteLeft-minuteEnter;
    if(totalMinute>30)
       roundedHour=totalHour+1;
    else
       roundedHour=totalHour;
}
void displayCharge()
{
    cout<<"\nTOTAL TIME : "<<totalHour<<" hour(s) and "<<totalMinute<<" minutes."<<endl; 
    cout<<"ROUNDED HOUR : "<<roundedHour<<" hour(s)."<<endl;
    cout<<"CHARGE : RM"<<2.00*roundedHour<<endl; 
    cout<<endl;
}
};
int main()
{
    charge p;
    char answer;
    do
    {
        p.getInput();
        p.calculateCharge();
        p.displayCharge();
        cout<<"Do you want to continue? <Y/N> : ";
        cin>>answer;
        cout<<endl;
        
    }while(answer=='Y');
    
    system("pause");
    return 0;
}
