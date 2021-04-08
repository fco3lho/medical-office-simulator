#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include <iostream>
#include <string>
#include "pessoa.hpp"
using namespace std;

class Paciente : public Pessoa
{
	private:
		string relato;
		string dataUltimaConsulta;
		string medicacao;
	
	public:
		Paciente();
		Paciente(string nome, string endereco, string telefone, string identidade,
				string cpf, string sexo, string relato, string dataUltimaConsulta, string medicacao);
				
		void setRelato(string relato);
		string getRelato();
		
		void setDataUltimaConsulta(string dataUltimaConsulta);
		string getDataUltimaConsulta();
		
		void setMedicacao(string medicacao);
		string getMedicacao();
		
		//
		
		void imprimir();	
		
};
#endif
