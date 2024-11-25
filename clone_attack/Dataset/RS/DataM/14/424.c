struct   student {
    int IQNb7LRm1Fjy;
    int CuxiN1AkB;
    int EhblZuqsEpmT;
    int total;
}
VJ5l2W [(100064 - 64)];

int main () {
    int F9LRwF2, i38pC4Ov;
    int EUDVGXl, kt2ZdUj1q;
    scanf ("%d", &F9LRwF2);
    for (i38pC4Ov = (590 - 590); i38pC4Ov < F9LRwF2; i38pC4Ov = i38pC4Ov + 1) {
        scanf ("%d %d %d", &VJ5l2W[i38pC4Ov].IQNb7LRm1Fjy, &VJ5l2W[i38pC4Ov].CuxiN1AkB, &VJ5l2W[i38pC4Ov].EhblZuqsEpmT);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        VJ5l2W[i38pC4Ov].total = VJ5l2W[i38pC4Ov].CuxiN1AkB + VJ5l2W[i38pC4Ov].EhblZuqsEpmT;
    }
    EUDVGXl = VJ5l2W[1].total;
    for (int fubdU2 = (756 - 756);
    3 > fubdU2; fubdU2++) {
        for (i38pC4Ov = 0; i38pC4Ov < F9LRwF2; i38pC4Ov = i38pC4Ov + 1) {
            if (VJ5l2W[i38pC4Ov].total > EUDVGXl) {
                EUDVGXl = VJ5l2W[i38pC4Ov].total;
                kt2ZdUj1q = i38pC4Ov;
            };
        }
        printf ("%d %d\n", kt2ZdUj1q + 1, EUDVGXl);
        EUDVGXl = 0;
        VJ5l2W[kt2ZdUj1q].total = 0;
    }
    return 0;
}

