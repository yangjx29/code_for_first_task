int main () {
    double  jk9yzNJ1xCV;
    int joKyLNcawWlJ, sza [50000], szb [50000], sGzL1OH [50000], szxb [50000], j, Q8z59n, i;
    scanf ("%d\n", &joKyLNcawWlJ);
    for (i = 0; joKyLNcawWlJ > i; i++) {
        scanf ("%d%d", &sza[i], &szb[i]);
        sGzL1OH[i] = sza[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        szxb[i] = szb[i];
    }
    for (i = 0; joKyLNcawWlJ - 1 > i; i++) {
        j = 0;
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
        while (joKyLNcawWlJ - 1 > j) {
            if (sGzL1OH[j] > sGzL1OH[j + 1]) {
                Q8z59n = sGzL1OH[j];
                sGzL1OH[j] = sGzL1OH[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sGzL1OH[j + 1] = Q8z59n;
            }
            j++;
        };
    }
    {
        i = 0;
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
        while (i < joKyLNcawWlJ - 1) {
            i++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = 0; j < joKyLNcawWlJ - 1; j++) {
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
                if (szxb[j + 1] < szxb[j]) {
                    Q8z59n = szxb[j];
                    szxb[j] = szxb[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    szxb[j + 1] = Q8z59n;
                };
            };
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
    if (sGzL1OH[0] > szxb[0]) {
        Q8z59n = sGzL1OH[0];
        sGzL1OH[0] = szxb[0];
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
        szxb[0] = Q8z59n;
    }
    if (szxb[joKyLNcawWlJ - 1] < sGzL1OH[joKyLNcawWlJ - 1]) {
        Q8z59n = sGzL1OH[joKyLNcawWlJ - 1];
        sGzL1OH[joKyLNcawWlJ - 1] = szxb[joKyLNcawWlJ - 1];
        szxb[joKyLNcawWlJ - 1] = Q8z59n;
    }
    for (jk9yzNJ1xCV = sGzL1OH[0]; szxb[joKyLNcawWlJ - 1] >= jk9yzNJ1xCV; jk9yzNJ1xCV = jk9yzNJ1xCV + 0.5) {
        for (j = 0; j < joKyLNcawWlJ; j++) {
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
            if ((jk9yzNJ1xCV >= sza[j]) && (jk9yzNJ1xCV <= szb[j])) {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (j == joKyLNcawWlJ) {
            puts ("no");
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
            break;
        };
    }
    if (jk9yzNJ1xCV == szxb[joKyLNcawWlJ - 1] + 0.5) {
        printf ("%d %d", sGzL1OH[0], szxb[joKyLNcawWlJ - 1]);
    }
    return 0;
}

