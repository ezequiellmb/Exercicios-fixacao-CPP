#include <iostream>

using namespace std;

float adicao(float n1,float n2){
	float soma = 0;
	
	soma = n1 + n2;
	
	return soma;
}
float sub(float n1,float n2){
	float soma = 0;
	
	soma = n1 - n2;
	
	return soma;
}
float mult(float n1,float n2){
	float soma = 0;
	
	soma = n1 * n2;
	
	return soma;
}
float div(float n1,float n2){
	float soma = 0;
	
	soma = n1 / n2;
	
	return soma;
}

int main (){
	
	float num1, num2;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << num1<< "+" << num2<<" = "<<adicao(num1, num2) <<"\n";
	cout << num1<< "-" << num2<<" = "<<sub(num1, num2)<<"\n";
	cout << num1<< "*" << num2<<" = "<<mult(num1, num2)<<"\n";
	cout << num1<< "/" << num2<<" = "<<div(num1, num2)<<"\n";
	
	return 0;
}
