#include "doctest.h"
#include "cavalo.h"


TEST_CASE("Testando o Construtor") {
    CHECK_NOTHROW(Cavalo(1, 2));

    Cavalo *cavalo = new Cavalo(1,2);
        CHECK(cavalo->get_x() >= 0);
        CHECK(cavalo->get_y() >= 0);
}

TEST_CASE("Testando Possibilidades de Movimento"){
  Cavalo *cavalo = new Cavalo(3,3);
	
	bool primeiro_L = cavalo->pode_mover(5,4);
		CHECK_EQ(primeiro_L,1);
	bool segundo_L = cavalo->pode_mover(5,2);
    CHECK_EQ(segundo_L,1);
	bool terceiro_L = cavalo->pode_mover(1,4);
    CHECK_EQ(terceiro_L,1);
	bool quarto_L = cavalo->pode_mover(1,2);
    CHECK_EQ(quarto_L,1);

	bool quinto_L = cavalo->pode_mover(4,5);
    CHECK_EQ(quinto_L,1);
	bool sexto_L = cavalo->pode_mover(4,1);
    CHECK_EQ(sexto_L,1);
	bool setimo_L = cavalo->pode_mover(2,1);
    CHECK_EQ(setimo_L,1);
	bool oitavo_L = cavalo->pode_mover(2,5);
    CHECK_EQ(oitavo_L,1);
}

TEST_CASE("Testando Possibilidade de Movimentos Inválidos"){
  Cavalo *cavalo = new Cavalo(1,2);

  bool posicao_igual = cavalo->pode_mover(1,2);
    CHECK_EQ(posicao_igual, 0);
  bool move_linha_invalida = cavalo->pode_mover(-1,2);
    CHECK_EQ(move_linha_invalida,0);
  bool move_coluna_invalida = cavalo->pode_mover(1,8);
    CHECK_EQ(move_coluna_invalida,0);

	bool move_diagonal = cavalo->pode_mover(2,3);
    CHECK_EQ(move_diagonal,0);
  bool move_linha = cavalo->pode_mover(0,2);
    CHECK_EQ(move_linha,0);
  bool move_coluna = cavalo->pode_mover(1,3);
    CHECK_EQ(move_coluna,0);
}

TEST_CASE("Testando Movimentos Reais"){
  Cavalo *cavalo = new Cavalo(0,0);
    CHECK_THROWS(cavalo->move(0,0));
    CHECK_THROWS(cavalo->move(0,8));
    CHECK_THROWS(cavalo->move(-1,0));
		CHECK_THROWS(cavalo->move(2,3));
    CHECK_THROWS(cavalo->move(0,2));
    CHECK_THROWS(cavalo->move(1,3));
  cavalo->move(2,1);
  int new_x = cavalo->get_x();
  int new_y = cavalo->get_y();
    CHECK(new_x == 2);
    CHECK(new_y == 1);

}

TEST_CASE("Testando Getters"){
  Cavalo *cavalo = new Cavalo(3,2);

  int get_posicao_x = cavalo->get_x();
    CHECK(get_posicao_x == 3);
  int get_posicao_y = cavalo->get_y();
    CHECK(get_posicao_y == 2);
  std::string queen_icon = cavalo->get_icon();
    CHECK(queen_icon == "♞");
}
