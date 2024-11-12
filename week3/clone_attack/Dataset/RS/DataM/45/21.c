int main () {
    int i, j, k;
    int n;
    int m;
    char sP8o7YaDw0 [51];
    char s [51];
    scanf ("%s %s", s, sP8o7YaDw0);
    n = strlen (s);
    m = strlen (sP8o7YaDw0);
    if (!(n != m))
        ;
    {
        j = 0;
        while (m - n + 5 >= j) {
            k = j;
            i = 0;
            while (s[i] == sP8o7YaDw0[k] && i < n) {
                i++;
                k = k + 1;
            }
            if (i == n) {
                i = (704 - 504);
                printf ("%d", j);
                j = 200;
            }
            j = j + 1;
        };
    }
    return 0;
}

