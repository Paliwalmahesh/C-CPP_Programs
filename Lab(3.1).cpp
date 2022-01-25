#include <iostream>
//Mahesh dhanraj Paliwal
//Roll No:22442
using namespace std;
float area (int); 
float area (int, int);  
float area (float);  
float area (float, float);  
float area (float, int);  
float area (int, int, int);  
int main (){
    int ch;
    while(ch!=7){

    cout<<"\nSelect number to perform area of:"<<endl;
    cout<<"1. Circle \n2. Rectangle \n3. Square \n4. Regular Triangle \n5. Parallelogram \n6. Trapezoid\n7.exit"<<endl;
    cin>>ch;
    switch (ch){
    case 1:
        int r;
        cout<<"Enter Radius of circle:";
        cin>>r;
        cout<<"Area of circle is:"<<area(r);
        break;
    case 2:
        int l, b;
        cout<<"Enter length and bredth of rectangle: "<<endl;
        cin>>l>>b;
        cout<<"Area of rectangle is: "<<area(l,b);
        break;


    case 3:
        float s;
        cout<<"Enter side of sqaure :";
        cin>>s;
        cout<<"Area of sqaure is:"<<area(s)<<endl;
        break;

    case 4:
        float br, h;
        cout<<"Enter base  and height of triangle: ";
        cin>>br>>h;
        cout<<"Area of triangle is: "<<area(br,h)<<endl;
        break;
    case 5:
        float bas;
        int he;
        cout<<"Enter base (float) and height (int) of parllelogram: "<<endl;
        cin>>bas>>he;
        cout<<"Area of prallelogram is: "<<area (bas,he)<<endl;
        break;
    case 6:
        int y,z,x;
        cout<<"Enter a, b and h (all int)of trapaziod"<<endl;
        cin>>y>>z>>x;
        cout<<"Area of trapaziod is: "<<area(y,z,x)<<endl;
        break;
    default:
        cout<<"invalid response"<<endl;
        break;



	}
    }
    

    return 0;
}
float area (int r){ 
    return (3.14*r*r);
}
float area (int l, int b){
    return (l*b);
}
float area (float s){  
    return (s*s);
}
float area (float b, float h){  
    return (0.5*b*h);
}
float area (float b, int h){  
    return (b*h);
}
float area (int a, int b, int h){  
    return ((a+b)*h*0.5);
}
