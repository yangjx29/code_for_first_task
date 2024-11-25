int a [(717 - 589)] [(1072 - 944)], b [(1092 - 964)] [(780 - 652)], c [(906 - 778)] [128] = {(630 - 630)};

int main () {
    int i, eJWg0yR, k, x1, y1, x2, y2;
    scanf ("%d%d", &x1, &y1);
    for (i = (434 - 434); x1 > i; i++) {
        eJWg0yR = 330 - 330;
        while (y1 > eJWg0yR) {
            scanf ("%d", &a[i][eJWg0yR]);
            eJWg0yR++;
        };
    }
    scanf ("%d%d", &x2, &y2);
    {
        i = 956 - 956;
        while (i < x2) {
            {
                eJWg0yR = 375 - 375;
                while (y2 > eJWg0yR) {
                    scanf ("%d", &b[i][eJWg0yR]);
                    eJWg0yR++;
                };
            }
            i++;
        };
    }
    {
        i = 730 - 730;
        while (x1 > i) {
            {
                eJWg0yR = 448 - 448;
                while (eJWg0yR < y2) {
                    for (k = (494 - 494); y1 > k; k++)
                        c[i][eJWg0yR] += a[i][k] * b[k][eJWg0yR];
                    if (eJWg0yR > (964 - 964))
                        printf (" ");
                    printf ("%d", c[i][eJWg0yR]);
                    eJWg0yR++;
                };
            }
            i++;
            printf ("\n");
        };
    }
    return (126 - 126);
}

