// Nome1: Sillas Endrigo Lopes Silva. //Nome2: Yasmin Machado da Silva.
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void Limpabuffercin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void desenhaBoasVindas()
{

    cout << " ---------------------------------\n";
    cout << "|                                 |\n";
    cout << "|      Bem vindo ao programa      |\n";
    cout << "|                de               |\n";
    cout << "|         Passagens aereas        |\n";
    cout << "|                                 |\n";
    cout << " ---------------------------------\n";
    cout << endl
         << endl;
}

void Menu()
{

    cout << " ----------------MENU-------------\n";
    cout << "|                                 |\n";
    cout << "| Escolha uma opcao:              |\n";
    cout << "|      1)Cadastrar passagem       |\n";
    cout << "|      2)Listar passagens         |\n";
    cout << "|      0)Sair                     |\n";
    cout << "|                                 |\n";
    cout << " ----------------MENU-------------\n";
    cout << "Opcao: ";
}

void CadastrarPassagem()
{
    Limpabuffercin();

    string nome;
    string estado;
    string pouso;
    string datinhas;

    cout << "Digite o nome do passageiro: ";
    getline(cin, nome);
    cout << "\n";
    passageiros.push_back(nome);

    cout << "Informe a area de embarque: ";
    getline(cin, estado);
    cout << "\n";
    origens.push_back(estado);

    cout << "Informe o Destino da viagem: ";
    getline(cin, pouso);
    cout << "\n";
    destinos.push_back(pouso);

    cout << "Informe a data da viagem: ";
    getline(cin, datinhas);
    datas.push_back(datinhas);
}

void ListagemDePassagens()
{
    
    Limpabuffercin();
    cout << " ---------------------------------\n";
    cout << "|                                 |\n";
    cout << "|      Bem vindo ao programa      |\n";
    cout << "|                de               |\n";
    cout << "|       lista de Passageiros   :) |\n";
    cout << "|                                 |\n";
    cout << " ---------------------------------\n";
    cout << "\n\n";

    cout << "Quantidade de Passagens: " << passageiros.size() << endl << endl;
    
    for (int i = 0; i < passageiros.size(); i++)
    {


    cout << "Passageiro: "<< passageiros[i] << endl;
    cout << "Origens: " << origens[i] << endl;
    cout << "Destinos: " << destinos[i] << endl;
    cout << "Datas: " << datas[i] << endl;
    cout << "\n" << endl;
    }
   
}
int main()
{
    system("cls");
    int opc = -1; // opcao
    string continua = "";

    desenhaBoasVindas();
    do
    {
        Menu();
        cin >> opc;
        switch (opc)
        {
        case 0:
            cout << "Voce escolheu a opcao: Sair do programa\n";
            break;

        case 1:
            cout << "Voce escolheu a opcao: Cadastra Passagens\n";
            CadastrarPassagem();
            break;

        case 2:
            cout << "Voce escolheu a opcao: Listar Passagens\n";
            ListagemDePassagens();
            cin >> continua;
            break;

        default:
            cout << "Opcao invalida\n";
            break;
        }
    } while (opc != 0);

    system("CLS");
    cout << "Obrigado por utilizar o programa :) \n\n";

    return 0;
}