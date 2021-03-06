/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matricula.cpp
 * Author: Karla Isabel Pedraza Salinas 20141056
 * 
 * Created on 11 de julio de 2017, 08:53 AM
 */

#include "Matricula.h"

Matricula::Matricula() {
    listaAlumnos=new ListaAlumno;
    listaCursos=new ListaCurso;
}

Matricula::Matricula(const Matricula& orig) {
}

Matricula::~Matricula() {
    listaAlumnos->eliminar();
}
void Matricula::leerAlumnos(ifstream&in){
    listaAlumnos->leerAlumnos(in);
}
void Matricula::leerCursosNotas(ifstream&in){
    listaAlumnos->leerCursosNotas(in);
}
void Matricula::imprimirReporte(ofstream&out){
    listaCursos->imprimirCursos(out);
    for(int i=0;i<160;i++) out<<'=';out<<endl;
    listaAlumnos->imprimirReporte(out);
}
void Matricula::leerCursos(ifstream&in){
    listaCursos->leerCursos(in);
}