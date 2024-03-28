# Password: Desafios de programação

### Sobre o desafio:

Desafio de algoritmo feito em C++ com o intuito de criar um programa que pega o CPF do usuário e retorna se ele é valido ou não. Esse é meu segundo código em C++ e eu utilizei intruções for com base em intervalo para fazer alguns loops no código.

---

### Como compilar e testar: 

Para rodar o código, basta ter algum compilador de C++, como o GCC *(G++)* ou outro compilador de C++ no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


G++:
```
g++ cpf.cpp -o cpf
```
```
./cpf
```

Clang++:
```
clang++ cpf.c -o cpf
```
```
./cpf
```

---

### Outputs: 

Caso você insira insira um CPF, ele pode retornar VÁLIDO, ou INVÁLIDO.

CPF Válido:

``` 
CPF VALIDO 
```

<br>

CPF Inválido com erro de verificação no primeiro digito verificador, alem do output abaixo o programa retornará o valor 1.

``` 
CPF INVALIDO 
```

CPF Inválido com erro de verificação no segundo digito verificador, alem do output abaixo o programa retornará o valor 2.

``` 
CPF INVALIDO 
```

---