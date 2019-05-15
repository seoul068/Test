#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
    char fileName[] = "in.txt";
    const int nmax = 100;
    const int hours = 12;
    const int m = hours*60 + 1;
    double v1[nmax],v2[nmax], t;
    double time[m];
    int counts[m];
    FILE *f = fopen(fileName, "rt");
    if (!f)
    {
        cout << "File not found\n";
        system("pause");
    }
    int i, j, n, imax;
    n = 0;
    while (!feof(f) && n < nmax)
    {
        fscanf(f, "%lf", &v1[n]);
        fscanf(f, "%lf", &v2[n]);
        n++;
    }
    fclose(f);
    time[0] = 8.00;
    counts[0] = 0;
    for (i = 1; i < m; i++)
    {
        t = 0.01;
        if (i % 60 == 0) t = 0.41;
        time[i] = time[i-1] + t;
        counts[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (v1[i] <= time[j]+0.000001 && v2[i] >= time[j]-0.000001)
            {
                counts[j]++;
            }
        }
    }
    imax = 0;
    for (j = 0; j < m; j++)
    {
        if (counts[j] > counts[imax]) imax = j;
    }
    setlocale(LC_ALL, "Russian");
    if (imax != 0) printf("Период с max количеством людей с %.2lf до %.2lf в этот период людей было = %d\n", time[imax-1], time[imax], counts[imax]);
    else printf("Период с max количеством людей с %.2lf до %.2lf в этот период людей было = %d\n", time[0], time[1], counts[imax]);
    system("pause");
    return 0;
}
