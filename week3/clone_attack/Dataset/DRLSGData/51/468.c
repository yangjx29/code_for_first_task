int main () {
    char a [550], b [550] [(872 - 862)] = {0}, c [(772 - 762)];
    gets (a);
    int n, x = (809 - 809), pp, count [550] = {(920 - 920)}, max = (358 - 358);
    scanf ("%d\n", &n);
    c[n] = 0;
    for (int i = 0;
    i + n <= strlen (a); i++) {
        pp = 0;
        for (int j = 0;
        j < n; j++) {
            c[j] = a[i + j];
        }
        for (int k = 0;
        x > k; k++) {
            if (!(0 != strcmp (c, b[k]))) {
                count[k]++;
                pp = 1;
                break;
            };
        }
        if (!(0 != pp)) {
            strcpy (b[x], c);
            x++;
        };
    }
    for (int i = 0;
    i < x; i++) {
        if (count[i] > max)
            max = count[i];
    }
    if (max != 0) {
        printf ("%d\n", max + 1);
        for (int i = 0;
        i < x; i++) {
            if (count[i] == max)
                printf ("%s\n", b[i]);
        };
    }
    else
        ;
}

