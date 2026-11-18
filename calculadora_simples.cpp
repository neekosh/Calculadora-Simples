#include <iostream> 

int main() {
	char opcoes;
	int num1, num2;

	std::cout << " ====== Calculadora basica ======" << std::endl;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> num1;

	std::cout << "Digite o segundo numero: ";
	std::cin >> num2;

	std::cout << "Escolha a operacao (+,-,*,/): ";
	std::cin >> opcoes;

	switch (opcoes) {
	case '+':
		std::cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	case '-':
		std::cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case '*':
		std::cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;

	case '/':
		if (num1 != 0)
			std::cout << num1 << " / " << num2 << " = " << num1 / num2;
		else
			std::cout << "Erro: Divisao por zero nao e permitida";
		break;
	default:
		std::cout << "Operacao invalida. Por favor, escolha uma oeracao valida (+,-,*,/)";

	}
	return 0;

}