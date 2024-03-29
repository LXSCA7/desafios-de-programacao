# Palíndromo: Desafios de programação

### Sobre o desafio:

Desafio de programação feito em C++ para a criação de um programa que verifica se uma palavra é ou não um palíndromo, ou seja, se a palavra é igual de trás para frente.

---

### Como compilar e testar: 

Para rodar o código, basta ter algum compilador de C++, como o GCC *(G++)* ou outro compilador de C++ no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


G++:
```
g++ palindromo.cpp -o palindromo
```
```
./palindromo [PALAVRA]
```

Clang++:
```
g++ palindromo.cpp -o palindromo
```
```
./palindromo [PALAVRA]
```

---

### Outputs: 

Caso você insira o comando ./palindromo sem uma palavra, ou com mais de uma, o programa retornará um erro de código um e exibirá a frase:

``` 
erro: use ./palindromo [PALAVRA];
```

<br>

Caso você insira um palíndromo o programa exibirá a mensagem abaixo, seguida do valor 0:

``` 
palindromo!
```

Caso você insira uma palavra que não palíndromo o programa exibirá a mensagem abaixo, seguida do valor 0:
``` 
nao e palindromo
```

---