#ifndef Empresa_hpp
#define Empresa_hpp

#include "Time.hpp"

class Empresa
{
    public:
        Empresa(string nome);
        void adicionaTime(string nome,string categoria);
        void adicionaJogadorTime(string nomeTime,string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario);
        void imprimeLista();
        float getSalarioL(string nome);
        void pequisaJogador(string nome);
        void pequisaJogadorId(int id);
        void relatorioFinanceiro();
        void relatorioFinanceiroTime(string nome);
        void listaDeJogadoresNome(string nome);
        int getIdadeJogador(string nome);
        int getAposentarJogador(string nome);
        float getSalariolJogador(string nome);
    private:

        string nome;
        int id;
        float totalSalario;
        float valorInss;
        float impRet;
        string nomeTime;

        int static ultimoId;
        int geraId();

        vector<Jogador> jogadores;
        vector<Time> times;

};

#endif
