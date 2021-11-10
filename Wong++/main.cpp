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
void aux();

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

void optional_whitespace(){
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
}

int S(){
    /// S -> {A}
    char c;
    c = getchar();
    if(c == '{'){
        optional_whitespace();
        char c;
        c = getchar();
        if(c != '\n'){
            ungetc(c, stdin);
        }
        if(A()){
            optional_whitespace();
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
        char c;
        c = getchar();
        if(c == 'n'){
            char c;
            c = getchar();
            if(c == 't'){
                char c;
                c = getchar();
                if(c == ' '){
                    if(I()){
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
    return 0;
}

int B2(){
    char c;
    c = getchar();
    /// B2-> : J
    if(c == ':'){
        optional_whitespace();
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
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    if(O()){
                        optional_whitespace();
                        char c;
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

int C(){
    char c;
    c = getchar();
    /// C-> float I B2
    if(c == 'f'){
        char c;
        c = getchar();
        if(c == 'l'){
            char c;
            c = getchar();
            if(c == 'o'){
                char c;
                c = getchar();
                if(c == 'a'){
                    char c;
                    c = getchar();
                    if(c == 't'){
                        char c;
                        c = getchar();
                        if(c == ' '){
                            if(I()){
                                if(C2()){
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

int C2(){
    char c;
    c = getchar();
    /// C2-> : K
    if(c == ':'){
        optional_whitespace();
        if(K()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// C2-> [] : {P}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    if(P()){
                        optional_whitespace();
                        char c;
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

int D(){
    char c;
    c = getchar();
    /// D-> double I D2
    if(c == 'd'){
        char c;
        c = getchar();
        if(c == 'o'){
            char c;
            c = getchar();
            if(c == 'u'){
                char c;
                c = getchar();
                if(c == 'b'){
                    char c;
                    c = getchar();
                    if(c == 'l'){
                        char c;
                        c = getchar();
                        if(c == 'e'){
                            char c;
                            c = getchar();
                            if(c == ' '){
                                if(I()){
                                    if(D2()){
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
    return 0;
}

int D2(){
    char c;
    c = getchar();
    /// D2-> : K
    if(c == ':'){
        optional_whitespace();
        if(K()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// D2-> [] : {P}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    if(P()){
                        optional_whitespace();
                        char c;
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

int E(){
    char c;
    c = getchar();
    /// E-> bool I E2
    if(c == 'b'){
        char c;
        c = getchar();
        if(c == 'o'){
            char c;
            c = getchar();
            if(c == 'o'){
                char c;
                c = getchar();
                if(c == 'l'){
                    char c;
                    c = getchar();
                    if(c == ' '){
                        if(I()){
                            if(E2()){
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

int E2(){
    char c;
    c = getchar();
    /// E2-> : L
    if(c == ':'){
        optional_whitespace();
        if(L()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// F2-> [] : {Q}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    /*if(Q()){
                        optional_whitespace;
                        char c;
                        c = getchar();
                        if(c == '}'){
                            return 1;
                        }
                        ungetc(c, stdin);
                    }*/
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
                        if(I()){
                            if(F2()){
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

int F2(){
    char c;
    c = getchar();
    /// F2-> : M
    if(c == ':'){
        optional_whitespace();
        if(M()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// F2-> [] : {R}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    if(R()){
                        optional_whitespace();
                        char c;
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

int G(){
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
                                if(I()){
                                    if(G2()){
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
    return 0;
}

int G2(){
    char c;
    c = getchar();
    /// G2-> : N
    if(c == ':'){
        optional_whitespace();
        if(N()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// G2-> [] : {T}
    if(c == '['){
        char c;
        c = getchar();
        if(c == ']'){
            optional_whitespace();
            char c;
            c = getchar();
            if(c == ':'){
                optional_whitespace();
                char c;
                c = getchar();
                if(c == '{'){
                    optional_whitespace();
                    if(T()){
                        optional_whitespace();
                        char c;
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
    optional_whitespace();
    char c;
    c = getchar();
    /// H-> , A
    if(c == ','){
        optional_whitespace();
        if(A()){
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    /// H-> , '\n' A
    if(c == ','){
        optional_whitespace();
        c = getchar();
        if(c == '\n'){
            while(c == '\n'){
                c = getchar();
            }
            ungetc(c, stdin);
            optional_whitespace();
            if(A()){
                return 1;
            }
        }
        ungetc(c, stdin);
    }
    /// H-> '\n'
    ungetc(c, stdin);
    optional_whitespace();
    c = getchar();
    if(c == '\n'){
        while(c == '\n'){
            c = getchar();
        }
        ungetc(c, stdin);
        optional_whitespace();
        return 1;
    }
    /// H-> vacio
    optional_whitespace();
    ungetc(c, stdin);
    return 1;
}

int I(){
    optional_whitespace();
    char c;
    c = getchar();
    if(c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z')){
        while(c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z') || (c >= '0' && c <= '9')){
            c = getchar();
        }
        ungetc(c, stdin);
        optional_whitespace();
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

int K(){
    //K-> ^(0-9)+$ | ^(0-9)+"\."(0-9)+$ | ^"\."(0-9)$
    char c;
    c = getchar();
    if(c >= '0' && c <= '9'){
        while(c >= '0' && c <= '9'){
            c = getchar();
        }
        ungetc(c, stdin);
        c = getchar();
        if(c == '.'){
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
        }
        else{
            ungetc(c, stdin);
            return 1;
        }
    }
    ungetc(c, stdin);
    c = getchar();
    if(c == '.'){
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
    }
    ungetc(c, stdin);
    return 0;
}

int L(){
    char c;
    c = getchar();
    /// L-> true
    if(c == 't'){
        char c;
        c = getchar();
        if(c == 'r'){
            char c;
            c = getchar();
            if(c == 'u'){
                char c;
                c = getchar();
                if(c == 'e'){
                    return 1;
                }
                ungetc(c, stdin);
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    c = getchar();
    /// L-> false
    if(c == 'f'){
        char c;
        c = getchar();
        if(c == 'a'){
            char c;
            c = getchar();
            if(c == 'l'){
                char c;
                c = getchar();
                if(c == 's'){
                    char c;
                    c = getchar();
                    if(c == 'e'){
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
    c = getchar();
    /// L-> 1
    if(c == '1'){
        return 1;
    }
    ungetc(c, stdin);
    c = getchar();
    /// L-> 0
    if(c == '0'){
        return 1;
    }
    ungetc(c, stdin);
    return 0;
}

int valid_char(){
    char escape_chars[11] = {'\'', '"', '?', '\\', 'a', 'b', 'f', 'n', 'r', 't', 'v'};
    char c;
    c = getchar();
    if((int)c >= 32 && (int)c <= 126 && c != '"' && c != '\''){
        if(c == '\\'){
            char c;
            c = getchar();
            for(int i = 0 ; i < 11 ; i++){
                if(c == escape_chars[i]){
                    return 1;
                }
            }
            ungetc(c, stdin);
        }
        return 1;
    }
    ungetc(c, stdin);
    return 0;
}

int apostrophe(){
    char c;
    c = getchar();
    if(c == '\''){
        return 1;
    }
    ungetc(c, stdin);
    return 0;
}

int M(){
    char c;
    c = getchar();
    //M-> ^'.'$
    if(c == '\''){
        if(valid_char()){
            char c;
            c = getchar();
            if(c == '\''){
                return 1;
            }
            ungetc(c, stdin);
        }
        char c;
        c = getchar();
        if(c == '"'){
            char c;
            c = getchar();
            if(c == '\''){
                return 1;
            }
            ungetc(c, stdin);
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}

int N(){
    char c;
    c = getchar();
    //N-> ^".*"$
    if(c == '"'){
        while(valid_char() || apostrophe()){
            continue;
        }
        char c;
        c = getchar();
        if(c == '"'){
            return 1;
        }
        ungetc(c, stdin);
    }
    ungetc(c, stdin);
    return 0;
}

int O(){
    /// O-> J, O
    if(J()){
        optional_whitespace();
        char c;
        c = getchar();
        if(c == ','){
            optional_whitespace();
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

int P(){
    /// P-> K, P
    if(K()){
        optional_whitespace();
        char c;
        c = getchar();
        if(c == ','){
            optional_whitespace();
            if(P()){
                return 1;
            }
        }
        ungetc(c, stdin);
        /// P-> K
        return 1;
    }
    return 0;
}

int Q(){
    /// Q-> L, Q
    if(L()){
        optional_whitespace();
        char c;
        c = getchar();
        if(c == ','){
            optional_whitespace();
            if(Q()){
                return 1;
            }
        }
        ungetc(c, stdin);
        /// Q-> L
        return 1;
    }
    return 0;
}

int R(){
    /// R-> M, R
    if(M()){
        optional_whitespace();
        char c;
        c = getchar();
        if(c == ','){
            optional_whitespace();
            if(R()){
                return 1;
            }
        }
        ungetc(c,stdin);
        /// R-> M
        return 1;
    }
    return 0;
}

int T(){
    /// T-> N, T
    if(N()){
        optional_whitespace();
        char c;
        c = getchar();
        if(c == ','){
            optional_whitespace();
            if(T()){
                return 1;
            }
        }
        ungetc(c,stdin);
        /// T-> N
        return 1;
    }
    return 0;
}
