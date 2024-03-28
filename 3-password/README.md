# Password: Desafios de programação

### Sobre o desafio:

Desafio de algoritmo feito em C com o intuito de criar um programa que pega a senha inserida pelo usuário e cadastra ela caso atenda aos requisitos de segurança. Caso a senha não atenda, o programa retornará o erro, indicando o motivo e um valor para cada erro.

Utilizei bibliotecas como: **<ctype.h>** para fazer as validações de segurança; **<stdbool.h>**, para realizar expressões booleanas; e **<string.h>** para verificações de strings.

---

### Como compilar e testar: 

Para rodar o código, basta ter o GCC ou outro compilador da linguagem C no seu computador, clonar o repositório e utilizar o seguinte comando no terminal:


GCC:
```
gcc password.c -o password
```
```
./password
```

Clang:
```
clang password.c -o password
```
```
./password
```

---