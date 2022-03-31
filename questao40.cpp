#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
    
    cout<<"\n\n\t\tINFORMATIVO LES ENFANTS:";
    
    string nome, sexo;
    int contador, modal, idade;
    float contador_homens=0, contador_mulheres=0, soma_idades_homens=0, soma_idades_mulheres=0, media_idade_h=0, media_idade_m=0, idade_h_maiores=0, mod_m=0, porc_m=0;  

  for(contador=0;contador<5;contador++){
                                          
     cout<<"\nINFORME SEU NOME:";
     cin>>nome;
     
     cout<<"\nINFORME O SEU SEXO(masculino ou feminino somente em minusculo):";
     cin>>sexo;
     
     cout<<"\nINFORME SUA IDADE:";
     cin>>idade;
     
     cout<<"\nINFORME SUA MODALIDADE ESPORTIVA(1-VOLEY/2-BASQUETE/3-FUTSAL):";
     cin>>modal;
     
     if(sexo=="masculino"){
                           contador_homens++;
                           soma_idades_homens+=idade;
                           
     if(idade>=25 && idade<=30){
                  idade_h_maiores++;
     }
     
     media_idade_h= soma_idades_homens/contador_homens;
     }
     
     else if(sexo== "feminino" ){
                              contador_mulheres++;
                              soma_idades_mulheres+=idade;
                              
        if(modal==2){
                          mod_m++;
    }
    
    media_idade_m=soma_idades_mulheres/contador_mulheres;
    porc_m=(mod_m/contador_mulheres)*100;
    
   }
   
   else{
        cout<<"\nNAO FOI POSSIVEL CONCLUIR A OPERACAO.";
}
}

 cout<<"\n\tMedia de idade dos homens: "<<media_idade_h<<"\n"; 
 cout<<"\n\tMedia de idade das mulheres: "<<media_idade_m<<"\n";
 cout<<"\n\tPorcentagem de mulheres no basquete em relacao as mulheres matriculadas: "<<porc_m<<"%\n";
 cout<<"\n\tNumero de homens com idade entre 25 e 30 anos: "<<idade_h_maiores<<"\n";
     

    system("pause");
    return(0);
}
