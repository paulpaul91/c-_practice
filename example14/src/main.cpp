#include <iostream>
#include <vector>
#include "Game.cpp"
#include "SpreadSheetCell.h"
using namespace std;
using namespace My_code;
int main()
{
  Game<double> My_game(10,10);
  
  My_game.SetPiece(6,3,10);
  cout<<My_game.GetX(10)<<endl;
  cout<<My_game.GetY(10)<<endl;
  cout<<My_game.GetPieceAt(6,3)<<endl;
    
  Game<int> My_game1(10,10);
  
  My_game1.SetPiece(6,3,10);
  cout<<My_game1.GetX(10)<<endl;
  cout<<My_game1.GetY(10)<<endl;
  cout<<My_game1.GetPieceAt(6,3)<<endl;
  
  Game<SpreadSheetCell> My_game2(10,10);
  
  My_game2.SetPiece(6,3,10);
  cout<<My_game2.GetX(10)<<endl;
  cout<<My_game2.GetY(10)<<endl;
  cout<<My_game2.GetPieceAt(6,3).GetStringValue()<<endl;
  return 0;
}
