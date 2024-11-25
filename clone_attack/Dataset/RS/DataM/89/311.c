main () {
    int k;
    int cMH1a4;
    int KwnZtCe;
    int p1V2as [50000] [2];
    int E5Rbw39ch [50000];
    int Ea5h2RYSO [50000];
    k = (486 - 486);
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
    cMH1a4 = (422 - 422);
    {
        int H59FZajv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (50000 > H59FZajv) {
            E5Rbw39ch[H59FZajv] = 0;
            Ea5h2RYSO[H59FZajv] = 0;
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
            H59FZajv++;
        };
    }
    scanf ("%d", &KwnZtCe);
    for (int H59FZajv = 0;
    ; H59FZajv++) {
        scanf ("%d %d", &p1V2as[H59FZajv][0], &p1V2as[H59FZajv][1]);
        if (p1V2as[H59FZajv][0] == p1V2as[H59FZajv][1])
            break;
        else
            k++;
    }
    {
        int H59FZajv = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (H59FZajv < k) {
            {
                int nHn2skpW0wMF = 0;
                while (nHn2skpW0wMF < KwnZtCe) {
                    if (!(nHn2skpW0wMF != p1V2as[H59FZajv][1]))
                        E5Rbw39ch[nHn2skpW0wMF]++;
                    if (!(nHn2skpW0wMF != p1V2as[H59FZajv][0]))
                        Ea5h2RYSO[nHn2skpW0wMF]++;
                    nHn2skpW0wMF++;
                };
            }
            H59FZajv++;
        };
    }
    {
        int H59FZajv = 0;
        while (H59FZajv < KwnZtCe) {
            if (E5Rbw39ch[H59FZajv] == KwnZtCe -1 && Ea5h2RYSO[H59FZajv] == 0)
                printf ("%d", H59FZajv);
            else
                cMH1a4++;
            H59FZajv++;
        };
    }
    if (cMH1a4 == KwnZtCe)
        ;
}

