# Calculadora Básica em C++

Uma calculadora de linha de comando feita em C++ como projeto de estudos. O programa lê dois números inteiros, pede a operação desejada e mostra o resultado no terminal.

## Funcionalidades

- Soma (`+`)
- Subtração (`-`)
- Multiplicação (`*`)
- Divisão (`/`) com verificação de divisão por zero
- Mensagem de erro para operações inválidas

## Conceitos praticados

- Entrada e saída com `iostream` (`std::cin` e `std::cout`)
- Tipos de dados (`int` e `char`)
- Operadores aritméticos
- Estrutura condicional `switch/case`
- Estrutura condicional `if/else`
- Uso do prefixo `std::` em vez de `using namespace std;`

## Como compilar e executar

Você precisa de um compilador C++ instalado (como o `g++`).

```bash
# Compilar
g++ main.cpp -o calculadora

# Executar (Linux/macOS)
./calculadora

# Executar (Windows)
calculadora.exe
```

Se estiver usando o Visual Studio, basta abrir o projeto e executar com `Ctrl + F5`.

## Exemplo de uso

```
 ====== Calculadora basica ======
Digite o primeiro numero: 10
Digite o segundo numero: 5
Escolha a operacao (+,-,*,/): +
10 + 5 = 15
```

## Limitações conhecidas

- Trabalha apenas com números inteiros, então `7 / 2` resulta em `3`.
- Realiza uma única operação por execução.

## Próximos passos

- [ ] Usar `double` para aceitar números decimais
- [ ] Permitir várias operações seguidas com um menu
- [ ] Validar a entrada do usuário (letras no lugar de números)
- [ ] Incluir potência e raiz quadrada
- [ ] Separar o código em funções

## Autor

Projeto de estudos criado para aprender C++.

## Licença

Este projeto é livre para estudo e uso pessoal.
