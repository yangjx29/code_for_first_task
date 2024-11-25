int main () {
    int BsDrHTMV;
    int Q0u8EU;
    int nn35p6GVhZm;
    int Uangp3S1G [500];
    int ggUxCDkd [500];
    int stF5VJ1uk;
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
    stF5VJ1uk = 0;
    scanf ("%d", &nn35p6GVhZm);
    {
        int i = 0;
        while (nn35p6GVhZm > i) {
            scanf ("%d", &Uangp3S1G[i]);
            if (Uangp3S1G[i] % 2 != 0) {
                ggUxCDkd[stF5VJ1uk] = Uangp3S1G[i];
                stF5VJ1uk = stF5VJ1uk + 1;
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
            i++;
        };
    }
    for (BsDrHTMV = stF5VJ1uk - 1; 0 < BsDrHTMV; BsDrHTMV = BsDrHTMV -1) {
        Q0u8EU = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Q0u8EU < BsDrHTMV) {
            if (ggUxCDkd[Q0u8EU] > ggUxCDkd[Q0u8EU +1]) {
                int CiLSUH;
                CiLSUH = ggUxCDkd[Q0u8EU +1];
                ggUxCDkd[Q0u8EU +1] = ggUxCDkd[Q0u8EU];
                ggUxCDkd[Q0u8EU] = CiLSUH;
            }
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
            Q0u8EU++;
        };
    }
    {
        int l = 0;
        while (l < stF5VJ1uk - 1) {
            printf ("%d,", ggUxCDkd[l]);
            l++;
        };
    }
    printf ("%d", ggUxCDkd[stF5VJ1uk - 1]);
    return 0;
}

