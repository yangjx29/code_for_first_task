main () {
    int i, ZeiqBCS;
    int s;
    int b [300];
    int temp;
    int AK6aJ5CStEW;
    int a [300];
    int tem;
    s = 0;
    scanf ("%d", &AK6aJ5CStEW);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AK6aJ5CStEW > i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    for (i = 0; AK6aJ5CStEW > i; i = i + 1) {
        s = s + a[i];
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (AK6aJ5CStEW > i) {
            b[i] = abs (AK6aJ5CStEW *a[i] - s);
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
            i = i + 1;
        };
    }
    for (i = 0; AK6aJ5CStEW -1 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (ZeiqBCS = i + 1; AK6aJ5CStEW > ZeiqBCS; ZeiqBCS = ZeiqBCS +1) {
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
            if (b[i] < b[ZeiqBCS]) {
                temp = b[ZeiqBCS];
                b[ZeiqBCS] = b[i];
                tem = a[ZeiqBCS];
                b[i] = temp;
                a[ZeiqBCS] = a[i];
                a[i] = tem;
            };
        };
    }
    ZeiqBCS = 1;
    for (i = 1; AK6aJ5CStEW > i; i++) {
        if (b[i] >= b[0])
            ZeiqBCS++;
    }
    {
        i = 0;
        while (i < ZeiqBCS -1) {
            printf ("%d,", a[i]);
            i++;
        };
    }
    printf ("%d", a[ZeiqBCS -1]);
}

