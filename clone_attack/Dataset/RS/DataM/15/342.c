int main () {
    int WHIKF1wj;
    int qTIO6AzvPfg;
    int zuoj;
    int VO3kIBR;
    int F8aoGb9jiN5;
    int UmVADJwcpMf;
    int fZlSuh0m1q;
    qTIO6AzvPfg = 0;
    zuoj = 0;
    VO3kIBR = 0;
    F8aoGb9jiN5 = 0;
    UmVADJwcpMf = 0;
    fZlSuh0m1q = 0;
    int i;
    int kgWP9DLaVkB4;
    int OlSn6sT;
    int NbmXfcjMU93 [1000] [1000] = {0};
    scanf ("%d", &OlSn6sT);
    for (i = 0; i < OlSn6sT; i = i + 1) {
        kgWP9DLaVkB4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OlSn6sT > kgWP9DLaVkB4) {
            scanf ("%d", &NbmXfcjMU93[i][kgWP9DLaVkB4]);
            kgWP9DLaVkB4++;
        };
    }
    {
        i = 0;
        while (i < OlSn6sT) {
            for (kgWP9DLaVkB4 = 0; kgWP9DLaVkB4 < OlSn6sT; kgWP9DLaVkB4++) {
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
                if (!(0 != NbmXfcjMU93[i][kgWP9DLaVkB4])) {
                    fZlSuh0m1q = 1;
                    zuoj = kgWP9DLaVkB4;
                    qTIO6AzvPfg = i;
                    break;
                };
            }
            if (fZlSuh0m1q == 1)
                break;
            i++;
        };
    }
    {
        i = OlSn6sT -1;
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
        while (0 <= i) {
            {
                kgWP9DLaVkB4 = OlSn6sT -1;
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
                while (kgWP9DLaVkB4 >= 0) {
                    if (NbmXfcjMU93[i][kgWP9DLaVkB4] == 0) {
                        UmVADJwcpMf = 1;
                        F8aoGb9jiN5 = kgWP9DLaVkB4;
                        VO3kIBR = i;
                        break;
                    }
                    kgWP9DLaVkB4--;
                };
            }
            if (UmVADJwcpMf == 1)
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i - 1;
        };
    }
    if (VO3kIBR == qTIO6AzvPfg || F8aoGb9jiN5 == zuoj) {
        WHIKF1wj = 0;
    }
    else {
        WHIKF1wj = (VO3kIBR -qTIO6AzvPfg - 1) * (F8aoGb9jiN5 -zuoj - 1);
    }
    printf ("%d", WHIKF1wj);
    return 0;
}

