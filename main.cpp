#include <iostream>

using namespace std;
int tamo(char *cadena){
    int tam=0;
    for (int i=0;cadena[i]!='\0';++i){
        tam++;
    }
    cout<<tam<<endl;
}
int rec_tamo(char *cadena){
    if(*cadena!='\0')
        return 0;
    return 1+rec_tamo(++cadena);
}
void invertir(char *cad){
    char fin=cad+tamo(*cad)-1;
    char t;
    while(fin>*cad){
        t=*cad;
        *cad=*fin;
        *fin=t;
        fin--;
        *cad++;
    }
}
int main()
{
    char cad[]={'h','o','l','a','\0'};
    tamo(cad);
    invetir(cad)

    return 0;
}
