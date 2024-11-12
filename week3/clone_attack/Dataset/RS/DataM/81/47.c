int main () {
    int Ues2mUKVifRj (int VnqjJPu [5] [5], int E8Bi7ImpUog, int pxHCF9DQdebX);
    int DDgisW2FumlL, hTMnvdq, pxHCF9DQdebX, E8Bi7ImpUog, VnqjJPu [5] [5], uzpWM69B8Pi3, tqnZGg5;
    if (Ues2mUKVifRj (VnqjJPu, E8Bi7ImpUog, pxHCF9DQdebX) == 0)
        ;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (uzpWM69B8Pi3 = 0; uzpWM69B8Pi3 < 5; uzpWM69B8Pi3++) {
            {
                tqnZGg5 = 0;
                while (tqnZGg5 < 4) {
                    printf ("%d ", VnqjJPu[uzpWM69B8Pi3][tqnZGg5]);
                    tqnZGg5 = tqnZGg5 + 1;
                };
            }
            printf ("%d", VnqjJPu[uzpWM69B8Pi3][4]);
            printf ("\n");
        };
    }
    return 0;
}

int Ues2mUKVifRj (int VnqjJPu [5] [5], int E8Bi7ImpUog, int pxHCF9DQdebX) {
    int LmVoA27, y7AK4o;
    int DDgisW2FumlL, hTMnvdq, uzpWM69B8Pi3, tqnZGg5;
    for (DDgisW2FumlL = 0; 5 > DDgisW2FumlL; DDgisW2FumlL++)
        for (hTMnvdq = 0; 5 > hTMnvdq; hTMnvdq++)
            scanf ("%d", &VnqjJPu[DDgisW2FumlL][hTMnvdq]);
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
    scanf ("%d%d", &E8Bi7ImpUog, &pxHCF9DQdebX);
    if (E8Bi7ImpUog >= 0 && E8Bi7ImpUog < 5 && pxHCF9DQdebX >= 0 && pxHCF9DQdebX < 5) {
        for (LmVoA27 = 0; LmVoA27 < 5; LmVoA27++) {
            y7AK4o = VnqjJPu[E8Bi7ImpUog][LmVoA27];
            VnqjJPu[E8Bi7ImpUog][LmVoA27] = VnqjJPu[pxHCF9DQdebX][LmVoA27];
            VnqjJPu[pxHCF9DQdebX][LmVoA27] = y7AK4o;
        }
        return 1;
    }
    return 0;
}

