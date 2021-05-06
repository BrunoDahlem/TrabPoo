#include "Jogador.hpp"

int Jogador::ultimoId = 0;
int x =0,y=0;
//construtor
Jogador::Jogador(){
}
Jogador::Jogador(string nome){
	this->nome = nome;
    this->id = geraId();
}
Jogador::Jogador(string nome,int dia,int mes,int ano,string nacionalidade,string categoria,float salario)
{
    this->nome = nome;
    this->id = geraId();
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->nacionalidade = nacionalidade;
    this->categoria = categoria;
    this->salario = salario;
    this->valorInss = calcInss();
    this->valorImpRenda = calcImpRenda();
    this->salarioBruto = calcSalarioL();
}
void Jogador::imprime()
{
    cout << "Jogador: " << id << " - " << nome << endl;
    cout << "Nascimento: " << dia << "/" << mes << "/" << ano << endl;
    cout << "Informacoes: " <<nacionalidade << " - " << categoria << endl;
}
void Jogador::imprimeDadosTime()
{
    cout << "Jogador: " << id << " - " << nome << endl;
    cout << "Nascimento: " << dia << "/" << mes << "/" << ano << endl;
    cout << "Informacoes: " <<nacionalidade << " - " << categoria << endl;
    cout << "Salario: " << salario << " Inss: " << valorInss << " ImpRenda: " << valorImpRenda << endl;
}
void Jogador::imprimeDadosRenda()
{
    cout << "Jogador: " << id << " - " << nome << endl;
    cout << "Salario Liquido: " << salarioBruto << " Salario Bruto " << salario << endl; 
}
void Jogador::imprimeJogador()
{
    cout << "Jogador: " << nome << endl;
    cout << "Idade: " << calcIdade () << endl;
    cout << "Salario Liquido: " << salarioBruto << " Salario Bruto: " << salario << endl;
}
int Jogador::geraId()
{
    ultimoId++;
    return ultimoId;
}
int Jogador::calcIdade () {
	int idade;
	time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    int d = tm.tm_mday;
    int m = tm.tm_mon+1;
    int y = tm.tm_year + 1900; 
    
    if (this->mes > m && this->dia > d ){
		idade = y - this->ano - 1;
	} else {
		idade = y - this->ano;
	}
    
	return idade;
	
}
int Jogador::aposentar(string nome) {
	x = 65;
	y = calcIdade();
	int z = x - y;
	if(z < 0){
		cout << "Pode se aposentar" << endl;
		return 0;	
	} else {
		return z;
	}
}

//Gets e Sets
//Gets
float Jogador::getInss(){
	return valorInss;
}
float Jogador::getImpRenda(){
	return valorImpRenda;
}
void Jogador::setInss(float inss){
	this->valorInss = inss;
}
void Jogador::setImpRenda(float impRenda){
	this->valorImpRenda = impRenda;
}


string Jogador::getNome()
{
    return nome;
}

string Jogador::getNacionalidade()
{
    return nacionalidade;
}

string Jogador::getCategoria()
{
    return categoria;
}

int Jogador::getId()
{
    return id;
}
int Jogador::getDia()
{
    return dia;
}
int Jogador::getMes()
{
    return mes;
}
int Jogador::getAno()
{
    return ano;
}
float Jogador::getSalario()
{
    return salario;
}

//Sets
void Jogador::setNome( string n)
{
    this->nome = n;
}

void Jogador::setNacionalidade( string nacio)
{
    this->nacionalidade = nacio;
}

void Jogador::setCategoria(string cat)
{
    this->categoria = cat;
}

void Jogador::setDia( int d)
{
    this->dia = d;
}
void Jogador::setMes( int m)
{
    this->mes = m;
}
void Jogador::setAno(int a)
{
    this->ano = a;
}
void Jogador::setSalario(float s )
{
    this->salario = s;
}
float Jogador::calcInss(){
	float s = this->salario;
	float valorInss;
	float inss1100 = s / 100 * 7.5;
    float inss2000 = s / 100 * 9;
    float inss3100 = s / 100 * 12;
    float inss4100 = s / 100 * 14;
    float inss4101 = s / 100 * 14;
	if(s <= 1100){
        valorInss = inss1100;
    }
    else if(s <= 2000){
        valorInss = inss2000;
    }
    else if(s <= 3100){
        valorInss = inss3100;
    }
    else if(s <= 4100){
        valorInss = inss4100;
    }
    else if(s > 4100){
        valorInss = inss4101;
    }
    return valorInss;
}
float Jogador::calcImpRenda() {
	float s = this->salario;
	float ImpRenda;
	float inss1100 = s / 100 * 7.5;
    float inss2000 = s / 100 * 9;
    float inss3100 = s / 100 * 12;
    float inss4100 = s / 100 * 14;
    float inss4101 = s / 100 * 14;

    float impRet1100 = 0;
    float impRet2000 = s / 100 * 7.5;
    float impRet3100 = s / 100 * 15;
    float impRet4100 = s / 100 * 22;
    float impRet4101 = s / 100 * 27;
    
    if(s <= 1100){
        ImpRenda = impRet1100;
    }
    else if(s <= 2000){
        ImpRenda = impRet2000;
    }
    else if(s <= 3100){
        ImpRenda = impRet3100;
    }
    else if(s <= 4100){
        ImpRenda = impRet4100;
    }
    else if(s > 4100){
        ImpRenda = impRet4101;
    }
	return ImpRenda;
}
float Jogador::calcSalarioL() {
	float sl;
	float s = this->salario;
	float inss1100 = s / 100 * 7.5;
    float inss2000 = s / 100 * 9;
    float inss3100 = s / 100 * 12;
    float inss4100 = s / 100 * 14;
    float inss4101 = s / 100 * 14;

    float impRet1100 = 0;
    float impRet2000 = s / 100 * 7.5;
    float impRet3100 = s / 100 * 15;
    float impRet4100 = s / 100 * 22;
    float impRet4101 = s / 100 * 27;
    
    if(s <= 1100){
        sl = s - inss1100;
    }
    else if(s <= 2000){
        sl = s - inss2000 - impRet2000;
    }
    else if(s <= 3100){
        sl = s - inss3100 - impRet3100;
    }
    else if(s <= 4100){
        sl = s - inss4100 - impRet4100;
    }
    else if(s > 4100){
        sl = s - inss4101 - impRet4101;
    }
	return sl;
	
}
