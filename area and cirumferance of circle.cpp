#include<iostream>
using namespace std;
class circle{
		public:
	float radius;
	float x;
	float y;

	circle(){
		radius = 0;
		x = 0;
		y = 0;
	}
	circle(float r, float a ,float b ){
		radius = r ;
		x = a; 
		y = b;
	}
	void setValues(float r, float a, float b){
    radius = r;
    x = a;
    y = b;
	}
	float area()
{
    return 3.14 * radius * radius;
}
float circumference()
{
    return 2 * 3.14 * radius;
}
void display()
{
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Radius = " << radius << endl;
}
};
int main (){
	circle c1;
	circle c2(10, 20, 5);
	float r, a, b;
	cout<<" enter value of radius :"<<endl;
	cin >> r ;
	cout<<" enter value of x :"<<endl;
	cin>> a ;
	cout<<"enter vale of y : "<<endl;
	cin >> b;
			if (r < 0)
{
    cout << "Invalid radius!" << endl;
}
else{

	c2.setValues(r ,a , b );
		c2.display();
	cout <<"area of circle : "<< c2.area() << endl;
    cout <<"circumference of circle : " <<c2.circumference() << endl;
}
	
}

