#include<iostream>
using namespace std;
int main(){
    
    //Apresemtacao do Programa
    
    cout<<"\n\n\t\tCALCULADOR DE FOLHA SALARIAL:";
    
    //Declaracao de Variaveis
    
    float salario_bruto, imposto_de_renda, inss, salario_final;
    
    //Obtencao de dados
    
    cout<<"\nINFORME SEU SALARIO BRUTO:";
    cin>>salario_bruto;
    
   //Resolucao da faixa de desconto de imposto de renda
   
   if(salario_bruto<=1999.18){
             imposto_de_renda=0; 
}
   
   if(salario_bruto>1999.18 && salario_bruto<=2967.98){
             imposto_de_renda=salario_bruto*0.075;
}
  
  if(salario_bruto>3967.98 && salario_bruto<=3938.60){
             imposto_de_renda=salario_bruto*0.15;
}

  if(salario_bruto>3938.60 && salario_bruto<=4897.91){
             imposto_de_renda=salario_bruto*0.225;
}
  else{
             imposto_de_renda=salario_bruto*0.275;
}

//Resolucao da faixa de desconto do inss
    
    if(salario_bruto<=1659.38){
             inss=salario_bruto*0.08;                 
}

    if(salario_bruto>1959.38 && salario_bruto<=2756.66){
             inss=salario_bruto*0.09;                
}

    else{
            inss=salario_bruto*0.11;
}

//Formula para calcular o salario apos os descontos

salario_final=salario_bruto-imposto_de_renda-inss;

//Comandos para imprimir a folha salarial:
           
cout<<"\n\nSUA FOLHA DE PAGAMENTO E DE:";

cout<<"\n\nSALARIO FINAL:"<<salario_final<<" REAIS "<<"\n\n\n\n\n";
cout<<"\n\nDesconto do imposto de renda:"<<imposto_de_renda<<" REAIS "<<"\n";
cout<<"\n\nDesconto do INSS:"<<inss<<" REAIS "<<"\n\n\n";

//Comandos para termino do programa

    system("pause");
    return(0);
}
