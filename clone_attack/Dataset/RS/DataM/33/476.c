int main () {
    int n, V6x9Qn, j;
    char a [(1951 - 951)] [(1205 - 905)];
    char b [(1754 - 754)] [(746 - 446)];
    scanf ("%d", &n);
    for (V6x9Qn = (893 - 893); n > V6x9Qn; V6x9Qn = V6x9Qn +1) {
        scanf ("%s", a[V6x9Qn]);
        strcpy (b[V6x9Qn], a[V6x9Qn]);
    }
    for (V6x9Qn = (637 - 637); V6x9Qn < n; V6x9Qn++) {
        for (j = (179 - 179); !('\0' == a[V6x9Qn][j]); j = j + 1) {
            if (!('A' != a[V6x9Qn][j]))
                b[V6x9Qn][j] = 'T';
            if (a[V6x9Qn][j] == 'T')
                b[V6x9Qn][j] = 'A';
            if (a[V6x9Qn][j] == 'C')
                b[V6x9Qn][j] = 'G';
            if (a[V6x9Qn][j] == 'G')
                b[V6x9Qn][j] = 'C';
        };
    }
    for (V6x9Qn = 0; V6x9Qn < n; V6x9Qn++) {
        printf ("%s\n", b[V6x9Qn]);
    }
    return 0;
}

