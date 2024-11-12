int main () {
    char dAgYwvaq [1000] [4], HXS834ki6ax1 [1000] [4];
    int GEudLI;
    int len2;
    char LrhD7vZGESi [(4756 - 756)];
    char b [4000];
    int ren [1000];
    int AX7yFfm3N [1000];
    int k;
    int j;
    k = (979 - 979);
    j = (264 - 264);
    int CaVxn5pUBy [2000];
    int max;
    max = 0;
    cin >> LrhD7vZGESi >> b;
    GEudLI = strlen (LrhD7vZGESi);
    len2 = strlen (b);
    {
        int YE6IfOWQH17b = (567 - 567);
        while (GEudLI > YE6IfOWQH17b) {
            if (!(',' != LrhD7vZGESi[YE6IfOWQH17b])) {
                k = (349 - 349);
                j = j + 1;
            }
            else {
                dAgYwvaq[j][k] = LrhD7vZGESi[YE6IfOWQH17b];
                k = k + 1;
            }
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
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    cout << j + 1 << " ";
    j = 0, k = 0;
    {
        int YE6IfOWQH17b = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (YE6IfOWQH17b < len2) {
            if (b[YE6IfOWQH17b] == ',') {
                j = j + 1;
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
                k = 0;
            }
            else {
                HXS834ki6ax1[j][k] = b[YE6IfOWQH17b];
                k = k + 1;
            }
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    for (int YE6IfOWQH17b = 0;
    j >= YE6IfOWQH17b; YE6IfOWQH17b = YE6IfOWQH17b +1)
        ren[YE6IfOWQH17b] = (int) atof (dAgYwvaq[YE6IfOWQH17b]);
    {
        int YE6IfOWQH17b = 0;
        while (YE6IfOWQH17b <= j) {
            AX7yFfm3N[YE6IfOWQH17b] = (int) atof (HXS834ki6ax1[YE6IfOWQH17b]);
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    {
        int YE6IfOWQH17b = 0;
        while (YE6IfOWQH17b < 2000) {
            CaVxn5pUBy[YE6IfOWQH17b] = 0;
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    {
        int YE6IfOWQH17b = 0;
        while (YE6IfOWQH17b < 2000) {
            {
                int k = 0;
                while (k <= j) {
                    if (ren[k] <= YE6IfOWQH17b &&AX7yFfm3N[k] > YE6IfOWQH17b)
                        CaVxn5pUBy[YE6IfOWQH17b]++;
                    k = k + 1;
                };
            }
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    {
        int YE6IfOWQH17b = 0;
        while (YE6IfOWQH17b < 2000) {
            if (CaVxn5pUBy[YE6IfOWQH17b] > max)
                max = CaVxn5pUBy[YE6IfOWQH17b];
            YE6IfOWQH17b = YE6IfOWQH17b +1;
        };
    }
    cout << max << endl;
    return 0;
}

