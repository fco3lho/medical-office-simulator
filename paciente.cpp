#include "paciente.hpp"
using namespace std;

Paciente::Paciente():Pessoa()
{
	this->relato = "";
	this->dataUltimaConsulta = "";
	this->medicacao = "";
}

Paciente::Paciente(string nome, string endereco, string telefone, string identidade,
				string cpf, string sexo, string relato, string dataUltimaConsulta,
				string medicacao):Pessoa(nome, endereco, telefone, identidade, cpf, sexo)
{
	this->relato = relato;
	this->dataUltimaConsulta = dataUltimaConsulta;
	this->medicacao = medicacao;
}

//

void Paciente::setRelato(string relato)
{
	this->relato = relato;
}

string Paciente::getRelato()
{
	return relato;
}

void Paciente::setDataUltimaConsulta(string dataUltimaConsulta)
{
	this->dataUltimaConsulta = dataUltimaConsulta;
}

string Paciente::getDataUltimaConsulta()
{
	return dataUltimaConsulta;
}

void Paciente::setMedicacao(string medicacao)
{
	this->medicacao = medicacao;
}

string Paciente::getMedicacao()
{
	return medicacao;
}

//

void Paciente::imprimir()
{
	Pessoa::imprimir();
	cout << "Relato: " << relato << endl;
	cout << "Data da última consulta: " << dataUltimaConsulta << endl;
	cout << "Medicação: " << medicacao << endl;
}
