#include "doctest.h"
#include "peao.h"


TEST_CASE("Testando o Construtor") {
    CHECK_NOTHROW(Peao(1, 2));

    Peao *peao = new Peao(1,2);
        CHECK(peao->get_x() >= 0);
        CHECK(peao->get_y() >= 0);
}

TEST_CASE("Testando Possibilidades de Movimento"){
  Peao *peao = new Peao(1,2);

  bool move_coluna = peao->pode_mover(1,3);
    CHECK_EQ(move_coluna,1);
	bool move_coluna_2 = peao->pode_mover(1,4); 
		CHECK_EQ(move_coluna_2,1);
}

TEST_CASE("Testando Possibilidade de Movimentos Inválidos"){
  Peao *peao = new Peao(1,2);

  bool posicao_igual = peao->pode_mover(1,2);
    CHECK_EQ(posicao_igual, 0);
  bool move_linha_invalida = peao->pode_mover(-1,2);
    CHECK_EQ(move_linha_invalida,0);
  bool move_coluna_invalida = peao->pode_mover(1,8);
    CHECK_EQ(move_coluna_invalida,0);
	
	bool move_diagonal = peao->pode_mover(2,3);
    CHECK_EQ(move_diagonal,0);
  bool move_linha = peao->pode_mover(0,2);
    CHECK_EQ(move_linha,0);
		
	peao->_rodada = 2;
	
	bool move_coluna_2 = peao->pode_mover(1,4);
		CHECK_EQ(move_coluna_2,0);
	
}

TEST_CASE("Testando Movimentos Reais"){
  Peao *peao = new Peao(0,0);
    CHECK_THROWS(peao->move(0,0));
    CHECK_THROWS(peao->move(0,8));
    CHECK_THROWS(peao->move(-1,0));
  peao->move(0,2);
  int new_x = peao->get_x();
  int new_y = peao->get_y();
    CHECK(new_x == 0);
    CHECK(new_y == 2);

}

TEST_CASE("Testando Getters"){
  Peao *peao = new Peao(1,2);

  int get_posicao_x = peao->get_x();
    CHECK(get_posicao_x == 1);
  int get_posicao_y = peao->get_y();
    CHECK(get_posicao_y == 2);
  std::string queen_icon = peao->get_icon();
    CHECK(queen_icon == "♟");
}
