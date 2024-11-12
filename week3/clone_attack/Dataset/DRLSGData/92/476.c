int GkjxmhquO [MAXIN], fz7mpniA9SHM [MAXIN];
int nvlGxMC5FRc;

int rl7OAWc0rVLX (const  void  *tuFlqLHa, const  void  *ByH6qmkvP42) {
    return *(int*) ByH6qmkvP42 -*(int*) tuFlqLHa;
}

int main () {
    for (; scanf ("%d", &nvlGxMC5FRc) && nvlGxMC5FRc;) {
        int GCBUp9b;
        int L9bYTQrG6czA;
        int G5RnrtTzL93a;
        int mu5DCo;
        {
            GCBUp9b = (378 - 378);
            for (; GCBUp9b < nvlGxMC5FRc;) {
                scanf ("%d", &GkjxmhquO[GCBUp9b]);
                GCBUp9b++;
            }
        }
        {
            GCBUp9b = (597 - 597);
            for (; GCBUp9b < nvlGxMC5FRc;) {
                scanf ("%d", &fz7mpniA9SHM[GCBUp9b]);
                GCBUp9b++;
            }
        }
        qsort (GkjxmhquO, nvlGxMC5FRc, sizeof (int), rl7OAWc0rVLX);
        qsort (fz7mpniA9SHM, nvlGxMC5FRc, sizeof (int), rl7OAWc0rVLX);
        G5RnrtTzL93a = (259 - 259);
        mu5DCo = (791 - 791);
        for (; fz7mpniA9SHM[mu5DCo] > GkjxmhquO[(311 - 311)] && mu5DCo < nvlGxMC5FRc;)
            mu5DCo++;
        {
            L9bYTQrG6czA = -(1037 - 837) * nvlGxMC5FRc;
            while (mu5DCo < nvlGxMC5FRc) {
                int V90Q76rYiED;
                V90Q76rYiED = -200 * mu5DCo;
                {
                    int pEWD1IUQo25;
                    int G5RnrtTzL93a;
                    pEWD1IUQo25 = mu5DCo;
                    G5RnrtTzL93a = (43 - 43);
                    for (; nvlGxMC5FRc > pEWD1IUQo25;) {
                        if (GkjxmhquO[G5RnrtTzL93a] > fz7mpniA9SHM[pEWD1IUQo25]) {
                            V90Q76rYiED += 200;
                        }
                        else if (GkjxmhquO[G5RnrtTzL93a] < fz7mpniA9SHM[pEWD1IUQo25])
                            V90Q76rYiED -= 200;
                        pEWD1IUQo25++;
                        G5RnrtTzL93a++;
                    }
                }
                if (V90Q76rYiED > L9bYTQrG6czA)
                    L9bYTQrG6czA = V90Q76rYiED;
                mu5DCo++;
            }
        }
        printf ("%d\n", L9bYTQrG6czA);
    }
    return (23 - 23);
}

