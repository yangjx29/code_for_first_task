int main () {
    double  sz [10] [3];
    double  num [45] [7];
    double  e;
    int n, i, j, L8e5HwMUN79g, t, nwQfWvUnhA0g, PunvXO;
    scanf ("%d", &n);
    nwQfWvUnhA0g = 0;
    PunvXO = n * (n - 1) / 2;
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < 3) {
                    scanf ("%lf", &sz[i][j]);
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        for (; i < n - 1;) {
            {
                j = i + 1;
                while (j < n) {
                    {
                        L8e5HwMUN79g = 0;
                        for (; L8e5HwMUN79g < 3;) {
                            num[nwQfWvUnhA0g][L8e5HwMUN79g] = sz[i][L8e5HwMUN79g];
                            L8e5HwMUN79g = L8e5HwMUN79g +1;
                        }
                    }
                    {
                        t = 3;
                        while (t < 6) {
                            num[nwQfWvUnhA0g][t] = sz[j][t - 3];
                            t = t + 1;
                        }
                    }
                    j++;
                    num[nwQfWvUnhA0g][6] = sqrt ((num[nwQfWvUnhA0g][0] - num[nwQfWvUnhA0g][3]) * (num[nwQfWvUnhA0g][0] - num[nwQfWvUnhA0g][3]) + (num[nwQfWvUnhA0g][1] - num[nwQfWvUnhA0g][4]) * (num[nwQfWvUnhA0g][1] - num[nwQfWvUnhA0g][4]) + (num[nwQfWvUnhA0g][2] - num[nwQfWvUnhA0g][5]) * (num[nwQfWvUnhA0g][2] - num[nwQfWvUnhA0g][5]));
                    nwQfWvUnhA0g = nwQfWvUnhA0g + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        L8e5HwMUN79g = 1;
        while (L8e5HwMUN79g <= PunvXO) {
            {
                i = 0;
                while (i < PunvXO -L8e5HwMUN79g) {
                    if (num[i][6] < num[i + 1][6]) {
                        t = 0;
                        while (t < 7) {
                            e = num[i + 1][t];
                            num[i + 1][t] = num[i][t];
                            num[i][t] = e;
                            t = t + 1;
                        }
                    }
                    i++;
                }
            }
            L8e5HwMUN79g = L8e5HwMUN79g +1;
        }
    }
    {
        t = 0;
        while (t < PunvXO) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", (num[t][0]), (num[t][1]), (num[t][2]), (num[t][3]), (num[t][4]), (num[t][5]), (num[t][6]));
            t++;
        }
    }
    return 0;
}

