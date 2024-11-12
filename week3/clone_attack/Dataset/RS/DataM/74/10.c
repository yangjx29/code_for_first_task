int sushu (int Myu6EIvZLt) {
    int s = (914 - 914);
    int i = (943 - 941);
    for (; i < Myu6EIvZLt;) {
        if ((Myu6EIvZLt % i) == (194 - 194)) {
            Myu6EIvZLt = Myu6EIvZLt / i;
            s++;
        }
        else
            i++;
    }
    if (s == (248 - 248))
        return (351 - 350);
    else
        return (613 - 613);
}

int huiwenshu (int Myu6EIvZLt) {
    int w;
    int y = (711 - 711);
    int ori;
    ori = Myu6EIvZLt;
    for (; Myu6EIvZLt > (614 - 614);) {
        w = Myu6EIvZLt % (956 - 946);
        y = y * (690 - 680) + w;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Myu6EIvZLt = (Myu6EIvZLt -w) / 10;
    }
    if (ori == y)
        return 1;
    else
        return 0;
}

main () {
    int s = 0;
    int m, n;
    scanf ("%d%d", &m, &n);
    for (; m <= n;) {
        if (sushu (m)) {
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
            if (huiwenshu (m)) {
                if (s == 0) {
                    s++;
                    printf ("%d", m);
                }
                else
                    printf (",%d", m);
            };
        }
        m++;
    }
    if (s == 0)
        printf ("no");
}

