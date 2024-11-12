int main () {
    struct   iob8yTHK {
        int a, n4jrsXHy58WK;
    }
    iob8yTHK [50000];
    int n;
    int mxtRKApu;
    int TqJlt81j;
    int yJlT2PQWX8m;
    int s;
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
    scanf ("%d\n", &n);
    for (mxtRKApu = 0; mxtRKApu < n; mxtRKApu++) {
        scanf ("%d %d\n", &(iob8yTHK[mxtRKApu].a), &(iob8yTHK[mxtRKApu].n4jrsXHy58WK));
    }
    for (TqJlt81j = 0; TqJlt81j < n; TqJlt81j = TqJlt81j +1) {
        mxtRKApu = 707 - 706;
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
        while (mxtRKApu > TqJlt81j) {
            if (iob8yTHK[mxtRKApu].a < iob8yTHK[mxtRKApu - 1].a) {
                yJlT2PQWX8m = iob8yTHK[mxtRKApu].a;
                iob8yTHK[mxtRKApu].a = iob8yTHK[mxtRKApu - 1].a;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                iob8yTHK[mxtRKApu - 1].a = yJlT2PQWX8m;
            }
            if (iob8yTHK[mxtRKApu].n4jrsXHy58WK < iob8yTHK[mxtRKApu - 1].n4jrsXHy58WK) {
                yJlT2PQWX8m = iob8yTHK[mxtRKApu].n4jrsXHy58WK;
                iob8yTHK[mxtRKApu].n4jrsXHy58WK = iob8yTHK[mxtRKApu - 1].n4jrsXHy58WK;
                iob8yTHK[mxtRKApu - 1].n4jrsXHy58WK = yJlT2PQWX8m;
            }
            mxtRKApu = mxtRKApu - 1;
        };
    }
    s = 0;
    {
        mxtRKApu = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (mxtRKApu < n) {
            if (iob8yTHK[mxtRKApu].a > iob8yTHK[mxtRKApu - 1].n4jrsXHy58WK) {
                s = 1;
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
            mxtRKApu++;
        };
    }
    if (s == 1) {
        printf ("no");
    }
    else {
        printf ("%d %d", iob8yTHK[0].a, iob8yTHK[n - 1].n4jrsXHy58WK);
    }
    return 0;
}

