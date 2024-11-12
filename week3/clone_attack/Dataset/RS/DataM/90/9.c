int N8lgqRNDZ3x (int NyefvMtxz1, int kM0Hu4sABZ) {
    if (!(0 != NyefvMtxz1) || !(1 != kM0Hu4sABZ)) {
        return 1;
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
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (NyefvMtxz1 < kM0Hu4sABZ) {
        return N8lgqRNDZ3x (NyefvMtxz1, NyefvMtxz1);
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
    }
    else {
        return N8lgqRNDZ3x (NyefvMtxz1, kM0Hu4sABZ - 1) + N8lgqRNDZ3x (NyefvMtxz1 -kM0Hu4sABZ, kM0Hu4sABZ);
    };
}

int main () {
    int t;
    int CHtK3MXj;
    int FFMYGb5v;
    scanf ("%d", &t);
    {
        int I4w6AQFCLei7 = 0;
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
        while (I4w6AQFCLei7 < t) {
            I4w6AQFCLei7 = I4w6AQFCLei7 +1;
            scanf ("%d %d", &CHtK3MXj, &FFMYGb5v);
            printf ("%d\n", N8lgqRNDZ3x (CHtK3MXj, FFMYGb5v));
        };
    }
    return 0;
}

