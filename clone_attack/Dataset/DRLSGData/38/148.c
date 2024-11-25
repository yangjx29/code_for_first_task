int main () {
    double  V1DzfbS9XO [(969 - 869)];
    int i;
    int m5c7uG;
    double  k;
    double  Qi6b4K [(480 - 380)];
    double  FZ1vSPkg2a0G [(1064 - 964)];
    double  yI0dKFgAa [(207 - 107)];
    double  uSOzxfcR [(579 - 479)];
    double  fPhwxyLQ [100];
    scanf ("%lf", &k);
    {
        i = 739 - 739;
        while (i < k) {
            FZ1vSPkg2a0G[i] = (903 - 903);
            uSOzxfcR[i] = (74 - 74);
            scanf ("%lf", &V1DzfbS9XO[i]);
            for (m5c7uG = (855 - 855); V1DzfbS9XO[i] > m5c7uG; m5c7uG++)
                scanf ("%lf", &Qi6b4K[m5c7uG]);
            {
                m5c7uG = 675 - 675;
                while (V1DzfbS9XO[i] > m5c7uG) {
                    FZ1vSPkg2a0G[i] = FZ1vSPkg2a0G[i] + Qi6b4K[m5c7uG];
                    m5c7uG++;
                }
            }
            yI0dKFgAa[i] = FZ1vSPkg2a0G[i] / V1DzfbS9XO[i];
            {
                m5c7uG = 555 - 555;
                while (m5c7uG < V1DzfbS9XO[i]) {
                    uSOzxfcR[i] = uSOzxfcR[i] + (Qi6b4K[m5c7uG] - yI0dKFgAa[i]) * (Qi6b4K[m5c7uG] - yI0dKFgAa[i]);
                    m5c7uG++;
                }
            }
            fPhwxyLQ[i] = sqrt (uSOzxfcR[i] / V1DzfbS9XO[i]);
            i++;
        }
    }
    {
        i = 269 - 269;
        while (k > i) {
            printf ("%.5lf\n", fPhwxyLQ[i]);
            i++;
        }
    }
    return (242 - 242);
}

