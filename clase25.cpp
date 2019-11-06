#include <iostream>

int relleno(int num,float **M);
int imprimeCabezas(int num,float **M);
int imprimir(int num,float **M);

int main(){
    int num;
    std::cout<<"Ingrese un numero del 3 al 11"<<std::endl;
    std::cin>>num;
    while(num<3 | num>11){
        std::cout<<"Número fuera de rango, ingresar nuevamente"<<std::endl;
        std::cin>>num;
    }
    float **M = new float *[num+2];
    for (int i=0;i<num+2;++i){
        M[i] =new float[num];
    }
    relleno(num,M);
    imprimir(num,M);
    imprimeCabezas(num,M);
    
    return 0;
}

int relleno(int num,float **M){
    for(int i=0;i<num+2;i++){
        for(int j=0;j<num;j++){
            M[i][j] = i+j;
        }
    }
    return 0;
}

int imprimeCabezas(int num,float **M){
    float col=0;
    std::cout<<"Primera fila:"<<std::endl;
    for(int i=0;i<num;i++){
        std::cout<<M[0][i]<<"\t";
    }
    std::cout<<std::endl;
    for(int j=0;j<num+2;j++){
        col += M[j][0];
    }
    std::cout<<"Suma elementos primera columna:"<<std::endl;
    std::cout<<col<<std::endl;
    
    return 0;
}



int imprimir(int num,float **M){
    std::cout<<"Matriz:"<<std::endl;
    for (int i=0;i<num+2;i++){
        for (int j=0;j<num;j++) {
            std::cout<<M[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
    return 0;
}
