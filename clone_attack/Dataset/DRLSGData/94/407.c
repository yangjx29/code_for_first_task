int main () {
    int DmJIsKr;
    int FsHwDSrP;
    int k;
    int m1A8LIeGV;
    int cCWPYKXQuMk;
    int typfSPwX5W [(804 - 303)];
    int yfwLh3TRU27;
    FsHwDSrP = (714 - 714);
    scanf ("%d", &m1A8LIeGV);
    k = (580 - 579);
    yfwLh3TRU27 = (103 - 103);
    DmJIsKr = (925 - 925);
    for (DmJIsKr = (345 - 345); m1A8LIeGV > DmJIsKr; DmJIsKr++) {
        scanf ("%d", &typfSPwX5W[DmJIsKr]);
    }
    {
        k = 0;
        while (m1A8LIeGV >= k) {
            k++;
            yfwLh3TRU27 = 0;
            while (yfwLh3TRU27 < m1A8LIeGV) {
                if (typfSPwX5W[yfwLh3TRU27 + 1] < typfSPwX5W[yfwLh3TRU27]) {
                    cCWPYKXQuMk = typfSPwX5W[yfwLh3TRU27 + 1];
                    typfSPwX5W[yfwLh3TRU27 + 1] = typfSPwX5W[yfwLh3TRU27];
                    typfSPwX5W[yfwLh3TRU27] = cCWPYKXQuMk;
                }
                yfwLh3TRU27++;
            }
        }
    }
    for (yfwLh3TRU27 = 0; yfwLh3TRU27 <= m1A8LIeGV; yfwLh3TRU27++) {
        if (typfSPwX5W[yfwLh3TRU27] % 2 == 1) {
            if (FsHwDSrP == 0) {
                printf ("%d", typfSPwX5W[yfwLh3TRU27]);
            }
            else {
                printf (",%d", typfSPwX5W[yfwLh3TRU27]);
            }
            FsHwDSrP++;
        }
    }
    return 0;
}

