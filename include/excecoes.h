#ifndef EXCECOES_H
#define EXCECOES_H

#include <stdexcept>

class MovimentoInvalidoException : public std::exception
{

  std::string _msg;

public:
  MovimentoInvalidoException(std::string msg);
  virtual const char *what() const noexcept override;
};

class PosicaoSemPecaException : public std::exception
{

  std::string _msg;

public:
  PosicaoSemPecaException(std::string msg);
  virtual const char *what() const noexcept override;
};

class PosicaoForaDoTabuleiroException : public std::exception
{

  std::string _msg;

public:
  PosicaoForaDoTabuleiroException(std::string msg);
  virtual const char *what() const noexcept override;
};

class PecaNaFrenteException : public std::exception
{

  std::string _msg;

public:
  PecaNaFrenteException(std::string msg);
  virtual const char *what() const noexcept override;
};

#endif