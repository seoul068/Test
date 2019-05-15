#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    char fileName[] = "in.txt";
    const int nmax = 100;
    int mas[nmax], t;
    FILE *f = fopen(fileName, "rt");
    if (!f)
    {
        cout << "File not found\n";
        system("pause");
    }
    int i, j, m, n;
    n = 0;
    while (!feof(f) && n < nmax)
    {
        fscanf(f, "%d", &m);
        mas[n] = m;
        n++;
    }
    fclose(f);
    for (i = n - 1; i > 0; i--)
        for (j = 1; j <= i; j++)
            if (mas[j] < mas[j-1])
            {
                t = mas[j];
                mas[j] = mas[j-1];
                mas[j-1] = t;
            }
    int perc = mas[((int)round(0.90 * n)) - 1];
    cout << "90 percentile " << perc << endl;
    int median = mas[((int)round(0.50 * n)) - 1];
    cout << "median " << median << endl;
    double average = 0;
    for (i = 0; i < n; i++)
    {
        average += mas[i];
    }
    average /= n;
    cout << "average " << average << endl;
    cout << "max " << mas[n-1] << endl;
    cout << "min " << mas[0] << endl;
    system("pause");
    return 0;
}
