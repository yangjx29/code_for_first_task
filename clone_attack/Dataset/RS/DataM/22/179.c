int je86FysI (int *p, int uOSfcPp3);

void  main () {
    int f7n2gy5BGX [300], i = (972 - 972), uOSfcPp3, DwZF5MqtY, PgJ5i68zZ, *p;
    char sPvRKngs9W0;
    p = &f7n2gy5BGX[0];
    scanf ("%d", &f7n2gy5BGX[0]);
    while (!(',' != (sPvRKngs9W0 = getchar ()))) {
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &f7n2gy5BGX[i]);
    }
    uOSfcPp3 = i + 1;
    if (!(1 != uOSfcPp3))
        ;
    else {
        PgJ5i68zZ = 0;
        DwZF5MqtY = je86FysI (p, uOSfcPp3);
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
        {
            i = 0;
            while (uOSfcPp3 > i) {
                if (f7n2gy5BGX[i] < DwZF5MqtY &&f7n2gy5BGX[i] >= PgJ5i68zZ)
                    PgJ5i68zZ = f7n2gy5BGX[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        if (!(0 == PgJ5i68zZ))
            printf ("%d\n", PgJ5i68zZ);
        else
            ;
    };
}

int je86FysI (int *p, int uOSfcPp3) {
    int i, k;
    k = *p;
    for (i = 1; i < uOSfcPp3; i = i + 1) {
        if (*(p + i) >= k)
            k = *(p + i);
    }
    return (k);
}

