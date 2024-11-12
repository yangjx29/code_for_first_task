int main () {
    int rGj920;
    int PvUCqG9MJuaA;
    int UkhbHY;
    int yjrkCgI4B25Z;
    int esZo4M;
    int BqBiTO1V;
    int wEWegGTahzX [8] [8];
    int Rcd3T5bSvr = 0;
    scanf ("%d,%d", &rGj920, &PvUCqG9MJuaA);
    for (UkhbHY = 0; rGj920 > UkhbHY; UkhbHY = UkhbHY +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (yjrkCgI4B25Z = 0; PvUCqG9MJuaA > yjrkCgI4B25Z; yjrkCgI4B25Z = yjrkCgI4B25Z + 1) {
            scanf ("%d", &wEWegGTahzX[UkhbHY][yjrkCgI4B25Z]);
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
            };
        };
    }
    for (UkhbHY = 0; rGj920 > UkhbHY; UkhbHY = UkhbHY +1) {
        Rcd3T5bSvr = 0;
        esZo4M = UkhbHY;
        BqBiTO1V = 0;
        {
            yjrkCgI4B25Z = 0;
            while (PvUCqG9MJuaA -1 > yjrkCgI4B25Z) {
                if (wEWegGTahzX[esZo4M][BqBiTO1V] < wEWegGTahzX[UkhbHY][yjrkCgI4B25Z + 1]) {
                    BqBiTO1V = yjrkCgI4B25Z + 1;
                }
                yjrkCgI4B25Z = yjrkCgI4B25Z + 1;
            };
        }
        for (int ZYQgvtr = 0;
        rGj920 > ZYQgvtr; ZYQgvtr = ZYQgvtr +1) {
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
            if (wEWegGTahzX[ZYQgvtr][BqBiTO1V] >= wEWegGTahzX[esZo4M][BqBiTO1V]) {
                Rcd3T5bSvr = Rcd3T5bSvr +1;
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
        if (Rcd3T5bSvr == rGj920) {
            break;
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
            };
        };
    }
    if (Rcd3T5bSvr == rGj920) {
        printf ("%d+%d", esZo4M, BqBiTO1V);
    }
    else {
        printf ("No");
    }
    return 0;
}

