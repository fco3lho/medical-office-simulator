#include "medico.hpp"
using namespace std;

Medico::Medico():Pessoa()
{
	this->CRM = "";
	this->especialidade = "";
}

Medico::Medico(string nome, string endereco, string telefone, string identidade, 
				string cpf, string sexo, string CRM, string especialidade)
				: Pessoa(nome, endereco, telefone, identidade, cpf, sexo)
{
	this->CRM = CRM;
	this->especialidade = especialidade;
}

//

void Medico::setCRM(string CRM)
{
	this->CRM = CRM;
}

string Medico::getCRM()
{
	return CRM;
}

void Medico::setEspecialidade(string especialidade)
{
	this->especialidade = especialidade;
}

string Medico::getEspecialidade()
{
	return especialidade;
}

//

void Medico::imprimir()
{
	Pessoa::imprimir();
	cout << "CRM: " << CRM << endl;
	cout << "Especialidade: " << especialidade << endl;
}
