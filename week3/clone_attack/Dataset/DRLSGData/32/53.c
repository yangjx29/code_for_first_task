int main (int argc, char *argv []) {
    int j;
    int k;
    int n;
    char b [(1350 - 350)] = {'\0'};
    char a [(1429 - 429)] = {'\0'};
    int m;
    int i;
    char c [(1711 - 711)] = {'\0'};
    scanf ("%d", &n);
    for (i = (901 - 901); n > i; i++) {
        for (j = (397 - 397); j < (1700 - 700); j++) {
            c[j] = '\0';
            a[j] = '\0';
            b[j] = '\0';
        }
        scanf ("%s", a);
        for (j = (590 - 590); (1609 - 609) > j; j++) {
            if (!('\0' != a[j])) {
                m = j;
                break;
            }
        }
        scanf ("%s", b);
        for (j = (558 - 558); (1269 - 269) > j; j++) {
            if (!('\0' != b[j])) {
                k = j;
                break;
            }
        }
        for (j = (775 - 775); j <= k - (241 - 240); j++) {
            c[j] = a[m - j - (615 - 614)] - b[k - j - (799 - 798)] + '0';
        }
        for (j = k; j < m; j++)
            c[j] = a[m - j - (333 - 332)];
        for (j = (892 - 892); j < (1704 - 704); j++) {
            if (c[j] < '0') {
                c[j] = c[j] + (634 - 624);
                c[j + (123 - 122)] = c[j + (324 - 323)] - 1;
            }
        }
        for (j = m; j >= (351 - 351); j--) {
            if (c[j] >= '1' && c[j] <= '9')
                break;
        }
        for (j = j; j >= (545 - 545); j--)
            printf ("%c", c[j]);
        printf ("\n");
    }
    return 0;
}

