#include "doctest.h"
#include "rainha.h"


TEST_CASE("Testando o Construtor") {
    CHECK_NOTHROW(Rainha(1, 2));

    Rainha *rainha = new Rainha(1,2);
        CHECK(rainha->get_x() >= 0);
        CHECK(rainha->get_y() >= 0);
}

TEST_CASE("Testando Possibilidades de Movimento"){
	Rainha *rainha = new Rainha(1,2);

	bool move_diagonal = rainha->pode_mover(2,3);
		CHECK_EQ(move_diagonal,1);
	bool move_linha = rainha->pode_mover(0,2);
		CHECK_EQ(move_linha,1);
	bool move_coluna = rainha->pode_mover(1,3);
		CHECK_EQ(move_coluna,1);
}

TEST_CASE("Testando Possibilidade de Movimentos Inválidos"){
	Rainha *rainha = new Rainha(1,2);

	bool posicao_igual = rainha->pode_mover(1,2);
    CHECK_EQ(posicao_igual, 0);
	bool move_linha_invalida = rainha->pode_mover(-1,2);
		CHECK_EQ(move_linha_invalida,0);
	bool move_coluna_invalida = rainha->pode_mover(1,8);
		CHECK_EQ(move_coluna_invalida,0);
}

TEST_CASE("Testando Movimentos Reais"){
	Rainha *rainha = new Rainha(0,0);
		CHECK_THROWS(rainha->move(0,0));
		CHECK_THROWS(rainha->move(0,8));
		CHECK_THROWS(rainha->move(-1,0));
	rainha->move(1,2);
	int new_x = rainha->get_x();
	int new_y = rainha->get_y();
		CHECK(new_x == 1);
		CHECK(new_y == 2);

}

TEST_CASE("Testando Getters"){
	Rainha *rainha = new Rainha(1,2);

	int get_posicao_x = rainha->get_x();
		CHECK(get_posicao_x == 1);
	int get_posicao_y = rainha->get_y();
		CHECK(get_posicao_y == 2);
	std::string	queen_icon = rainha->get_icon();
		CHECK(queen_icon == "♛");
}
