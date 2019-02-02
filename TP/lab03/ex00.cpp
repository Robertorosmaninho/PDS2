#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>


int main(){

std::string linha;
std::string palavra;

std::map<std::string, int> contagem;

while (std::getline(std::cin, linha)) {
  std::istringstream linha_stream(linha);
  while (std::getline(linha_stream, palavra, ' ')) {
	if(contagem.count(palavra) == 0){
		contagem[palavra] = 0;
	}else{
		contagem[palavra]++;
	}
  }
} 

std::cout << std::endl;

for(std::pair<std::string,int>pair : contagem){
	std::cout << pair.first << " = " << pair.second;
	std::cout << std::endl;
}
return 0;
}

