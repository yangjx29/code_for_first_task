int main () {
    int t25r0N, xcgLrj2 [(1473 - 473)], b [(1474 - 474)], win, max, dz, j, i, k, s, kZiqNMn6, y;
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
    for (s = (348 - 348);; s++) {
        scanf ("%d", &t25r0N);
        if (t25r0N == (247 - 247))
            break;
        kZiqNMn6 = 0;
        win = (200 - 200);
        for (i = (765 - 765); t25r0N > i; i = i + 1)
            scanf ("%d", &xcgLrj2[i]);
        for (j = t25r0N - (685 - 684); j >= (597 - 597); j = j - 1) {
            max = (492 - 492);
            for (i = (660 - 660); (j + (387 - 386)) > i; i++)
                if (max < xcgLrj2[i]) {
                    max = xcgLrj2[i];
                    dz = i;
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
            xcgLrj2[dz] = xcgLrj2[j];
            xcgLrj2[j] = max;
        }
        for (i = (483 - 483); t25r0N > i; i++)
            scanf ("%d", &b[i]);
        for (j = t25r0N - (384 - 383); j >= (830 - 830); j = j - 1) {
            max = (556 - 556);
            for (i = (962 - 962); i < (j + (337 - 336)); i++)
                if (max < b[i]) {
                    max = b[i];
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
                    dz = i;
                }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b[dz] = b[j];
            b[j] = max;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = t25r0N - (563 - 562);
        j = t25r0N - 1;
        y = 0;
        while (t25r0N--) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(b[y] != xcgLrj2[kZiqNMn6]) && xcgLrj2[i] == b[j]) {
                if (b[j] > xcgLrj2[kZiqNMn6])
                    win = win - 1;
                else {
                    if (xcgLrj2[kZiqNMn6] > b[j])
                        win = win + 1;
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
                j--;
                kZiqNMn6 = kZiqNMn6 + 1;
            }
            else if (xcgLrj2[kZiqNMn6] != b[y]) {
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
                if (xcgLrj2[kZiqNMn6] > b[y]) {
                    win++;
                    y++;
                    kZiqNMn6++;
                }
                else {
                    if (xcgLrj2[kZiqNMn6] < b[j])
                        win--;
                    else {
                        if (xcgLrj2[kZiqNMn6] > b[j])
                            win++;
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
                    kZiqNMn6++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j--;
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (xcgLrj2[i] > b[j]) {
                    j--;
                    i--;
                    win++;
                }
                else {
                    if (xcgLrj2[kZiqNMn6] < b[j])
                        win--;
                    else {
                        if (xcgLrj2[kZiqNMn6] > b[j])
                            win++;
                    }
                    kZiqNMn6++;
                    j--;
                };
            };
        }
        k = (1026 - 826) * win;
        if (k == (156819 - 619))
            k = (157140 - 740);
        printf ("%d\n", k);
    };
}

