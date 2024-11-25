int main () {
    int Su5HJBvC, CVB5qtxbWn, iw85vAi, bZxGisNpIXV, p, POUDHmd2;
    int EQHkaZ [100000];
    scanf ("%d", &Su5HJBvC);
    POUDHmd2 = Su5HJBvC;
    for (CVB5qtxbWn = 0; Su5HJBvC > CVB5qtxbWn; CVB5qtxbWn = CVB5qtxbWn +1) {
        scanf ("%d", &EQHkaZ[CVB5qtxbWn]);
    }
    scanf ("%d", &bZxGisNpIXV);
    for (CVB5qtxbWn = 0; CVB5qtxbWn < POUDHmd2; CVB5qtxbWn = CVB5qtxbWn +1) {
        if (EQHkaZ[CVB5qtxbWn] == bZxGisNpIXV) {
            POUDHmd2 = POUDHmd2 -1;
            iw85vAi = EQHkaZ[CVB5qtxbWn];
            for (p = CVB5qtxbWn; p < Su5HJBvC; p = p + 1) {
                EQHkaZ[p] = EQHkaZ[p + 1];
            }
            CVB5qtxbWn = CVB5qtxbWn -1;
            EQHkaZ[Su5HJBvC -1] = iw85vAi;
        };
    }
    for (CVB5qtxbWn = 0; CVB5qtxbWn < POUDHmd2 -1; CVB5qtxbWn = CVB5qtxbWn +1) {
        printf ("%d ", EQHkaZ[CVB5qtxbWn]);
    }
    printf ("%d", EQHkaZ[POUDHmd2 -1]);
    return 0;
}

