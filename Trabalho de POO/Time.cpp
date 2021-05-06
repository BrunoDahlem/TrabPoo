#include "Time.hpp"
int Time::ultimoId = 0;

Time::Time(){
}
Time::Time(string nome, string categoria){
	this->nome = nome;
	this->id = geraId();
	this->categoria = categoria;
}

void Time::adicionaJogador(string nome) {
    jogadores.push_back(Jogador(nome));
}

void Time::adicionaJogador(string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario) {
    jogadores.push_back(Jogador(nome,dia,mes,ano,nacionalidade,categoria,salario));
}

void Time::imprimeLista()
{
    for(int i=0; i < jogadores.size(); i++)
    {
        jogadores[i].imprime();
    }
}
void Time::imprimeListaDeJogadores()
{
	cout << "Nome do Time" << nome << endl;
    for(int i=0; i < jogadores.size(); i++)
    {
        jogadores[i].imprimeDadosTime();
    }
}
void Time::imprimeListaDeJogadoresRenda()
{
	cout << "Nome do Time: " << nome << endl;
	cout << endl;
    for(int i=0; i < jogadores.size(); i++)
    {
    	
        jogadores[i].imprimeDadosRenda();
        cout << endl;
    }
}
void Time::imprimeJogadorUnicoNome(string nome)
{
	
    for(int i=0; i < jogadores.size(); i++)
    {
    	if(jogadores[i].getNome()==nome) {
    		cout << "Time: " << this->nome << endl;
        	jogadores[i].imprimeJogador();
        	cout << endl;
    	}
    }
}
void Time::imprimeJogadorUnicoId(int id)
{
	
    for(int i=0; i < jogadores.size(); i++)
    {
    	if(jogadores[i].getId()==id) {
    		cout << "Time: " << this->nome << endl;
        	jogadores[i].imprimeJogador();
        	cout << endl;
    	}
    }
}
int Time::getId(string nome)
{
    for(int i=0; i< jogadores.size(); i++)
    {
        if(jogadores[i].getNome()==nome)
            return jogadores[i].getId();
    }
    return 0;
}
int Time::getIdade(string nome)
{
    for(int i=0; i< jogadores.size(); i++)
    {
        if(jogadores[i].getNome()==nome)
            cout << jogadores[i].calcIdade()<< endl;
    }
    return 0;
}
float Time::getSalarioJ()
{
	totalSalario = 0;
    
    for(int i=0; i< jogadores.size(); i++)
    {
            totalSalario = totalSalario + jogadores[i].getSalario();
    }
    return totalSalario;
}
float Time::getSalarioL(string nome)
{
    for(int i=0; i< jogadores.size(); i++)
    {
    	if(jogadores[i].getNome()==nome)
            cout <<  jogadores[i].calcSalarioL()<< endl;
    }
    return 0;
}
float Time::getInssJ()
{
	valorInss = 0;
    
    for(int i=0; i< jogadores.size(); i++)
    {
            valorInss = valorInss + jogadores[i].getInss();
    }
    return valorInss;
}
float Time::getImpRendaJ()
{
	impRet = 0;
    for(int i=0; i< jogadores.size(); i++)
    {
            impRet = impRet + jogadores[i].getImpRenda();
    }
    return impRet;
}
int Time::getAposentar(string nome){
	for(int i=0; i< jogadores.size(); i++)
    {
        if(jogadores[i].getNome()==nome)
            cout << jogadores[i].aposentar(nome)<< endl;
    }
    return 0;
}
int Time::geraId()
{
    ultimoId++;
    return ultimoId;
}
string Time::getNome()
{
    return nome;
}

string Time::getCategoria()
{
    return categoria;
}

int Time::getId()
{
    return id;
}
void Time::setNome( string n)
{
    this->nome = n;
}

void Time::setCategoria(string cat)
{
    this->categoria = cat;
}
