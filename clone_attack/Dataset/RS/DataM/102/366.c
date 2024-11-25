int main () {
    char YmNoZTgBEb [(139 - 39)] [10], byRH6lQ2 [10];
    int vAnsl0OR;
    double  T0CJQirGcPzg [100], male [100], lQ9twxW7 [100];
    int fFpCWNo, czCkfEpq = 0, f = 0, numm, jOWlVYm37Pw, Frw1xK;
    double  hDHmkVcl1;
    scanf ("%d", &vAnsl0OR);
    {
        fFpCWNo = 0;
        while (fFpCWNo < vAnsl0OR) {
            gets (byRH6lQ2);
            scanf ("%s %lf", YmNoZTgBEb[fFpCWNo], &T0CJQirGcPzg[fFpCWNo]);
            if (YmNoZTgBEb[fFpCWNo][0] == 'm') {
                male[czCkfEpq] = T0CJQirGcPzg[fFpCWNo];
                czCkfEpq = czCkfEpq + 1;
            }
            if (!('f' != YmNoZTgBEb[fFpCWNo][0])) {
                lQ9twxW7[f] = T0CJQirGcPzg[fFpCWNo];
                f = f + 1;
            }
            fFpCWNo = fFpCWNo + 1;
        };
    }
    for (fFpCWNo = 0; fFpCWNo < czCkfEpq; fFpCWNo = fFpCWNo + 1) {
        Frw1xK = 1;
        while (Frw1xK < czCkfEpq - fFpCWNo) {
            if (male[Frw1xK] < male[Frw1xK -1]) {
                hDHmkVcl1 = male[Frw1xK -1];
                male[Frw1xK -1] = male[Frw1xK];
                male[Frw1xK] = hDHmkVcl1;
            }
            Frw1xK++;
        };
    }
    for (fFpCWNo = 0; f > fFpCWNo; fFpCWNo++) {
        Frw1xK = 1;
        while (f - fFpCWNo > Frw1xK) {
            if (lQ9twxW7[Frw1xK] > lQ9twxW7[Frw1xK -1]) {
                hDHmkVcl1 = lQ9twxW7[Frw1xK -1];
                lQ9twxW7[Frw1xK -1] = lQ9twxW7[Frw1xK];
                lQ9twxW7[Frw1xK] = hDHmkVcl1;
            }
            Frw1xK++;
        };
    }
    for (fFpCWNo = 0; fFpCWNo < czCkfEpq; fFpCWNo++)
        printf ("%.2lf ", male[fFpCWNo]);
    {
        fFpCWNo = 0;
        while (fFpCWNo < f) {
            if (fFpCWNo == f - 1)
                printf ("%.2lf", lQ9twxW7[fFpCWNo]);
            else
                printf ("%.2lf ", lQ9twxW7[fFpCWNo]);
            fFpCWNo = fFpCWNo + 1;
        };
    }
    return 0;
}

