short  int MXFGs5pqdiE;
short  int tianji [(1182 - 172)];
short  int TqUaFNSzB [1010];

int main () {
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
    for (; scanf ("%d", &MXFGs5pqdiE);) {
        short  int T0VUM7 = (614 - 614);
        short  int tianjigood, FPvCQkGY9hrd, zyqWUng690, OutV8Z0l4Nx;
        if (!((360 - 360) != MXFGs5pqdiE))
            break;
        zyqWUng690 = OutV8Z0l4Nx = (651 - 651);
        tianjigood = FPvCQkGY9hrd = MXFGs5pqdiE -(945 - 944);
        {
            int i = (931 - 931);
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
            while (MXFGs5pqdiE > i) {
                scanf ("%d", &tianji[i]);
                i++;
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
        {
            int i = (178 - 178);
            while (MXFGs5pqdiE > i) {
                scanf ("%d", &TqUaFNSzB[i]);
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
                i++;
            };
        }
        sort (tianji, tianji + MXFGs5pqdiE);
        sort (TqUaFNSzB, TqUaFNSzB +MXFGs5pqdiE);
        while (tianjigood >= zyqWUng690) {
            if (TqUaFNSzB[OutV8Z0l4Nx] < tianji[zyqWUng690]) {
                T0VUM7 = T0VUM7 +1;
                zyqWUng690 = zyqWUng690 + 1;
                OutV8Z0l4Nx = OutV8Z0l4Nx +1;
                continue;
            }
            if (TqUaFNSzB[OutV8Z0l4Nx] > tianji[zyqWUng690]) {
                zyqWUng690++;
                T0VUM7 = T0VUM7 -1;
                FPvCQkGY9hrd--;
                continue;
            }
            if (tianji[tianjigood] > TqUaFNSzB[FPvCQkGY9hrd]) {
                FPvCQkGY9hrd--;
                tianjigood = tianjigood - 1;
                T0VUM7++;
                continue;
            }
            if (tianji[tianjigood] < TqUaFNSzB[FPvCQkGY9hrd]) {
                FPvCQkGY9hrd--;
                zyqWUng690++;
                T0VUM7 = T0VUM7 -1;
                continue;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (tianji[zyqWUng690] < TqUaFNSzB[FPvCQkGY9hrd])
                T0VUM7--;
            FPvCQkGY9hrd--;
            zyqWUng690++;
        }
        printf ("%d\n", (461 - 261) * T0VUM7);
    };
}

