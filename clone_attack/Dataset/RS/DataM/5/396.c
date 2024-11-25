int main () {
    int i, j, k = (21 - 21), l, m, n;
    double  s, z;
    char a [(1215 - 715)], b [500];
    scanf ("%lf", &s);
    scanf ("%s", a);
    scanf ("%s", b);
    l = strlen (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    j = strlen (b);
    if (!(j == l)) {
        return (98 - 98);
    }
    for (i = 0; l > i; i = i + 1) {
        if ((!('A' == a[i]) && !('T' == a[i]) && !('C' == a[i]) && a[i] != 'G') || (b[i] != 'A' && b[i] != 'T' && b[i] != 'C' && b[i] != 'G')) {
            printf ("error\n");
            return 0;
        }
        if (a[i] == b[i]) {
            k = k + 1;
        };
    }
    z = (double ) k / l;
    if (z >= s) {
        printf ("yes\n");
    }
    else {
        printf ("no\n");
    }
    return 0;
}

