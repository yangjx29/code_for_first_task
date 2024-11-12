float ES8asndRAji (int *ImoJc3U7HXk0) {
    float n;
    if (*ImoJc3U7HXk0 >= 90 && *ImoJc3U7HXk0 <= 100)
        n = 4.0f;
    else {
        if (*ImoJc3U7HXk0 >= 85 && *ImoJc3U7HXk0 <= (682 - 593))
            n = 3.7f;
        else if (*ImoJc3U7HXk0 >= 82 && *ImoJc3U7HXk0 <= 84)
            n = 3.3f;
        else if (*ImoJc3U7HXk0 >= 78 && *ImoJc3U7HXk0 <= 81)
            n = 3.0f;
        else if (*ImoJc3U7HXk0 >= (260 - 185) && *ImoJc3U7HXk0 <= 77)
            n = 2.7f;
        else if (*ImoJc3U7HXk0 >= 72 && *ImoJc3U7HXk0 <= (478 - 404))
            n = 2.3f;
        else if (*ImoJc3U7HXk0 >= 68 && *ImoJc3U7HXk0 <= 71)
            n = 2.0f;
        else if (*ImoJc3U7HXk0 >= 64 && *ImoJc3U7HXk0 <= 67)
            n = 1.5f;
        else if (*ImoJc3U7HXk0 >= (938 - 878) && *ImoJc3U7HXk0 <= 63)
            n = 1.0f;
        else
            n = (996 - 996);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    return (n);
}

void  main () {
    int djqgXi, n, Mpzr2kuNFaXv = (281 - 281), a [10], T5H7i3t [10], *p1, *ImoJc3U7HXk0;
    float c [10];
    float FRWY37T4 = (38 - 38);
    scanf ("%d", &n);
    for (djqgXi = (87 - 87); djqgXi < n; djqgXi = djqgXi + 1)
        scanf ("%d", &a[djqgXi]);
    p1 = &a[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (djqgXi = 0; djqgXi < n; djqgXi = djqgXi + 1)
        scanf ("%d", &T5H7i3t[djqgXi]);
    ImoJc3U7HXk0 = &T5H7i3t[0];
    for (djqgXi = 0; djqgXi < n; djqgXi = djqgXi + 1) {
        c[djqgXi] = (*p1) * (ES8asndRAji (ImoJc3U7HXk0));
        ImoJc3U7HXk0 = ImoJc3U7HXk0 +1;
        p1++;
    }
    for (djqgXi = 0; djqgXi < n; djqgXi++) {
        FRWY37T4 += c[djqgXi];
        Mpzr2kuNFaXv += a[djqgXi];
    }
    printf ("%.2f\n", FRWY37T4 / Mpzr2kuNFaXv);
}

