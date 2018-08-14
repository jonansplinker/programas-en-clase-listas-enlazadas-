#include <stdio.h>

int buscar Elemento(int lemento){
	nodo* aux = inicio;
	while((aux!=NULL) && (aux.dato != elemento)){
		aux=aux.siguiente;
	}
	||if(aux==NULL){
		||return false;
		|||}else{                 |||return aux == NULL? false:true;
		||return true;
		||}
}
//--------------------
	int Ordenado(){
	if(inicio==NULL){
		return true;
	}else if(inicio.siguiente==NULL){
		return true;
	}else{
		Nodo* ant= inicio;
		Nodo* aux= inicio.siguiente;
		while((aux!=NULL)&&(ant.dato<=aux.dato))
			ant=aux;
		aux=aux.siguiente;
		return aux == NULL?true:false;
	}
}
//-------
	void eliminarInicio(){
	if(inicio!=NULL){
		nodo* aux = inicio;
		inicio = inicio.siguiente;
		aux.siguiente=NULL;
		free(aux);
	}
}
//---------------
	void eliminarFinal(){
	nodo* aux =inicio;
	Nodo* ant=NULL;
	while(()&&()){
		ant = aux;
		aux= aux.siguiente;
	}
	if(aux!=NULL){
		if(ant!=NULL){
			ant.siguiente=NULL;
			free(aux);
		}else{
			inicio= NULL;
			free(aux);
		}
	}
}
//-----------------
	void eliminarElemento(int elemento){
	if(inicio!=NULL){
		nodo* aux = inicio;
		nodo* ant = NULL;
		while((aux!=NULL)&&(aux.dato1=elemento)){
			ant aux;
			aux = aux.siguiente;
		}
		if(aux!=NULL){
			if(ant==NULL){
				inicio=aux.siguiente;
				aux.siguiente=NULL;
				free(aux);
			}else{
				ant.siguiente=aux.siguiente;
				aux.siguiente=NULL;
					free(aux);
			}
		}
	}
}
//---------------
