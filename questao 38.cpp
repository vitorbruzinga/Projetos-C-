#include<iostream>
using namespace std;
int main(){
    
    //DECLARACAO DE VARIAVEIS
    
    string nome;
    int aulas_frequentadas, n1, n2, n3, n4;
    
    //COMANDO DE APRESENTACAO DO PROGRAMA
    
    cout<<"\n\n\t\tVERIFICADOR DE APROVACAO OU REPROVACAO ";
    
    //COMANDOS PARA OBTER OS DADOS DO USUARIO
    
    cout<<"\nINSIRA O NOME DO ALUNO:";
    cin>>nome;
    
    cout<<"\nINSIRA O NUMERO DE AULAS FREQUENTADAS:";
    cin>>aulas_frequentadas;
    
    cout<<"\nINSIRA O RESULTADO A SUA PRIMEIRA PROVA DO CURSO:";
    cin>>n1;
    
    cout<<"\nINSIRA O RESULTADO A SUA SEGUNDA PROVA DO CURSO:";
    cin>>n2;
    
    cout<<"\nINSIRA O RESULTADO A SUA TERCEIRA PROVA DO CURSO:";
    cin>>n3;
    
    cout<<"\nINSIRA O RESULTADO A SUA QUARTA PROVA DO CURSO:";
    cin>>n4;
    
    //COMANDOS DE IMPRESSAO EM RESULTADOS
    
    cout<<"\n\tA NOTA FINAL DO ALUNO " <<nome<<" e "<<n1+n2+n3+n4<<"\n";
    cout<<"\n\tA NOTA MEDIA DO ALUNO "<<nome<<" e "<<(n1+n2+n3+n4)/4<<"\n";
    
    //COMANDOS PARA DEFINIR APROVACAO OU REPROVACAO
    
    if(n1+n2+n3+n4>=60 && aulas_frequentadas>=160){
                       cout<<"\n\t\tO ALUNO FOI APROVOADO! "<<"\n";
}
   else{
        cout<<"\n\t\tO ALUNO FOI REPROVADO :( "<<"\n";
}        
       
    //COMANDOS PARA TERMINO DO PROGRAMA
    
    system("pause");
    return(0);
}
