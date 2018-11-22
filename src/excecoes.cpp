#include "excecoes.h"

const char* MovimentoInvalidoException::what() const noexcept{
  return "Não é possível movimentar a Peça  com os valores escolhidos!";
}
