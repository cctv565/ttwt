#pragma once

#include <string>

class Command {
public:
  static const int necunoscut= 0;
  static const int start_game = 1;
  static const int curat = 2;
  static const int timp = 3;
  static const int genmove = 4;
  static const int play = 5;
  static const int stop = 6;

  int type = necunoscut;
  std::string strArg;
  int intArg;

  void readFromStdin();

private:
  std::string getToken(std::string& s);
  int getPlayerFromCode(char code);
};
