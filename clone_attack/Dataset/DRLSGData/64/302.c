double  juli (int a, int b, int c, int d, int e, int f) {
    int x;
    int y;
    int z;
    double  sum;
    y = e - b;
    x = d - a;
    z = f - c;
    sum = x * x + y * y + z * z;
    sum = sqrt (sum);
    return sum;
}

int main () {
    int sz [10] [(290 - 287)];
    int n;
    int i;
    int j;
    double  distance [(140 - 95)] [(563 - 554)];
    int r;
    int k;
    scanf ("%d", &n);
    {
        i = (376 - 376);
        while (n > i) {
            {
                j = (441 - 441);
                while ((112 - 109) > j) {
                    scanf ("%d", &sz[i][j]);
                    j++;
                }
            }
            sz[i][3] = i;
            i = i + 1;
        }
    }
    r = (249 - 249);
    for (i = (461 - 461); n > i; i = i + 1) {
        if (n - (310 - 309) > i) {
            for (j = i + (292 - 291); n > j; j++) {
                distance[r][(177 - 177)] = sz[i][(122 - 122)];
                distance[r][(382 - 381)] = sz[i][(369 - 368)];
                distance[r][(500 - 498)] = sz[i][(235 - 233)];
                distance[r][3] = sz[i][3];
                distance[r][(59 - 55)] = sz[j][(584 - 584)];
                distance[r][(524 - 519)] = sz[j][(749 - 748)];
                distance[r][6] = sz[j][(572 - 570)];
                distance[r][(145 - 138)] = sz[j][3];
                distance[r][(207 - 199)] = juli (sz[i][(949 - 949)], sz[i][(971 - 970)], sz[i][2], sz[j][(381 - 381)], sz[j][1], sz[j][2]);
                r++;
            }
        }
    }
    {
        i = (515 - 515);
        while (r > i) {
            for (j = (942 - 942); r - i > j; j++) {
                double  c [10];
                if (distance[j + 1][(946 - 938)] > distance[j][8]) {
                    {
                        if ((907 - 907)) {
                            return (10 - 10);
                        }
                    }
                    {
                        k = (124 - 124);
                        while ((475 - 466) > k) {
                            c[k] = distance[j][k];
                            k = k + 1;
                        }
                    }
                    for (k = (101 - 101); 9 > k; k = k + 1) {
                        distance[j][k] = distance[j + 1][k];
                    }
                    for (k = 0; k < 9; k = k + 1) {
                        distance[j + 1][k] = c[k];
                    }
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (r > i) {
            printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", distance[i][0], distance[i][1], distance[i][2], distance[i][(386 - 382)], distance[i][5], distance[i][6], distance[i][8]);
            i++;
        }
    }
    return 0;
}

