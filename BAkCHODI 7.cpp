#include<iostream>
using namespace std ;
 double const PI = 3.14;
class shape{
	private:
	double radius , length , width;
	
	public:
		shape(double x ){
			radius = x;
		}
		
		shape(double a , double b ){
			length = a;
			width  = b;
		}
		
		double calculateCircle(){
			return  PI * radius *radius;
		}
		
		double calculateRectangle(){
			return  length * width ;
		}
};

int main (){
	double circle, rectangle;
	double r , l , w;
	cout<< "ENTER RADIUS =";
	cin>>r;
	cout<<"ENTER LENGTH =";
	cin>>l;
	cout<<"ENTER WIDTH =";
	cin>>w;
	
	shape s1(r);
	shape s2(l,w);
	   circle = s1.calculateCircle();
	rectangle = s2.calculateRectangle();
	cout<< " AREA OF CIRCLE = "<<circle<<endl;
	cout<<"AREA OF RECTANGLE= "<<rectangle<<endl;
}