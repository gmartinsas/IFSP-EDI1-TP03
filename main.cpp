#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes, int ano) {
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }
    Data() {
        this->dia = 0;
        this->mes = 0;
        this->ano = 0;
    }
    void setDia(int dia) {
        this->dia = dia;
    }
    void setMes(int mes) {
        this->mes = mes;
    }
    void setAno(int ano) {
        this->ano = ano;
    }
    int getDia() {
        return this->dia;
    }
    int getMes() {
        return this->mes;
    }
    int getAno() {
        return this->ano;
    }
    string getData() {
        return to_string(this->dia) + "/" +
               to_string(this->mes) + "/" +
               to_string(this->ano);
    }
};

class Contato
{
private:
    string email, nome, telefone;
    Data dtnasc;

public:
    Contato() {}
    Contato(string e, string n, string t, Data d)
    {
        email = e;
        nome = n;
        telefone = t;
        dtnasc = d;
    }

    string getNome() {
        return nome;
    }
    string getEmail() {
        return email;
    }
    string getTelefone() {
        return telefone;
    }
    Data getDtnasc() {
        return dtnasc;
    }
    void setNome(string n) {
        nome = n;
    }
    void setEmail(string e) {
        email = e;
    }
    void setTelefone(string t) {
        telefone = t;
    }
    void setDtnasc(Data d) {
        dtnasc = d;
    }
    int idade() {
        return 2023 - dtnasc.getAno();
    }
};

int main()
{
    Contato contatos[5];
    string nome, email, telefone;
    int dia, mes, ano;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o nome do contato " << i + 1 << ": ";
        getline(cin, nome);
        contatos[i].setNome(nome);

        cout << "Digite o e-mail do contato " << i + 1 << ": ";
        getline(cin, email);
        contatos[i].setEmail(email);

        cout << "Digite o telefone do contato " << i + 1 << ": ";
        getline(cin, telefone);
        contatos[i].setTelefone(telefone);

        cout << "Digite a data de nascimento do contato " << i + 1 << " (no formato DD MM AAAA, separados por espaço): ";
        cin >> dia >> mes >> ano;
        Data d(dia, mes, ano);
        contatos[i].setDtnasc(d);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Nome: " << contatos[i].getNome() << endl;
        cout << "E-mail: " << contatos[i].getEmail() << endl;
        cout << "Telefone: " << contatos[i].getTelefone() << endl;
        cout << "Idade: " << contatos[i].idade() << " anos" << endl;
        cout << endl;
    }

    return 0;
}