#include <iostream>

using namespace std;

int main()
{
    float n1, n2;
    int operacao, resto;
    float resposta;

    cout << "Pressione 1 para começar: " << endl;
    cout << "Pressione 0 para sair: " << endl;
    cin >> operacao;
    cout << endl << endl << endl << endl << endl;

    while(operacao != 0) //condição
    {
    cout << "Informe a operação que deseja executar: " << endl;
    cout << "Pressione 1 para soma: " << endl;
    cout << "Pressione 2 para subtração: " << endl;
    cout << "Pressione 3 para multiplicação: " << endl;
    cout << "Pressione 4 para divisão: " << endl;
    cout << "Pressione 5 para continuar seu cálculo: " << endl;
    cout << "Pressione 0 para finalizar o processo: " << endl;
    cin >> operacao;

    if(operacao == 1)
    {

        cout << "Informe o primeiro número: " << endl;
        cin >> n1;

        cout << "Informe o segundo número: " << endl;
        cin >> n2;

        resposta = n1 + n2;

        cout << "Resposta: " << resposta << endl << endl << endl;

    } else if (operacao == 2)
    {

        cout << "Informe o primeiro número: " << endl;
        cin >> n1;

        cout << "Informe o segundo número: " << endl;
        cin >> n2;

        resposta = n1 - n2;

        cout << "Resposta: " << resposta << endl << endl << endl;

    }else if(operacao == 3)
    {

        cout << "Informe o primeiro número: " << endl;
        cin >> n1;

        cout << "Informe o segundo número: " << endl;
        cin >> n2;

        resposta = n1 * n2;

        cout << "Resposta: " << resposta << endl << endl << endl;

    }else if (operacao == 4)
    {

        cout << "Informe o primeiro número: " << endl;
        cin >> n1;

        cout << "Informe o segundo número: " << endl;
        cin >> n2;

        resposta = n1 / n2;

        cout << "Resposta: " << resposta << endl << endl << endl;

    }else if(operacao == 5)
    {
        
        cout << "Informe a operação que deseja executar: " << endl;
        cout << "Pressione 1 para soma: " << endl;
        cout << "Pressione 2 para subtração: " << endl;
        cout << "Pressione 3 para multiplicação: " << endl;
        cout << "Pressione 4 para divisão: " << endl;
        cout << "Pressione 0 para finalizar o processo: " << endl;
        cin >> resto;

        if(resto == 1)
        {
            cout << "Informe o número: " << endl;
            cin >> n1;

            resposta = resposta + n1;

            cout << "Resposta: " << resposta << endl;
        }else if(resto == 2)
        {
            cout << "Informe o número: " << endl;
            cin >> n1;

            resposta = resposta - n1;

            cout << "Resposta: " << resposta << endl;
        }else if(resto == 3)
        {
            cout << "Informe o número: " << endl;
            cin >> n1;

            resposta = resposta * n1;

            cout << "Resposta: " << resposta << endl;
        }else if(resto == 4)
        {
            cout << "Informe o número: " << endl;
            cin >> n1;

            resposta = resposta / n1;

            cout << "Resposta: " << resposta << endl;
        }

    }else if(operacao == 0)
    {

        cout << "Operação finalizada!" << endl;
        break;

    }
    }
    

    return 0;
}