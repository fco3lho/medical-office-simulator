#ifndef MEDICO_HPP
#define MEDICO_HPP
#include <iostream>
#include <string>
#include "pessoa.hpp"
using namespace std;

class Medico : public Pessoa
{
	private:
		string CRM;
		string especialidade;		
		
	public:
		Medico();
		Medico(string nome, string endereco, string telefone, string identidade, 
				string cpf, string sexo, string CRM, string especialidade);
				
		void setCRM(string CRM);
		string getCRM();
		
		void setEspecialidade(string especialidade);
		string getEspecialidade();
		
		void imprimir();	
		
};
#endif
