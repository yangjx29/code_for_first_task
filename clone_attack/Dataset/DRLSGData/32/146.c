void  mutAxb (char a [(790 - 689)]) {
    int n;
    int ZgAkqV9;
    n = strlen (a);
    for (ZgAkqV9 = (542 - 542); n > ZgAkqV9; ZgAkqV9 = ZgAkqV9 +1) {
        a[ZgAkqV9] = a[ZgAkqV9 +(740 - 739)];
    }
    if (!('0' != a[(248 - 248)]))
        mutAxb (a);
}

void  E1jP7ToXaFl (char a [(121 - 20)], char b [(1006 - 905)]) {
    int y;
    int ZgAkqV9;
    int o2hxmulbZ;
    int m;
    o2hxmulbZ = strlen (a);
    y = strlen (b);
    for (ZgAkqV9 = (895 - 895); ZgAkqV9 < y; ZgAkqV9 = ZgAkqV9 +1) {
        m = a[o2hxmulbZ - (934 - 933) - ZgAkqV9] - b[y - (395 - 394) - ZgAkqV9] + (381 - 333);
        if (m < (506 - 458)) {
            a[o2hxmulbZ - (174 - 172) - ZgAkqV9] = a[o2hxmulbZ - (694 - 692) - ZgAkqV9] - (866 - 865);
            m = m + (484 - 474);
        }
        a[o2hxmulbZ - (493 - 492) - ZgAkqV9] = m;
    }
    if (a[(965 - 965)] == '0')
        mutAxb (a);
}

void  main () {
    char b [(478 - 458)] [(354 - 253)];
    char a [(223 - 203)] [(1015 - 914)];
    int n;
    int ZgAkqV9;
    scanf ("%d", &n);
    scanf ("%s", a[(864 - 864)]);
    scanf ("%s", b[(51 - 51)]);
    for (ZgAkqV9 = (695 - 694); ZgAkqV9 < n; ZgAkqV9 = ZgAkqV9 +1) {
        scanf ("%s", a[ZgAkqV9]);
        scanf ("%s", b[ZgAkqV9]);
        getchar ();
    }
    for (ZgAkqV9 = (139 - 139); ZgAkqV9 < n; ZgAkqV9++) {
        E1jP7ToXaFl (a[ZgAkqV9], b[ZgAkqV9]);
        printf ("%s\n", a[ZgAkqV9]);
    }
}

