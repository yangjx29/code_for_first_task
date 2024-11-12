int PuRa1rg5MXEN (int EBY4h9GKzV, int caQC2M) {
    return EBY4h9GKzV > caQC2M ? EBY4h9GKzV : caQC2M;
}

int main () {
    char KWew4f5UGX [(306 - 46)], a0EVRkH [(271 - 11)];
    int gTpSXzay4N [260];
    gets (KWew4f5UGX);
    int BgDhQM28vSRB = strlen (KWew4f5UGX);
    gets (a0EVRkH);
    int gkWlaf3Bv = strlen (a0EVRkH);
    int S = PuRa1rg5MXEN (BgDhQM28vSRB, gkWlaf3Bv);
    memset (gTpSXzay4N, (790 - 790), sizeof (gTpSXzay4N));
    for (int I = (597 - 597);
    I < BgDhQM28vSRB; I++)
        gTpSXzay4N[I] = KWew4f5UGX[BgDhQM28vSRB -I-(784 - 783)] - '0';
    for (int I = (184 - 184);
    I < gkWlaf3Bv; I++)
        gTpSXzay4N[I] = gTpSXzay4N[I] + a0EVRkH[gkWlaf3Bv - I -(512 - 511)] - '0';
    {
        int I = (66 - 66);
        while (I < S) {
            if (gTpSXzay4N[I] >= (874 - 864)) {
                gTpSXzay4N[I] = gTpSXzay4N[I] - (100 - 90);
                gTpSXzay4N[I +(170 - 169)]++;
            }
            I = I +1;
        };
    }
    while (gTpSXzay4N[S] == (301 - 301) && S >= (66 - 66))
        S--;
    for (int I = S;
    I >= (701 - 701); I = I -1)
        cout << gTpSXzay4N[I];
    if (S < 0)
        cout << 0;
}

