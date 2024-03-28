# Reverse: Desafios de programação

### Sobre o desafio:

Desafio de algoritmo feito em C com o intuito de fazer um programa que lê o numero inserido pelo usuário e retorna o número ao contrario, exemplo:
```
input: 12345  
output: 54321 
```

Utilizei as seguintes bibliotecas:
1. _ctype.h_ para conferir se os numeros são válidos;
2. _stdbool.h_ para realizar operações com expressões booleanas;
3. _stdlib.h_ para converter o argv[1] para inteiro com _atoi()_;
4. _string.h_ para saber o tamanho do argv[1] com a função _strlen()_.

Para escrever os numeros ao contrario, utilizei um loop que roda até o numero inserido pelo usuario ser = 0. Pegando o ultimo digito de cada um desses numeros, e depois fiz um loop com printf para escrever o resultado.

---

### Como compilar e testar:

Para rodar o código, basta ter o GCC ou outro compilador de C instalado no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


GCC:
```
gcc reverse.c -o reverse
```
```
./reverse [NUMERO]
```

Clang:
```
clang reverse.c -o reverse
```
```
./reverse [NUMERO]
```

---
### Erros: 

Caso você tente rodar o código sem informar um número, o programa imprimirá a mensagem abaixo, e em seguida retornará 1.
```
ERRO: use ./reverse [NUMERO]
```

<br>

Caso você tente rodar o código com dois arguementos, o programa exibirá a mensagem abaixo, e em seguida retornará 2.
```
ERRO: use apenas um número.
```

<br>

Caso você insire ou caracteres que não sejam númericos (como letras ou símbolos) ao rodar o código o programa exibirá a mensagem abaixo, e em seguida retornará 3;

```
ERRO: use apenas caracteres numericos
``` 

---
