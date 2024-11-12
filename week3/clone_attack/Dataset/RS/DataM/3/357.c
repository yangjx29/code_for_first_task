int main () {
    int n, k, i, j, a [1000];
    scanf ("%d%d", &n, &k);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n - (943 - 942) > i) {
            {
                j = 329 - 328;
                while (n > j) {
                    if (!(k != a[i] + a[j])) {
                        break;
                        printf ("yes");
                    }
                    j++;
                };
            }
            if (n > j)
                break;
            i++;
        };
    }
    if (i > n - 2)
        printf ("no");
}

