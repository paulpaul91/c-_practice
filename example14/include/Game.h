template<typename T>
class Game
{
public:
  Game(int width,int height);
  virtual ~Game();
  Game(const Game<T>&);
  Game<T>& operator=(const Game<T>& rhs);
  void SetPiece(int x,int y,const T& Piece);
  T& GetPieceAt(int x,int y);
  int GetX(const T& Piece){return mx;}
  int GetY(const T& Piece){return my;}
  int GetHeight(){return m_height;}
  int GetWidth(){return m_width;}
private:
  void CopyFrom(const Game& Data);
  int mx;
  int my;
  int m_width;
  int m_height;
  T **m_Piece;
  
};