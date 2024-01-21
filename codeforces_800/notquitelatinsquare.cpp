#include <iostream>
#include <string>
using namespace std;

int main()
{

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {

        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < 3; i++)
            {
                if (s[i] == '?')
                {
                    for (int i = 1; i < 4; i++)
                    {
                        char A = i + 64;
                        int count = 0;
                        for (int i = 0; i < 3; i++)
                        {
                            if (s[i] == A)
                            {
                                count++;
                            }
                        }
                        if (!count)
                        {
                            cout << A << endl;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}