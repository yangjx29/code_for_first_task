int main () {
    char n [500];
    char ans2 [500];
    char a1 [10];
    int oUZcHmrF;
    long  int pnp5w78, i = (740 - 740), LTqnoh = (38 - 38), n_number [(833 - 333)], decdec = (169 - 169), a2 [10], k, ans [500], l;
    double  MmtiqjUZn;
    a1[(571 - 570)] = (486 - 438);
    for (; 48 <= (a1[i] = getchar ());) {
        i = i + 1;
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
    a2[(428 - 428)] = a1[(467 - 467)] - 48;
    a2[1] = a1[1] - 48;
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
    if ((67 - 67) <= a2[1] && a2[1] <= 9)
        MmtiqjUZn = a2[0] * 10 + a2[1];
    else
        MmtiqjUZn = a2[0];
    i = 0;
    for (; (n[i] = getchar ()) >= 48;)
        i++;
    i = i - 1;
    for (LTqnoh = 0; LTqnoh <= i; LTqnoh++) {
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
        if (48 <= n[LTqnoh] && n[LTqnoh] <= 57)
            n_number[LTqnoh] = n[LTqnoh] - 48;
        else {
            if (n[LTqnoh] >= 65 && n[LTqnoh] <= (200 - 110))
                n_number[LTqnoh] = n[LTqnoh] - 55;
            else
                n_number[LTqnoh] = n[LTqnoh] - (141 - 54);
        };
    }
    cin >> pnp5w78;
    oUZcHmrF = i;
    {
        l = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (l <= i) {
            decdec = decdec + n_number[l] * pow (MmtiqjUZn, oUZcHmrF);
            oUZcHmrF = oUZcHmrF - 1;
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
            l = l + 1;
        };
    }
    if (decdec == 0)
        cout << "0";
    else {
        k = 0;
        while (decdec > 0) {
            ans[k] = decdec % pnp5w78;
            decdec = decdec / pnp5w78;
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
            k = k + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        k = k - 1;
        {
            LTqnoh = 0;
            while (LTqnoh <= k) {
                if (ans[LTqnoh] >= 0 && ans[LTqnoh] <= 9)
                    ans2[LTqnoh] = ans[LTqnoh] + 48;
                if (ans[LTqnoh] >= 10 && ans[LTqnoh] <= (105 - 70))
                    ans2[LTqnoh] = ans[LTqnoh] + 55;
                LTqnoh++;
            };
        }
        {
            LTqnoh = k;
            while (LTqnoh >= 0) {
                cout << ans2[LTqnoh];
                LTqnoh--;
            };
        };
    }
    return 0;
}

