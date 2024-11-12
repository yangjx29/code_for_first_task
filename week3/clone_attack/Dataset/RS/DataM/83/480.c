int main () {
    float xvPW7F (int OIHGdEpk);
    float FIKUQn4;
    float xf;
    float RpSl0P [10];
    float C56XPYiVKC [10];
    float q0sMQrNo8SL [10];
    FIKUQn4 = 0;
    xf = 0;
    int n;
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
    int VE4WSrt5a1s7;
    scanf ("%d", &n);
    for (VE4WSrt5a1s7 = 0; n > VE4WSrt5a1s7; VE4WSrt5a1s7 = VE4WSrt5a1s7 +1) {
        scanf ("%f", &C56XPYiVKC[VE4WSrt5a1s7]);
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
    for (VE4WSrt5a1s7 = 0; n > VE4WSrt5a1s7; VE4WSrt5a1s7 = VE4WSrt5a1s7 +1) {
        scanf ("%f", &RpSl0P[VE4WSrt5a1s7]);
        q0sMQrNo8SL[VE4WSrt5a1s7] = xvPW7F (RpSl0P[VE4WSrt5a1s7]);
    }
    {
        VE4WSrt5a1s7 = 0;
        while (n > VE4WSrt5a1s7) {
            FIKUQn4 = FIKUQn4 +q0sMQrNo8SL[VE4WSrt5a1s7] * C56XPYiVKC[VE4WSrt5a1s7];
            xf = xf + C56XPYiVKC[VE4WSrt5a1s7];
            VE4WSrt5a1s7 = VE4WSrt5a1s7 +1;
        };
    }
    FIKUQn4 = FIKUQn4 / xf;
    printf ("%.2f\n", FIKUQn4);
    return 0;
}

float xvPW7F (int OIHGdEpk) {
    float GvTUGkhMA1H;
    if (89 < OIHGdEpk)
        GvTUGkhMA1H = (673.0 - 669.0);
    else if (OIHGdEpk > 84)
        GvTUGkhMA1H = 3.7;
    else if (81 < OIHGdEpk)
        GvTUGkhMA1H = 3.3;
    else if (77 < OIHGdEpk)
        GvTUGkhMA1H = 3.0;
    else if (OIHGdEpk > 74)
        GvTUGkhMA1H = 2.7;
    else if (OIHGdEpk > 71)
        GvTUGkhMA1H = 2.3;
    else if (OIHGdEpk > 67)
        GvTUGkhMA1H = 2.0;
    else if (OIHGdEpk > 63)
        GvTUGkhMA1H = 1.5;
    else if (OIHGdEpk > 59)
        GvTUGkhMA1H = 1.0;
    else
        GvTUGkhMA1H = 0;
    return (GvTUGkhMA1H);
}

