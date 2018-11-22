#include "doctest.h"
#include "bispo.h"

TEST_CASE("Testando o Construtor") {
    CHECK_NOTHROW(Bispo(1, 2));

    Bispo *bispo = new Bispo(1,2);
        CHECK(bispo->get_x() >= 0);
        CHECK(bispo->get_y() >= 0);
}

TEST_CASE("Testando Possibilidades de Movimento"){
  Bispo *bispo = new Bispo(1,2);

  bool move_diagonal = bispo->pode_mover(2,3);
    CHECK_EQ(move_diagonal,1);
}

TEST_CASE("Testando Possibilidade de Movimentos Inválidos"){
  Bispo *bispo = new Bispo(1,2);

  bool posicao_igual = bispo->pode_mover(1,2);
    CHECK_EQ(posicao_igual, 0);
  bool move_linha_invalida = bispo->pode_mover(-1,2);
    CHECK_EQ(move_linha_invalida,0);
  bool move_coluna_invalida = bispo->pode_mover(1,8);
    CHECK_EQ(move_coluna_invalida,0);
	bool move_mais_coluna = bispo->pode_mover(2,4);
		CHECK_EQ(move_mais_coluna,0);
	bool move_mais_linha = bispo->pode_mover(3,3);
		CHECK_EQ(move_mais_linha, 0);
	bool move_linha = bispo->pode_mover(0,2);
    CHECK_EQ(move_linha,0);
  bool move_coluna = bispo->pode_mover(1,3);
    CHECK_EQ(move_coluna,0);
}

TEST_CASE("Testando Movimentos Reais"){
  Bispo *bispo = new Bispo(0,0);
    CHECK_THROWS(bispo->move(0,0));
    CHECK_THROWS(bispo->move(0,8));
    CHECK_THROWS(bispo->move(-1,0));
  bispo->move(1,1);
  int new_x = bispo->get_x();
  int new_y = bispo->get_y();
    CHECK(new_x == 1);
    CHECK(new_y == 1);

}

TEST_CASE("Testando Getters"){
  Bispo *bispo = new Bispo(1,2);

  int get_posicao_x = bispo->get_x();
    CHECK(get_posicao_x == 1);
  int get_posicao_y = bispo->get_y();
    CHECK(get_posicao_y == 2);
  std::string queen_icon = bispo->get_icon();
    CHECK(queen_icon == "♝");
}
