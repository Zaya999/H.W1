#include<iostream>

using namespace std;

int main(){
 
    //Write a C++ program to perform input/output of all basic data types. (int,double,char,string)
    
    int a = 200;
    float b = 2.2;
    double c = 3.39;
    char d = '$';
    string e = "borootoi odor";
    
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl<<"d = "<<d<<endl<<"e = "<<e<<endl;
    
    //Write a C++ program to enter two numbers and find their sum.
    
    int sum,f,g;
    
    cout<<"Enter two numbers: ";
       cin>>f>>g;
        sum = f + g;
       cout<<"Here is your sum: "<<sum<<endl;
    
    //Write a C++ program to enter two numbers and perform all arithmetic operations. (+-*/)
    
    int h, i, sum, sub, multi, div;
       
       
       cout<<"Enter two numbers: ";
          cin>>h>>i;
           sum = h + i;
           sub = h - i;
           multi = h * i;
           div = h / i;
          cout<<"Here is your sum: "<<sum<<endl<<"Here is your sub: "<<sub<<endl<<"Here is your multi: "<<multi<<endl<<"Here is your div: "<<div<<endl;
       
    
    //Write a C++ program to enter length and breadth of a rectangle and find its perimeter.
    
    int w,l,p;
       
       cout<<"Input the length of the rectangle: "<<endl;
       cin>>l;
       cout<<"Input the width of the rectangle: "<<endl;
       cin>>w;
       p = 2*(w + l);
       cout<<" The perimeter of the rectangle is: "<<p<<endl;
    
    //Write a C++ program to enter length and breadth of a rectangle and find its area.
    
    int w, l, ar;
       
    // w = width, l = length, ar = area
         
         cout<<"Input the length of the rectangle: "<<endl;
         cin>>l;
         cout<<"Input the width of the rectangle: "<<endl;
         cin>>w;
         ar = l * w;
         cout<<" The area of the rectangle is: "<<ar<<endl;


    //Write a C++ program to enter radius of a circle and find its diameter, circumference and area.
    
    float r, d = 0, c = 0, a = 0;
       
       // r = radius, d = diameter, c = circumference, a = area

       cout << "Enter the radius of the circle: ";
       cin >> r;

       d = 2 * r;
       c = 2 * 3.14 * r;
       a = 3.14 * (r * r);

       cout << "\n";
       cout << "The diameter is: " << d << endl;
       cout << "The circumference is: " << c << endl;
       cout << "The area is " << a << " sq ";
    
    //Write a C++ program to enter length in centimeter and convert it into meter and kilometer.
   
    float km, m, cm;
    
    //km = kilometer, m = meter, cm = centimeter
    
      cout << "Enter the distance in centimeter: ";
      cin>> cm;
      m = (cm/100);
      km = (cm/100000);
      cout << " The distance in meter is: "<<m<< endl;
      cout << " The distance in kilometer is: "<< km << endl;
      
    //Write a C++ program to enter temperature in Celsius and convert it into Fahrenheit.
    
    float fahrenheit, celsius;
    
       cout<<"Enter the temperature in Celsius: ";
       cin >> celsius;
       fahrenheit = (celsius*9.0) / 5.0 + 32;
       cout << "The temperature in Celsius is: " << celsius << endl;
       cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    
    //Write a C++ program to enter temperature in Fahrenheit and convert to Celsius
    
    float fahrenheit, celsius;
           
     cout<<"Enter the temperature in Fahrenheit: ";
     cin>>fahrenheit;
     celsius = ((fahrenheit * 5.0)-(5.0 * 32))/9;
     cout<< " The temperature in Fahrenheit is: "<<fahrenheit<< endl;
     cout<< " The temperature in Celsius is: " <<celsius<< endl;
    
    //Write a C++ program to convert days into years, weeks and days.
    int days, years, weeks;


     cout<<"Enter the days: ";
     cin>>days;
     
       years = days/365;
       weeks = days/7;
       days = days;
   cout<<"Years: "<<years<<endl;
   cout<<"Weeks: "<<weeks<<endl;
   cout<<"Days: "<<days<<endl;
    
    
    return 0;
}
