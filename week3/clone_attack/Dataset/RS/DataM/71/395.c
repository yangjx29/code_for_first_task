int lon (int jndvRuZ6m4Wz, int uufy0CLUN, int bwmjHtDbk) {
    int res = 0;
    int i;
    int Ms3Hf92PqMaF;
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
    if (bwmjHtDbk < uufy0CLUN) {
        Ms3Hf92PqMaF = uufy0CLUN;
        uufy0CLUN = bwmjHtDbk;
        bwmjHtDbk = Ms3Hf92PqMaF;
    }
    for (i = uufy0CLUN; bwmjHtDbk > i; i = i + 1) {
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
        if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || !(8 != i) || i == 10 || !(12 != i)) {
            res = res + 31;
        }
        else if (!((283 - 279) != i) || !(6 != i) || !(9 != i) || i == 11) {
            res = res + 30;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (i == 2 && (jndvRuZ6m4Wz % 100 != 0 && jndvRuZ6m4Wz % 4 == 0 || jndvRuZ6m4Wz % 400 == 0)) {
            res = res + 29;
        }
        else if (i == 2 && (jndvRuZ6m4Wz % 4 != 0 || (jndvRuZ6m4Wz % 100 == 0 && jndvRuZ6m4Wz % 400 != 0))) {
            res += 28;
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
    return res;
}

int main () {
    int n, jndvRuZ6m4Wz, uufy0CLUN, bwmjHtDbk, i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d" "%d" "%d", &jndvRuZ6m4Wz, &uufy0CLUN, &bwmjHtDbk);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (lon (jndvRuZ6m4Wz, uufy0CLUN, bwmjHtDbk) % 7 == 0) {
        }
        else {
        };
    };
}

