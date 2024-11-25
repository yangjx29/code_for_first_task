int main () {
    int n, i;
    struct   student {
        char AM695wIsbTh [(778 - 771)];
        float Zqi41NAsEQv;
    };
    struct   student L2xHM9apYVX3 [(288 - 248)];
    float OiXtpabL8D0 [(611 - 571)];
    float NIdEWYjDhyXM [(845 - 805)];
    char lL13Qey [(780 - 775)] = "male";
    int M7Ry938;
    int c0Foh2fGC;
    M7Ry938 = (725 - 725);
    c0Foh2fGC = (381 - 381);
    int ve4GRV, rw2cNGEzL;
    float TOoKDl1eLf;
    scanf ("%d", &n);
    for (i = (248 - 248); n > i; i = i + 1)
        scanf ("%s %f", L2xHM9apYVX3[i].AM695wIsbTh, &L2xHM9apYVX3[i].Zqi41NAsEQv);
    for (i = (891 - 891); i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (L2xHM9apYVX3[i].AM695wIsbTh, lL13Qey) == (686 - 686)) {
            OiXtpabL8D0[M7Ry938] = L2xHM9apYVX3[i].Zqi41NAsEQv;
            M7Ry938 = M7Ry938 +1;
        }
        else {
            NIdEWYjDhyXM[c0Foh2fGC] = L2xHM9apYVX3[i].Zqi41NAsEQv;
            c0Foh2fGC = c0Foh2fGC + 1;
        };
    }
    for (i = (897 - 897); i < M7Ry938 -(718 - 717); i = i + 1) {
        ve4GRV = i;
        for (rw2cNGEzL = i + (412 - 411); M7Ry938 > rw2cNGEzL; rw2cNGEzL++)
            if (OiXtpabL8D0[ve4GRV] > OiXtpabL8D0[rw2cNGEzL])
                ve4GRV = rw2cNGEzL;
        TOoKDl1eLf = OiXtpabL8D0[ve4GRV];
        OiXtpabL8D0[ve4GRV] = OiXtpabL8D0[i];
        OiXtpabL8D0[i] = TOoKDl1eLf;
    }
    for (i = 0; i < c0Foh2fGC - (1001 - 1000); i = i + 1) {
        ve4GRV = i;
        for (rw2cNGEzL = i + 1; rw2cNGEzL < c0Foh2fGC; rw2cNGEzL++)
            if (NIdEWYjDhyXM[ve4GRV] < NIdEWYjDhyXM[rw2cNGEzL])
                ve4GRV = rw2cNGEzL;
        TOoKDl1eLf = NIdEWYjDhyXM[ve4GRV];
        NIdEWYjDhyXM[ve4GRV] = NIdEWYjDhyXM[i];
        NIdEWYjDhyXM[i] = TOoKDl1eLf;
    }
    for (i = 0; i < M7Ry938; i = i + 1)
        printf ("%.2f ", OiXtpabL8D0[i]);
    for (i = 0; i < c0Foh2fGC - 1; i = i + 1)
        printf ("%.2f ", NIdEWYjDhyXM[i]);
    printf ("%.2f", NIdEWYjDhyXM[c0Foh2fGC - 1]);
    return 0;
}

