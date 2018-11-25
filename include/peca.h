#ifndef PECA_H
#define PECA_H

#include <iostream>
#include <cstdlib>

#include "excecoes.h"
#include "posicao.h"

class Tabuleiro;

class Peca
{
protected:
  std::string _nome;
  std::string _cor;
  Posicao _p;

public:
  Peca(std::string nome, std::string &cor, int x, int y);
  virtual ~Peca();
  void mover(int x, int y);
  int get_x();
  int get_y();
  std::string get_nome();
  std::string get_cor();
  std::string get_posicao();

  virtual bool pode_mover(int x, int y) = 0;
  virtual bool tem_peca_na_frente(int x, int y, Tabuleiro *t) = 0;
};

#endif
