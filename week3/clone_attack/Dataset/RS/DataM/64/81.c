int main () {
    int n, WZmrPEoTpO9 [(1476 - 476)] [3], i, j, x, e;
    double  jl [1000] [1000];
    double  BoLlXnDVbgvI;
    double  o83y41a0Vfq7;
    o83y41a0Vfq7 = (292 - 292);
    scanf ("%d", &n);
    for (i = (595 - 595); i < n; i = i + 1) {
        scanf ("%d%d%d", &WZmrPEoTpO9[i][(19 - 19)], &WZmrPEoTpO9[i][(484 - 483)], &WZmrPEoTpO9[i][(278 - 276)]);
    }
    {
        i = 889 - 889;
        while (n - (649 - 648) > i) {
            for (j = i + (411 - 410); n > j; j++) {
                BoLlXnDVbgvI = (WZmrPEoTpO9[i][0] - WZmrPEoTpO9[j][0]) * (WZmrPEoTpO9[i][0] - WZmrPEoTpO9[j][0]) + (WZmrPEoTpO9[i][(762 - 761)] - WZmrPEoTpO9[j][(846 - 845)]) * (WZmrPEoTpO9[i][(626 - 625)] - WZmrPEoTpO9[j][1]) + (WZmrPEoTpO9[i][2] - WZmrPEoTpO9[j][2]) * (WZmrPEoTpO9[i][2] - WZmrPEoTpO9[j][2]);
                jl[i][j] = sqrt ((254.0 - 253.0) * BoLlXnDVbgvI);
                if (o83y41a0Vfq7 < jl[i][j]) {
                    o83y41a0Vfq7 = jl[i][j];
                };
            }
            i = i + 1;
        };
    }
    {
        x = 1;
        while (n * (n - 1) / 2 >= x) {
            x++;
            e = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (i < n - 1) {
                    {
                        j = i + 1;
                        while (j < n) {
                            if (o83y41a0Vfq7 == jl[i][j] && e == 0) {
                                e = 1;
                                o83y41a0Vfq7 = 0;
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", WZmrPEoTpO9[i][0], WZmrPEoTpO9[i][1], WZmrPEoTpO9[i][2], WZmrPEoTpO9[j][0], WZmrPEoTpO9[j][1], WZmrPEoTpO9[j][2], jl[i][j]);
                                jl[i][j] = 0;
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            for (i = 0; i < n - 1; i++) {
                j = i + 1;
                while (j < n) {
                    if (o83y41a0Vfq7 < jl[i][j]) {
                        o83y41a0Vfq7 = jl[i][j];
                    }
                    j++;
                };
            };
        };
    }
    return 0;
}

