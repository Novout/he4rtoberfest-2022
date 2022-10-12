#include <iostream>
#include <vector>

auto main() -> int
{
  auto input = 0, monthTarget = 0, yearTarget = 0, daysTarget = 0;

  std::wcin >> input;

  yearTarget = input / 365;
  monthTarget = (input % 365) / 30;
  daysTarget = (input % 365) % 30;

  std::cout << yearTarget << " ano(s)\n";
  std::cout << monthTarget << " mes(es)\n";
  std::cout << daysTarget << " dia(s)\n";

  return 0;
}
