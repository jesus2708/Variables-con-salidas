#include "stdafx.h"  //________________________________________ VariablesSalida.cpp
#include "VariablesSalida.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	VariablesSalida app;
	return app.BeginDialog(IDI_VariablesSalida, hInstance);
}

void VariablesSalida::Window_Open(Win::Event& e)
{
	int temperatura = 22, edad = 19;
	int peso = 57;
	wstring texto;
	edad = 20;
	peso /= 2;
	temperatura = 18 * 2;
	Sys::Format(texto, L"(%i, %i )->(%i, %i)", temperatura / 3, 5 + temperatura, edad, peso + 1);
	this->MessageBoxW(texto, L"Resultado", MB_OK);
	this->MessageBoxW(L"Hola",texto, MB_OK);
	this->MessageBoxW(texto, texto, MB_OK);
}

