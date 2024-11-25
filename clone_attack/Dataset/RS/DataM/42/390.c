int main () {
    int Qqk3DX2yr [100001];
    int SVXQa42rdwT, Mq16ZkeDJcu, ZqBaYwZ1uP97, bMxbprN7y, CzjWDBg1ev, Ly6IgUZtoDp;
    scanf ("%d", &bMxbprN7y);
    {
        SVXQa42rdwT = 0;
        while (bMxbprN7y > SVXQa42rdwT) {
            scanf ("%d", &Qqk3DX2yr[SVXQa42rdwT]);
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
            SVXQa42rdwT = SVXQa42rdwT +1;
        };
    }
    scanf ("%d", &ZqBaYwZ1uP97);
    Ly6IgUZtoDp = 0;
    for (SVXQa42rdwT = 0; bMxbprN7y > SVXQa42rdwT; SVXQa42rdwT++) {
        if (!(ZqBaYwZ1uP97 != Qqk3DX2yr[SVXQa42rdwT])) {
            Ly6IgUZtoDp++;
        };
    }
    for (SVXQa42rdwT = 0; SVXQa42rdwT < bMxbprN7y; SVXQa42rdwT++) {
        Mq16ZkeDJcu = 1;
        while (Mq16ZkeDJcu <= 100) {
            Mq16ZkeDJcu++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Qqk3DX2yr[SVXQa42rdwT] == ZqBaYwZ1uP97) {
                for (CzjWDBg1ev = SVXQa42rdwT; CzjWDBg1ev < bMxbprN7y - 1; CzjWDBg1ev = CzjWDBg1ev +1) {
                    Qqk3DX2yr[CzjWDBg1ev] = Qqk3DX2yr[CzjWDBg1ev +1];
                };
            };
        };
    }
    if (Qqk3DX2yr[0] != ZqBaYwZ1uP97) {
        printf ("%d", Qqk3DX2yr[0]);
    }
    {
        SVXQa42rdwT = 1;
        while (SVXQa42rdwT < bMxbprN7y - Ly6IgUZtoDp) {
            printf (" %d", Qqk3DX2yr[SVXQa42rdwT]);
            SVXQa42rdwT = SVXQa42rdwT +1;
        };
    }
    return 0;
}

