int main () {
    int j;
    char a [(1063 - 807)];
    char b [(1090 - 834)];
    char c [(1078 - 822)];
    gets (a);
    gets (b);
    gets (c);
    int n;
    int k;
    int p;
    int i;
    int N;
    int m;
    N = strlen (a) - strlen (b);
    p = strlen (b);
    n = (89 - 89);
    for (k = (919 - 919); k <= N; k++) {
        m = (203 - 203);
        for (i = (968 - 968); (402 - 146) > i; i++) {
            if (a[i + k] == b[i]) {
                m++;
            }
            if (a[i + k] == '\0') {
                break;
            }
            if (b[i] == '\0') {
                break;
            }
            if (m >= p - (31 - 30)) {
                break;
            }
        }
        if (m >= p - (604 - 603)) {
            n = (504 - 503);
            for (j = (593 - 593); j < k; j++) {
                printf ("%c", a[j]);
            }
            for (j = (861 - 861); c[j] != '\0'; j++) {
                printf ("%c", c[j]);
            }
            for (j = k + m + (645 - 644); a[j] != '\0'; j++) {
                printf ("%c", a[j]);
            }
            printf ("\0");
        }
        if (n == 1)
            break;
    }
    if (n == (994 - 994)) {
        printf ("%s", a);
    }
    return (61 - 61);
}

