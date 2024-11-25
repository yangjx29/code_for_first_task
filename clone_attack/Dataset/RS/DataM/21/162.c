int main () {
    double  feyGWsgo5D, PH0sOFBLmeyP, nN5KhGi, sum = 0;
    int kDxsLor6 [300];
    int i;
    int y8s5rf6W4;
    int fPj30xN8E;
    int n;
    int Ggf8Et;
    int kDHEJprPjvoY [300];
    scanf ("%d", &n);
    for (i = 0; n - 1 >= i; i = i + 1) {
        scanf ("%d", &kDxsLor6[i]);
        sum = sum + kDxsLor6[i];
    }
    feyGWsgo5D = sum / n;
    nN5KhGi = fabs (kDxsLor6[0] - feyGWsgo5D);
    {
        i = 0;
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
        while (n - 1 >= i) {
            PH0sOFBLmeyP = fabs (kDxsLor6[i] - feyGWsgo5D);
            i = i + 1;
            if (nN5KhGi < PH0sOFBLmeyP)
                nN5KhGi = PH0sOFBLmeyP;
        };
    }
    for (i = 0, y8s5rf6W4 = 0; i <= n - 1; i = i + 1) {
        PH0sOFBLmeyP = fabs (kDxsLor6[i] - feyGWsgo5D);
        if (1e-6 > (nN5KhGi - PH0sOFBLmeyP)) {
            kDHEJprPjvoY[y8s5rf6W4] = kDxsLor6[i];
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
            y8s5rf6W4++;
        };
    }
    {
        fPj30xN8E = 0;
        while (fPj30xN8E < y8s5rf6W4) {
            {
                i = 0;
                while (i < y8s5rf6W4 - fPj30xN8E - 1) {
                    if (kDHEJprPjvoY[i] > kDHEJprPjvoY[i + 1]) {
                        Ggf8Et = kDHEJprPjvoY[i];
                        kDHEJprPjvoY[i] = kDHEJprPjvoY[i + 1];
                        kDHEJprPjvoY[i + 1] = Ggf8Et;
                    }
                    i = i + 1;
                };
            }
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
            fPj30xN8E = fPj30xN8E + 1;
        };
    }
    printf ("%d", kDHEJprPjvoY[0]);
    for (i = 1; i < y8s5rf6W4; i = i + 1)
        printf (",%d", kDHEJprPjvoY[i]);
    return 0;
}

