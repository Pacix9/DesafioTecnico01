#include <iostream>
#include <random>
using namespace std;

int main()
{
    string usuario, senha;
    int selecao, escolhaInicial;
    string SimOuNao;
    int repetir, reuniao, nome;
    repetir = true;
         cout<<"Bem vindo ao site do GATG (Grupo de Assistencia aos Traumatizados de Guerra)"<<endl;
    cout<<"por favor entre um login"<<endl;
    cin>>usuario;
    cin>>senha;
    cout<<"bem vindo "<<usuario<<"."<<endl;
      while(repetir){
          cout<<"caso queria ver mais sobre o site digite (1), caso não queria digite (2) e caso queira apenas participar dos drupos de ajuda digite (3)"<<endl;
          if(escolhaInicial == 1){
    cout<<"Aqui temos algumas informações disponiveis, digite (1) para ver mais sobre o fundador da GATG, digite (2) para ver mais sobre a GATG, digite (3) para ver os feitos do nosso lider, digite (4) caso queria fazer a incrição para as reuniões esperimentais do grupo."<<endl;
         cin>>selecao;
         switch (selecao){
             case 1:
             cout<<"Frank Woods foi um militar dos estados unidos que lutou na linda de frente na guerra fria, logo após a guerra, traumatizado ele criou a GATG para ajudar aqueles que lutaram ao seu lado, porem o grupo acabou por se tornar muito popular e acabou se tornando um grupo internacional."<<endl;
             break;
             
             case 2:
             cout<<"A GATG é um grupo que busca ajudar a todos aqueles que sofreram algum tipo de trauma mental devido as guerras que ocorrem no mundo todo, segundo sites de pesquisa a GATG tem ajudado milhares de ucranianos devido a recente guerra na ucrania"<<endl;
             break;
             
             case 3:
             cout<<"Frank Woods, na sua epoca de militar serviu a CIA e lutou fortemente contra os russos 1981 na guerra fria, Woods foi a principal pessoa a combater e conseguir informações para o exercito dos Estados Unidos"<<endl;
             break;
             
             case 4:
             cout<<"reuniões marcadas para essa semana:"<<endl;
             cout<<"digite (1) para participar da reunião da quinta as 15:30 na rua Jose Barros numero 115."<<endl;
             cout<<"digite (2) para participar da reunião da sexta as 15:30 na rua Jose Barros numero 115"<<endl;
             cout<<"reuniões marcadas para essa semana:"<<endl;
             do{ 
                 if(reuniao == 1){
                     cout<<"digite seu nome para marcarmos na lista"<<endl;
                     cin>>nome;
                 }
                 if(reuniao == 2){
                     cout<<"digite seu nome para marcarmos na lista"<<endl;
                     cin>>nome;
                 
                while(reuniao != 1 && reuniao != 2);
                 }
             }     
             
         }
         }
         else if(escolhaInicial == 3){
             cout<<"digite aqui seu contato para que possamos te mandar as datas de reuniões e listar o seu nome"<<endl;
             int contato;
             cin>>contato;
             cout<<"mandamos suas informções para o seu contato "<<contato<<", e informaremos por lá a data e a hora das proximas reuniões de apoio"<<endl;
         }
         else{
             cout<<"entendido, até a proxima então."<<endl;
             repetir = false;
             
         }
           
           
             
         }
        
        
    }