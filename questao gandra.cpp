#include<iostream>
using namespace std;
int main(){
    
    //DECLARANDO VARIAVEIS
    
    int medida, kp, kc, kd, ideal;
    string resposta;
    
    //OBTENCAO DE DADOS
   do{ 
   cout<<"\n\nInforme o numero de  pessoas:";
   cin>>kp;

   cout<<"\nInforme o consumo medio por pessoa:"; 
   cin>>kc;

   cout<<"Informe a quantidade de dias de reserva de agua:";
   cin>>kd;
   
   //formula
   
   ideal=kp+kc+kd;
   
   //resolucao
   
   if(ideal<=900){
medida=900;
}

   if(ideal>900 && ideal<=1750){
medida=1750;
}

   if(ideal>1750 && ideal<=3000){
medida= 3000;
}

   if(ideal>3000)
cout<<"\t\t\n\nFeito somente por encomenda.";

cout<<"\n\nDeseja realizar outra venda(Responda apenas 'sim' ou 'nao', somente em minusculo)?";
cin>>resposta;

}while(resposta=="sim");

//Definicao ao usuario

cout<<"\t\t\t\n\nSEU RESERVATORIO IDEAL E DE "<<medida<<" LITROS ";

//COMANDOS PARA TERMINO DO PROGRAMA
    
    system("pause");
    return(0);
}
