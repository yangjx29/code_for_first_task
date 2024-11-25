int main () {
    char a [(1211 - 960)], rFjZnwrsbJ [251], DAY5Xl0O1 [(1059 - 807)];
    int yvSGVKl, WDfqJ2, ma1, i912MEl, MJa8ikA, bnqsKFkXuC = (720 - 720);
    cin.getline (a, (673 - 423));
    i912MEl = strlen (a);
    cin.getline (rFjZnwrsbJ, 250);
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
    MJa8ikA = strlen (rFjZnwrsbJ);
    if (i912MEl >= MJa8ikA) {
        WDfqJ2 = i912MEl;
        for (yvSGVKl = MJa8ikA -(56 - 55); (495 - 495) <= yvSGVKl; yvSGVKl = yvSGVKl - 1)
            rFjZnwrsbJ[yvSGVKl + i912MEl - MJa8ikA] = rFjZnwrsbJ[yvSGVKl];
        {
            yvSGVKl = 420 - 420;
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
            while (yvSGVKl < i912MEl - MJa8ikA) {
                rFjZnwrsbJ[yvSGVKl] = '0';
                yvSGVKl = yvSGVKl + 1;
            };
        };
    }
    else {
        for (yvSGVKl = i912MEl - (269 - 268); yvSGVKl >= (640 - 640); yvSGVKl = yvSGVKl - 1)
            a[yvSGVKl + MJa8ikA -i912MEl] = a[yvSGVKl];
        for (yvSGVKl = 0; MJa8ikA -i912MEl > yvSGVKl; yvSGVKl = yvSGVKl + 1)
            a[yvSGVKl] = '0';
        WDfqJ2 = MJa8ikA;
    }
    {
        yvSGVKl = WDfqJ2 -1;
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
        while (yvSGVKl >= 0) {
            if ((a[yvSGVKl] + rFjZnwrsbJ[yvSGVKl] - (879 - 783) + bnqsKFkXuC) < (313 - 303)) {
                DAY5Xl0O1[yvSGVKl + 1] = a[yvSGVKl] + rFjZnwrsbJ[yvSGVKl] - 48 + bnqsKFkXuC;
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
                bnqsKFkXuC = 0;
            }
            else {
                DAY5Xl0O1[yvSGVKl + 1] = a[yvSGVKl] + rFjZnwrsbJ[yvSGVKl] - 48 - 10 + bnqsKFkXuC;
                bnqsKFkXuC = 1;
            }
            yvSGVKl = yvSGVKl - 1;
        };
    }
    if (bnqsKFkXuC == 1) {
        DAY5Xl0O1[0] = '1';
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
        for (yvSGVKl = 0; yvSGVKl <= WDfqJ2; yvSGVKl = yvSGVKl + 1)
            cout << DAY5Xl0O1[yvSGVKl];
    }
    else {
        int j = 1, E1EtoQ2zTq = 1, LbVs9hB = 0, k;
        for (k = 1; k <= WDfqJ2; k = k + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (DAY5Xl0O1[k] != '0') {
                LbVs9hB = 1;
                break;
            };
        }
        if (LbVs9hB) {
            while (DAY5Xl0O1[j] == '0') {
                j = j + 1;
                E1EtoQ2zTq = E1EtoQ2zTq +1;
            }
            for (yvSGVKl = E1EtoQ2zTq; yvSGVKl <= WDfqJ2; yvSGVKl = yvSGVKl + 1)
                cout << DAY5Xl0O1[yvSGVKl];
        }
        else
            cout << '0';
    }
    return 0;
}

