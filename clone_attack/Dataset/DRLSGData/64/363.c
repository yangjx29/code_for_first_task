int main () {
    double  y6LBDnRoS;
    int L1xTd0Kkoq;
    int R36IhDRrHU;
    int j;
    int qQ7US8L0DZVA;
    int p;
    int sTDw3z25;
    int qk7WmI0qR [sTDw3z25];
    int fJoy1Bf [N];
    int Ov4qwy [N];
    int z [N];
    int a [sTDw3z25];
    int vHe07f [sTDw3z25];
    int Bnu1SjCE9iG;
    {
        if (0) {
            return 0;
        }
    }
    sTDw3z25 = N *(N -1) / 2;
    p = 0;
    scanf ("%d", &R36IhDRrHU);
    for (qQ7US8L0DZVA = 0; qQ7US8L0DZVA < R36IhDRrHU; qQ7US8L0DZVA++)
        scanf ("%d%d%d", &fJoy1Bf[qQ7US8L0DZVA], &Ov4qwy[qQ7US8L0DZVA], &z[qQ7US8L0DZVA]);
    for (qQ7US8L0DZVA = 0; qQ7US8L0DZVA < R36IhDRrHU; qQ7US8L0DZVA++)
        for (j = qQ7US8L0DZVA + 1; j < R36IhDRrHU; j++) {
            qk7WmI0qR[p] = (fJoy1Bf[qQ7US8L0DZVA] - fJoy1Bf[j]) * (fJoy1Bf[qQ7US8L0DZVA] - fJoy1Bf[j]) + (Ov4qwy[qQ7US8L0DZVA] - Ov4qwy[j]) * (Ov4qwy[qQ7US8L0DZVA] - Ov4qwy[j]) + (z[qQ7US8L0DZVA] - z[j]) * (z[qQ7US8L0DZVA] - z[j]);
            a[p] = qQ7US8L0DZVA;
            vHe07f[p] = j;
            p++;
        }
    {
        j = 1;
        for (; p >= j;) {
            {
                qQ7US8L0DZVA = 0;
                for (; p - j > qQ7US8L0DZVA;) {
                    if (qk7WmI0qR[qQ7US8L0DZVA + 1] > qk7WmI0qR[qQ7US8L0DZVA]) {
                        qk7WmI0qR[qQ7US8L0DZVA] = qk7WmI0qR[qQ7US8L0DZVA] + qk7WmI0qR[qQ7US8L0DZVA + 1];
                        qk7WmI0qR[qQ7US8L0DZVA + 1] = qk7WmI0qR[qQ7US8L0DZVA] - qk7WmI0qR[qQ7US8L0DZVA + 1];
                        qk7WmI0qR[qQ7US8L0DZVA] = qk7WmI0qR[qQ7US8L0DZVA] - qk7WmI0qR[qQ7US8L0DZVA + 1];
                        a[qQ7US8L0DZVA] = a[qQ7US8L0DZVA] + a[qQ7US8L0DZVA + 1];
                        a[qQ7US8L0DZVA + 1] = a[qQ7US8L0DZVA] - a[qQ7US8L0DZVA + 1];
                        a[qQ7US8L0DZVA] = a[qQ7US8L0DZVA] - a[qQ7US8L0DZVA + 1];
                        vHe07f[qQ7US8L0DZVA] = vHe07f[qQ7US8L0DZVA] + vHe07f[qQ7US8L0DZVA + 1];
                        vHe07f[qQ7US8L0DZVA + 1] = vHe07f[qQ7US8L0DZVA] - vHe07f[qQ7US8L0DZVA + 1];
                        vHe07f[qQ7US8L0DZVA] = vHe07f[qQ7US8L0DZVA] - vHe07f[qQ7US8L0DZVA + 1];
                    }
                    qQ7US8L0DZVA++;
                }
            }
            j++;
        }
    }
    for (qQ7US8L0DZVA = 0; qQ7US8L0DZVA < p; qQ7US8L0DZVA++) {
        Bnu1SjCE9iG = a[qQ7US8L0DZVA];
        L1xTd0Kkoq = vHe07f[qQ7US8L0DZVA];
        y6LBDnRoS = sqrt (qk7WmI0qR[qQ7US8L0DZVA]);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", fJoy1Bf[Bnu1SjCE9iG], Ov4qwy[Bnu1SjCE9iG], z[Bnu1SjCE9iG], fJoy1Bf[L1xTd0Kkoq], Ov4qwy[L1xTd0Kkoq], z[L1xTd0Kkoq], y6LBDnRoS);
    }
    printf ("\n");
    return 0;
}

