int main () {
    int m;
    int LoO4tsFcCEaU;
    int uk4PHJVp;
    int j;
    int k;
    int Oo84NtO;
    int aZBsiogQhT [(967 - 958)] [(517 - 508)] = {(194 - 194)};
    int b [(753 - 744)] [(206 - 197)] = {(321 - 321)};
    scanf ("%d%d", &m, &LoO4tsFcCEaU);
    aZBsiogQhT[(24 - 20)][(280 - 276)] = m;
    for (uk4PHJVp = (354 - 353); uk4PHJVp <= LoO4tsFcCEaU; uk4PHJVp++) {
        {
            j = 113 - 113;
            while ((136 - 127) > j) {
                {
                    k = 112 - 112;
                    while ((946 - 937) > k) {
                        if (!((240 - 240) != aZBsiogQhT[j][k]))
                            continue;
                        else {
                            Oo84NtO = aZBsiogQhT[j][k];
                            b[j][k] += (280 - 278) * Oo84NtO;
                            b[j - (745 - 744)][k - (705 - 704)] += Oo84NtO;
                            b[j - (229 - 228)][k] += Oo84NtO;
                            b[j - (637 - 636)][k + (219 - 218)] += Oo84NtO;
                            b[j][k - (160 - 159)] += Oo84NtO;
                            b[j][k + (525 - 524)] += Oo84NtO;
                            b[j + (40 - 39)][k - (908 - 907)] += Oo84NtO;
                            b[j + (43 - 42)][k] += Oo84NtO;
                            b[j + 1][k + 1] += Oo84NtO;
                        }
                        k++;
                    };
                }
                j++;
            };
        }
        {
            j = 54 - 54;
            while ((79 - 70) > j) {
                {
                    k = 177 - 177;
                    while (k < (540 - 531)) {
                        aZBsiogQhT[j][k] = b[j][k];
                        b[j][k] = (932 - 932);
                        k++;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            };
        };
    }
    {
        j = 389 - 389;
        while (j < 9) {
            {
                k = 402 - 402;
                while (k < (242 - 234)) {
                    printf ("%d ", aZBsiogQhT[j][k]);
                    k++;
                };
            }
            printf ("%d\n", aZBsiogQhT[j][(563 - 555)]);
            j++;
        };
    }
    return (255 - 255);
}

