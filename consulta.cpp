#include "consulta.hpp"
using namespace std;

Consulta::Consulta()
{
	this->hora = "";
	this->data = "";
}

Consulta::Consulta(string data, string hora, Paciente p, Medico m)
{
	this->hora = hora;
	this->data = data;
	setPaciente(p);
	setMedico(m);
}

void Consulta::setData(string data)
{
	this->data = data;
}

string Consulta::getData()
{
	return data;
}

void Consulta::setHora(string hora)
{
	this->hora = hora;
}

string Consulta::getHora()
{
	return hora;
}

void Consulta::setPaciente(Paciente p)
{
	this->paciente = p;
}

Paciente Consulta::getPaciente()
{
	return paciente;
}

void Consulta::setMedico(Medico m)
{
	this->medico = m;
}

Medico Consulta::getMedico()
{
	return medico;
}

//

void Consulta::imprimir()
{
	cout << "Data: " << data << endl;
	cout << "Hora: " << hora << endl;
}

void Consulta::imprimirMedico(Medico m)
{
	cout << "	MÉDICO" << endl << endl;
	cout << "Nome: " << m.getNome() << endl;
	cout << "Endereço: " << m.getEndereco() << endl;
	cout << "Telefone: " << m.getTelefone() << endl;
	cout << "Identidade: " << m.getIdentidade() << endl;
	cout << "CPF: " << m.getCPF() << endl;
	cout << "Sexo: " << m.getSexo() << endl;
	cout << "CRM: " << m.getCRM() << endl;
	cout << "Especialidade: " << m.getEspecialidade() << endl << endl;
}

void Consulta::imprimirPaciente(Paciente p)
{
	cout << "	PACIENTE" << endl << endl;
	cout << "Nome: " << p.getNome() << endl;
	cout << "Endereço: " << p.getEndereco() << endl;
	cout << "Telefone: " << p.getTelefone() << endl;
	cout << "Identidade: " << p.getIdentidade() << endl;
	cout << "CPF: " << p.getCPF() << endl;
	cout << "Sexo: " << p.getSexo() << endl;
	cout << "Relato: " << p.getRelato() << endl;
	cout << "Data da última consulta: " << p.getDataUltimaConsulta() << endl;
	cout << "Medicação: " << p.getMedicacao() << endl << endl;
}

string Consulta::identificadorPaciente(Paciente p)
{
	return p.getCPF();
}

string Consulta::identificadorMedico(Medico m)
{
	return m.getCRM();
}
