int main () {
    int jJ8rDs;
    int HtO8gWlP;
    char a [501], b [500] [5];
    gets (a);
    int uPDKzbNi;
    int YS5GC2M1W;
    int CT9oWnKkDuj6 [500] = {0};
    int UwLSFduR [500] = {0};
    int diXwznEYk;
    int m;
    YS5GC2M1W = strlen (a);
    HtO8gWlP = 1;
    jJ8rDs = 0;
    scanf ("%d\n", &m);
    for (uPDKzbNi = 0; YS5GC2M1W -m + 1 > uPDKzbNi; uPDKzbNi = uPDKzbNi + 1) {
        for (diXwznEYk = 0; diXwznEYk < m; diXwznEYk = diXwznEYk + 1) {
            b[uPDKzbNi][diXwznEYk] = a[uPDKzbNi + diXwznEYk];
        }
        b[uPDKzbNi][diXwznEYk] = 0;
    }
    for (uPDKzbNi = 0; YS5GC2M1W -m + 1 > uPDKzbNi; uPDKzbNi = uPDKzbNi + 1) {
        UwLSFduR[uPDKzbNi] = 1;
        for (diXwznEYk = uPDKzbNi + 1; YS5GC2M1W -m + 1 > diXwznEYk; diXwznEYk = diXwznEYk + 1) {
            if (!(0 != strcmp (b[uPDKzbNi], b[diXwznEYk])))
                UwLSFduR[uPDKzbNi]++;
        }
    }
    for (uPDKzbNi = 0; YS5GC2M1W -m + 1 > uPDKzbNi; uPDKzbNi = uPDKzbNi + 1) {
        if (UwLSFduR[uPDKzbNi] == HtO8gWlP &&HtO8gWlP != 1) {
            CT9oWnKkDuj6[jJ8rDs] = uPDKzbNi;
            jJ8rDs = jJ8rDs + 1;
        }
        else if (HtO8gWlP < UwLSFduR[uPDKzbNi]) {
            HtO8gWlP = UwLSFduR[uPDKzbNi];
            jJ8rDs = 0;
            CT9oWnKkDuj6[jJ8rDs] = uPDKzbNi;
            jJ8rDs = jJ8rDs + 1;
        }
    }
    if (HtO8gWlP == 1)
        ;
    else {
        printf ("%d", HtO8gWlP);
        for (uPDKzbNi = 0; uPDKzbNi < jJ8rDs; uPDKzbNi = uPDKzbNi + 1) {
            printf ("\n%s", b[CT9oWnKkDuj6[uPDKzbNi]]);
        }
    }
    return 0;
}

