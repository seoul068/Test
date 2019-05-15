#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
    const int n = 5, m = 16;
    char *fileNames[] = {"in1.txt", "in2.txt", "in3.txt", "in4.txt", "in5.txt"};
    double time[17] = {0, 30, 1, 1.30, 2, 2.30, 3, 3.30, 4, 4.30, 5, 5.30, 6, 6.30, 7, 7.30, 8};
    int i, j;
    double mas[n][m], sum[m];
    FILE *f;
    for (i = 0; i < n; i++)
    {
        f = fopen(fileNames[i], "rt");
        if (!f)
        {
            cout << "File '"  << fileNames[i] << "' not found \n";
            system("pause");
            return 0;
        }
        for (j = 0; j < m; j++)
        {
            fscanf(f, "%lf", &mas[i][j]);
            //printf("%5.2lf", mas[i][j]);
        }
        //cout << endl;
        fclose(f);
    }
    setlocale(LC_ALL, "Russian");
    for (j = 0; j < m; j++)
    {
        sum[j] = 0;
        for (i = 0; i < n; i++)
            sum[j] += mas[i][j];
    }
    int imax = 0;
    for (j = 0; j < m; j++)
        if (sum[j] > sum[imax]) imax = j;
    printf("Максимальная очередь была с %.2lf до %.2lf и составила %.2lf человек(а)\n", time[imax], time[imax+1], sum[imax]);
    system("pause");
    return 0;
}
