void  main () {
    int fI8xHrVPue, a [300], Ybt8xqTJ7rL = 0;
    int i, RQhmqarX, k, n3VCd1hl0Z2, x, temp, emo, b [300];
    scanf ("%d", &fI8xHrVPue);
    for (i = 0; i < fI8xHrVPue; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Ybt8xqTJ7rL = Ybt8xqTJ7rL +a[i];
    }
    for (RQhmqarX = 0; RQhmqarX < fI8xHrVPue; RQhmqarX++) {
        b[RQhmqarX] = fI8xHrVPue * a[RQhmqarX] - Ybt8xqTJ7rL;
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
        };
    }
    for (k = 0; fI8xHrVPue > k; k = k + 1)
        for (n3VCd1hl0Z2 = 0; n3VCd1hl0Z2 < fI8xHrVPue - k - 1; n3VCd1hl0Z2++) {
            if (abs (b[n3VCd1hl0Z2]) < abs (b[n3VCd1hl0Z2 + 1])) {
                emo = b[n3VCd1hl0Z2];
                b[n3VCd1hl0Z2] = b[n3VCd1hl0Z2 + 1];
                b[n3VCd1hl0Z2 + 1] = emo;
                temp = a[n3VCd1hl0Z2];
                a[n3VCd1hl0Z2] = a[n3VCd1hl0Z2 + 1];
                a[n3VCd1hl0Z2 + 1] = temp;
            };
        }
    printf ("%d", a[0]);
    {
        x = 1;
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
        while (x < fI8xHrVPue) {
            if (abs (b[x]) == abs (b[0]))
                printf (",%d", a[x]);
            x = x + 1;
        };
    };
}

