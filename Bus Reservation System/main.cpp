#include <conio.h>

#include <cstdio>

#include <iostream>

#include <string.h>

#include <cstdlib>

using namespace std;
static int p = 0;
class a
{
char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
public:
  void install();
  void allotment();
  void empty();
  void show();
  void avail();
  void position(int i);

}
bus[10];

void vline(char ch)
{
  for (int i=80;i>0;i--)
  cout<<ch;

}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
