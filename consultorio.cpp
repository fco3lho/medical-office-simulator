#include "consultorio.hpp"
using namespace std;

Consultorio::Consultorio()
{
	setNome("");
	setEndereco("");
	setTelefone("");
}

Consultorio::Consultorio(string nome, string endereco, string telefone,
						Paciente p, Medico m, Consulta c)
{
	setNome(nome);
	setEndereco(endereco);
	setTelefone(telefone);
	cadastrarPaciente(p);
	cadastrarMedico(m);
	cadastrarConsulta(c);
}

//

void Consultorio::setNome(string nome)
{
	this->nome = nome;
}

string Consultorio::getNome()
{
	return nome;
}

void Consultorio::setEndereco(string endereco)
{
	this->endereco = endereco;
}

string Consultorio::getEndereco()
{
	return endereco;
}

void Consultorio::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Consultorio::getTelefone()
{
	return telefone;
}

//

void Consultorio::cadastrarPaciente(Paciente p)
{
	this->vetP.push_back(p);
}

void Consultorio::cadastrarMedico(Medico m)
{
	this->vetM.push_back(m);
}

void Consultorio::cadastrarConsulta(Consulta c)
{
	this->vetC.push_back(c);
}

//

void Consultorio::imprimirTodosPacientes()
{
	cout << "---------------------------------------------" << endl;
	cout << "	LISTA DE PACIENTES" << endl << endl;
	
	if(vetP.size() > 0)
	{
		for(int i = 0; i < vetP.size(); i++)
		{
			cout << "------------------------------" << endl;
			cout << "Nome: " << vetP[i].getNome() << endl;
			cout << "Endereco: " << vetP[i].getEndereco() << endl;
			cout << "Telefone: " << vetP[i].getTelefone() << endl;
			cout << "Identidade: " << vetP[i].getIdentidade() << endl;
			cout << "CPF: " << vetP[i].getCPF() << endl;
			cout << "Sexo: " << vetP[i].getSexo() << endl;
			cout << "Relato: " << vetP[i].getRelato() << endl;
			cout << "Data da última consulta: " << vetP[i].getDataUltimaConsulta() << endl;
			cout << "Medicação: " << vetP[i].getMedicacao() << endl << endl;
		}
		cout << "---------------------------------------------" << endl;
	}
	
	if(vetP.size() == 0)
	{
		cout << "Não há pacientes cadastrados." << endl << endl;
		
		cout << "---------------------------------------------" << endl;
	}
}

void Consultorio::imprimirListaMedicos()
{
	cout << "---------------------------------------------" << endl;
	cout << "	LISTA DE MÉDICOS" << endl << endl;
	
	if(vetM.size() > 0)
	{
		for(int i = 0; i < vetM.size(); i++)
		{
			cout << "------------------------------" << endl;
			cout << "Nome: " << vetM[i].getNome() << endl;
			cout << "Endereco: " << vetM[i].getEndereco() << endl;
			cout << "Telefone: " << vetM[i].getTelefone() << endl;
			cout << "Identidade: " << vetM[i].getIdentidade() << endl;
			cout << "CPF: " << vetM[i].getCPF() << endl;
			cout << "Sexo: " << vetM[i].getSexo() << endl;
			cout << "CRM: " << vetM[i].getCRM() << endl;
			cout << "Especialidade: " << vetM[i].getEspecialidade() << endl << endl;
		}
		cout << "---------------------------------------------" << endl;
	}
	
	if(vetM.size() == 0)
	{		
		cout << "Não há médicos cadastrados." << endl << endl;
		
		cout << "---------------------------------------------" << endl;
	}
}

void Consultorio::imprimirConsultas()
{
	cout << "---------------------------------------------" << endl;
	cout << "	LISTA DE CONSULTAS" << endl << endl;
	
	if(vetC.size() > 0)
	{
		for(int i = 0; i < vetC.size(); i++)
		{
			cout << "------------------------------" << endl;
			cout << "Data: " << vetC[i].getData() << endl;
			cout << "Hora: " << vetC[i].getHora() << endl << endl;
			
			vetC[i].imprimirMedico(vetC[i].getMedico());
			vetC[i].imprimirPaciente(vetC[i].getPaciente());
		}
		cout << "---------------------------------------------" << endl;
	}
	
	if(vetC.size() == 0)
	{
		cout << "Não há consultas cadastradas." << endl << endl;
		
		cout << "---------------------------------------------" << endl;
	}
}

void Consultorio::imprimirConsultasMedico()
{
	string aux, aux2;
	
	cout << "Insira o CRM do médico que deseja imprimir as consultas: ";
	getline(cin, aux);
	
	cout << "Insira a data das consultas: ";
	getline(cin, aux2);
	
	cout << "---------------------------------------------" << endl;
	cout << "	LISTA DE CONSULTAS - CRM " << aux << endl << endl;
	
	for(int i = 0; i < vetC.size(); i++)
	{
		if(aux == vetC[i].identificadorMedico(vetC[i].getMedico()))
		{
			if(aux2 == vetC[i].getData())
			{
				cout << "------------------------------" << endl;
				cout << "Data: " << vetC[i].getData() << endl;
				cout << "Hora: " << vetC[i].getHora() << endl << endl;
			
				vetC[i].imprimirPaciente(vetC[i].getPaciente());
			}
		}
	}
	
	cout << "---------------------------------------------" << endl;
}

void Consultorio::removerMedico()
{
	string aux;
	
	cout << "Insira a CRM do médico que deseja remover: ";
	getline(cin, aux);
	
	for(int i = 0; i < vetM.size(); i++)
	{
		if(aux == vetM[i].getCRM())
		{
			vetM.erase(vetM.begin() + i);
		}
	}	
}

void Consultorio::removerPaciente()
{
	string aux;
	
	cout << "Insira o CPF do paciente que deseja remover: ";
	getline(cin, aux);
	
	for(int i = 0; i < vetP.size(); i++)
	{
		if(aux == vetP[i].getCPF())
		{
			vetP.erase(vetP.begin() + i);
		}
	}
}

void Consultorio::removerConsulta()
{
	string aux, aux2;
	
	cout << "Insira o CPF do paciente da consulta que deseja remover: ";
	getline(cin, aux);
	
	cout << "Insira a data da consulta que deseja remover: ";
	getline(cin, aux2);
	
	for(int i = 0; i < vetC.size(); i++)
	{
		if(aux == vetC[i].identificadorPaciente(vetC[i].getPaciente()))
		{
			if(aux2 == vetC[i].getData())
			{
				vetC.erase(vetC.begin() + i);
			}		
		}
	}
}
