#include <iostream>

/**
Author: OneZer0 - Quizz
**/

using namespace std;
void limpar(){
    #ifdef linux
        system("clear");
    #else
        system("cls");
    #endif // linux
}

void logo(){
    cout << "* -----------------------------------------------*"  << endl;
    cout << "|    ______             __                       |" << endl;
    cout << "|   /      \           /  |                       |" << endl;
    cout << "|  /$$$$$$  | __    __ $$/  ________  ________   |" << endl;
    cout << "|  $$ |  $$ |/  |  /  |/  |/        |/        |  |" << endl;
    cout << "|  $$ |  $$ |$$ |  $$ |$$ |$$$$$$$$/ $$$$$$$$/   |" << endl;
    cout << "|  $$ |_ $$ |$$ |  $$ |$$ |  /  $$/    /  $$/    |" << endl;
    cout << "|  $$ / \$$ |$$ \__$$ |$$ | /$$$$/__  /$$$$/__     |" << endl;
    cout << "|  $$ $$ $$< $$    $$/ $$ |/$$      |/$$      |  |" << endl;
    cout << "|   $$$$$$  | $$$$$$/  $$/ $$$$$$$$/ $$$$$$$$/   |" << endl;
    cout << "|       $$$/                                     |" << endl;
    cout << "* -----------------------------------------------*"  << endl;
    cout << "\n\n";
    cout << "\n\n";
}

void menu(){
    int men, level, pontuacao = 0;
    logo();

    cout << "* -----------------------------------------------*" << endl;
    cout << "|    1 - Escolher Level                          |" << endl;
    cout << "|    2 - Iniciar                                 |" << endl;
    cout << "|    3 - Maior Pontuação                         |" << endl;
    cout << "|    4 - Sair                                    |" << endl;
    cout << "* -----------------------------------------------*" << endl;
    cout << "Entre com o número correspondente: ";

    cin >> men;

    switch(men){
    case 1:
        limpar();
        cout << "* -----------------------------------------------*" << endl;
        cout << "|  1 - Iniciante                                 |" << endl;
        cout << "|  2 - Médio                                     |" << endl;
        cout << "|  3 - Avançado                                  |" << endl;
        cout << "|  4 - Gênio                                     |" << endl;
        cout << "* -----------------------------------------------*"  << endl;
        cout << "   Escolha seu nível: ";


        cin >> level;

        limpar();
        switch(level){
            case 1:
                cout << "* -----------------------------------------------*"  << endl;
                cout << "   O jogo foi alterado para o nível: Iniciante" << endl;
                cout << "* -----------------------------------------------*"  << endl;
                cout << "\n\n";

                return menu();
            case 2:
                cout << "* -----------------------------------------------*"  << endl;
                cout << "   O jogo foi alterado para o nível: Médio" << endl;
                cout << "* -----------------------------------------------*"  << endl;
                cout << "\n\n";

                return menu();
            case 3:
                cout << "* -----------------------------------------------*"  << endl;
                cout << "   O jogo foi alterado para o nível: Avançado" << endl;
                cout << "* -----------------------------------------------*"  << endl;
                cout << "\n\n";

                return menu();
            case 4:
                cout << "* -----------------------------------------------*"  << endl;
                cout << "   O jogo foi alterado para o nível: Gênio" << endl;
                cout << "* -----------------------------------------------*"  << endl;
                cout << "\n\n";

                return menu();
            default:
                cout << "* -----------------------------------------------*"  << endl;
                cout << "   Você digitou um número inválido!" << endl;
                cout << "   Voltando para o Menu principal..." << endl;
                cout << "* -----------------------------------------------*"  << endl;
                cout << "\n\n";

            return (menu());
        }

    case 2:
        limpar();
        cout << "Em construção...\n\n";

        return (menu());
    case 3:
        limpar();
        cout << "Sua maior pontuação foi: ";
        cout << pontuacao << "\n\n";

        return menu();
    case 4:
        exit(1);
    default:
        limpar();
        cout << "Você selecionou um número inválido, tente novamente: \n\n";

        return menu();
    }
}

int main(){
    menu();

    return 0;
}
