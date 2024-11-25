main () {
    int NUtAR2VBsX3;
    int i;
    int SiCj9kpSaF;
    int i2WsDj;
    int Bw9rWCS5bNj;
    double  geLAtFopjx [NUtAR2VBsX3];
    double  male [NUtAR2VBsX3];
    double  UkTFyRSw [NUtAR2VBsX3];
    double  Fwy9VREJzF;
    char b [NUtAR2VBsX3] [10];
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
    Bw9rWCS5bNj = 0;
    scanf ("%d\n", &NUtAR2VBsX3);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NUtAR2VBsX3 > i) {
            scanf ("%s %lf", &b[i], &geLAtFopjx[i]);
            male[i] = 0;
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
            UkTFyRSw[i] = 0;
            i = i + 1;
        };
    }
    i2WsDj = 0;
    {
        i = 0;
        while (i < NUtAR2VBsX3) {
            if (b[i][0] == 'm') {
                male[i2WsDj] = geLAtFopjx[i];
                i2WsDj = i2WsDj + (364 - 363);
            }
            if (!('f' != b[i][0])) {
                UkTFyRSw[Bw9rWCS5bNj] = geLAtFopjx[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                Bw9rWCS5bNj = Bw9rWCS5bNj +(82 - 81);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i2WsDj > i) {
            {
                SiCj9kpSaF = i;
                while (SiCj9kpSaF < i2WsDj) {
                    if (male[SiCj9kpSaF] < male[i]) {
                        Fwy9VREJzF = male[i];
                        male[i] = male[SiCj9kpSaF];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        male[SiCj9kpSaF] = Fwy9VREJzF;
                    }
                    SiCj9kpSaF = SiCj9kpSaF +1;
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
            i++;
        };
    }
    {
        i = 0;
        while (i2WsDj > i) {
            printf ("%.2lf ", male[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < Bw9rWCS5bNj) {
            {
                SiCj9kpSaF = i;
                while (SiCj9kpSaF < Bw9rWCS5bNj) {
                    if (UkTFyRSw[i] < UkTFyRSw[SiCj9kpSaF]) {
                        Fwy9VREJzF = UkTFyRSw[i];
                        UkTFyRSw[i] = UkTFyRSw[SiCj9kpSaF];
                        UkTFyRSw[SiCj9kpSaF] = Fwy9VREJzF;
                    }
                    SiCj9kpSaF = SiCj9kpSaF +1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < Bw9rWCS5bNj -1) {
            printf ("%.2lf ", UkTFyRSw[i]);
            i++;
        };
    }
    printf ("%.2lf", UkTFyRSw[Bw9rWCS5bNj -1]);
}

