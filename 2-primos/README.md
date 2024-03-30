# Números primos: Desafios de Programação

### Sobre o desafio:

Desafio de algoritmo feito em C e C++ com o intuito de criar um programa que lê se um número é primo ou não e retorna _true_ para primo e _false_ para não primo. 

#### *C* :
Utilizei a biblioteca **<stdbool.h>** para criar uma função booleana e retornar valor para a função main, dizendo se o número é primo ou não. 

Para determinar se o número é primo ou não, utilizei um loop que roda _n_ vezes, sendo _n_ o numero inserido pelo usuário, cada vez que o a divisão inteira desse número obtiver resto 0, é contabilizado + 1 na váriavel 'soma'.

No final, se a soma for = 2, o número é primo.

---

#### *C++* :
O código segue o mesmo princípio em C++, com função booleana que retorna valor pra função main dizendo se o numero é ou não primo, porém esse é meu primeiro código em C++, então decidi manter as duas versões.

---

### Como compilar e testar: 

Para rodar o código, basta ter o GCC ou outro compilador da linguagem C no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


GCC:
```
gcc primos.c -o primos
```
OU
```
g++ primos.c -o primos
```
```
./primos [NUMERO]
```

Clang:
```
clang primos.c -o primos
```
OU
```
clang++ primos.c -o primos
```
```
./primos [NUMERO]
```

---
### Erros: 

Caso você tente rodar o código sem informar um número, o programa imprimirá a mensagem abaixo, e em seguida retornará 1.
```
ERRO: use ./primos [NUMERO]
```

<br>

Caso você tente rodar o código com dois argumentos, o programa exibirá a mensagem abaixo, e em seguida retornará 2.
```
ERRO: use apenas um número.
```

---
