#include<iostream>
#include <ctime>
using namespace std;
int main()
{
  time_t ti = time(NULL);
  tm* datePtr = localtime(&ti);

  cout << "Date: " <<(datePtr->tm_mday)<<"/"<< (datePtr->tm_mon)+1 <<"/"<< (datePtr->tm_year)+1900<< "\n";

  return 0;

}
