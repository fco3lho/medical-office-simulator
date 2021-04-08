#include <iostream>
#include "pessoa.hpp"
#include "paciente.hpp"
#include "medico.hpp"
#include "consulta.hpp"
#include "consultorio.hpp"

void menu()
{
	cout << "--------------------------------------------------------------------------------------------" << endl;
	cout << "		MENU" << endl << endl;
	cout << "Para cadastrar um médico, digite 1." << endl;
	cout << "Para cadastrar um paciente, digite 2." << endl;
	cout << "Para cadastrar uma consulta, digite 3." << endl;
	cout << "Para imprimir dados do médico, digite 4." << endl;
	cout << "Para imprimir consultas, digite 5." << endl;
	cout << "Para imprimir dados do paciente, digite 6." << endl;
	cout << "Para imprimir dados de uma consulta, digite 7." << endl;
	cout << "Para remover médico, digite 8." << endl;
	cout << "Para remover paciente, digite 9." << endl;
	cout << "Para remover consulta, digite 10." << endl;
	cout << "Para finalizar o programa, digite 0." << endl;
	cout << "--------------------------------------------------------------------------------------------" << endl << endl;	
}

Paciente criarPaciente()
{
	string nome, endereco, telefone, identidade, cpf, sexo, relato, dataUltimaConsulta, medicacao;
	
	cout << "---------------------------------------------" << endl;
	cout << "CADASTRO DE PACIENTE" << endl << endl;
	
	cout << "Insira o nome: ";
	getline(cin, nome);
	
	cout << "Insira o endereço: ";
	getline(cin, endereco);
	
	cout << "Insira o telefone: ";
	getline(cin, telefone);
	
	cout << "Insira a identidade: ";
	getline(cin, identidade);
	
	cout << "Insira o CPF: ";
	getline(cin, cpf);
	
	cout << "Insira o sexo: ";
	getline(cin, sexo);
	
	cout << "Insira o relato: ";
	getline(cin, relato);
	
	cout << "Insira a data da última consulta: ";
	getline(cin, dataUltimaConsulta);
	
	cout << "Insira a medicação: ";
	getline(cin, medicacao);
	
	Paciente p(nome, endereco, telefone, identidade, cpf, sexo, relato, dataUltimaConsulta, medicacao);
	
	cout << endl << "Cadastro do paciente efetuado!" << endl << endl;
	
	return p;
	
	cout << "---------------------------------------------" << endl << endl;	
}

Medico criarMedico()
{
	string nome, endereco, telefone, identidade, cpf, sexo, CRM, especialidade;
	
	cout << "---------------------------------------------" << endl;
	cout << "CADASTRO DE MÉDICO" << endl << endl;
	
	cout << "Insira o nome: ";
	getline(cin, nome);
	
	cout << "Insira o endereço: ";
	getline(cin, endereco);
	
	cout << "Insira o telefone: ";
	getline(cin, telefone);
	
	cout << "Insira a identidade: ";
	getline(cin, identidade);
	
	cout << "Insira o CPF: ";
	getline(cin, cpf);
	
	cout << "Insira o sexo: ";
	getline(cin, sexo);
	
	cout << "Insira o CRM: ";
	getline(cin, CRM);
	
	cout << "Insira a especialidade: ";
	getline(cin, especialidade);
	
	Medico m(nome, endereco, telefone, identidade, cpf, sexo, CRM, especialidade);
	
	cout << endl << "Cadastro do médico efetuado!" << endl << endl;
	
	return m;
	
	cout << "---------------------------------------------" << endl << endl;	
}

Consulta criarConsulta()
{
	string data, hora;
	Paciente p;
	Medico m;
	
	cout << "---------------------------------------------" << endl;
	cout << "CADASTRO DE CONSULTA" << endl << endl;
	
	cout << "Insira a data: ";
	getline(cin, data);
	
	cout << "Insira a hora: ";
	getline(cin, hora);
	
	p = criarPaciente();
	m = criarMedico();
	
	Consulta c(data, hora, p, m);
	
	cout << endl << "	*** Cadastro da consulta finalizado e efetuado! ***" << endl << endl;
	
	return c;
	
	cout << "---------------------------------------------" << endl << endl;
}

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	Paciente p;
	Medico m;
	Consulta c;
	Consultorio C;
	
	int num = -1;
	
	while(num != 0)
	{
		menu();
		cout << "Opção: ";
		cin >> num;
		cin.ignore();
		cout << endl;
		
		system("cls");
		
		if(num == 1)
		{
			m = criarMedico();
			C.cadastrarMedico(m);
		}
		
		if(num == 2)
		{
			p = criarPaciente();
			C.cadastrarPaciente(p);
		}
		
		if(num == 3)
		{
			c = criarConsulta();
			C.cadastrarConsulta(c);
		}
		
		if(num == 4)
		{
			C.imprimirListaMedicos();
		}
		
		if(num == 5)
		{
			C.imprimirConsultas();
		}
		
		if(num == 6)
		{
			C.imprimirTodosPacientes();
		}
		
		if(num == 7)
		{
			C.imprimirConsultasMedico();
		}
		
		if(num == 8)
		{
			C.removerMedico();
		}
		
		if(num == 9)
		{
			C.removerPaciente();
		}
		
		if(num == 10)
		{
			C.removerConsulta();
		}
		
		if(num == 0)
		{
			cout << endl << "Finalizando programa..." << endl;
		}
	}
		
	return 0;
}


