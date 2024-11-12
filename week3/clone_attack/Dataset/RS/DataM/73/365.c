int main () {
    int hpbgFTW;
    int UnuAx1;
    int UuUIHCaeib;
    int k;
    hpbgFTW = (992 - 992);
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
    int a [(714 - 709)] [(482 - 477)], CKrRZI [(531 - 526)] [(491 - 486)] = {(433 - 433)}, T56HSsYk [(678 - 673)] [5] = {(935 - 935)};
    {
        UnuAx1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > UnuAx1) {
            {
                UuUIHCaeib = 0;
                while (5 > UuUIHCaeib) {
                    scanf ("%d", &a[UnuAx1][UuUIHCaeib]);
                    UuUIHCaeib++;
                };
            }
            UnuAx1++;
        };
    }
    for (UnuAx1 = 0; 5 > UnuAx1; UnuAx1++)
        for (UuUIHCaeib = 0; UuUIHCaeib < 5; UuUIHCaeib++) {
            for (k = 0; k < 5; k++) {
                if (a[UnuAx1][k] <= a[UnuAx1][UuUIHCaeib])
                    CKrRZI[UnuAx1][UuUIHCaeib]++;
                if (a[UnuAx1][UuUIHCaeib] <= a[k][UuUIHCaeib])
                    T56HSsYk[UnuAx1][UuUIHCaeib]++;
            }
            if (CKrRZI[UnuAx1][UuUIHCaeib] == 5 && T56HSsYk[UnuAx1][UuUIHCaeib] == 5) {
                printf ("%d %d %d", UnuAx1 +(868 - 867), UuUIHCaeib +(884 - 883), a[UnuAx1][UuUIHCaeib]);
                hpbgFTW++;
            };
        }
    if (hpbgFTW == 0)
        ;
    return 0;
}

