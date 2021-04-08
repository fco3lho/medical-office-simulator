#include "pessoa.hpp"
using namespace std;

Pessoa::Pessoa()
{
	this->nome = "";
	this->endereco = "";
	this->telefone = "";
	this->identidade = "";
	this->cpf = "";
	this->sexo = "";
}

Pessoa::Pessoa(string nome, string endereco, string telefone,
				string identidade, string cpf, string sexo)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->identidade = identidade;
	this->cpf = cpf;
	this->sexo = sexo;
}

//

void Pessoa::setNome(string nome)
{
	this->nome = nome;
}

string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setEndereco(string endereco)
{
	this->endereco = endereco;
}

string Pessoa::getEndereco()
{
	return endereco;
}

void Pessoa::setIdentidade(string identidade)
{
	this->identidade = identidade;
}

string Pessoa::getIdentidade()
{
	return identidade;
}

void Pessoa::setTelefone(string telefone)
{
	this->telefone = telefone;
}

string Pessoa::getTelefone()
{
	return telefone;
}

void Pessoa::setCPF(string cpf)
{
	this->cpf = cpf;	
}

string Pessoa::getCPF()
{
	return cpf;
}

void Pessoa::setSexo(string sexo)
{
	this->sexo = sexo;
}

string Pessoa::getSexo()
{
	return sexo;
}

//

void Pessoa::imprimir()
{
	cout << "Nome: " << nome << endl;
	cout << "Endereço: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
	cout << "Identidade: " << identidade << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Sexo: " << sexo << endl;
}
