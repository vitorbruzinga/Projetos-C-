#include<iostream>
using namespace std;
int main(){
    
    //DECLARACAO DE VARIAVEIS
    
    string nome;
    float salario_bruto;
   
   //COMANDO DE APRESENTACAO DO PROGRAMA
    
    cout<<"\n\n\t\tCALCULADOR DE SALARIO LIQUIDO:";
    
    //COMANDOS PARA COLETAR DADOS INICIAIS 
    
    cout<<"\nDIGITE SEU NOME:";
    cin>>nome;
    
    cout<<"\nDIGITE SEU SALARIO BRUTO:";
    cin>>salario_bruto;
    
    //COMANDOS PARA CALCULAR O SALARIO LIQUIDO COM BASE NO VALOR E PORCENTAGEM
    
    if(salario_bruto <= 800){
        cout<<"\nSEU SALARIO LIQUIDO E :"<<salario_bruto-(salario_bruto*0.09)<<"\n";   
}
   else {
        if(salario_bruto>800 && salario_bruto<=1500 ){
        cout<<"\nSEU SALARIO LIQUIDO E :"<<salario_bruto-(salario_bruto*0.1)<<"\n";
}
   else { 
        cout<<"\nSEU SALARIO LIQUIDO E :"<<salario_bruto-(salario_bruto*0.11)<<"\n";
}
}
    
    //COMANDOS PARA TERMINO DO PROGRAMA 
    
    system("pause");
    
    return(0);
}
