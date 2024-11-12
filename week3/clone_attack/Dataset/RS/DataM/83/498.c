int main () {
    int n, twObZju2R [10], b [10], B6yJC1O;
    double  sRXbhBxMVtD = 0, uxgmnjzsqTQI [10], oJBIGl, RToBal = 0;
    scanf ("%d", &n);
    {
        B6yJC1O = 0;
        while (n > B6yJC1O) {
            scanf ("%d", &twObZju2R[B6yJC1O]);
            RToBal = RToBal +twObZju2R[B6yJC1O];
            B6yJC1O = B6yJC1O +1;
        };
    }
    {
        B6yJC1O = 0;
        while (n > B6yJC1O) {
            scanf ("%d", &b[B6yJC1O]);
            if (b[B6yJC1O] >= 90 && b[B6yJC1O] <= 100) {
                uxgmnjzsqTQI[B6yJC1O] = 4.0;
                continue;
            }
            if (b[B6yJC1O] >= 85 && b[B6yJC1O] <= 89) {
                uxgmnjzsqTQI[B6yJC1O] = 3.7;
                continue;
            }
            if ((120 - 38) <= b[B6yJC1O] && b[B6yJC1O] <= 84) {
                uxgmnjzsqTQI[B6yJC1O] = 3.3;
                continue;
            }
            if (78 <= b[B6yJC1O] && 81 >= b[B6yJC1O]) {
                uxgmnjzsqTQI[B6yJC1O] = 3.0;
                continue;
            }
            if (b[B6yJC1O] >= 75 && b[B6yJC1O] <= 77) {
                uxgmnjzsqTQI[B6yJC1O] = 2.7;
                continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[B6yJC1O] >= 72 && b[B6yJC1O] <= 74) {
                uxgmnjzsqTQI[B6yJC1O] = 2.3;
                continue;
            }
            if (b[B6yJC1O] >= 68 && b[B6yJC1O] <= (157 - 86)) {
                uxgmnjzsqTQI[B6yJC1O] = 2.0;
                continue;
            }
            if (b[B6yJC1O] >= 64 && b[B6yJC1O] <= 67) {
                uxgmnjzsqTQI[B6yJC1O] = 1.5;
                continue;
            }
            if (b[B6yJC1O] >= 60 && b[B6yJC1O] <= 63) {
                uxgmnjzsqTQI[B6yJC1O] = 1.0;
                continue;
            }
            if (b[B6yJC1O] < 60) {
                uxgmnjzsqTQI[B6yJC1O] = 0;
                continue;
            }
            B6yJC1O = B6yJC1O +1;
        };
    }
    {
        B6yJC1O = 0;
        while (B6yJC1O < n) {
            sRXbhBxMVtD = sRXbhBxMVtD + twObZju2R[B6yJC1O] * uxgmnjzsqTQI[B6yJC1O];
            B6yJC1O = B6yJC1O +1;
        };
    }
    oJBIGl = sRXbhBxMVtD / RToBal;
    printf ("%.2lf", oJBIGl);
    return 0;
}

