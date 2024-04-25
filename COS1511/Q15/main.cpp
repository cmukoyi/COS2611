#include <iostream>
#include <string>
using namespace std;
int main()
{
                     string name = "CoMPutER";
                     for (int x = 0; x < name.size(); x++)
                           if (islower(name [x]))
                                  name [x] = toupper(name[x]);
                            else
                               if (isupper(name[x]))
                                   if (x % 2 == 0)
                                        name[x] = tolower(name[x]);
                                    else
                                           name[x] = name[x-1];
                    cout << name;
                    return 0;
}


