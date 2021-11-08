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
    /// TO DO: Leer el archivo
    if(S() && getchar()=='\n'){
        cout<< "La palabra fue aceptada\n";
    }
    else{
        cout<< "La palabra no es aceptada\n";
    }
    return 0;
}

int S(){
    /// S -> {A}
    char c;
    c = getchar();
    if(c == '{'){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
        }
        else{
            ungetc(c, stdin);
        }
        c = getchar();
        if(c != '\n'){
            ungetc(c, stdin);
        }
        if(A()){
            char c;
            c = getchar();
            if(c == '}'){
                return 1;
            }
        }
        return 0;
    }
    ungetc(c, stdin);
    /// S -> vacio
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
    /*if(C()){
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
    }*/
    return 0;
}

int B(){
    char c;
    c = getchar();
    /// B-> int I B2
    if(c == 'i'){
        char c;
        c = getchar();
        if(c == 'n'){
            char c;
            c = getchar();
            if(c == 't'){
                char c;
                c = getchar();
                if(c == ' '){
                    while(c == ' '){
                        c = getchar();
                    }
                    ungetc(c, stdin);
                    if(I()){
                        char c;
                        c = getchar();
                        if(c == ' '){
                            while(c == ' '){
                                c = getchar();
                            }
                            ungetc(c, stdin);
                        }
                        else{
                            ungetc(c, stdin);
                        }
                        if(B2()){
                                return 1;
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

int B2(){
    char c;
    c = getchar();
    /// B2-> : J
    if(c == ':'){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
        if(J()){
                return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// B2-> [] : {O}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            char c;
            c = getchar();
            if(c == ' '){
                while(c == ' '){
                    c = getchar();
                }
                ungetc(c, stdin);
            }
            else{
                ungetc(c, stdin);
            }
            c = getchar();
            if(c == ':'){
                    char c;
                    c = getchar();
                    if(c == ' '){
                        while(c == ' '){
                            c = getchar();
                        }
                        ungetc(c, stdin);
                    }
                    else{
                        ungetc(c, stdin);
                    }
                    c = getchar();
                    if(c == '{'){
                            char c;
                            c = getchar();
                            if(c == ' '){
                                while(c == ' '){
                                    c = getchar();
                                }
                                ungetc(c, stdin);
                            }
                            else{
                                ungetc(c, stdin);
                            }
                            if(O()){
                                char c;
                                c = getchar();
                                if(c == ' '){
                                    while(c == ' '){
                                        c = getchar();
                                    }
                                    ungetc(c, stdin);
                                }
                                else{
                                    ungetc(c, stdin);
                                }
                                c = getchar();
                                if(c == '}'){
                                    return 1;
                                }
                                ungetc(c, stdin);
                            }
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

int H(){
    char c;
    c = getchar();
    /// H-> , A
    if(c == ','){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
        }
        else{
            ungetc(c, stdin);
        }
        if(A()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// H-> , '\n' A
    if(c == ','){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
        c = getchar();
        if(c == '\n'){
            while(c == '\n'){
                c = getchar();
            }
            ungetc(c, stdin);
            if(A()){
                return 1;
            }
        }
        ungetc(c, stdin);
    }
    /// H-> '\n'
    ungetc(c, stdin);
    c = getchar();
    if(c == '\n'){
        while(c == '\n'){
            c = getchar();
        }
        ungetc(c, stdin);
        return 1;
    }
    /// H-> vacio
    ungetc(c, stdin);
    return 1;
}

int I(){
    char c;
    c = getchar();
    if(c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z')){
        while(c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z')){
            c = getchar();
        }
        ungetc(c, stdin);
        return 1;
    }
    ungetc(c, stdin);
    return 0;
}

int J(){
    char c;
    c = getchar();
    if(c >= '0' && c <= '9'){
        while(c >= '0' && c <= '9'){
            c = getchar();
        }
        ungetc(c, stdin);
        return 1;
    }
    ungetc(c, stdin);
    return 0;
}

int O(){
    /// O-> J, O
    if(J()){
        char c;
        c = getchar();
        if(c == ','){
            char c;
            c = getchar();
            if(c == ' '){
                while(c == ' '){
                    c = getchar();
                }
                ungetc(c, stdin);
            }
            else{
                ungetc(c, stdin);
            }
            if(O()){
                return 1;
            }
        }
        ungetc(c, stdin);
        /// O-> J
        return 1;
    }
    return 0;
}
