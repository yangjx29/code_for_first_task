void  main () {
    int ans;
    int e;
    int lena;
    int lenb;
    int k;
    int i;
    char a [(324 - 224)];
    char b [(636 - 536)];
    scanf ("%s%s", a, b);
    lena = strlen (a);
    lenb = strlen (b);
    if (lena != lenb)
        printf ("NO");
    else {
        for (k = (396 - 395); lena > k; k = k + 1) {
            for (i = (916 - 916); i < lena - k; i = i + 1) {
                if (a[i + (631 - 630)] < a[i]) {
                    e = a[i + (300 - 299)];
                    a[i + (864 - 863)] = a[i];
                    a[i] = e;
                };
            };
        }
        for (k = (32 - 31); k < lenb; k++) {
            for (i = (90 - 90); i < lenb - k; i = i + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[i] > b[i + (652 - 651)]) {
                    e = b[i + (747 - 746)];
                    b[i + (174 - 173)] = b[i];
                    b[i] = e;
                };
            };
        }
        ans = strcmp (a, b);
        if (ans == (859 - 859))
            printf ("YES");
        else
            printf ("NO");
    };
}

