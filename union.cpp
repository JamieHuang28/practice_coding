#include <iostream>

struct A
{
  int m1;
  int m2;
  double m3;
};

struct B
{
  int m1;
  int m2;
  double m3;
  int data4;
  double data5;
};

union UnionAB
{
  A a;
  B b;
};




int main(int argc, char const *argv[])
{
  A in;
  B out;
  UnionAB u_ab;
  in.m1 = 0;
  in.m2 = 1;
  in.m3 = 2.3;
  u_ab.a = in;
  out = u_ab.b;
  std::cout << "struct b: " << std::endl
    << out.m1 << std::endl
    << out.m2 << std::endl
    << out.m3 << std::endl
    << std::endl;
  return 0;
}
