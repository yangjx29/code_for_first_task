int main () {
    int Ld57K8laNHE [(50340 - 339)], k9tVWFYik [50001], m3S5Gl8, L9NaMK, xiADVo5u2nS, eG1L4Ko, t, g9zTUivqx, zpNjrMXBE = 0;
    scanf ("%d", &m3S5Gl8);
    {
        L9NaMK = 0;
        while (L9NaMK < m3S5Gl8) {
            scanf ("%d%d", &Ld57K8laNHE[L9NaMK], &k9tVWFYik[L9NaMK]);
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
            L9NaMK = L9NaMK +1;
        };
    }
    for (xiADVo5u2nS = 1; m3S5Gl8 > xiADVo5u2nS; xiADVo5u2nS++) {
        L9NaMK = 0;
        while (L9NaMK < m3S5Gl8 - xiADVo5u2nS) {
            if (Ld57K8laNHE[L9NaMK] > Ld57K8laNHE[L9NaMK +1]) {
                eG1L4Ko = Ld57K8laNHE[L9NaMK];
                Ld57K8laNHE[L9NaMK] = Ld57K8laNHE[L9NaMK +1];
                Ld57K8laNHE[L9NaMK +1] = eG1L4Ko;
                t = k9tVWFYik[L9NaMK];
                k9tVWFYik[L9NaMK] = k9tVWFYik[L9NaMK +1];
                k9tVWFYik[L9NaMK +1] = t;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            L9NaMK = L9NaMK +1;
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
    {
        L9NaMK = 0;
        while (m3S5Gl8 - 1 > L9NaMK) {
            if (Ld57K8laNHE[L9NaMK +1] <= k9tVWFYik[L9NaMK]) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (k9tVWFYik[L9NaMK] > k9tVWFYik[L9NaMK +1]) {
                    k9tVWFYik[L9NaMK +1] = k9tVWFYik[L9NaMK];
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
                    continue;
                };
            }
            else {
                zpNjrMXBE = 1;
                break;
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
            L9NaMK++;
        };
    }
    if (zpNjrMXBE == 0) {
        printf ("%d %d", Ld57K8laNHE[0], k9tVWFYik[L9NaMK]);
    }
    return 0;
}

