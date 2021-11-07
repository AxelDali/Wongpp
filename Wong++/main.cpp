#include <iostream>
#include <regex>

using namespace std;

int S();
int A();
int B();
int B2();
int C();
int C2();
int D();
int D2();
int E();
int E2();
int F();
int F2();
int G();
int G2();
int H();
int I();
int J();
int K();
int L();
int M();
int N();
int O();
int P();
int Q();
int R();
int T();

int main()
{
    ///TO DO: Leer el archivo
    /*if(S() && getchar()=='\n'){
        cout<< "La palabra fue aceptada\n";
    }
    else{
        cout<< "La palabra no es aceptada\n";
    }*/
    return 0;
}

int S(){
    ///S -> {A}
    char c;
    c = getchar();
    if(c == '{'){
        if(A()){
            char c;
            c = getchar();
            if(c == '}'){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
    ungetc(c, stdin);
    ///S -> empty
    ungetc(c, stdin);
    return 1;
}

int A(){
    if(B()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(C()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(D()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(E()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(F()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(G()){
        if(H()){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

int B(){
    char c;
    c = getchar();
    /// B-> int I B2
    if(c == 'i'){
        c = getchar();
        if(c == 'n'){
            c = getchar();
            if(c == 't'){
                c = getchar();
                if(c == ' '){
                    while(c == ' '){
                        c = getchar();
                    }
                    ungetc(c, stdin);
                    if(I()){
                        c = getchar();
                        if(c == ' '){
                            while(c == ' '){
                                c = getchar();
                            }
                            ungetc(c, stdin);
                            if(B2){
                                return 1;
                            }
                        }
                    }
                    ungetc(c, stdin);
                }
                ungetc(c, stdin);
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}
