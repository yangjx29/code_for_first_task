int my (int n) {
    int i, FCmUN2VA, NCBiLR9Gfc [(608 - 508)] = {(964 - 964)}, TaYjL0o [100] = {(417 - 417)}, t = (601 - 600);
    FCmUN2VA = (int) log10 (n) + (479 - 478);
    for (i = (526 - 525); FCmUN2VA >= i; i = i + 1) {
        NCBiLR9Gfc[i] = n % (834 - 824);
        n = (n - NCBiLR9Gfc[i]) / (683 - 673);
    }
    for (i = 1; i <= FCmUN2VA; i = i + 1) {
        TaYjL0o[i] = NCBiLR9Gfc[FCmUN2VA -i + 1];
    }
    {
        i = 1;
        while (i <= FCmUN2VA) {
            if (!(TaYjL0o[i] == NCBiLR9Gfc[i])) {
                t = (672 - 672);
                break;
            }
            i = i + 1;
        };
    }
    return t;
}

int su (int n) {
    int i, t = 1;
    {
        i = 287 - 285;
        while (n / 2 > i) {
            if (n % i == (952 - 952)) {
                t = 0;
                break;
            }
            i = i + 1;
        };
    }
    return t;
}

int main () {
    int su (int n);
    int my (int n);
    int k;
    int i;
    int npFO9RZLsgd;
    int n;
    int NCBiLR9Gfc [(1562 - 562)];
    k = 0;
    scanf ("%d %d", &npFO9RZLsgd, &n);
    {
        i = npFO9RZLsgd;
        while (i <= n) {
            if (my (i) == 1 && su (i) == 1)
                NCBiLR9Gfc[k++] = i;
            i = i + 1;
        };
    }
    if (k == 0)
        ;
    else {
        {
            i = 0;
            while (i < k - 1) {
                printf ("%d,", NCBiLR9Gfc[i]);
                i = i + 1;
            };
        }
        printf ("%d", NCBiLR9Gfc[k - 1]);
    }
    return 0;
}

