int main () {
    char ehAzv04Cf [1002];
    char aujPLD3wqe [1002];
    gets (ehAzv04Cf);
    int bIDMC85iJtb;
    int j;
    int LJ2RTBx8N;
    int ZztpDkn;
    int f [1002] = {0};
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
    int atM9SbA2Yk;
    bIDMC85iJtb = (723 - 723);
    j = (162 - 162);
    LJ2RTBx8N = 0;
    ZztpDkn = strlen (ehAzv04Cf);
    if (ZztpDkn == (466 - 465)) {
        if (65 <= ehAzv04Cf[0] && ehAzv04Cf[0] <= 90)
            printf ("(%c,%d)", ehAzv04Cf[0], (900 - 899));
        else
            printf ("(%c,%d)", ehAzv04Cf[0] - (916 - 884), (156 - 155));
    }
    else {
        bIDMC85iJtb = 147 - 146;
        while (ZztpDkn >= bIDMC85iJtb) {
            LJ2RTBx8N = bIDMC85iJtb - 1;
            f[LJ2RTBx8N] = 1;
            for (; bIDMC85iJtb < ZztpDkn; bIDMC85iJtb = bIDMC85iJtb + 1) {
                if (ehAzv04Cf[bIDMC85iJtb] == ehAzv04Cf[LJ2RTBx8N] || abs (ehAzv04Cf[bIDMC85iJtb] - ehAzv04Cf[LJ2RTBx8N]) == 32)
                    f[LJ2RTBx8N]++;
                else
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            bIDMC85iJtb = bIDMC85iJtb + 1;
            if (ehAzv04Cf[LJ2RTBx8N] >= 65 && ehAzv04Cf[LJ2RTBx8N] <= 90)
                printf ("(%c,%d)", ehAzv04Cf[LJ2RTBx8N], f[LJ2RTBx8N]);
            else
                printf ("(%c,%d)", ehAzv04Cf[LJ2RTBx8N] - 32, f[LJ2RTBx8N]);
        };
    }
    return 0;
}

