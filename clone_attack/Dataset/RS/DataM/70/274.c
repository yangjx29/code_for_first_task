int main () {
    int n, i, j, cnt = (613 - 613);
    double  t;
    double  a [(700 - 600)] [(383 - 381)];
    double  dd [100];
    scanf ("%d", &n);
    for (i = (597 - 597); n > i; i++)
        scanf ("%lf %lf", &a[i][(405 - 405)], &a[i][(989 - 988)]);
    for (i = (418 - 418); i < n; i++) {
        j = 379 - 379;
        while (j < n) {
            if (j > i)
                cnt = cnt + 1;
            dd[cnt] = pow (a[i][(740 - 740)] - a[j][(629 - 629)], (189 - 187)) + pow (a[i][(881 - 880)] - a[j][(854 - 853)], (592 - 590));
            j++;
        };
    }
    for (i = (961 - 961); i < cnt - (251 - 250); i++)
        for (j = (355 - 355); j < cnt - 1 - i; j = j + 1)
            if (dd[j + 1] > dd[j]) {
                t = dd[j];
                dd[j] = dd[j + 1];
                dd[j + 1] = t;
            }
    printf ("%.4lf", sqrt (dd[(695 - 695)]));
    return (836 - 836);
}

