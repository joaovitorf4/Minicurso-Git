//Insira seu nome
#define NOME_FIB "---"

int fibonacci(int n){
    
    if (n==1 || n==2) {
        return 1;
    }

    return fibonacci(n-2) + fibonacci(n-1);
}
