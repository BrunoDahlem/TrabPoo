#include <iostream>
#include <stdio.h>
#include <conio.h>

#include "Time.hpp"
#include "Jogador.hpp"
#include "Empresa.hpp"


using namespace std;
int main() {
	
	
	string nomeEmpresa;
	int op, opEmp, opTime, opJogador;
	
	//variaveis da opEmpresa
	int opEmpJ, buscarIdJ, opEmpTermino;
	string buscarNomeJ;
	
	//variaveis da opTime
	string escolhaNome;
	
	//variaveis da opJogador
	string buscarNomeJogador;
	
	
	
	cout << "Insira o nome da empresa: ";
	cin >>  nomeEmpresa;
	
	Empresa empresa(nomeEmpresa);
	
	
	/////////////////////////////////////////////////////////////////////////////////
	empresa.adicionaTime("Gremio", "Profissional");
    empresa.adicionaJogadorTime("Gremio","Bruno",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Gremio","f",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Gremio","g",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Gremio","h",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Gremio","j",13,06,1998,"BR","Base",3100);
    empresa.adicionaJogadorTime("Gremio","o",13,06,2000,"PT","Base",2100);
    
    empresa.adicionaTime("Vasco", "Profissional");
    empresa.adicionaJogadorTime("Vasco","r",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Vasco","t",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Vasco","y",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Vasco","u",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Vasco","i",13,06,1998,"BR","Base",1100);
    empresa.adicionaJogadorTime("Vasco","o",13,06,1998,"BR","Base",2100);
    /////////////////////////////////////////////////////////////////////////////////
    
    
	do{
	
	
	system("cls");
	
	cout << "Sistema de Controle para Times Esportivos." << endl << "Empresa " << nomeEmpresa << endl << endl;
	
	cout << "Insira uma opcao valida:" << endl << endl;
	
	cout << "1 - Opcoes de empresa." << endl;
	cout << "2 - Opcoes de time." << endl;
	cout << "3 - Opcoes da jogadores." << endl;
	cout << "4 - Sair" << endl << endl;
	
	cin >> op;
	
	cout << endl << endl;
	
	switch(op){
		
		case 1:
			
			do{
				
				system("cls");
				
				cout << "Opcoes de Empresa:" << endl << endl;
				
				cout << "Insira uma opcao valida." << endl << endl;
				
				cout << "1 - Consulta de jogador." << endl;
				cout << "2 - Lista de jogadores." << endl;
				cout << "3 - Relatorio Financeiro." << endl;
				cout << "4 - Voltar ao menu principal." << endl << endl;
				
				cout << "5 - Sair." << endl << endl;
				
				cin >> opEmp;
				
				cout << endl;
				
				///////////////////////////////////////////////////////////////////////////////////
				if(opEmp == 1){
					
					system("cls");
					
					cout << "Consulta de Jogador:" << endl << endl;
					
					cout << "1 - Fazer busca pelo id do jogador." << endl;
					cout << "2 - Fazer busca pelo nome do jogador." << endl << endl;
					
					cin >> opEmpJ;
					
					cout << endl;
					
					if(opEmpJ == 1){/////////////////////////////////////
						
						system("cls");
						
						cout << "Insira o id do jogador:" << endl << endl;
						
						cin >> buscarIdJ;
						
						system("cls");
						
						empresa.pequisaJogadorId(buscarIdJ);
						
						
						cout << "1 - Voltar ao Menu Principal" << endl;
						cout << "2 - Voltar ao Menu Opcoes de Empresa" << endl;
						cout << "3 - Sair" << endl << endl;
						
						cin >> opEmpTermino;
						
						cout << endl;
						
						if(opEmpTermino == 3){
							exit(1);
						}
						else if(opEmpTermino > 3 || opEmp < 1){
							cout << "digite uma opcao valida!" << endl;
							cout << "Voltando ao Menu Opcoes de Empresa..." << endl << endl;	
							
							system("pause");
						}
						
					}///////////////////////////////////////////////////
					if(opEmpJ == 2){
						
						system("cls");
						
						cout << "Insira o nome do jogador:" << endl << endl;
						
						cin >> buscarNomeJ;
						
						system("cls");
						
						empresa.pequisaJogador(buscarNomeJ);
						
						cout << "1 - Voltar ao Menu Principal" << endl;
						cout << "2 - Voltar ao Menu Opcoes de Empresa" << endl;
						cout << "3 - Sair" << endl << endl;
						
						cin >> opEmpTermino;
						
						cout << endl;
						
						if(opEmpTermino == 3){
							exit(1);
						}
						else if(opEmpTermino > 3 || opEmpTermino < 1){
							cout << "digite uma opcao valida!" << endl;
							cout << "Voltando ao Menu Opcoes de Empresa..." << endl << endl;	
							
							system("pause");
						}
							
					}
					else if(opEmpJ > 2 || opEmpJ < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes de Empresa..." << endl << endl;
						
						system("pause");
					}
					
				}///////////////////////////////////////////////////////////////////////////////////
				else if(opEmp == 2){
					
					system("cls");
					
					cout << "Lista de Jogadores:" << endl << endl;
					
					empresa.imprimeLista();
					
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu Opcoes de Empresa" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
							exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes de Empresa..." << endl << endl;	
						
						system("pause");
					}
						
					
				}
				else if(opEmp == 3){
					
					
					system("cls");
					
					cout << "Relatorio Financeiro:" << endl << endl;
					
					empresa.relatorioFinanceiro();
					
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu Opcoes de Empresa" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
							exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes de Empresa..." << endl << endl;	
						
						system("pause");
					}
				}
				else if(opEmp == 5){
					exit(1);
				}
				else if(opEmp > 5 || opEmp < 1){
					cout << "digite uma opcao valida!" << endl << endl;
					
					system("pause");
				}
				
			
			}while(opEmp != 5 && opEmp != 4 && opEmp != 3 && opEmp != 2 && opEmp != 1 && opEmpJ != 1 && opEmpJ != 2);
			
			
			
			break;
			
		case 2:
			
			do{
				
				system("cls");
				
				cout << "Insira uma opcao valida." << endl << endl;
				
				cout << "1 - RelatorioGeral." << endl;
				cout << "2 - Relatorio Financeiro." << endl;
				cout << "3 - Voltar ao menu principal." << endl << endl;
				
				cout << "4 - Sair." << endl << endl;
				
				cin >> opTime;
				
				cout << endl;
				
				if(opTime == 1){
						
					system("cls");
					
					cout << "Relatorio Geral:" << endl << endl;	
					
					cout << "Digite o nome do time da sua escolha: ";
						
					cin >> escolhaNome;
					
					cout << endl << endl;
					
					empresa.listaDeJogadoresNome(escolhaNome);
					
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu opcoes time" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
							exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes time..." << endl << endl;	
						
						system("pause");
					}
						
				}
				else if(opTime == 2){
					
							
					system("cls");
					
					cout << "Relatorio Financeiro:" << endl << endl;	
					
					cout << "Digite o nome do time da sua escolha: ";
						
					cin >> escolhaNome;
					
					cout << endl << endl;
					
					empresa.relatorioFinanceiroTime(escolhaNome);
					
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu opcoes time" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
						exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes time..." << endl << endl;	
						
						system("pause");
					}
					
				}
				else if(opTime == 3){
					
				}
				else if(opTime > 4){
					cout << "digite uma opcao valida!" << endl << endl;
					
					system("pause");
				}
				
			
			}while(opTime > 4 || opTime < 1 || opEmpTermino == 2);
			
			
			
			break;
			
		case 3:
			
			
			do{
					
					
				system("cls");
				
				cout << "Insira uma opcao valida." << endl << endl;
				
				cout << "1 - Calcular a idade do jogador." << endl;
				cout << "2 - Tempo restante ate aposentadoria." << endl;
				cout << "3 - Calcular salario liquido." << endl;
				cout << "4 - Voltar ao menu principal" << endl << endl;
				
				cout << "5 - Sair." << endl << endl;
				
				cin >> opJogador;
				
				cout << endl;
				
				if(opJogador == 1){
					
					system("cls");
					
					cout << "Calcular a idade do jogador:" << endl << endl;	
					
					cout << "Digite o nome do jogador: ";
						
					cin >> buscarNomeJogador;
					
					cout << endl << endl;
					
					cout << "Idade do jogador: ";
					empresa.getIdadeJogador(buscarNomeJogador);
					cout << endl << endl;
					
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu opcoes time" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
						exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes time..." << endl << endl;	
						
						system("pause");
					}
					
					
				}
				else if(opJogador == 2){
					system("cls");
					
					cout << "Tempo restante ate aposentadoria:" << endl << endl;	
					
					cout << "Digite o nome do jogador: ";
						
					cin >> buscarNomeJogador;
					
					cout << endl << endl;
					
					cout << "Tempo restante ate aposentadoria: ";
					empresa.getAposentarJogador(buscarNomeJogador);
					cout << endl << endl;
					 
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu opcoes time" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
						exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes time..." << endl << endl;	
						
						system("pause");
					}
					
				}
				else if(opJogador == 3){
					
					system("cls");
					
					cout << "Calcular Salario Liquido:" << endl << endl;	
					
					cout << "Digite o nome do jogador: ";
						
					cin >> buscarNomeJogador;
					
					cout << endl << endl;
					
					cout << "O Salario Liquido do Jogador: ";
					empresa.getSalariolJogador(buscarNomeJogador);
					cout << endl << endl;
					cout << "1 - Voltar ao Menu Principal" << endl;
					cout << "2 - Voltar ao Menu opcoes time" << endl;
					cout << "3 - Sair" << endl << endl;
					
					cin >> opEmpTermino;
					
					cout << endl;
					
					if(opEmpTermino == 3){
						exit(1);
					}
					else if(opEmpTermino > 3 || opEmpTermino < 1){
						cout << "digite uma opcao valida!" << endl;
						cout << "Voltando ao Menu Opcoes time..." << endl << endl;	
						
						system("pause");
					}
					
				}
				else if(opJogador > 5){
					cout << "digite uma opcao valida!" << endl << endl;
					
					system("pause");
				}
				
				
			}while(opJogador > 5 || opJogador < 1);
			
			
			break;
			
		case 4:
			
			exit(1);
		
	}
	
	if(op < 1 || op > 4){
		
		cout << "Digite uma opcao valida!" << endl << endl;
		
		system("pause");
	}
	
	
	}while(opEmp == 4 || opTime == 3 || opJogador ==  4 || op < 1 || op > 4
		   || opEmpTermino == 1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

  
    
    
    
//  empresa.relatorioFinanceiroTime("Gremio");
    //empresa.relatorioFinanceiro();
	
	return 0;
}
