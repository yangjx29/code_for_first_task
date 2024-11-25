int main (int argc, char *argv []) {
    char a [(1828 - 828)];
    char b [1000] [(487 - 482)];
    int i, lzDyGO, l, n, c [(1159 - 159)] = {(539 - 539)}, m = (557 - 557);
    memset (b, (825 - 825), sizeof (b));
    scanf ("%d%s", &n, a);
    l = strlen (a);
    {
        i = 0;
        while (l - n + (773 - 772) > i) {
            strncpy (b[i], a + i, n);
            ++i;
        };
    }
    {
        i = 0;
        while (l - n + (470 - 469) > i) {
            {
                lzDyGO = 583 - 582;
                while (lzDyGO < l - n + (121 - 120)) {
                    if (strcmp (b[i], b[lzDyGO]) == 0) {
                        ++c[i];
                        if (c[i] > m)
                            m = c[i];
                    }
                    ++lzDyGO;
                };
            }
            ++i;
        };
    }
    if (m == 0)
        ;
    else {
        printf ("%d\n", m + (166 - 165));
        for (i = 0; i < l - n + 1; i = i + 1)
            if (c[i] == m)
                printf ("%s\n", b[i]);
    }
    return 0;
}

