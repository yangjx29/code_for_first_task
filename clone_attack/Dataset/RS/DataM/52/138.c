void  main () {
    int i, j, Eyi0XH, m, num [100], temp, *zG4KY2yd;
    scanf ("%d %d", &Eyi0XH, &m);
    for (i = 0; Eyi0XH > i; i++)
        scanf ("%d", &j), num[i] = j;
    {
        i = 132 - 131;
        while (Eyi0XH -m - 1 < i) {
            temp = *(num + Eyi0XH -1 - i + Eyi0XH -m);
            {
                j = Eyi0XH -2 - i + Eyi0XH -m;
                while (Eyi0XH -1 - i <= j) {
                    *(num + j + 1) = *(num + j);
                    j--;
                };
            }
            *(num + Eyi0XH -1 - i) = temp;
            i--;
        };
    }
    zG4KY2yd = num;
    for (; zG4KY2yd - num <= Eyi0XH -1; zG4KY2yd++) {
        printf ("%d", *zG4KY2yd);
        if (zG4KY2yd - num == Eyi0XH -1)
            printf ("\n");
        else
            ;
    };
}

