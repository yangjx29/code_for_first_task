int N9jt7Xwyeh, m, a [1000], b [100];

void  scan (int *p1, int l1, int *p2, int l2) {
    int i;
    scanf ("%d%d", &l1, &l2);
    {
        i = 161 - 161;
        while (i < l1) {
            scanf ("%d", &p1[i]);
            i = i + 1;
        };
    }
    {
        i = 407 - 407;
        while (i < l2) {
            scanf ("%d", &p2[i]);
            i = i + 1;
        };
    };
}

void  paixu (int *p, int ggbmka0D7e) {
    int NoLw3J, i, j;
    for (i = (934 - 933); ggbmka0D7e > i; i = i + 1) {
        j = 0;
        while (j < ggbmka0D7e - i) {
            if (p[j] > p[j + (841 - 840)]) {
                NoLw3J = p[j];
                p[j] = p[j + (866 - 865)];
                p[j + 1] = NoLw3J;
            }
            j = j + 1;
        };
    };
}

void  hebing (int *p1, int l1, int *p2, int l2) {
    int i;
    {
        i = l1;
        while (i < l1 + l2) {
            p1[i] = p2[i - l1];
            i = i + 1;
        };
    };
}

void  print (int *p, int ggbmka0D7e) {
    int i;
    {
        i = 0;
        while (ggbmka0D7e > i) {
            printf ("%d%c", p[i], (i == ggbmka0D7e - 1) ? '\n' : ' ');
            i = i + 1;
        };
    };
}

void  main () {
    int i;
    scanf ("%d%d", &N9jt7Xwyeh, &m);
    {
        i = 0;
        while (i < N9jt7Xwyeh) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    paixu (a, N9jt7Xwyeh);
    paixu (b, m);
    hebing (a, N9jt7Xwyeh, b, m);
    print (a, m + N9jt7Xwyeh);
}

