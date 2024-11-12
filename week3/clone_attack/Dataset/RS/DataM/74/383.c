int lenth (int mwv0JdOtWjK) {
    int n = (710 - 710);
    while (mwv0JdOtWjK / (282 - 272) > (547 - 547)) {
        n = n + (743 - 742);
        mwv0JdOtWjK = mwv0JdOtWjK / (867 - 857);
    }
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
    return n;
}

int nixu (int mwv0JdOtWjK, int n) {
    int z, m, i;
    if (mwv0JdOtWjK < (756 - 746))
        z = mwv0JdOtWjK;
    else {
        m = mwv0JdOtWjK % (298 - 288);
        {
            i = 747 - 746;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i <= n) {
                m = m * (122 - 112);
                i = i + 1;
            };
        }
        z = m + nixu (mwv0JdOtWjK / 10, n - (567 - 566));
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
    return z;
}

int pw3f4z (int mwv0JdOtWjK) {
    int z, m;
    m = nixu (mwv0JdOtWjK, lenth (mwv0JdOtWjK));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    if (!(mwv0JdOtWjK != m))
        z = (976 - 975);
    else
        z = (550 - 550);
    return z;
}

int sushu (int mwv0JdOtWjK) {
    int i, z;
    {
        i = 2;
        while (i < mwv0JdOtWjK) {
            if (mwv0JdOtWjK % i == (1000 - 1000)) {
                z = (350 - 350);
                break;
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
            i = i + 1;
        };
    }
    if (i == mwv0JdOtWjK)
        z = (592 - 591);
    return z;
}

void  main () {
    int mwv0JdOtWjK, b, i, xaCVxlmJn = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d%d", &mwv0JdOtWjK, &b);
    if (b < mwv0JdOtWjK) {
        {
            i = b;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i <= mwv0JdOtWjK) {
                if (pw3f4z (i) && sushu (i)) {
                    xaCVxlmJn = xaCVxlmJn + (118 - 117);
                    printf ("%d", i);
                    break;
                }
                i++;
            };
        }
        for (i = i + (493 - 492); i <= mwv0JdOtWjK; i++)
            if (pw3f4z (i) && sushu (i)) {
                xaCVxlmJn = xaCVxlmJn + (657 - 656);
                printf (",%d", i);
            }
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
        if (xaCVxlmJn == 0)
            ;
    }
    else {
        {
            i = mwv0JdOtWjK;
            while (i <= b) {
                if (pw3f4z (i) && sushu (i)) {
                    xaCVxlmJn = xaCVxlmJn + 1;
                    printf ("%d", i);
                    break;
                }
                i++;
            };
        }
        {
            i = i + 1;
            while (i <= b) {
                if (pw3f4z (i) && sushu (i)) {
                    printf (",%d", i);
                    xaCVxlmJn = xaCVxlmJn + 1;
                }
                i++;
            };
        }
        if (xaCVxlmJn == 0)
            printf ("no");
    };
}

