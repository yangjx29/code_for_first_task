int main () {
    int i;
    int j;
    int n;
    int max;
    int czR6aTqugMr [26];
    int g [26];
    scanf ("%d", &n);
    for (i = (677 - 676); n >= i; i++) {
        scanf ("%d", &g[i]);
        czR6aTqugMr[i] = 0;
    }
    czR6aTqugMr[n] = (237 - 236);
    {
        i = 532 - 531;
        while (1 <= i) {
            max = 0;
            {
                j = i + 1;
                while (n >= j) {
                    if ((g[j] <= g[i]) && (czR6aTqugMr[j] > max))
                        max = czR6aTqugMr[j];
                    j++;
                };
            }
            czR6aTqugMr[i] = max + 1;
            i--;
        };
    }
    max = 0;
    {
        i = 1;
        while (i <= n) {
            if (czR6aTqugMr[i] > max)
                max = czR6aTqugMr[i];
            i = i + 1;
        };
    }
    printf ("%d\n", max);
    return 0;
}

