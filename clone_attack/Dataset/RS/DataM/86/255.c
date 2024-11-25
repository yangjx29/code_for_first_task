int main () {
    int time [50];
    int rjvSalQB [50] [100];
    int n, i, j;
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
    scanf ("%d", &n);
    {
        i = 559 - 559;
        while (n > i) {
            scanf ("%d", &time[i]);
            {
                j = 460 - 460;
                while (time[i] > j) {
                    scanf ("%d", &rjvSalQB[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        if (time[i] == 0)
            ;
        else {
            if (60 - 3 * time[i] >= rjvSalQB[i][time[i] - 1])
                printf ("%d", 60 - 3 * time[i]);
            else {
                j = 0;
                while (j < time[i]) {
                    if (rjvSalQB[i][j] < 60 - (j + 1) * 3 && rjvSalQB[i][j + 1] > 60 - (j + 2) * 3) {
                        if (60 - (j + 1) * 3 >= rjvSalQB[i][j + 1])
                            printf ("%d", rjvSalQB[i][j + 1]);
                        else
                            printf ("%d", 60 - (j + 1) * 3);
                    }
                    j++;
                };
            };
        };
    }
    return 0;
}

