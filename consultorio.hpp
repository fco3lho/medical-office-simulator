#ifndef CONSULTORIO_HPP
#define CONSULTORIO_HPP
#include <iostream>
#include <vector>
#include "paciente.hpp"
#include "medico.hpp"
#include "consulta.hpp"

class Consultorio
{
	private:
		string nome;
		string endereco;
		string telefone;
		
		vector<Paciente>vetP;
		vector<Medico>vetM;
		vector<Consulta>vetC;
		
	public:
		Consultorio();
		Consultorio(string nome, string endereco, string telefone,
					Paciente p, Medico m, Consulta c);
					
		void setNome(string nome);
		string getNome();
		
		void setEndereco(string endereco);
		string getEndereco();
		
		void setTelefone(string telefone);
		string getTelefone();
		
		//
			
		void cadastrarPaciente(Paciente p);
		void cadastrarMedico(Medico m);
		void cadastrarConsulta(Consulta c);
		
		void removerPaciente();
		void removerMedico();
		void removerConsulta();
		
		void imprimirTodosPacientes();
		void imprimirConsultas();
		void imprimirConsultasMedico();
		void imprimirListaMedicos();
	
};
#endif
