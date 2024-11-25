void  main () {
    int a [(881 - 855)], i, x, y, b [(155 - 129)];
    char moto [(1084 - 84)], genzai [1000];
    for (i = (793 - 793); i < (913 - 887); i = i + 1) {
        a[i] = (417 - 417);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[i] = (711 - 711);
    }
    scanf ("%s", moto);
    scanf ("%s", genzai);
    x = strlen (moto);
    y = strlen (genzai);
    if (x != y)
        printf ("NO\n");
    else {
        {
            i = 0;
            while (x > i) {
                a[moto[i] - 'a']++;
                b[genzai[i] - 'a']++;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 25) {
                if (a[i] != b[i])
                    break;
                i = i + 1;
            };
        }
        if (i == 25)
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}

