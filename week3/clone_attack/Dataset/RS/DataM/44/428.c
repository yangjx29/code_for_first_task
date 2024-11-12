void  main () {
    int reverse (int RJnoQl416);
    int i;
    int tPyfH3glr [(569 - 563)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (i = (501 - 501); i < 6; i++)
        scanf ("%d", &tPyfH3glr[i]);
    {
        i = 956 - 956;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 6) {
            printf ("%d\n", reverse (tPyfH3glr[i]));
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
    };
}

int reverse (int RJnoQl416) {
    int j2jK1Z;
    int xpoSiqsk;
    int k;
    int i;
    int bAt0x2aWs;
    int lSxepu1ogI [8] = {0};
    j2jK1Z = 1;
    xpoSiqsk = 0;
    if (RJnoQl416 < 0) {
        RJnoQl416 = -RJnoQl416;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        xpoSiqsk = 1;
    }
    k = RJnoQl416;
    lSxepu1ogI[0] = RJnoQl416;
    {
        i = 0;
        while (1) {
            k = k / 10;
            lSxepu1ogI[i + 1] = k;
            if (k == 0)
                break;
            i = i + 1;
        };
    }
    for (bAt0x2aWs = 0; bAt0x2aWs <= i; bAt0x2aWs = bAt0x2aWs + 1)
        lSxepu1ogI[bAt0x2aWs] = lSxepu1ogI[bAt0x2aWs] % 10;
    for (bAt0x2aWs = i; bAt0x2aWs >= 0; bAt0x2aWs = bAt0x2aWs - 1)
        if (lSxepu1ogI[bAt0x2aWs] != 0)
            break;
    k = 0;
    k = lSxepu1ogI[bAt0x2aWs];
    {
        i = 1;
        while (i <= bAt0x2aWs) {
            j2jK1Z = j2jK1Z * 10;
            k = k + lSxepu1ogI[bAt0x2aWs - i] * j2jK1Z;
            i = i + 1;
        };
    }
    if (xpoSiqsk == 1)
        k = -k;
    return (k);
}

