#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int a, b;
    int xk, yk;
    int xq, yq;

    for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        int count = 0;

        if (a != b)
        {
            int arr1[8][2] = {{xk + a, yk + b}, {xk + a, yk - b}, {xk - a, yk + b}, {xk - a, yk - b}, {xk + b, yk + a}, {xk + b, yk - a}, {xk - b, yk + a}, {xk - b, yk - a}};

            int arr2[8][2] = {{xq + a, yq + b}, {xq + a, yq - b}, {xq - a, yq + b}, {xq - a, yq - b}, {xq + b, yq + a}, {xq + b, yq - a}, {xq - b, yq + a}, {xq - b, yq - a}};

            for (int i = 0; i < 8; i++)
            {
                for (int a = 0; a < 8; a++)
                {
                    int flag = 0;
                    for (int b = 0; b < 2; b++)
                    {
                        if (arr1[i][b] == arr2[a][b])
                        {
                            flag++;
                        }
                    }
                    if (flag == 2)
                    {
                        count++;
                    }
                }
            }
        }
        else
        {
            int arr1[4][2] = {{xk + a, yk + b}, {xk + a, yk - b}, {xk - a, yk + b}, {xk - a, yk - b}};
            int arr2[4][2] = {{xq + a, yq + b}, {xq + a, yq - b}, {xq - a, yq + b}, {xq - a, yq - b}};

            for (int i = 0; i < 4; i++)
            {
                for (int a = 0; a < 4; a++)
                {
                    int flag = 0;
                    for (int b = 0; b < 2; b++)
                    {
                        if (arr1[i][b] == arr2[a][b])
                        {
                            flag++;
                        }
                    }
                    if (flag == 2)
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
