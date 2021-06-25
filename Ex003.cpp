#include <iostream>

using namespace std;

int main (){
	
	int i;
	
	cout << "\nQuantos alunos ha na turma? ";
	cin >> i;
	float n1[i];
	float n2[i];
	int j;
	string nome[i];
	
	for(j = 0; j < i; j++){
		cout << "Nome do aluno: ";
		cin >> nome[j];
		cout << "Primeira nota: ";
		cin >> n1[j];
		cout << "Segunda nota: ";
		cin >> n2[j];
	}
	for(j = 0; j < i; j++){
		cout << "\n\nAluno(a): "<<nome[j];
		float media = 0;
		media = (n1[j] + n2[j]) / 2;
		cout << "\nMedia "<<media;
		if(media >= 6){
			cout <<" - Aprovado!";
		}else{
			cout <<" - Reprovado!";
		}
	}
	return 0;
}
