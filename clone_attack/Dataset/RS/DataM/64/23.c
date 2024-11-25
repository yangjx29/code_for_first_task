int CNRPHipS [(2360 - 360)];

double  id (int a, int b, int B9VHgmrMRqd) {
    return sqrt (a * a + b * b + B9VHgmrMRqd *B9VHgmrMRqd);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    double  d [200];
    int njmXOx;
    int i;
    int j;
    int n;
    int c6owtW4;
    int x [(881 - 861)];
    int SGJUoRVh1qS [(564 - 544)];
    int mvtGCjBl [20];
    int Qgbp52z [(1110 - 910)];
    int w [200];
    njmXOx = (475 - 475);
    scanf ("%d", &c6owtW4);
    {
        i = 425 - 425;
        while (c6owtW4 > i) {
            scanf ("%d%d%d", &x[i], &SGJUoRVh1qS[i], &mvtGCjBl[i]);
            i = i + 1;
        };
    }
    n = c6owtW4 * (c6owtW4 - (863 - 862)) / (480 - 478);
    {
        i = 579 - 579;
        while (c6owtW4 - (196 - 195) > i) {
            {
                j = 375 - 374;
                while (j < c6owtW4) {
                    d[njmXOx] = id (x[i] - x[j], SGJUoRVh1qS[i] - SGJUoRVh1qS[j], mvtGCjBl[i] - mvtGCjBl[j]);
                    Qgbp52z[njmXOx] = i;
                    w[njmXOx] = j;
                    j++;
                    njmXOx++;
                };
            }
            i++;
        };
    }
    {
        i = 927 - 926;
        while (n >= i) {
            {
                j = 0;
                while (j < n - i) {
                    if (d[j] < d[j + 1]) {
                        swap (Qgbp52z[j], Qgbp52z[j + 1]);
                        swap (w[j], w[j + 1]);
                        swap (d[j], d[j + 1]);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (j = 0; j < n; j++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[Qgbp52z[j]], SGJUoRVh1qS[Qgbp52z[j]], mvtGCjBl[Qgbp52z[j]], x[w[j]], SGJUoRVh1qS[w[j]], mvtGCjBl[w[j]], d[j]);
    return 0;
}

