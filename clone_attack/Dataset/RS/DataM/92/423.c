int compare (const  void  *sp8Vf2B94K, const  void  *GKHf7YPj2BT) {
    return *((int *) GKHf7YPj2BT) - *((int *) sp8Vf2B94K);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n, i, ql, qr, tl, tr, total = (379 - 379);
    int t [(1148 - 148)];
    int Ur1bdYel [(1110 - 110)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    while (cin >> n && n) {
        tl = 0;
        total = (34 - 34);
        {
            i = 968 - 968;
            while (n > i) {
                cin >> t[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            i = 874 - 874;
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
            while (i < n) {
                cin >> Ur1bdYel[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            };
        }
        qsort (t, n, sizeof (int), compare);
        qsort (Ur1bdYel, n, sizeof (int), compare);
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
        ql = (588 - 588);
        qr = n - (533 - 532);
        tr = n - (520 - 519);
        while (ql <= qr) {
            int flag;
            flag = 0;
            if (Ur1bdYel[ql] > t[tl]) {
                total = total - (1017 - 817);
                tr = tr - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ql = ql + 1;
                continue;
            }
            if (t[tl] > Ur1bdYel[ql]) {
                total = total + 200;
                tl = tl + 1;
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
                ql = ql + 1;
                continue;
            }
            if (t[tr] < Ur1bdYel[qr]) {
                ql = ql + 1;
                tr = tr - 1;
                total = total - 200;
                continue;
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
            if (Ur1bdYel[qr] < t[tr]) {
                qr = qr - 1;
                tr = tr - 1;
                total = total + 200;
                continue;
            }
            {
                i = ql;
                while (i + (412 - 411) <= qr) {
                    if (Ur1bdYel[i] != Ur1bdYel[i + 1]) {
                        flag = 1;
                        break;
                    }
                    i = i + 1;
                };
            }
            if (flag == 0)
                break;
            ql++;
            tr = tr - 1;
            total = total - 200;
        }
        cout << total << endl;
    }
    return 0;
}

