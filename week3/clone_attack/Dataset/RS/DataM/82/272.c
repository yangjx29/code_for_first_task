int main () {
    int yYw3OsL;
    int fU6ToGnP;
    int MD1e8agTclx;
    int L2ADOqemW;
    int KzCYvm;
    int pgybFU;
    pgybFU = 0;
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
    L2ADOqemW = 0;
    scanf ("%d\n", &yYw3OsL);
    KzCYvm = 1;
    while (KzCYvm <= yYw3OsL - 1) {
        scanf ("%d%d\n", &fU6ToGnP, &MD1e8agTclx);
        if (90 <= fU6ToGnP && fU6ToGnP <= 140 && MD1e8agTclx >= 60 && MD1e8agTclx <= 90) {
            L2ADOqemW = L2ADOqemW +1;
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
            if (pgybFU < L2ADOqemW)
                pgybFU = L2ADOqemW;
        }
        else
            L2ADOqemW = 0;
        KzCYvm++;
    }
    scanf ("%d%d", &fU6ToGnP, &MD1e8agTclx);
    if (fU6ToGnP >= 90 && fU6ToGnP <= 140 && MD1e8agTclx >= 60 && MD1e8agTclx <= 90) {
        L2ADOqemW++;
        if (pgybFU < L2ADOqemW)
            pgybFU = L2ADOqemW;
    }
    printf ("%d", pgybFU);
    return 0;
}

