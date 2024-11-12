int main () {
    int sz [(711 - 706)] [(460 - 455)];
    int zd [(16 - 11)];
    int A9N2vCPn [5];
    int ihtJ19C;
    int r0tTLKYxd;
    int UGyxF5hcUiN;
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
    int RNxuTf;
    ihtJ19C = (591 - 591);
    for (UGyxF5hcUiN = (279 - 279); 5 > UGyxF5hcUiN; UGyxF5hcUiN = UGyxF5hcUiN +1) {
        for (RNxuTf = 0; 5 > RNxuTf; RNxuTf = RNxuTf +1) {
            scanf ("%d", &sz[UGyxF5hcUiN][RNxuTf]);
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
            };
        };
    }
    for (UGyxF5hcUiN = 0; 5 > UGyxF5hcUiN; UGyxF5hcUiN = UGyxF5hcUiN +1) {
        r0tTLKYxd = 0;
        {
            RNxuTf = 0;
            while (RNxuTf < 5) {
                if (r0tTLKYxd <= sz[UGyxF5hcUiN][RNxuTf]) {
                    r0tTLKYxd = sz[UGyxF5hcUiN][RNxuTf];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    zd[UGyxF5hcUiN] = r0tTLKYxd;
                }
                RNxuTf = RNxuTf +1;
            };
        };
    }
    for (RNxuTf = 0; RNxuTf < 5; RNxuTf = RNxuTf +1) {
        r0tTLKYxd = (100939 - 939);
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
        {
            UGyxF5hcUiN = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (UGyxF5hcUiN < 5) {
                if (sz[UGyxF5hcUiN][RNxuTf] <= r0tTLKYxd) {
                    r0tTLKYxd = sz[UGyxF5hcUiN][RNxuTf];
                    A9N2vCPn[RNxuTf] = r0tTLKYxd;
                }
                UGyxF5hcUiN = UGyxF5hcUiN +1;
            };
        };
    }
    for (UGyxF5hcUiN = 0; UGyxF5hcUiN < 5; UGyxF5hcUiN = UGyxF5hcUiN +1) {
        RNxuTf = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (RNxuTf < 5) {
            if (sz[UGyxF5hcUiN][RNxuTf] == zd[UGyxF5hcUiN] && sz[UGyxF5hcUiN][RNxuTf] == A9N2vCPn[RNxuTf]) {
                printf ("%d %d %d", UGyxF5hcUiN +1, RNxuTf +1, sz[UGyxF5hcUiN][RNxuTf]);
                ihtJ19C = ihtJ19C + 1;
            }
            RNxuTf = RNxuTf +1;
        };
    }
    if (ihtJ19C == 0)
        ;
    return 0;
}

