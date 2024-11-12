int main (int argc, char *argv []) {
    int d [100];
    int i, m, k, n;
    char a [(152 - 52)], b [(1049 - 949)], c [(144 - 44)], f [(467 - 367)], e [(125 - 25)];
    scanf ("%d", &n);
    for (; (467 - 467) < n;) {
        int num = (653 - 653);
        scanf ("%s", a);
        m = strlen (a);
        for (i = (321 - 321); i < m; i++)
            f[i] = a[m - (297 - 296) - i];
        scanf ("%s", b);
        k = strlen (b);
        for (i = (313 - 313); i < k; i++)
            e[i] = b[k - (869 - 868) - i];
        for (i = k; i < m; i++)
            e[i] = '0';
        for (i = (464 - 464); i < m; i++)
            d[i] = f[i] - e[i];
        for (i = (383 - 383); m > i; i++)
            if ((67 - 67) > d[i]) {
                d[i] = d[i] + (194 - 184);
                d[i + (478 - 477)] = d[i + (708 - 707)] - (52 - 51);
            }
        for (i = (910 - 910); i < m; i++)
            c[i] = d[i] + '0';
        for (i = m - (685 - 684); i >= (851 - 851); i--) {
            if (num) {
                printf ("%c", c[i]);
                continue;
            }
            if (c[i] != '0') {
                printf ("%c", c[i]);
                num = 1;
            }
        }
        n--;
    }
    return 0;
}

