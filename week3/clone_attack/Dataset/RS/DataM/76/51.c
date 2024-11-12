int main () {
    int GWCfwSnsKXc, oEhfrM, T4smM7dO0WXK;
    int Mlxpe270Ea;
    int p5QGx4LKU1z;
    int Mw1tVMR;
    int unw8UO7EbRr;
    int qiHs8q [50000];
    int L1DznhvdWjYF [50000];
    scanf ("%d", &Mw1tVMR);
    {
        Mlxpe270Ea = 0;
        while (Mlxpe270Ea < Mw1tVMR) {
            scanf ("%d%d", &qiHs8q[Mlxpe270Ea], &L1DznhvdWjYF[Mlxpe270Ea]);
            Mlxpe270Ea = Mlxpe270Ea +1;
        };
    }
    GWCfwSnsKXc = qiHs8q[0];
    T4smM7dO0WXK = L1DznhvdWjYF[0];
    oEhfrM = L1DznhvdWjYF[0];
    for (Mlxpe270Ea = 1; Mlxpe270Ea < Mw1tVMR; Mlxpe270Ea++) {
        if (qiHs8q[Mlxpe270Ea] < GWCfwSnsKXc) {
            GWCfwSnsKXc = qiHs8q[Mlxpe270Ea];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        Mlxpe270Ea = 1;
        while (Mlxpe270Ea < Mw1tVMR) {
            if (oEhfrM < L1DznhvdWjYF[Mlxpe270Ea]) {
                oEhfrM = L1DznhvdWjYF[Mlxpe270Ea];
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
            if (L1DznhvdWjYF[Mlxpe270Ea] < T4smM7dO0WXK) {
                T4smM7dO0WXK = L1DznhvdWjYF[Mlxpe270Ea];
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Mlxpe270Ea++;
        };
    }
    {
        p5QGx4LKU1z = 0;
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
        while (p5QGx4LKU1z < Mw1tVMR) {
            p5QGx4LKU1z++;
            for (Mlxpe270Ea = 0; Mlxpe270Ea < Mw1tVMR; Mlxpe270Ea++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((qiHs8q[Mlxpe270Ea] <= T4smM7dO0WXK) && (L1DznhvdWjYF[Mlxpe270Ea] >= T4smM7dO0WXK)) {
                    T4smM7dO0WXK = L1DznhvdWjYF[Mlxpe270Ea];
                };
            };
        };
    }
    if (T4smM7dO0WXK == oEhfrM) {
        printf ("%d %d", GWCfwSnsKXc, oEhfrM);
    }
    else {
    }
    return 0;
}

