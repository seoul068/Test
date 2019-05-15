#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char fileName[] = "in.txt";
    const int n = 4;
    double x[n + 1],y[n + 1], xt, yt;
    FILE *f = fopen(fileName, "rt");
    if (!f)
    {
        cout << "File not found\n";
        system("pause");
    }
    int i, j, m;;
    for (i = 1; i <= n; i++)
    {
        fscanf(f,"%lf", &x[i]);
        fscanf(f,"%lf", &y[i]);
    }
    fclose(f);
    cout << "Input x: ";
    cin >> xt;
    cout << "Input y: ";
    cin >> yt;
    bool flag = false;
    x[0] = x[n];
    y[0] = y[n];
    for (i = 0; i < n; i++)
    {
        if (x[i] == xt && y[i] == yt)
        {
            flag = true;
        }
    }
    if (flag) cout << "точка - вершина четырехугольника\n";
    else
    {
        for (i = 0; i < n; i++)
        {
            if ((xt - x[i]) / (x[i+1] - x[i]) - (yt - y[i]) / (y[i+1] - y[i]) == 0) flag = true;
        }
        if (flag) cout << "точка лежит на сторонах четырехугольника\n";
        else
        {
            for (i = 0; i < n; i++)
            {
                if (!((yt > y[i]) != (yt <= y[i + 1])))
                {
                    if (xt - x[i] < (yt - y[i]) * (x[i + 1] - x[i]) / (y[i + 1] - y[i])) flag = !flag;
                }
            }
            if (flag) cout << "точка внутри четырехугольника\n";
            else cout << "точка снаружи четырехугольника\n";
        }
    }
    system("pause");
    return 0;
}
