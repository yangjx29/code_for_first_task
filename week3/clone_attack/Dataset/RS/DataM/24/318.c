int main () {
    int max;
    int kxSBz9MjNwWT;
    int KWunTjNLADe;
    int max2;
    int SfkEPtK8Ryd3;
    int rb35vX6;
    int i;
    int E3AKS2aL96I [50];
    char *p;
    char a [500];
    gets (a);
    int Z2AJIzlwyGB = 1;
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
    {
        p = a;
        while (!('\0' == *p)) {
            if (*p == ' ') {
                E3AKS2aL96I[Z2AJIzlwyGB] = p - a;
                Z2AJIzlwyGB = Z2AJIzlwyGB +1;
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
            p = p + 1;
        };
    }
    E3AKS2aL96I[(825 - 825)] = -1;
    E3AKS2aL96I[Z2AJIzlwyGB] = strlen (a);
    max = E3AKS2aL96I[1] - E3AKS2aL96I[(389 - 389)];
    kxSBz9MjNwWT = E3AKS2aL96I[1] - E3AKS2aL96I[(491 - 491)];
    KWunTjNLADe = E3AKS2aL96I[0];
    max2 = E3AKS2aL96I[1];
    SfkEPtK8Ryd3 = E3AKS2aL96I[0];
    rb35vX6 = E3AKS2aL96I[1];
    {
        i = 1;
        while (i < Z2AJIzlwyGB) {
            if (max < E3AKS2aL96I[i + 1] - E3AKS2aL96I[i]) {
                KWunTjNLADe = E3AKS2aL96I[i];
                max2 = E3AKS2aL96I[i + 1];
                max = max2 - KWunTjNLADe;
            }
            if (E3AKS2aL96I[i + 1] - E3AKS2aL96I[i] < kxSBz9MjNwWT) {
                SfkEPtK8Ryd3 = E3AKS2aL96I[i];
                rb35vX6 = E3AKS2aL96I[i + 1];
                kxSBz9MjNwWT = rb35vX6 - SfkEPtK8Ryd3;
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
            i = i + 1;
        };
    }
    {
        p = a + KWunTjNLADe +1;
        while (p < a + max2) {
            printf ("%c", *p);
            p = p + 1;
        };
    }
    for (p = a + SfkEPtK8Ryd3 +1; p < a + rb35vX6; p = p + 1)
        printf ("%c", *p);
    printf ("\n");
    return 0;
}

