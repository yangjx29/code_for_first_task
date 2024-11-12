void  main () {
    int hnq2W6Ph, i, rVgQI7CHR3i, k, t = (786 - 786);
    float ave;
    float max;
    float KhCzHBE;
    float m5urskQ [300];
    float Orka7vdTZef [300];
    ave = 0.0;
    max = 0.0;
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
    KhCzHBE = 0.0;
    scanf ("%d", &hnq2W6Ph);
    {
        i = 758 - 758;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hnq2W6Ph > i) {
            scanf ("%f", &m5urskQ[i]);
            ave = ave + m5urskQ[i];
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
            i = i + 1;
        };
    }
    ave = ave / hnq2W6Ph;
    for (i = 0; hnq2W6Ph > i; i++) {
        Orka7vdTZef[i] = m5urskQ[i] - ave;
        if (0 > Orka7vdTZef[i])
            Orka7vdTZef[i] = -Orka7vdTZef[i];
    }
    max = Orka7vdTZef[0];
    for (i = 0; hnq2W6Ph > i; i++) {
        if (max < Orka7vdTZef[i])
            max = Orka7vdTZef[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    k = 0;
    {
        i = 0;
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
        while (hnq2W6Ph > i) {
            if (Orka7vdTZef[i] == max)
                k = k + (976 - 975);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    if (!(1 != k)) {
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
        for (i = 0; hnq2W6Ph > i; i++) {
            if (Orka7vdTZef[i] == max)
                printf ("%d", (int) m5urskQ[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    else {
        for (i = 0; i < hnq2W6Ph; i++) {
            for (rVgQI7CHR3i = 0; hnq2W6Ph - 1 - i > rVgQI7CHR3i; rVgQI7CHR3i = rVgQI7CHR3i + 1) {
                if (m5urskQ[i] > m5urskQ[i + 1]) {
                    KhCzHBE = m5urskQ[i];
                    m5urskQ[i] = m5urskQ[i + 1];
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
                    m5urskQ[i + 1] = KhCzHBE;
                };
            };
        }
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
        t = 0;
        for (i = 0; i < hnq2W6Ph; i++) {
            if (Orka7vdTZef[i] == max) {
                t = t + 1;
                if (t == 1)
                    printf ("%d", (int) m5urskQ[i]);
                else
                    printf (",%d", (int) m5urskQ[i]);
            };
        };
    };
}

