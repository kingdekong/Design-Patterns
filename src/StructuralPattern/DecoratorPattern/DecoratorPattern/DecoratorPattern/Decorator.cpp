#include "Decorator.h"

Decorator::Decorator(Component* pcmp){
	m_pComponent = pcmp;
}

Decorator::~Decorator(){

}

void Decorator::operation(){
	m_pComponent->operation();
}