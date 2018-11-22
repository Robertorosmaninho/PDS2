#include "doctest.h"
#include "rei.h"

TEST_CASE("Testando o Construtor") {
    CHECK_NOTHROW(Rei(1, 2));

    Rei *rei = new Rei(1,2);
        CHECK(rei->get_x() >= 0);
        CHECK(rei->get_y() >= 0);
}

TEST_CASE("Testando Possibilidades de Movimento"){
  Rei *rei = new Rei(1,2);

  bool move_diagonal = rei->pode_mover(2,3);
    CHECK_EQ(move_diagonal,1);
  bool move_linha = rei->pode_mover(2,2);
    CHECK_EQ(move_linha,1);
  bool move_coluna = rei->pode_mover(1,3);
    CHECK_EQ(move_coluna,1);
}

TEST_CASE("Testando Possibilidade de Movimentos Inválidos"){
  Rei *rei = new Rei(1,2);

  bool posicao_igual = rei->pode_mover(1,2);
    CHECK_EQ(posicao_igual, 0);
  bool move_linha_invalida = rei->pode_mover(-1,2);
    CHECK_EQ(move_linha_invalida,0);
  bool move_coluna_invalida = rei->pode_mover(1,8);
    CHECK_EQ(move_coluna_invalida,0);

	bool move_diagonal = rei->pode_mover(3,4);
    CHECK_EQ(move_diagonal,0);
  bool move_linha = rei->pode_mover(3,2);
    CHECK_EQ(move_linha,0);
  bool move_coluna = rei->pode_mover(1,4);
    CHECK_EQ(move_coluna,0);
}


TEST_CASE("Testando Movimentos Reais"){
  Rei *rei = new Rei(0,0);
    CHECK_THROWS(rei->move(0,0));
    CHECK_THROWS(rei->move(0,8));
    CHECK_THROWS(rei->move(-1,0));
  rei->move(1,1);
  int new_x = rei->get_x();
  int new_y = rei->get_y();
    CHECK(new_x == 1);
    CHECK(new_y == 1);
}


TEST_CASE("Testando Getters"){
  Rei *rei = new Rei(1,2);

  int get_posicao_x = rei->get_x();
    CHECK(get_posicao_x == 1);
  int get_posicao_y = rei->get_y();
    CHECK(get_posicao_y == 2);
  std::string queen_icon = rei->get_icon();
    CHECK(queen_icon == "♔");
}
