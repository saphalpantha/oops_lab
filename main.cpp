//#include <iostream>
//using namespace std;
//
//class Distance{
//public:
//    int inch;
//    int feet;
//    
//    void getInput(){
//        cout << "Enter Feet and Inch: ";
//        cin >> inch >> feet;
//    }
//    
//    void display(){
//        cout << "The distance is  << " <<  feet << "'" << inch << endl;
//    }
//    
//    Distance operator +(Distance obj){
//        Distance d;
//        d.inch =  inch + obj.inch;
//        d.feet = feet + obj.feet; 
//        return d;
//    }
//    
//};
//
//int main()
//{
//    Distance d1;
//    Distance d2;
//    Distance d3;
//    d1.getInput();
//    d2.getInput();
//    d3 = d1+d2;
//    d3.display();
//    
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Complex{
//public:
//    int real;
//    int imag;
//    void getInput(){
//        cout << "Enter the real and imag part of Complex NUMBER : ";
//        cin >> real >> imag;
//    }
//    
//    
//    
//    void display(){
//            cout << "Real and Imag Part is " << real <<  " " << imag;
//    }
//    
//    
//    Complex operator ++ (Complex &obj){
//        Complex obj1
//        obj1 = obj.real++;
//        obj1 = obj.imag++
//        return;
//    }
//    
//    Complex Add(Complex &obj1, Complex &obj2){
//        Complex c;
//        c.real = obj1.real + obj2.real;
//        c.imag = obj1.imag + obj2.imag;
//        c++;
//        c.display();
//    }
//    
//    
//    
//};
//
//
//
//int main(){
//    Complex c1;
//    Complex c2;
//    Complex c3;
//    Complex c4;
//    c1.getInput();
//    c2.getInput();
//    c4 = c3.Add(c1, c2);
//    c4.display();
//}


//QN 2:




//#include <iostream>
//#define n 20
//using namespace std;
//class Arr{
//    public:
//    int arr[n];
//    void operator >>(Arr a){
//        for(int i=0;i<n;i++){
//            cin >> arr[i];
//        }
//    }
//
//    
//    
//    void operator << (Arr obj2){
//        for(int i=0;i<n;i++){
//            cout << obj2.arr[i];
//        }
//    }
//    void getInput(){
//        cout << "Enter data in array: " << endl;
//        Arr inp;
//        inp >> inp.arr;
//    }
//    
//    
//    void display(&obj){
//        cout << "The Data are : ";
//        obj << obj.arr;
//    }
//
//};
//
//int main(){
//    Arr a1;
//    a1.getInput();
//    a1.display();
//    return 0;
//}



//======================================= OOPS LAB  OPERATOR OVERLOADING





/*WAP to overload following operators for class distance, which stores the distance in feet
and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)
b) Unary -
ii. Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements.
iii. Create a class which a complex number. Add two objects and display the resultant object.
Overload the ++ (post and pre) operator for the class.
iv. Create a class which allocates the memory for a string through dynamic constructor.
Overload the binary + to concatenate two strings and display it.
v. WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects
and display whether they are equal or not. Overload the assignment operator.
vi. WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
objects and return the object with larger time value and display it. Overload the ‘==’
operator to compare and display whether two given objects contain same distance
value.
*/

//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//class Distance{
//public:
//    int feet;
//    int inch;
//    
//    Distance(){
//        
//    }
//    friend Distance operator+(int &,Distance &);
//    friend Distance operator+(Distance &d1, Distance &d2);
//    
//    Distance(int x, int y){
//        feet = x;
//        inch = y;
//    }
//
//
//    void output(){
//        cout << feet << "'" << inch;
//    }
//};
//
//
//Distance operator +( int x , Distance &d1){
//    Distance ans;
//    ans.feet = d1.feet;
//    ans.inch = x + d1.inch;
//    return ans;   
//    }   
//    
//    
//Distance operator +(Distance &d1, Distance &d2){
//    Distance ans;
//    ans.inch = d1.inch + d2.inch;
//    ans.feet = d1.feet + d2.feet;
//    return ans;
//}
//
//int main(){
//    Distance d1(90,100);
//    Distance d2(4,5);
//    Distance d3;
//    d3 = d1 + d2;
//    d3.output();
//    cout << endl;
//    Distance d4;
//    d4 = 4+d1;
//    cout << endl;
//    cout << "ADDING INT" << endl;
//    d4.output();
//}





//QN2 
//
//#include <iostream>
//#include <string>
//using namespace std;
//class Array{
//public:
//    int arr;
//    int x;
//    friend void operator >>();
//    friend void operator <<();
////    friend void operator >> (const Array &a);
//};
//
//void  operator >>(){
//    Array a;
//    int size = sizeof(a.arr)/sizeof(a.arr[0]);
//    for(int i=0;i<size;i++){
//        cout << "Enter data: " << endl;
//        cin >> a.arr[i];
//    }
//}
////    
////
//void  operator <<(){
//    int size = sizeof(a.arr)/sizeof(a.arr[0]);
//    for(int i=0;i<size;i++){
//        cout << a.arr[i] << " ";
//    }
//}
//
//int main(){
//    Array a;
//    cin >>a;
//}




///////////////////////////// QN 3
//
//#include <iostream>
//using namespace std;
//class Complex{
//public:
//    int real;
//    int imag;
//    void getInput(){
//        cout << "Enter the real and imag part of Complex NUMBER : ";
//        cin >> real >> imag;
//    }
//    
//    void display(){
//            cout << "\nReal and Imag Part is " << real <<  " " << imag << endl;
//    }
//    
//    
//    Complex  operator ++(){
//        cout << "prefix increment" << endl;
//        Complex obj1;
//        obj1.real = real++;
//        obj1.imag = imag++;
//        return obj1;
//    }
//    
//    
//    Complex  operator ++(int){
//        cout << "postfix increment" << endl;
//        Complex obj1;
//        obj1.real = real++;
//        obj1.imag = imag++;
//        return obj1;
//    }
//   
//    Complex Add(Complex &obj1, Complex &obj2){
//        Complex c;
//        c.real = obj1.real + obj2.real;
//        c.imag = obj1.imag + obj2.imag;
//        c.display();
//        return c;
//    }
//    
//    
//    
//};
//
//
//
//int main(){
//    Complex c1,c2,c3,c4;
//    c1.getInput();
//    c2.getInput();
//    c1.display();
//    c2.display();
//    cout << endl;
//    cout << "Addition of two complex number is" << endl;
//    c4 = c3.Add(c1, c2);
//    c4.display();
//    cout << endl;
//    ++c4;
//    c4.display();
//    c4++;
//    c4.display();
//}


//// QN 4
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class String
//{
//        public:
//                char str[20];
//        public:
//                void accept_string()
//                {
//                        cout<<"\n Enter String: ";
//                        cin>>str;
//                }
//                void display_string()
//                {
//                        cout<<str;
//                }
//                String operator+(String x)  //Concatenating String
//                {
//                        String s;
//                        strcat(str,x.str);
//                        strcpy(s.str,str);
//                        return s;
//                }
//};
//int main()
//{
//        String str1, str2, str3;
//
//        str1.accept_string();
//        str2.accept_string();
//
//        cout<<"\n ----------------------------------------------";
//        cout<<"\n\n First String is: ";
//        str1.display_string();   //Displaying First String
//
//        cout<<"\n\n Second String is: ";
//        str2.display_string();  //Displaying Second String
//
//        cout<<"\n ----------------------------------------------";
//        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
//        cout<<"\n\n Concatenated String is: ";
//        str3.display_string();
//
//        return 0;
//}




/// QN 5

//#include <iostream>
//using namespace std;
//class Time{
//public:
//    int hrs;
//    int min;
//    int sec;
//    Time(){};
//    Time(int hr, int m, int s){
//        hrs = hr;
//        min = m;
//        sec = s;
//    }
//    
//    friend bool operator ==(Time &, Time &);
//    friend Time operator +(Time &, Time &);
//    void output(){
//        cout << hrs<<" : " << min << " : " << sec <<  " : " << endl;
//    }
//};
//
//bool operator == (Time &t1, Time&t2){
//        if(t1.hrs == t2.hrs && t1.min == t2.min && t1.sec == t2.sec){
//            return true;
//        }
//        return false;
//    }
//    
//    Time Add(Time &obj1, Time &obj2){
//        Time c;
//        c.hrs = obj1.hrs + obj2.hrs;
//        c.min = obj1.min + obj2.min;
//        c.sec = obj1.sec + obj2.sec;
//        return c;
//    }
//int main(){
//    Time t1(1, 1,1);
//    Time t2(1,1,1);
//    Time t3,t4;
//    t3= Add(t1,t2);
//    cout << "Addition of 2 obj = ";
//    t3.output();
//
//    if(t1 == t2){
//        cout << "objects are equal" << endl;
//    }
//    else{
//        cout << "objects are not equal" << endl;
//    }
//    
//}



// QN 6

//#include <iostream>
//using namespace std;
//class Distance{
//public:
//    int x;
//    Distance(int d){
//        x = d;
//    }
//    
//    friend int operator >(Distance &,Distance &);
//    friend bool operator ==(Distance &, Distance&);
//    friend int operator +(Distance &, Distance&);
//    void output(){
//        cout << "value = " << x << endl;
//    }
//};
//int operator > (Distance &d1, Distance &d2){
//    if(d1.x > d2.x){
//        return d1.x;
//    }
//    return d2.x;
//}
//
//bool operator ==(Distance &d1, Distance&d2){
//    if(d1.x == d2.x){
//        return true;
//    }
//    return false;
//}
//
//int operator +(Distance &d1, Distance&d2){
//    return d1.x+d2.x;
//}
//int main(){
//    int max;
//    int add;
//    Distance d1(10), d2(d1);
//    d1.output();
//    d2.output();
//    cout << "Addition of 2 obj = "  << d1+d2 <<  endl;
//    if(d1 == d2){
//        cout << "Equal distance" << endl;
//    }
//    else{
//        cout << "Unequal Distance" << endl;
//    }
//    max = d1 > d2;
//    cout << "Max Value = " << max << endl;
//    
//    
//}


