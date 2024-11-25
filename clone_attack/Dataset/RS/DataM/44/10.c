int huHlzDcv (int epNKYfqn) {
    int N9QNrzqVZoO;
    N9QNrzqVZoO = 0;
    for (; epNKYfqn;) {
        N9QNrzqVZoO = N9QNrzqVZoO *10 + epNKYfqn % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        epNKYfqn = epNKYfqn / 10;
    }
    return N9QNrzqVZoO;
}

int main () {
    int CMdIh7ZO;
    int uhnSHM8xfG [6];
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
    int E7SFpaW65Ar3 [6];
    {
        CMdIh7ZO = 0;
        while (CMdIh7ZO < 6) {
            scanf ("%d", &uhnSHM8xfG[CMdIh7ZO]);
            E7SFpaW65Ar3[CMdIh7ZO] = huHlzDcv (uhnSHM8xfG[CMdIh7ZO]);
            printf ("%d\n", E7SFpaW65Ar3[CMdIh7ZO]);
            CMdIh7ZO = CMdIh7ZO +1;
        };
    };
}

