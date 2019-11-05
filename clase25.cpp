#include <iostream>

int relleno(int f,int c);
int M[0][0];

int main(){
    int num;
    std::cout<<"Ingrese un numero del 3 al 11"<<std::endl;
    std::cin>>num;
    while(num<3 | num>11){
        std::cout<<"Número fuera de rango, ingresar nuevamente"<<std::endl;
        std::cin>>num;
    }
    M[num+2][num];
    relleno(num+2,num);
    
    return 0;
}

int relleno(int f,int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            M[i][j] = i+j;
            std::cout<<M[i][j]<<std::endl;
        }
    }
    return 0;
}

