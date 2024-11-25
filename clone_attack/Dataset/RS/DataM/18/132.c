int main () {
    int N;
    scanf ("%d", &N);
    {
        int Ro8L0wT3U = (936 - 936);
        while (N > Ro8L0wT3U) {
            int vXUwRSWq [N] [N];
            int SUM;
            SUM = 0;
            Ro8L0wT3U = Ro8L0wT3U +1;
            {
                int i;
                i = (800 - 800);
                while (N > i) {
                    {
                        int j;
                        j = (773 - 773);
                        while (N > j) {
                            scanf ("%d", &vXUwRSWq[i][j]);
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                int Now;
                Now = 1;
                while (N > Now) {
                    int MINR = vXUwRSWq[0][0];
                    int MINC = vXUwRSWq[0][0];
                    for (int j = Now;
                    N > j; j = j + 1)
                        if (vXUwRSWq[0][j] < MINR)
                            MINR = vXUwRSWq[0][j];
                    vXUwRSWq[0][0] = vXUwRSWq[0][0] - MINR;
                    {
                        int j = Now;
                        while (j < N) {
                            vXUwRSWq[0][j] -= MINR;
                            j = j + 1;
                        };
                    }
                    for (int i = Now;
                    i < N; i = i + 1) {
                        int MIR = vXUwRSWq[i][0];
                        for (int j = Now;
                        j < N; j = j + 1)
                            if (MIR > vXUwRSWq[i][j])
                                MIR = vXUwRSWq[i][j];
                        vXUwRSWq[i][0] = vXUwRSWq[i][0] - MIR;
                        {
                            int j = Now;
                            while (j < N) {
                                vXUwRSWq[i][j] -= MIR;
                                j = j + 1;
                            };
                        };
                    }
                    {
                        int j = Now;
                        while (j < N) {
                            if (MINC > vXUwRSWq[j][0])
                                MINC = vXUwRSWq[j][0];
                            j = j + 1;
                        };
                    }
                    vXUwRSWq[0][0] = vXUwRSWq[0][0] - MINC;
                    {
                        int j = Now;
                        while (j < N) {
                            vXUwRSWq[j][0] = vXUwRSWq[j][0] - MINC;
                            j = j + 1;
                        };
                    }
                    for (int i = Now;
                    i < N; i = i + 1) {
                        int Mic = vXUwRSWq[0][i];
                        for (int j = Now;
                        j < N; j = j + 1)
                            if (Mic > vXUwRSWq[j][i])
                                Mic = vXUwRSWq[j][i];
                        vXUwRSWq[0][i] = vXUwRSWq[0][i] - Mic;
                        for (int j = Now;
                        j < N; j = j + 1)
                            vXUwRSWq[j][i] -= Mic;
                    }
                    SUM += vXUwRSWq[Now][Now];
                    Now = Now +1;
                };
            }
            printf ("%d\n", SUM);
        };
    };
}

