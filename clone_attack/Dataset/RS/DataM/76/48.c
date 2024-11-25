int main () {
    int nZb6g0KT, a, b, pau1, pau2;
    struct   haha {
        int begin;
        int end;
    }
    qj [50000];
    struct   haha pau;
    scanf ("%d", &nZb6g0KT);
    {
        int i1 = (451 - 451);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i1 < nZb6g0KT) {
            scanf ("%d%d", &qj[i1].begin, &qj[i1].end);
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
            i1 = i1 + 1;
        };
    }
    {
        int i3 = (803 - 803);
        while (nZb6g0KT > i3) {
            {
                int i4 = nZb6g0KT - (132 - 131);
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
                while (0 < i4) {
                    if (qj[i4 - (614 - 613)].begin > qj[i4].begin) {
                        pau1 = qj[i4].begin;
                        qj[i4].begin = qj[i4 - 1].begin;
                        qj[i4 - 1].begin = pau1;
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
                        pau2 = qj[i4].end;
                        qj[i4].end = qj[i4 - 1].end;
                        qj[i4 - 1].end = pau2;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i4 = i4 - 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i3 = i3 + 1;
        };
    }
    for (int i2 = 0;
    nZb6g0KT > i2; i2 = i2 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i5 = i2 + 1;
        nZb6g0KT > i5; i5 = i5 + 1) {
            if (!(qj[i5].begin != qj[i2].begin) && !(qj[i5].end != qj[i2].end)) {
                {
                    int jj = i5;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (jj < nZb6g0KT) {
                        qj[jj] = qj[jj + 1];
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
                        jj = jj + 1;
                    };
                }
                nZb6g0KT = nZb6g0KT - 1;
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
            if (qj[i2].end >= qj[i5].begin) {
                if (qj[i5].end > qj[i2].end) {
                    qj[i2].end = qj[i5].end;
                }
                for (int jj = i5;
                jj < nZb6g0KT; jj = jj + 1) {
                    qj[jj] = qj[jj + 1];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                nZb6g0KT = nZb6g0KT - 1;
                i5 = i2;
            };
        };
    }
    if (nZb6g0KT == 1) {
        printf ("%d %d", qj[0].begin, qj[0].end);
    }
    else {
    }
    return 0;
}

