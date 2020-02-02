#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nomesec;
    int usuario,opsec;
    cout << "Bem vindo"<<endl;
    cout<<"1-Secretária"<<endl<<"2-Paciente"<<endl<<"Digite sua categoria: "<<endl;
    cin>>usuario;
    switch(usuario)
{
    case 1:
{
    cout<<"1-Agendar consulta"<<endl<<"2-Consultas ja agendadas"<<endl<<"Digite a opção desejada: "<<endl;
    cin>>opsec;
    switch(opsec)
{
    case 1:
{

    int messec,diasec;
    cout<<"Digite o nome do paciente: "<<endl;
    cin>>nomesec;
    cout<<"01-Janeiro"<<endl<<"02-Fevereiro"<<endl<<"03-Março"<<endl<<"04-Abril"<<endl<<"05-Maio"<<endl<<"06-Junho"<<endl<<"07-Julho"<<endl<<"08-Agosto"<<endl<<"09-Setembro"<<endl<<"10-Outubro"<<endl<<"11-Novembro"<<endl<<"12-Dezembro"<<endl<<"Digite o mês desejado:"<<endl;
    cin>>messec;
    cout<<"Digite o dia desejado: "<<endl;
    cin>>diasec;
    cout<<"A consulta do paciente "<<nomesec<<" sera no dia "<<diasec<<"/"<<messec<<"/2019"<<endl;
break;}
    case 2:
{
         cout<<"Jorge dia 21/12/2019"<<endl<<"Felipe dia 02/11/2019"<<endl<<"Gabriel dia 01/07/2019"<<endl<<"Lucas dia 18/05/2019"<<endl<<"Victor dia 21/08/2019"<<endl<<"Samuel dia 19/02/2019"<<endl<<"Luis dia 12/12/2019"<<endl<<"Ramon dia 30/06/2019"<<endl;
break;}
}
break;}
    case 2:
{
    int mespac,diapac;
    string nomepac;
    cout<<"Digite o seu nome: "<<endl;
    cin>>nomepac;
    cout<<"01-Janeiro"<<endl<<"02-Fevereiro"<<endl<<"03-Março"<<endl<<"04-Abril"<<endl<<"05-Maio"<<endl<<"06-Junho"<<endl<<"07-Julho"<<endl<<"08-Agosto"<<endl<<"09-Setembro"<<endl<<"10-Outubro"<<endl<<"11-Novembro"<<endl<<"12-Dezembro"<<endl<<"Digite o mês desejado:"<<endl;
    cin>>mespac;
    cout<<"Digite o dia desejado: "<<endl;
    cin>>diapac;
    cout<<"A sua consulta "<<nomepac<<" sera no dia "<<diapac<<"/"<<mespac<<"/2019"<<endl;
break;}
    default:{
        cout<<"Operação inválida.";}
    return 0;
}
}
