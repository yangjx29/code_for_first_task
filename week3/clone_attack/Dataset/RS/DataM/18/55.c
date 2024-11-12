void  diminish (int a [(188 - 83)] [105], int nhN6YgdTJ) {
    int Kt0iLkqDdO7g;
    int j;
    int min [105];
    for (Kt0iLkqDdO7g = (403 - 402); Kt0iLkqDdO7g <= nhN6YgdTJ; Kt0iLkqDdO7g = Kt0iLkqDdO7g +1) {
        min[Kt0iLkqDdO7g] = a[Kt0iLkqDdO7g][1];
        {
            j = 1;
            while (nhN6YgdTJ >= j) {
                if (min[Kt0iLkqDdO7g] > a[Kt0iLkqDdO7g][j]) {
                    min[Kt0iLkqDdO7g] = a[Kt0iLkqDdO7g][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                j = j + 1;
            };
        }
        for (j = 1; nhN6YgdTJ >= j; j = j + 1) {
            a[Kt0iLkqDdO7g][j] -= min[Kt0iLkqDdO7g];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (Kt0iLkqDdO7g = 1; Kt0iLkqDdO7g <= nhN6YgdTJ; Kt0iLkqDdO7g = Kt0iLkqDdO7g +1) {
        min[Kt0iLkqDdO7g] = a[1][Kt0iLkqDdO7g];
        for (j = 1; j <= nhN6YgdTJ; j = j + 1) {
            if (a[j][Kt0iLkqDdO7g] < min[Kt0iLkqDdO7g]) {
                min[Kt0iLkqDdO7g] = a[j][Kt0iLkqDdO7g];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        for (j = 1; j <= nhN6YgdTJ; j = j + 1) {
            a[j][Kt0iLkqDdO7g] -= min[Kt0iLkqDdO7g];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    };
}

void  TDkVaOt3Gb1 (int a [105] [105], int nhN6YgdTJ) {
    int Kt0iLkqDdO7g;
    int j;
    for (Kt0iLkqDdO7g = (472 - 470); nhN6YgdTJ - 1 >= Kt0iLkqDdO7g; Kt0iLkqDdO7g = Kt0iLkqDdO7g +1) {
        j = 1;
        while (j <= nhN6YgdTJ) {
            a[Kt0iLkqDdO7g][j] = a[Kt0iLkqDdO7g +1][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            j = j + 1;
        };
    }
    for (Kt0iLkqDdO7g = 2; Kt0iLkqDdO7g <= nhN6YgdTJ - 1; Kt0iLkqDdO7g = Kt0iLkqDdO7g +1) {
        j = 1;
        while (j <= nhN6YgdTJ) {
            a[j][Kt0iLkqDdO7g] = a[j][Kt0iLkqDdO7g +1];
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
            j = j + 1;
        };
    };
}

int BsvQ76oHcGn (int a [105] [105], int nhN6YgdTJ) {
    int result;
    result = (161 - 161);
    while (nhN6YgdTJ >= 2) {
        diminish (a, nhN6YgdTJ);
        result += a[2][2];
        TDkVaOt3Gb1 (a, nhN6YgdTJ);
        nhN6YgdTJ = nhN6YgdTJ - 1;
    }
    return result;
}

void  main () {
    int Yf9wWC2I6;
    int Kt0iLkqDdO7g;
    int j;
    int k;
    int nhN6YgdTJ;
    int sum;
    int a [105] [105];
    scanf ("%d", &Yf9wWC2I6);
    {
        Kt0iLkqDdO7g = 1;
        while (Kt0iLkqDdO7g <= Yf9wWC2I6) {
            Kt0iLkqDdO7g = Kt0iLkqDdO7g +1;
            nhN6YgdTJ = Yf9wWC2I6;
            for (j = 1; j <= Yf9wWC2I6; j = j + 1) {
                for (k = 1; k <= Yf9wWC2I6; k++) {
                    scanf ("%d", &a[j][k]);
                };
            }
            sum = BsvQ76oHcGn (a, nhN6YgdTJ);
            printf ("%d\n", sum);
        };
    };
}

