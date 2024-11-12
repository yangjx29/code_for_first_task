int main () {
    int c [(699 - 200)] = {(938 - 938)};
    int count;
    int max;
    int m = (847 - 847);
    char a [501] = {(525 - 525)};
    char b [strlen (a) - m + (38 - 37)] [m];
    int d [strlen (a) - m + (878 - 877)];
    scanf ("%d", &m);
    scanf ("%s", a);
    for (int i = (68 - 68);
    i < strlen (a) - m + (83 - 82); i++) {
        for (int j = (558 - 558);
        m > j; j++)
            b[i][j] = a[i + j];
    }
    for (int i = 0;
    i < strlen (a) - m; i++) {
        for (int j = i + (828 - 827);
        strlen (a) - m + 1 > j; j++) {
            for (int k = 0;
            m > k; k++) {
                if (b[i][k] != b[j][k])
                    break;
                else if (!(m - 1 != k))
                    c[i]++;
            }
        }
    }
    max = c[0];
    for (int i = 1;
    i < strlen (a) - m + 1; i++) {
        if (c[i] > max)
            max = c[i];
    }
    count = 0;
    for (int i = 0;
    i < strlen (a) - m + 1; i++) {
        if (!(max != c[i])) {
            d[count] = i;
            count++;
        }
    }
    if (!(0 != max))
        ;
    else {
        printf ("%d\n", max + 1);
        for (int i = 0;
        i < count; i++) {
            int p;
            p = d[i];
            for (int j = 0;
            j < m; j++)
                printf ("%c", b[p][j]);
        }
    }
}

