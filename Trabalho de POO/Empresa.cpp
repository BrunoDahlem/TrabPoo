#include "Empresa.hpp"

int Empresa::ultimoId = 0;

Empresa::Empresa(string nome){

    this->nome = nome;
    this->id = geraId();

}
int Empresa::geraId()
{
    ultimoId++;
    return ultimoId;
}

void Empresa::adicionaTime(string nome,string categoria) {
    times.push_back(Time(nome,categoria));
}
void Empresa::adicionaJogadorTime(string nomeTime,string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario)
{
    for(int i=0; i < times.size(); i++)
    {
    	if(times[i].getNome()==nomeTime) {
        	times[i].adicionaJogador(nome,dia,mes,ano,nacionalidade,categoria,salario);
    	}
    }
}
void Empresa::imprimeLista()
{
    for(int i=0; i < times.size(); i++)
    {
        times[i].imprimeListaDeJogadores();
    }
}
void Empresa::pequisaJogador(string nome){
	for(int i=0; i < times.size(); i++)
    {
        times[i].imprimeJogadorUnicoNome(nome);
    }
}
void Empresa::pequisaJogadorId(int id){
	for(int i=0; i < times.size(); i++)
    {
        times[i].imprimeJogadorUnicoId(id);
    }
}
void Empresa::relatorioFinanceiro(){
	totalSalario =0;
	valorInss = 0;
	impRet = 0;
	for(int i=0; i < times.size(); i++)
    {
      totalSalario =  times[i].getSalarioJ();
      valorInss =  times[i].getInssJ();
      impRet =   times[i].getImpRendaJ();
      cout << times[i].getNome() << endl << endl;
      cout <<"Total a pagar: " << totalSalario << endl <<"Total destinado ao Inss: " <<valorInss <<endl <<"Total Retido Imposto de Renda: "<< impRet<<endl<< endl ;
    }
    
}
void Empresa::relatorioFinanceiroTime(string nome){
	for(int i=0; i < times.size(); i++)
    {
    	if(times[i].getNome()==nome) {
        times[i].imprimeListaDeJogadoresRenda();
    	}
    }
}
void Empresa::listaDeJogadoresNome(string nome){
	for(int i=0; i < times.size(); i++)
    {
    	if(times[i].getNome()==nome) {
        times[i].imprimeListaDeJogadores();
    	}
    }
}
int Empresa::getIdadeJogador(string nome){
	for(int i=0; i < times.size(); i++)
    {
        times[i].getIdade(nome);
    }
}
float Empresa::getSalariolJogador(string nome){
	for(int i=0; i < times.size(); i++)
    {
        times[i].getSalarioL(nome);
    }
}
int Empresa::getAposentarJogador(string nome){
	for(int i=0; i < times.size(); i++)
    {
        times[i].getAposentar(nome);
    }
}
