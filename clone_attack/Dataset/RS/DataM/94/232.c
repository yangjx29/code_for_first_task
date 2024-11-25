int main () {
    int DkSLzw0UjgI;
    int QPnRmTNXVYaK;
    int n;
    int FnZBy8J4c [100];
    int AYo8nFugHm [100];
    int afVHO1;
    int hznfQT1qEHDj;
    int ZSR8FyuEhWbo;
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
    QPnRmTNXVYaK = 0;
    scanf ("%d", &n);
    {
        DkSLzw0UjgI = 0;
        while (n > DkSLzw0UjgI) {
            scanf ("%d", &FnZBy8J4c[DkSLzw0UjgI]);
            DkSLzw0UjgI++;
        };
    }
    for (DkSLzw0UjgI = 0; DkSLzw0UjgI < n; DkSLzw0UjgI = DkSLzw0UjgI +1) {
        if (!(1 != FnZBy8J4c[DkSLzw0UjgI] % 2)) {
            AYo8nFugHm[QPnRmTNXVYaK] = FnZBy8J4c[DkSLzw0UjgI];
            QPnRmTNXVYaK = QPnRmTNXVYaK +1;
        };
    }
    for (ZSR8FyuEhWbo = 1; QPnRmTNXVYaK >= ZSR8FyuEhWbo; ZSR8FyuEhWbo = ZSR8FyuEhWbo +1) {
        afVHO1 = 0;
        for (DkSLzw0UjgI = 0; QPnRmTNXVYaK -ZSR8FyuEhWbo >= DkSLzw0UjgI; DkSLzw0UjgI = DkSLzw0UjgI +1) {
            if (AYo8nFugHm[DkSLzw0UjgI] > AYo8nFugHm[afVHO1]) {
                afVHO1 = DkSLzw0UjgI;
            }
            if (afVHO1 != QPnRmTNXVYaK -ZSR8FyuEhWbo) {
                hznfQT1qEHDj = AYo8nFugHm[afVHO1];
                AYo8nFugHm[afVHO1] = AYo8nFugHm[QPnRmTNXVYaK -ZSR8FyuEhWbo];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                AYo8nFugHm[QPnRmTNXVYaK -ZSR8FyuEhWbo] = hznfQT1qEHDj;
            };
        };
    }
    if (QPnRmTNXVYaK == 1) {
        printf ("%d", AYo8nFugHm[0]);
    }
    else {
        printf ("%d", AYo8nFugHm[0]);
        for (DkSLzw0UjgI = 1; DkSLzw0UjgI < QPnRmTNXVYaK; DkSLzw0UjgI++) {
            printf (",%d", AYo8nFugHm[DkSLzw0UjgI]);
        };
    }
    return 0;
}

