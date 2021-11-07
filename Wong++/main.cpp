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
    /// S -> vacio
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
                            if(B2()){
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
            if(J()){
                return 1;
            }
        }
        ungetc(c, stdin);
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
                if(c == ':'){
                    char c;
                    c = getchar();
                    if(c == ' '){
                        while(c == ' '){
                            c = getchar();
                        }
                        if(c == '{'){
                            if(O()){
                                char c;
                                c = getchar();
                                if(c == '}'){
                                    return 1;
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
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}

int E2(){

}

int F(){
    char c;
    c = getchar();
    /// F-> char I F2
    if(c == 'c'){
        char c;
        c = getchar();
        if(c == 'h'){
            char c;
            c = getchar();
            if(c == 'a'){
                char c;
                c = getchar();
                if(c == 'r'){
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
                                if(B2()){
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
    }
    ungetc(c, stdin);
    return 0;
}

int F2(){
    char c;
    c = getchar();
    /// F2-> : M
    if(c == ':'){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
            if(M()){
                return 1;
            }
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    c = getchar();
    /// F2-> [] : {R}
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
                if(c == ':'){
                    char c;
                    c = getchar();
                    if(c == ' '){
                        while(c == ' '){
                            c = getchar();
                        }
                        if(c == '{'){
                            if(R()){
                                char c;
                                c = getchar();
                                if(c == '}'){
                                    return 1;
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
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}

int G(){
    {
    char c;
    c = getchar();
    /// G-> string I G2
    if(c == 's'){
        char c;
        c = getchar();
        if(c == 't'){
            char c;
            c = getchar();
            if(c == 'r'){
                char c;
                c = getchar();
                if(c == 'i'){
                    char c;
                    c = getchar();
                    if(c == 'n'){ 
                        char c;
                        c = getchar();
                        if(c == 'g'){  
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
                                        if(B2()){
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
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}
}

int G2(){
    char c;
    c = getchar();
    /// G2-> : N
    if(c == ':'){
        char c;
        c = getchar();
        if(c == ' '){
            while(c == ' '){
                c = getchar();
            }
            ungetc(c, stdin);
            if(N()){
                return 1;
            }
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    c = getchar();
    /// G2-> [] : {T}
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
                if(c == ':'){
                    char c;
                    c = getchar();
                    if(c == ' '){
                        while(c == ' '){
                            c = getchar();
                        }
                        if(c == '{'){
                            if(T()){
                                char c;
                                c = getchar();
                                if(c == '}'){
                                    return 1;
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
            if(A()){
                return 1;
            }
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    /// H -> vacio
    ///ungetc(c, stdin);
    return 1;
}

int I(){
    char c;
    c = getchar();
    return 1;
}

int J(){
    char c;
    c = getchar();
    return 1;
}

int O(){
    char c;
    c = getchar();
    return 1;
}
