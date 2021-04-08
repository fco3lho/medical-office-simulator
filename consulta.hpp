#ifndef CONSULTA_HPP
#define CONSULTA_HPP
#include <iostream>
#include "paciente.hpp"
#include "medico.hpp"

class Consulta
{
	private:
		string data;
		string hora;
		
		Paciente paciente;
		Medico medico;	
		
	public:
		Consulta();
		Consulta(string data, string hora, Paciente p, Medico m);
		
		void setData(string data);
		string getData();
		
		void setHora(string hora);
		string getHora();
		
		void setPaciente(Paciente p);
		Paciente getPaciente();
		
		void setMedico(Medico m);
		Medico getMedico();
		
		//
		
		void imprimir();
		
		void imprimirMedico(Medico m);
		void imprimirPaciente(Paciente p);	
		
		string identificadorPaciente(Paciente p);
		string identificadorMedico(Medico m);	
};
#endif
