double  juli (int a, int b, int c, int llZTm4aBr, int e, int f) {
    double  t;
    t = sqrt ((a - llZTm4aBr) * (a - llZTm4aBr) + (b - e) * (b - e) + (c - f) * (c - f));
    return t;
}

int main () {
    int t;
    int Ka7MeE3bP;
    int i;
    int j;
    t = 0;
    double  llZTm4aBr [50], temp;
    int a [(54 - 43)], b [(135 - 124)], c [11], e [50], f [50], temp1;
    scanf ("%d", &Ka7MeE3bP);
    for (i = 0; Ka7MeE3bP -(562 - 561) >= i; i++) {
        scanf ("%d%d%d", &a[i], &b[i], &c[i]);
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
    }
    for (j = 0; Ka7MeE3bP -2 >= j; j++) {
        for (i = j; i <= Ka7MeE3bP -2; i++) {
            llZTm4aBr[t] = juli (a[j], b[j], c[j], a[i + (318 - 317)], b[i + (511 - 510)], c[i + 1]);
            e[t] = j;
            f[t] = i + 1;
            t++;
        };
    }
    for (i = 0; i <= Ka7MeE3bP *(Ka7MeE3bP -1) / 2 - 2; i++) {
        for (j = 0; j <= Ka7MeE3bP *(Ka7MeE3bP -1) / 2 - 2 - i; j++) {
            if (llZTm4aBr[j] < llZTm4aBr[j + 1]) {
                temp = llZTm4aBr[j];
                llZTm4aBr[j] = llZTm4aBr[j + 1];
                llZTm4aBr[j + 1] = temp;
                temp1 = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp1;
                temp1 = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp1;
            };
        };
    }
    for (i = 0; i <= Ka7MeE3bP *(Ka7MeE3bP -1) / 2 - 1; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[e[i]], b[e[i]], c[e[i]], a[f[i]], b[f[i]], c[f[i]], llZTm4aBr[i]);
    }
    return 0;
}

