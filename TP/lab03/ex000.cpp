#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>


int main(){

std::string linha;
std::string palavra;
int _total = 0;
float _porcent;

std::map<std::string, int> contagem;

while (std::getline(std::cin, linha)) {
  std::istringstream linha_stream(linha);
  while (std::getline(linha_stream, palavra, ' ')) {
	if(contagem.count(palavra) == 0){
		contagem[palavra] = 1;
	}else{
		contagem[palavra]++;
	}
	_total++;
  }
} 

std::cout << std::endl;

for(std::pair<std::string,int>pair : contagem){
    
    float _porcent = (float) pair.second/_total;
    
	std::cout << pair.first << " " << pair.second << " ";
	std::cout << _porcent;
	std::cout << std::endl;
}
return 0;
}


