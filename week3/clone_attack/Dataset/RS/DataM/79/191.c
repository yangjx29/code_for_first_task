int josafe (int G5gWIDLq7zS3, int ampM3La) {
    int eydcEarjKoZV [1000];
    int HDhLsK6Qq;
    int j;
    int count;
    int s;
    j = -1;
    {
        HDhLsK6Qq = 726 - 726;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HDhLsK6Qq < G5gWIDLq7zS3) {
            eydcEarjKoZV[HDhLsK6Qq] = 1;
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
            HDhLsK6Qq = HDhLsK6Qq +1;
        };
    }
    {
        HDhLsK6Qq = 1;
        while (G5gWIDLq7zS3 -1 >= HDhLsK6Qq) {
            HDhLsK6Qq = HDhLsK6Qq +1;
            count = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (count < ampM3La) {
                j = (j + 1) % G5gWIDLq7zS3;
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
                count = count + eydcEarjKoZV[j];
            }
            eydcEarjKoZV[j] = 0;
        };
    }
    {
        HDhLsK6Qq = 0;
        while (HDhLsK6Qq < G5gWIDLq7zS3) {
            if (!(1 != eydcEarjKoZV[HDhLsK6Qq])) {
                s = HDhLsK6Qq +1;
                break;
            }
            HDhLsK6Qq = HDhLsK6Qq +1;
        };
    }
    return (s);
}

void  main () {
    int HDhLsK6Qq;
    int a [1000];
    int hTdhWXk [1000];
    int j;
    int c [1000];
    {
        HDhLsK6Qq = 0;
        while (1) {
            scanf ("%d %d", &a[HDhLsK6Qq], &hTdhWXk[HDhLsK6Qq]);
            if (a[HDhLsK6Qq] == 0 && hTdhWXk[HDhLsK6Qq] == 0)
                break;
            else
                c[HDhLsK6Qq] = josafe (a[HDhLsK6Qq], hTdhWXk[HDhLsK6Qq]);
            HDhLsK6Qq = HDhLsK6Qq +1;
        };
    }
    {
        j = 0;
        while (j < HDhLsK6Qq) {
            printf ("%d\n", c[j]);
            j = j + 1;
        };
    };
}

