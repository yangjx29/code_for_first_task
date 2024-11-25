int main () {
    int n;
    int k;
    int sz1 [100000];
    int sz2 [100000];
    int i;
    int j;
    int x;
    scanf ("%d", &n);
    for (i = (392 - 392); n > i; i = i + 1) {
        scanf ("%d", &sz1[i]);
    }
    scanf ("%d", &k);
    x = (73 - 73);
    {
        i = 0;
        while (i < n) {
            if (sz1[i] == k)
                x++;
            if (!(k == sz1[i])) {
                j = i - x;
                sz2[j] = sz1[i];
            }
            i++;
        };
    }
    {
        j = 0;
        while (j < n - x - (178 - 177)) {
            printf ("%d ", sz2[j]);
            j++;
        };
    }
    if (j == (n - x - 1))
        printf ("%d\n", sz2[j]);
    return 0;
}

