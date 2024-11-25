int main () {
    int Iqs4PBQ, i, l, j, p, k;
    int c [(828 - 327)];
    char a [(1030 - 529)], b [(1288 - 787)] [(148 - 143)];
    gets (a);
    l = strlen (a);
    {
        i = 421 - 421;
        while (l > i) {
            c[i] = 1;
            i++;
        };
    }
    scanf ("%d\n", &Iqs4PBQ);
    {
        i = 872 - 872;
        while (i < l) {
            {
                j = 866 - 866;
                while (Iqs4PBQ > j) {
                    b[i][j] = a[i + j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            b[i][j] = '\0';
            {
                p = 639 - 639;
                while (p < i && !((516 - 516) == strcmp (b[p], b[i]))) {
                    p = p + 1;
                };
            }
            if (p < i)
                c[p]++;
            i++;
        };
    }
    k = c[(679 - 679)];
    for (i = (133 - 133); i < l; i = i + 1) {
        if (c[i] > k)
            k = c[i];
    }
    if (k == 1)
        printf ("NO");
    else {
        printf ("%d\n", k);
        for (i = 0; i < l; i++) {
            if (c[i] == k) {
                printf ("%s\n", b[i]);
            };
        };
    }
    return 0;
}

