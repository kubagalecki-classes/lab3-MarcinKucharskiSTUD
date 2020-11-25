#pragma once

#include "Stocznia.hpp"
using namespace std;

unsigned int transportujFlota(unsigned int towar)
{
  int PrzewiezionyTowar = 0;
  int suma=0;
  int licz =0;
  if(towar == 0){
    return 0;
  }
  else{
    while(suma<towar){
    Stocznia stocznia{};
    Statek* galeon = stocznia();
    PrzewiezionyTowar = galeon->transportuj();
    suma = suma + PrzewiezionyTowar;
    if (galeon == dynamic_cast<Zaglowiec*>(galeon))
    {
     licz++;
    }

    }
    delete galeon;
  }
  return licz;
}