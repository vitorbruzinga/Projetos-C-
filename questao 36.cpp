#include<iostream>
using namespace std;
int main(){
    
    //DECLARACAO DE VARIAVEIS
    
    string nome_reponsavel;
    int filhos_matriculados;
    
    
    //COMANDO DE APRESETAAO DO PROGRAMA
    
    cout<<"\n\n\t\tINFORMATIVO DO PRECO DA MENSALIDADE A SER PAGO NA ESCOLINHA DE FUTEBOL.";
    
    //COMANDOS PARA ONTER INFORMACOES INICIAIS
    
    cout<<"\nDIGITE O NOME DO RESPONSAVEL:";
    cin>>nome_reponsavel;
    
    cout<<"\nINFORME QUANTOS FILHOS ESTAO/SERAO MATRICULADOS:";
    cin>>filhos_matriculados;
    
    //COMANDOS PARA DEFINIR O PREÇO COM BASE NO NUMERO DE FILHOS
    
    if(filhos_matriculados==1){
                               cout<<"\nO PRECO A SER PAGO POR CADA FILHO SERA "<<(120*1)-(120*0.1)<<"  REAIS  "<<"\n";
}
    else{
         if(filhos_matriculados==2 || filhos_matriculados==3){
                               cout<<"\nO PRECO A SER PAGO POR CADA FILHO SERA "<<(120*1)-(120*0.15)<<"  REAIS  "<<"\n";
}
    else{
         if(filhos_matriculados>3){
                               cout<<"\nO PRECO A SER PAGO POR CADA FILHO SERA "<<(120*1)-(120*0.2)<<"  REAIS  "<<"\n";
}
    else{
         cout<<"\nO PREÇO A SER PAGO POR CADA FILHO SERA 120 REAIS. ";
}
}
}
    
//COMANDOS PARA TERMINO DO PROGRAMA
    
    system("pause");
    return(0);
    
}
