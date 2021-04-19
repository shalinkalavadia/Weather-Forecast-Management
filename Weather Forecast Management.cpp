#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

  fstream file;
  string Location[15];
  float humidity[15];
  float temp[15];
  float rainfall[15];

 int main()
{  
void put();  //write
void read();  
void show();  //display
h:

 int ch;
  
cout<<"1)Write in file."<<endl<<"2)Read from the file "<<endl<<"3)Weather Forecasting"<<endl ;
cin>>ch;
switch(ch)
{
  case(1):
       {
          put();
           break;
       }
   case(2):
         {  

            read();
        break;
        }
    case(3):
         {
             show();
                break;
          }
}
}


void put()    //for writing the file
{
 file.open("forecast.txt",ios::out |ios::app);
 file<<setw( 20 )<<"LOCATION"<< setw(20)<<"HUMIDITY" << setw( 20 ) << "TEMPERATURE"  << setw( 20 ) << "RAINFALL" << endl;
cout<<"Enter the location"<<endl;
 cin>>Location[0];

cout<<"Enter the humidity"<<endl;
 cin>>humidity[0];

cout<<"Enter the temperature"<<endl;
 cin>>temp[0];
 
cout<<"Enter the rainfall amount"<<endl;
cin>>rainfall[0];
 file<<setw(20)<<Location[0]<<setw(20)<<humidity[0]<<setw(20)<<temp[0]<<setw(20)<<rainfall[0]<<endl;


file.close();
}


void read()
{
    file.open("forecast.txt",ios::in);
    cout<<"The details of the weather are according to their places "<<endl;
  
int i=3;
while(i>0)
 
    {
	file.seekg(91,ios::cur);
     file>>Location[0];cout<<"location---"<<Location[0]<<endl;file>>humidity[0];cout<<"humidity---"<<humidity[0]<<endl;file>>temp[0];cout<<"temperature----"<<temp[0]<<endl;file>>rainfall[0];cout<<"rainfall----"<<rainfall[0]<<endl<<"***************************************************************"<<endl;
    i--;
   }
       
file.close();

}
void show()
{
  float h,t;
cout<<"////////////////////////////////////WEATHER FORECASTING////////////////////////////////////////"<<endl;
cout<<"Enter Humidity: "<<endl;
cin>>h;
cout<<"Enter Temperature: "<<endl;
cin>>t;
if(h>50 && t<=35)
{
 cout<<"There is a posibility of rain"<<endl;
}
else if(h>50 && t>35)
{
  cout<<"The weather will be very moisty and uncomfortable"<<endl;

}
else if(h<50 && t<=35)
{
   cout<<"The weather will be pleasant today"<<endl;
}
else if(h<50 && t>35)
{
  cout<<"The weather will be very hot today "<<endl;
}
}

