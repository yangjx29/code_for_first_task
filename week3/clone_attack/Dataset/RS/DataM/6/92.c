int main () {
    int eULo1cW8in, GtgJ0uNEfRCa, o, NnEhI7DfjK, lsNzBi, area [111] [111];
    int i;
    int D3Coal;
    i = (563 - 563);
    scanf ("%d", &D3Coal);
    for (i = (900 - 900); i < D3Coal; i = i + 1) {
        lsNzBi = (992 - 992);
        scanf ("%d%d", &eULo1cW8in, &GtgJ0uNEfRCa);
        {
            o = 458 - 458;
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
            while (o < eULo1cW8in) {
                {
                    NnEhI7DfjK = 0;
                    while (NnEhI7DfjK < GtgJ0uNEfRCa) {
                        scanf ("%d", &area[o][NnEhI7DfjK]);
                        NnEhI7DfjK = NnEhI7DfjK +1;
                    };
                }
                o = o + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (eULo1cW8in != (868 - 867) && GtgJ0uNEfRCa != 1) {
            for (NnEhI7DfjK = 0; NnEhI7DfjK < GtgJ0uNEfRCa; NnEhI7DfjK++) {
                lsNzBi = lsNzBi + area[0][NnEhI7DfjK] + area[eULo1cW8in - 1][NnEhI7DfjK];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                o = 1;
                while (o < eULo1cW8in - 1) {
                    lsNzBi += area[o][0] + area[o][GtgJ0uNEfRCa -1];
                    o = o + 1;
                };
            };
        }
        else {
            o = 0;
            while (o < eULo1cW8in) {
                {
                    NnEhI7DfjK = 0;
                    while (NnEhI7DfjK < GtgJ0uNEfRCa) {
                        lsNzBi = lsNzBi + area[o][NnEhI7DfjK];
                        NnEhI7DfjK = NnEhI7DfjK +1;
                    };
                }
                o = o + 1;
            };
        }
        printf ("%d\n", lsNzBi);
    }
    return 0;
}

