#ifndef Jogador_hpp
#define Jogador_hpp

#include <time.h>
#include <iostream>
using namespace std;

class Jogador
{
public:
	Jogador();
    Jogador(string nome);
    Jogador(string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario);
    void imprime();
    string getNome();
    string getNacionalidade();
    string getCategoria();
    int getId();
    int getDia();
    int getMes();
    int getAno();
    float getInss();
    float getImpRenda();
    float getSalario();
    float calcSalarioL();
    void setNome( string n);
	void setNacionalidade( string nacio);
	void setCategoria(string cat);
	void setDia( int d);
	void setInss( float inss);
	void setImpRenda( float impRenda);
	void setMes( int m);
	void setAno(int a);
	void setSalario(float s);
    int calcIdade();
    int aposentar(string nome);
    float calcInss();
    float calcImpRenda();
    string nacimento(string nome);
    void imprimeDadosTime();
    void imprimeDadosRenda();
    void imprimeJogador();
private:
    string nome;
    int id;
    int dia,mes,ano;
    string nacionalidade, categoria;
    float salario;
    float valorInss;
    float valorImpRenda;
    float salarioBruto;
    

    int static ultimoId;
    int geraId();
    
};

#endif /* Jogador_hpp */
