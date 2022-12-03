#include <iostream>
#include <iomanip>
#include <string>

//declarar uma classe
class Aviao{
	//com seus elementos públicos e privados
	public:
		int vel;
		int velMax;
		std::string tipo;
		//declaramos 3 parâmetros
		void ini(int tp);
		//prototipamos um método chamado ini que recebe um parâmetro inteiro 
	private:

};

//construindo método
void Aviao::ini(int tp) {
	//verifica qual foi o valor passado para tp
	if(tp==1){
		//se o valor for 1 inicializa as variáveis com os valores abaixo
		this->velMax = 800;
		this->tipo= "Jato";
	}else if(tp==2){
		this->velMax =350;
		this->tipo= "Monomotor";
	}else if(tp==3){
		this->velMax =180;
		this->tipo= "Planador";
	}
}

int main(){
	Aviao *avi = new Aviao();
	//instanciamos um novo objeto do tipo Aviao dessa classe

	avi->ini(2);
	//chamamos o método de inicialização
	
	std::cout << avi->velMax << std::endl;
	//como chama uma propriedade deste objeto
	return 0;
}