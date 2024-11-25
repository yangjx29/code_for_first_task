int main () {
    int VtgC2vs;
    VtgC2vs = 0;
    double  hNGhZwn;
    double  BifEyGcUvD3B;
    hNGhZwn = 0;
    int sz [10], E2YvRb5L [10];
    int Ro4VBb;
    int kNnkS5ed4V;
    double  fd4CT1Sw3 [10];
    scanf ("%d", &kNnkS5ed4V);
    for (Ro4VBb = 0; kNnkS5ed4V > Ro4VBb; Ro4VBb = Ro4VBb +1) {
        scanf ("%d", &sz[Ro4VBb]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        Ro4VBb = 0;
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
        while (Ro4VBb < kNnkS5ed4V) {
            scanf ("%d", &E2YvRb5L[Ro4VBb]);
            Ro4VBb = Ro4VBb +1;
        };
    }
    {
        Ro4VBb = 0;
        while (Ro4VBb < kNnkS5ed4V) {
            if (E2YvRb5L[Ro4VBb] < 60)
                fd4CT1Sw3[Ro4VBb] = 0;
            else {
                if (64 > E2YvRb5L[Ro4VBb])
                    fd4CT1Sw3[Ro4VBb] = 1.0;
                else if (E2YvRb5L[Ro4VBb] < 68)
                    fd4CT1Sw3[Ro4VBb] = 1.5;
                else if (E2YvRb5L[Ro4VBb] < 72)
                    fd4CT1Sw3[Ro4VBb] = 2.0;
                else if (E2YvRb5L[Ro4VBb] < 75)
                    fd4CT1Sw3[Ro4VBb] = 2.3;
                else if (E2YvRb5L[Ro4VBb] < 78)
                    fd4CT1Sw3[Ro4VBb] = 2.7;
                else if (E2YvRb5L[Ro4VBb] < 82)
                    fd4CT1Sw3[Ro4VBb] = 3.0;
                else if (E2YvRb5L[Ro4VBb] < 85)
                    fd4CT1Sw3[Ro4VBb] = 3.3;
                else if ((518 - 428) > E2YvRb5L[Ro4VBb])
                    fd4CT1Sw3[Ro4VBb] = 3.7;
                else if (E2YvRb5L[Ro4VBb] <= 100)
                    fd4CT1Sw3[Ro4VBb] = 4.0;
            }
            Ro4VBb = Ro4VBb +1;
        };
    }
    {
        Ro4VBb = 0;
        while (Ro4VBb < kNnkS5ed4V) {
            hNGhZwn = hNGhZwn + fd4CT1Sw3[Ro4VBb] * sz[Ro4VBb];
            VtgC2vs = VtgC2vs +sz[Ro4VBb];
            Ro4VBb = Ro4VBb +1;
        };
    }
    BifEyGcUvD3B = hNGhZwn / VtgC2vs;
    printf ("%.2lf", BifEyGcUvD3B);
    return 0;
}

