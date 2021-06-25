#include <iostream>

using namespace std;

float quadrado(float b,float h){
	float area; 
	
	area = b * h;
	
	return area;
}
float circulo(float r){
	float area, p;
	
	area = 3,1416 * (r*r);
	p = (2 * 3,1416) * r;
	
	
	return area;
}
int main (){
	
	float num1, num2;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << num1<< " = "<< circulo(num1) <<"\n";

	
	return 0;
}
