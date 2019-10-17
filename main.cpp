#include <iostream>

using namespace std;
int tamo(char *cadena){
    int tam=0;
    for (int i=0;cadena[i]!='\0';++i){
        tam++;
    }
    return tam;
}
int rec_tamo(char *cadena){
    if(*cadena == '\0')
        return 0;
    return 1+ rec_tamo(++cadena);
}
void invertir(char *cad){
    char *fin = cad + tamo(cad);
    char t;
    while(fin > cad){
        t=*cad;
        *cad=*fin;
        *fin=t;
        fin--;
        cad++;
    }
}
/*int rec_invertir(char *cadena){
    }
    return 1+rec_invertir(cadena);
}*/
int main()
{
    char cad[]={'h','o','l','a','\0'};
    cout << rec_tamo(cad) << endl;
    /*invertir(cad);
    cout<<cad<<endl;*/
    rec_invertir(cad);
    cout<<cad<<endl;
    return 0;
}
