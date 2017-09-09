#include <iostream>

/**
By: OneZer0 - Quizz!!!
**/

using namespace std;
void logo(){
cout << " ________  ___  ___  ___  ________  ________     " << endl;
    cout << "|\   __  \|\  \|\  \|\  \|\_____  \|\_____  \    " << endl;
    cout << "\ \  \|\  \ \  \\\  \ \  \\|___/  /|\|___/  /|   " << endl;
    cout << " \ \  \\\  \ \  \\\  \ \  \   /  / /    /  / /   " << endl;
    cout << "  \ \  \\\  \ \  \\\  \ \  \ /  /_/__  /  /_/__  " << endl;
    cout << "   \ \_____  \ \_______\ \__\\________\\________`" << endl;
    cout << "    \|___| \__\|_______|\|__|\|_______|\|_______|" << endl;
    cout << "          \|__|" << endl;
    cout << "\n\n";
}

void menu(){
    int men, level, pontuacao = 0;
    logo();

    cout << "1 - Escolher Level" << endl;
    cout << "2 - Iniciar" << endl;
    cout << "3 - Maior Pontuação" << endl;
    cout << "4 - Sair" << endl;
    cout << "Entre com o número correspondente: ";

    cin >> men;

    switch(men){
    case 1:
        system("clear");
        cout << "1 - Iniciante" << endl;
        cout << "2 - Médio" << endl;
        cout << "3 - Avançado" << endl;
        cout << "4 - Gênio" << endl;
        cout << "Escolha seu nível: ";

        cin >> level;

        system("clear");
        switch(level){
            case 1:
                cout << "O jogo foi alterado para o nível: Iniciante\n\n";

                return menu();
            case 2:
                cout << "O jogo foi alterado para o nível: Médio\n\n";

                return menu();
            case 3:
                cout << "O jogo foi alterado para o nível: Avançado\n\n";

                return menu();
            case 4:
                cout << "O jogo foi alterado para o nível: Gênio\n\n";

                return menu();
            default:
                cout << "Você digitou um número inválido...\n";
                cout << "Voltando para o Menu principal!\n\n";

            return (menu());
        }

    case 2:
        system("clear");
        cout << "Em construção...\n\n";

        return (menu());
    case 3:
        system("clear");
        cout << "Sua maior pontuação foi: ";
        cout << pontuacao << "\n\n";

        return menu();
    case 4:
        exit(1);
    default:
        system("clear");
        cout << "Você selecionou um número inválido, tente novamente: \n\n";

        return menu();
    }
}

int main(){
    menu();

    return 0;
}
