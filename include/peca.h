#ifndef PDS2_PECA_H
#define PDS2_PECA_H

#include <string>

class Peca{

	protected:
 		int _x;
  	int _y;
		std::string _icon;
	public:
		Peca(int x, int y, std::string icon);	
		~Peca();

		int get_x();
    int get_y();

    std::string get_icon(); //or name

   	virtual bool pode_mover(int x, int y); //add exception
//    void move(int x, int y);
};

#endif
