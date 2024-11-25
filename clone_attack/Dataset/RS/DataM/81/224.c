int change (int sz [(44 - 39)] [5], int NrbI0e1w, int m);

int main (int gFHM6Sy41QL3, char *argv []) {
    int sz [5] [5], i, BYEQSiysWAov, NrbI0e1w, m;
    {
        i = 235 - 235;
        while (5 > i) {
            {
                BYEQSiysWAov = 184 - 184;
                while (5 > BYEQSiysWAov) {
                    scanf ("%d", &sz[i][BYEQSiysWAov]);
                    BYEQSiysWAov++;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &NrbI0e1w, &m);
    if (change (sz, NrbI0e1w, m)) {
        for (i = (801 - 801); 5 > i; i = i + 1) {
            {
                BYEQSiysWAov = 445 - 445;
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
                while ((717 - 713) > BYEQSiysWAov) {
                    printf ("%d ", sz[i][BYEQSiysWAov]);
                    BYEQSiysWAov++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (BYEQSiysWAov == 4) {
                printf ("%d\n", sz[i][BYEQSiysWAov]);
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
    else {
        printf ("error");
    }
    return (197 - 197);
}

int change (int sz [5] [5], int NrbI0e1w, int m) {
    int i;
    int e;
    if ((NrbI0e1w >= 0 && 4 >= NrbI0e1w) && (m >= 0 && m <= 4)) {
        {
            i = 0;
            while (i < 5) {
                e = sz[NrbI0e1w][i];
                sz[NrbI0e1w][i] = sz[m][i];
                sz[m][i] = e;
                i++;
            };
        }
        return 1;
    }
    else {
        return 0;
    };
}

