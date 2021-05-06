#ifndef Time_hpp
#define Time_hpp

#include "Jogador.hpp"
#include <vector> // vetor dinamico

class Time
{
public:
	Time();
    Time(string nome, string categoria);
	void adicionaJogador(string nome);
    void adicionaJogador(string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario);
    void imprimeLista();
    void imprimeListaDeJogadores();
    int getId(string nome);
    int getIdade(string nome);
    float getSalarioJ();
    float getSalarioL(string nome);
    float getInssJ();
    float getImpRendaJ();
    int getAposentar(string nome);
    int getId();
    string getNome();
    string getCategoria();
    void setNome( string n);
	void setCategoria(string cat);
	void imprimeListaDeJogadoresRenda();
	void imprimeJogadorUnicoNome(string nome);
	void imprimeJogadorUnicoId(int id);
	float totalSalario;
    float valorInss;
    float impRet;
private:
    
    vector<Jogador> jogadores;
    string nome;
    int id;
    string categoria;
    int static ultimoId;
    int geraId();
    
};

#endif /* Time_hpp */
