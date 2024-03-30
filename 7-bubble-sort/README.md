# Bubble Sort: Desafios de programação

### Sobre o desafio:

Desafio de algoritmo feito em C++ que consiste em fazer a ordenação dos números por Bubble Sort, ou seja, há um loop para comparar o número atual com o próximo número, caso ele esteja na posição errada ocorre a troca deles. Esse loop é repetido até todos os valores estarem nas suas devidas posições. 

---

### Como compilar e testar: 

Para rodar o código, basta ter algum compilador de C++, como o GCC *(G++)* ou outro compilador de C++ no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


G++:
```
g++ bubble-sort.cpp -o bubble-sort
```
```
./bubble-sort
```

Clang++:
```
clang++ bubble-sort.cpp -o bubble-sort
```
```
./bubble-sort
```

---

### Output: 

O programa sempre irá gerar 30 números aleatórios entre 0 e 100 com a função rand(), e então ordenará os valores. Um exemplo:

``` 
lista desordenada: 93 47 21 60 14 78 18 55 90 83 88 35 71 38 54 2 49 43 5 29 37 96 74 6 5 85 45 62 51 21

lista ordenada: 2 5 5 6 14 18 21 21 29 35 37 38 43 45 47 49 51 54 55 60 62 71 74 78 83 85 88 90 93 96
```
---