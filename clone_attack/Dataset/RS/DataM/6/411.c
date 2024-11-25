int main () {
    int UmgeuTfErjV5 [1000] [1000];
    int s;
    int p;
    int sRtdVv83U;
    int VBf37eyvbJA;
    int OrEzNkR;
    int i;
    int ey98Zn;
    int l;
    int m;
    int sK6wsipFrz;
    int sum;
    s = (380 - 380);
    p = 0;
    sRtdVv83U = 0;
    VBf37eyvbJA = 0;
    scanf ("%d", &OrEzNkR);
    for (i = 0; OrEzNkR > i; i++) {
        scanf ("%d%d", &m, &sK6wsipFrz);
        {
            ey98Zn = 1;
            while (ey98Zn <= m) {
                {
                    l = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (l <= sK6wsipFrz) {
                        scanf ("%d", &UmgeuTfErjV5[ey98Zn][l]);
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
                ey98Zn = ey98Zn + 1;
            };
        }
        for (ey98Zn = 1; ey98Zn <= sK6wsipFrz; ey98Zn = ey98Zn + 1) {
            s = s + UmgeuTfErjV5[1][ey98Zn];
            VBf37eyvbJA = VBf37eyvbJA +UmgeuTfErjV5[m][ey98Zn];
        }
        {
            ey98Zn = 1;
            while (ey98Zn <= m) {
                p = p + UmgeuTfErjV5[ey98Zn][1];
                sRtdVv83U = sRtdVv83U + UmgeuTfErjV5[ey98Zn][sK6wsipFrz];
                ey98Zn = ey98Zn + 1;
            };
        }
        sum = s + p + sRtdVv83U + VBf37eyvbJA -UmgeuTfErjV5[1][1] - UmgeuTfErjV5[m][1] - UmgeuTfErjV5[1][sK6wsipFrz] - UmgeuTfErjV5[m][sK6wsipFrz];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = 0;
        s = 0;
        printf ("%d\n", sum);
        VBf37eyvbJA = 0;
        sRtdVv83U = 0;
    }
    return 0;
}

