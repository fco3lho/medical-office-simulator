#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
	private:
		string nome;
		string endereco;
		string telefone;
		string identidade;
		string cpf;
		string sexo;		
		
	public:
		Pessoa();
		Pessoa(string nome, string endereco, string telefone, 
				string identidade, string cpf, string sexo);
				
		void setNome(string nome);
		string getNome();
		
		void setEndereco(string endereco);
		string getEndereco();
		
		void setTelefone(string telefone);
		string getTelefone();
		
		void setIdentidade(string identidade);
		string getIdentidade();
		
		void setCPF(string cpf);
		string getCPF();
		
		void setSexo(string sexo);
		string getSexo();
		
		//
		
		void imprimir();
};
#endif
