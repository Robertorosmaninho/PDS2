#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

#include <string>

class Forma{
public:
 virtual std::string get_cor() = 0;
 virtual std::string get_nome() = 0;

};

#endif
