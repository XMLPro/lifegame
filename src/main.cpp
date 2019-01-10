#include <iostream>
#include <unistd.h>
#include <vector>

int n = 10;

void view(std::vector<std::vector<int>> v)
{
  for (int i = 1; i < n+1; i++)
  {
    for (int j = 1; j < n+1; j++)
    {
      if (v[i][j] == 0)
        std::cout << "□ ";
      else if (v[i][j] == 1)
        std::cout << "■ ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
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
  std::vector<std::vector<int>> cell(n+2, std::vector<int>(n+2,0));
  for (int i = 1; i < n+1; i++)
    for (int j = 1; j < n+1; j++)
    {
      cell[i][j] = live_check(v, i, j);
    }
    return cell;
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
