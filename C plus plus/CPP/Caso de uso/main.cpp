#include <iostream>

using namespace std;

int main()
{

    string name;
    int dia,mes,op,usuario;
    int sec;

    while(op!=2){

    cout<<endl<<"1-paciente"<<endl<<"2-Secretária"<<endl<<"Digite sua classe: "<<endl;
        cin>>usuario;

    switch(usuario)
    case (1):{
        cout<<"Digite seu nome: ";
        cin>>name;


    cout<<endl<<"1-Janeiro"<<endl<<"2-Fevereiro"<<endl<<"3-Março"<<endl<<"Digite o Mês desejado:";
        cin>>mes;

        switch(mes)
{
            case 1:{
    cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

            switch(dia)
{
        case(15):
            cout<<endl<<name<<" sua consulta será no dia 15 de janeiro";
            break;
        case(16):
            cout<<endl<<name<<" sua consulta será no dia 16 de janeiro";
            break;
        case(17):
            cout<<endl<<name<<" sua consulta será no dia 17 de janeiro";
            break;
        case(18):
            cout<<endl<<name<<" sua consulta será no dia 18 de janeiro";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
            break;
            case 2:{
            cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

                switch(dia)
{
        case(15):
            cout<<endl<<name<<" sua consulta será no dia 15 de fevereiro";
            break;
        case(16):
            cout<<endl<<name<<" sua consulta será no dia 16 de fevereiro";
            break;
        case(17):
            cout<<endl<<name<<" sua consulta será no dia 17 de fevereiro";
            break;
        case(18):
            cout<<endl<<name<<" sua consulta será no dia 18 de fevereiro";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
        break;
        case 3:{
            cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

                switch(dia)
{
        case(15):
            cout<<endl<<name<<" sua consulta será no dia 15 de Março";
            break;
        case(16):
            cout<<endl<<name<<" sua consulta será no dia 16 de Março";
            break;
        case(17):
            cout<<endl<<name<<" sua consulta será no dia 17 de Março";
            break;
        case(18):
            cout<<endl<<name<<" sua consulta será no dia 18 de Março";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
        break;
        default:
            cout<<"Operação inválida tente novamente";


}
}

        switch(usuario)
        case 2:


        cout<<endl<<"1-agendar consulta"<<endl<<"2-Listar consultas"<<endl<<"digite uma opção: "<<endl;
            cin>>sec;
        switch(sec)
        case 1:{
{
    cout<<"Digite o nome do paciente: ";
        cin>>name;


    cout<<endl<<"1-Janeiro"<<endl<<"2-Fevereiro"<<endl<<"3-Março"<<endl<<"Digite o Mês desejado:";
        cin>>mes;

        switch(mes)
{
            case 1:{
    cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

            switch(dia)
{
        case(15):
            cout<<endl<<"A consulta de "<<name<<" será no dia 15 de janeiro";
            break;
        case(16):
            cout<<endl<<"A consulta de "<<name<<" será no dia 16 de janeiro";
            break;
        case(17):
            cout<<endl<<"A consulta de "<<name<<" será no dia 17 de janeiro";
            break;
        case(18):
            cout<<endl<<"A consulta de "<<name<<" será no dia 18 de janeiro";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
            break;
            case 2:{
            cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

                switch(dia)
{
        case(15):
            cout<<endl<<"A consulta de "<<name<<" será no dia 15 de fevereiro";
            break;
        case(16):
            cout<<endl<<"A consulta de "<<name<<" será no dia 16 de fevereiro";
            break;
        case(17):
            cout<<endl<<"A consulta de "<<name<<" será no dia 17 de fevereiro";
            break;
        case(18):
            cout<<endl<<"A consulta de "<<name<<" será no dia 18 de fevereiro";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
        break;
        case 3:{
            cout<<endl<<"Dia 15"<<endl<<"Dia 16"<<endl<<"Dia 17"<<endl<< "Dia 18"<<endl<<"Digite o dia desejado para a consulta:";
        cin >> dia;

                switch(dia)
{
        case(15):
            cout<<endl<<"A consulta de "<<name<<" será no dia 15 de Março";
            break;
        case(16):
            cout<<endl<<"A consulta de "<<name<<" será no dia 16 de Março";
            break;
        case(17):
            cout<<endl<<"A consulta de "<<name<<" será no dia 17 de Março";
            break;
        case(18):
            cout<<endl<<"A consulta de "<<name<<" será no dia 18 de Março";
            break;
        default:
            cout<<"Operação inválida tente novamente";

}
}
        break;
        default:
            cout<<"Operação inválida tente novamente";
}

}
}
        switch(sec)
        case 2:
        cout<<"Marcos dia 10 de março"<<endl<<"caina dia 18 de abril"<<endl<<"jorge dia 21 de julho"<<endl<<"lucass dia 01 de dezembro"<<endl<<"julio dia 19 de setembro"<<endl<<"Felipe dia 12 de julho"<<endl<<"junior dia 08 de novembro"<<endl<<"ramon dia 15 de janeiro"<<endl;



        cout<<endl<<endl<<endl<<"Digite 1 para voltar e 2 para sair: ";
            cin>>op;
}

return 0;
}

