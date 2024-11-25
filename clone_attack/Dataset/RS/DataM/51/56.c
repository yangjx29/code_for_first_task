int main () {
    int vL9nouM, AeF5i1bU, j, lt24VKU3qs = (760 - 760), jDdTr7l68tc, lGzaYZPMvuAV, D2jVDcYt7JuL, IqXAxK, kPA8H1OC4jkm = 0, N4shuSB [501] = {0};
    char YaTBtp9N [501], VwpR8d9uM [501] [(460 - 455)] = {0}, temp [5];
    gets (YaTBtp9N);
    lGzaYZPMvuAV = strlen (YaTBtp9N);
    scanf ("%d\n", &vL9nouM);
    {
        D2jVDcYt7JuL = 0;
        while (D2jVDcYt7JuL <= lGzaYZPMvuAV - vL9nouM) {
            j = 0;
            jDdTr7l68tc = 0;
            {
                AeF5i1bU = 0;
                while (5 > AeF5i1bU) {
                    temp[AeF5i1bU] = '\0';
                    AeF5i1bU = AeF5i1bU +1;
                };
            }
            IqXAxK = D2jVDcYt7JuL +vL9nouM - 1;
            {
                AeF5i1bU = D2jVDcYt7JuL;
                while (AeF5i1bU <= IqXAxK) {
                    temp[j] = YaTBtp9N[AeF5i1bU];
                    j = j + 1;
                    AeF5i1bU = AeF5i1bU +1;
                };
            }
            {
                AeF5i1bU = 0;
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
                while (lt24VKU3qs >= AeF5i1bU) {
                    if (strcmp (temp, VwpR8d9uM[AeF5i1bU]) == 0) {
                        jDdTr7l68tc = 1;
                        N4shuSB[AeF5i1bU]++;
                        break;
                    }
                    else
                        continue;
                    AeF5i1bU = AeF5i1bU +1;
                };
            }
            D2jVDcYt7JuL++;
            if (!(0 != jDdTr7l68tc)) {
                strcpy (VwpR8d9uM[lt24VKU3qs], temp);
                N4shuSB[lt24VKU3qs]++;
                lt24VKU3qs++;
            };
        };
    }
    {
        AeF5i1bU = 0;
        while (AeF5i1bU < lt24VKU3qs) {
            if (N4shuSB[AeF5i1bU] > kPA8H1OC4jkm)
                kPA8H1OC4jkm = N4shuSB[AeF5i1bU];
            AeF5i1bU++;
        };
    }
    if (kPA8H1OC4jkm == 1) {
        printf ("NO");
        return 0;
    }
    printf ("%d\n", kPA8H1OC4jkm);
    for (AeF5i1bU = 0; AeF5i1bU < lt24VKU3qs; AeF5i1bU = AeF5i1bU +1) {
        if (N4shuSB[AeF5i1bU] == kPA8H1OC4jkm)
            puts (VwpR8d9uM[AeF5i1bU]);
    }
    return 0;
}

