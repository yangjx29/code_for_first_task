struct   bac {
    int bR2pYH3CWz;
    int d;
    char a [5];
};
int main () {
    struct   bac abb [260];
    struct   bac temp;
    int i, j, b, fqJGRwkj, len, n;
    char str [500], dd [6] = {(628 - 628)};
    gets (str);
    {
        i = 0;
        while (260 > i) {
            abb[i].d = (64 - 63);
            {
                j = 0;
                while (j < 5) {
                    abb[i].a[j] = '\0';
                    j++;
                };
            }
            i++;
        };
    }
    len = strlen (str);
    getchar ();
    scanf ("%d", &n);
    b = len - n;
    {
        i = 0;
        while (b >= i) {
            fqJGRwkj = i;
            {
                j = 0;
                while (n > j) {
                    abb[i].a[j] = str[fqJGRwkj];
                    j++;
                    fqJGRwkj++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < b) {
            abb[i].d = 0;
            {
                j = i + 1;
                while (j <= b) {
                    if (strcmp (abb[i].a, abb[j].a) == 0) {
                        abb[i].d++;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < b; i++) {
        j = 0;
        while (j < b - 1 - i) {
            if (abb[j].d < abb[j + 1].d) {
                temp = abb[j];
                abb[j] = abb[j + 1];
                abb[j + 1] = temp;
            }
            j++;
        };
    }
    if (abb[0].d > 0) {
        printf ("%d\n", abb[0].d + 1);
        {
            i = 0;
            while (i < b) {
                if (abb[i].d == abb[0].d)
                    printf ("%s\n", abb[i].a);
                i++;
            };
        };
    }
    else
        ;
    return 0;
}

