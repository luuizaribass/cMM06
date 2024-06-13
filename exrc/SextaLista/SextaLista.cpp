//#include <locale>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;



//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> dados(10);
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Insira um número: ";
//		cin >> dados[i];
//	}
//
//	for (int i = 0; i < dados.size(); i++) {
//		cout << dados[i];
//		cout << "\n";
//	}
//
//	return 0;
//}


//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> numeros(7);
//	int soma = 0;
//
//	for (int i = 0; i < 7; i++) {
//		cout << "Insira um número: ";
//		cin >> numeros[i];
//	}
//
//	for (int i = 0; i < numeros.size(); i++) {
//		soma += numeros[i];
//	}
//
//	cout << "O resultado da soma dos números é: " << soma;
//}


//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> idade = { 18, 18, 18, 17, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16 };
//	double soma = 0;
//	double media = 0;
//
//	for (int i = 0; i < idade.size(); i++) {
//		soma += idade[i];
//	}
//
//	media = soma / idade.size();
//	cout << "A média das idades é: " << media;
//
//	return 0;
//}


//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> valores = { 5, 9, 7, 10, 15, 23 };
//	valores.push_back(20);
//	valores.push_back(30);
//
//	int soma = 0;
//
//	for (int i = 0; i < valores.size(); i++) {
//		soma += valores[i];
//	}
//
//	cout << "O homem tem na sua conta: " << soma << " reais.";
//
//	return 0;
//}


//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> numero(10);
//	double soma = 0;
//	double sub = 0;
//	double mult = 1;
//	int opcao;
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Insira um número: ";
//		cin >> numero[i];
//	}
//
//	cout << "Escolha uma opção: 1(soma), 2(subtração) e 3(multiplicação)";
//	cin >> opcao;
//
//    for (int i = 0; i < 10; i++) {
//        if (opcao == 1) {
//            soma += numero[i];
//        }
//        else if (opcao == 2) {
//            sub -= numero[i];
//        }
//        else if (opcao == 3) {
//            mult *= numero[i];
//        }
//        else {
//            cout << "Essa opção não existe";
//        }
//    }
//
//    if (opcao == 1) {
//        cout << "O resultado da soma é: " << soma;
//    }
//    else if (opcao == 2) {
//        cout << "O resultado da subtração é: " << sub;
//    }
//    else if (opcao == 3) {
//        cout << "O resultado da multiplicação é: " << mult;
//    }
//
//    return 0;
//}