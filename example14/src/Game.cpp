#include "Game.h"
template<typename T>
Game<T>::Game(int width,int height):m_width(width),m_height(height)
{
  m_Piece=new T* [m_width];
  for(int i=0;i<m_width;i++)
    m_Piece[i]=new T[m_height];
}
template<typename T>
Game<T>:: ~Game()
{
  for(int i=0;i<m_width;i++)
    delete[] m_Piece[i];
   delete[] m_Piece;
}
template<typename T>
void Game<T>::CopyFrom(const Game<T>& Data)
{
  m_width=Data.m_width;
  m_height=Data.m_height;
  m_Piece=new T* [m_width];
  for(int i=0;i<m_width;i++)
    m_Piece[i]=new T[m_height];
  for(int i=0;i<m_width;i++)
    for(int j=0;j<m_height;j++)
      m_Piece[i][j]=Data.m_Piece[i][j];
}
template<typename T>
Game<T>::Game(const Game<T>& Data)
{
  CopyFrom(Data);
}
template<typename T>
Game<T>& Game<T>::operator=(const Game<T>& Data)
{
  if(this=&Data)
    return *this;
  for(int i=0;i<m_width;i++)
    delete[] m_Piece[i];
  delete[] m_Piece;
  CopyFrom(Data);
  return *this;
}
template<typename T>  
void Game<T>::SetPiece(int x,int y,const T& Piece)
{
  mx=x;
  my=y;
  m_Piece[x][y]=Piece;
}
template<typename T>  
T& Game<T>::GetPieceAt(int x,int y)
{
  return m_Piece[x][y];
}