int tn3DBfh (int K5s9nlep) {
    int sk2lZr9;
    for (sk2lZr9 = (702 - 700); K5s9nlep / (433 - 431) + (885 - 884) > sk2lZr9; sk2lZr9 = sk2lZr9 + 1)
        if (K5s9nlep % sk2lZr9 == (804 - 804)) {
            return (698 - 698);
            break;
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
    if (sk2lZr9 == K5s9nlep / 2 + (408 - 407))
        return (697 - 696);
}

int ppp (int K5s9nlep, int b) {
    int ztXMG7b1d [(817 - 807)];
    int sk2lZr9;
    {
        sk2lZr9 = 0;
        while (sk2lZr9 < b) {
            ztXMG7b1d[sk2lZr9] = K5s9nlep % (225 - 215);
            K5s9nlep = K5s9nlep / (147 - 137);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sk2lZr9 = sk2lZr9 + 1;
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
    {
        sk2lZr9 = 0;
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
        while (b / 2 >= sk2lZr9) {
            if (!(ztXMG7b1d[b - sk2lZr9 - 1] == ztXMG7b1d[sk2lZr9]))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sk2lZr9 = sk2lZr9 + 1;
        };
    }
    if (sk2lZr9 == b / 2 + 1)
        return 1;
    else
        return 0;
}

int FHtZaTKFYmpn (int K5s9nlep) {
    int U7K0tmRP9fQS;
    {
        U7K0tmRP9fQS = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (K5s9nlep > 0) {
            K5s9nlep = K5s9nlep / 10;
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
            U7K0tmRP9fQS++;
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
    return U7K0tmRP9fQS;
}

void  main () {
    int ztXMG7b1d, EdqsprR, sk2lZr9, tlWjPctLBO56, U7K0tmRP9fQS = 0, b, c, v;
    scanf ("%d %d", &ztXMG7b1d, &EdqsprR);
    for (sk2lZr9 = ztXMG7b1d; sk2lZr9 <= EdqsprR; sk2lZr9 = sk2lZr9 + 1) {
        b = tn3DBfh (sk2lZr9);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (b) {
            tlWjPctLBO56 = FHtZaTKFYmpn (sk2lZr9);
            c = ppp (sk2lZr9, tlWjPctLBO56);
        }
        if (b * c) {
            U7K0tmRP9fQS = 1;
            printf ("%d", sk2lZr9);
            v = sk2lZr9;
            break;
        };
    }
    if (U7K0tmRP9fQS)
        for (sk2lZr9 = v + 1; sk2lZr9 <= EdqsprR; sk2lZr9 = sk2lZr9 + 1) {
            b = tn3DBfh (sk2lZr9);
            if (b) {
                tlWjPctLBO56 = FHtZaTKFYmpn (sk2lZr9);
                c = ppp (sk2lZr9, tlWjPctLBO56);
            }
            if (b * c) {
                U7K0tmRP9fQS = 1;
                printf (",%d", sk2lZr9);
            };
        }
    if (U7K0tmRP9fQS == 0)
        printf ("no");
}

