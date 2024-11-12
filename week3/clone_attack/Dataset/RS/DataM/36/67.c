main () {
    int oblkHq [1000], d [1000], cr [1000] = {(885 - 885)}, dr [1000] = {(422 - 422)};
    char ch;
    int i, j, drB3Lmx, l, ll, w, t;
    char a [(1316 - 316)], b [(1369 - 369)], ar [1000], br [1000];
    drB3Lmx = (714 - 714);
    scanf ("%s", a);
    l = strlen (a);
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
        while (l > i) {
            if (!((283 - 282) != oblkHq[i]))
                continue;
            {
                j = i;
                while (l > j) {
                    if (!((92 - 91) != oblkHq[j]))
                        continue;
                    if (!(a[i] != a[j])) {
                        cr[drB3Lmx]++;
                        ar[drB3Lmx] = a[j];
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
                        drB3Lmx++;
                    }
                    j = j + 1;
                };
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
            i++;
            if (cr[drB3Lmx])
                drB3Lmx++;
        };
    }
    drB3Lmx = 0;
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
    scanf ("%s", b);
    l = strlen (b);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l > i) {
            if (d[i] == 1)
                continue;
            {
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (l > j) {
                    if (!(1 != d[j]))
                        continue;
                    if (!(a[i] != a[j])) {
                        dr[drB3Lmx]++;
                        br[drB3Lmx] = b[j];
                        drB3Lmx++;
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
                    j = j + 1;
                };
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
            i++;
            if (dr[drB3Lmx])
                drB3Lmx++;
        };
    }
    ll = strlen (a);
    {
        j = 0;
        while (l - 1 > j) {
            {
                i = 0;
                while (l - 1 - j > i) {
                    if (ar[i] < ar[i + 1]) {
                        ch = ar[i];
                        ar[i] = ar[i + 1];
                        ar[i + 1] = ch;
                        t = cr[i];
                        cr[i] = cr[i + 1];
                        cr[i + 1] = t;
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
                    i++;
                };
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
            j++;
        };
    }
    {
        j = 0;
        while (ll - 1 > j) {
            {
                i = 0;
                while (i < ll - 1 - j) {
                    if (br[i] < br[i + 1]) {
                        ch = br[i];
                        br[i] = br[i + 1];
                        br[i + 1] = ch;
                        t = dr[i];
                        dr[i] = dr[i + 1];
                        dr[i + 1] = t;
                    }
                    i++;
                };
            }
            j++;
        };
    }
    if (l != ll)
        w = 0;
    else {
        i = 0;
        while (i < l) {
            if (ar[i] == br[i] && cr[i] == dr[i]) {
                w = 1;
            }
            else {
                w = 0;
                break;
            }
            i++;
        };
    }
    if (w)
        ;
    else
        printf ("NO\n");
}

