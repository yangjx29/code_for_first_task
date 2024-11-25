double  lQ9NPu5 (double  yDtLIVYZ0n7) {
    long  long  zCuE7DO5ds;
    if (yDtLIVYZ0n7 > 0)
        zCuE7DO5ds = (yDtLIVYZ0n7 + 0.000005) * 100000;
    else
        zCuE7DO5ds = (yDtLIVYZ0n7 - 0.000005) * 100000;
    yDtLIVYZ0n7 = (double ) zCuE7DO5ds / 100000;
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
    yDtLIVYZ0n7 = yDtLIVYZ0n7;
    return yDtLIVYZ0n7;
}

int main () {
    int nVgtLkHjapuv, GsRVK7zuEIS;
    double  TzVxDsL, yKoxE4fc, hKAe5g8mLP, bl9qjN, F69lNB5jw2s, C2cb4ekBQE9, yaVRoZEQlkz, UKp1B5, rhk24Wsba;
    scanf ("%d", &nVgtLkHjapuv);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (GsRVK7zuEIS = 1; GsRVK7zuEIS <= nVgtLkHjapuv; GsRVK7zuEIS = GsRVK7zuEIS +1) {
        scanf ("%lf %lf %lf", &TzVxDsL, &yKoxE4fc, &hKAe5g8mLP);
        bl9qjN = yKoxE4fc * yKoxE4fc - 4 * TzVxDsL *hKAe5g8mLP;
        C2cb4ekBQE9 = sqrt (fabs (bl9qjN));
        UKp1B5 = sqrt (fabs (bl9qjN)) / (2 * TzVxDsL);
        F69lNB5jw2s = -yKoxE4fc;
        yaVRoZEQlkz = -yKoxE4fc / (2 * TzVxDsL);
        rhk24Wsba = 2 * TzVxDsL;
        if (C2cb4ekBQE9 >= 0.000005 && bl9qjN > 0)
            printf ("x1=%.5lf;x2=%.5f\n", lQ9NPu5 ((F69lNB5jw2s +C2cb4ekBQE9) / rhk24Wsba), lQ9NPu5 ((F69lNB5jw2s -C2cb4ekBQE9) / rhk24Wsba));
        else if (bl9qjN < 0)
            printf ("x1=%.5lf+%.5fi;x2=%.5lf-%.5lfi\n", lQ9NPu5 (yaVRoZEQlkz), UKp1B5, lQ9NPu5 (yaVRoZEQlkz), UKp1B5);
        else
            printf ("x1=x2=%.5f\n", lQ9NPu5 (yaVRoZEQlkz));
    }
    return 0;
}

