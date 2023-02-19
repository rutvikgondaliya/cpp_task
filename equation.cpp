#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z, p;
    FILE *file1 = fopen("x.txt", "r");
    FILE *file2 = fopen("y.txt", "r");
    if (file1 != NULL && file2 != NULL)
    {
        fscanf(file1, "%f", &x);
        fscanf(file2, "%f", &y);
        cout << x << endl;
        cout << y << endl;

        z = pow(x, y);
        p = x*y;
        cout << z << endl;
        cout << p << endl;

        fclose(file1);
        fclose(file2);
    }
    else
    {
        if (file1 == NULL)
        {
            cout << "Unable to open file x.txt.\n";
        }
        if (file2 == NULL)
        {
            cout << "Unable to open file y.txt.\n";
        }
        return 1;
    }

    FILE *file3 = fopen("z.txt", "w");
    if (file3 != NULL)
    {
        fprintf(file3, "%f\n", z);
        fprintf(file3, "%f\n", p);
        fclose(file3);
    }
    else
    {
        cout << "Unable to open file.\n";
    }
    return 0;
}
