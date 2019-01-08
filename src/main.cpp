#include <iostream>
#include <unistd.h>
#include <vector>

int n = 10;

void view(std::vector<std::vector<int>> v)
{
  // vector(map)を表示する
}


// セルの数を数え上げる
int count(std::vector<std::vector<int>> v, int x, int y)
{
  return 3;
}

// 生死判定を行う
int live_check(std::vector<std::vector<int>> v, int x, int y)
{
  return 1;
}

// mapを書きかえる
std::vector<std::vector<int>> reload_map(std::vector<std::vector<int>> v)
{
  return vector v;
}

int main()
{
  std::vector<std::vector<int>> cell(12, std::vector<int>(12,0));

  cell[1][2] = 1;
  cell[2][3] = 1;
  cell[3][1] = 1;
  cell[3][2] = 1;
  cell[3][3] = 1;

  view(cell);

  int w = 0;
  while(w++ < 100)
  {
    view(cell);
    cell = reload_map(cell);
    sleep(1);
  }
}
