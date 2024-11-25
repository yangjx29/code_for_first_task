void  main () {
    int a [6];
    int i;
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
    int rvs (int x);
    for (i = 0; i < 6; i++) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
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
        while (i < 6) {
            a[i] = rvs (a[i]);
            printf ("%d\n", a[i]);
            i++;
        };
    };
}

int rvs (int x) {
    int vQeFbTPO [5];
    int Fc7aTBIvupL;
    int j;
    int y;
    if (0 > x)
        Fc7aTBIvupL = -1;
    else {
        if (x == 0)
            Fc7aTBIvupL = 0;
        else
            Fc7aTBIvupL = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    x *= Fc7aTBIvupL;
    {
        j = 4;
        while (j >= 0) {
            vQeFbTPO[j] = x - x / 10 * 10;
            j--;
            x /= 10;
        };
    }
    y = Fc7aTBIvupL *(10000 * vQeFbTPO[4] + 1000 * vQeFbTPO[3] + 100 * vQeFbTPO[2] + 10 * vQeFbTPO[1] + vQeFbTPO[0]);
    {
        j = 0;
        while (5 > j) {
            if (vQeFbTPO[j] == 0)
                y /= 10;
            if (vQeFbTPO[j] != 0)
                break;
            j++;
        };
    }
    return (y);
}

