#include <string>
#include "comenzi.h"
#include "joc.h"
#include "output.h"
using namespace std;

int main()
{
comenzi comanda;
joc game;
std::string resp;
while(comanda!=comenzi::stop){
      comanda.read();
      if(comanda==comenzi::start_game){
         if (game.mod(comanda.strArg)) {
          output::success("");
        } else {
          output::fail("Unknown game type [" + cmd.strArg + "].");
        }
      }
      else
      if(comanda==comenzi::curat){
         game.restart();
         output::success("");}
      else
      if(comanda==comenzi::timp){
         resp = std::to_string(game.timp.getSeconds());
        output::success(resp);
      }
      else
      if(comanda==comenzi::genmove){
        resp = game.findMove(cmd.intArg);
         output::success(resp);
      }
      else
      if(comanda==comenzi::play){
         resp = game.makeMove(cmd.intArg);
         output::success(resp);
      }
      else
      if(comanda==comenzi::necunoscut)
        output::fail("Unknown command ["+cmd.strArg+"].");

}
game.end();
output::success("");
    return 0;
}
