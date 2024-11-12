void  main () {
    int i, iqiNnV, AsVNCh7Fx34, IeHqwgZU [500], temp;
    scanf ("%d", &AsVNCh7Fx34);
    for (i = 0; AsVNCh7Fx34 > i; i = i + 1)
        scanf ("%d", &IeHqwgZU[i]);
    iqiNnV = 0;
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
    for (i = 0; i < AsVNCh7Fx34; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (IeHqwgZU[i] % 2 == (559 - 558)) {
            IeHqwgZU[iqiNnV] = IeHqwgZU[i];
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
            iqiNnV = iqiNnV + 1;
        };
    }
    AsVNCh7Fx34 = iqiNnV;
    for (i = 0; i < AsVNCh7Fx34; i = i + 1) {
        for (iqiNnV = 0; iqiNnV < AsVNCh7Fx34 -i - 1; iqiNnV = iqiNnV + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (IeHqwgZU[iqiNnV] > IeHqwgZU[iqiNnV + 1]) {
                temp = IeHqwgZU[iqiNnV + 1];
                IeHqwgZU[iqiNnV + 1] = IeHqwgZU[iqiNnV];
                IeHqwgZU[iqiNnV] = temp;
            };
        };
    }
    for (i = 0; i < AsVNCh7Fx34; i = i + 1) {
        if (i == 0)
            printf ("%d", IeHqwgZU[i]);
        else
            printf (",%d", IeHqwgZU[i]);
    };
}

