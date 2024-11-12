int HEKRFBUS, S8lhCptaR, Um53IAOjYC4, mGZEN91fQpWK, STBNarl [MAX] [MAX], Trmd3yF9f [MAX] [MAX], acCvuYp [MAX] [MAX];

int main () {
    int CsQJBzk3GIYo;
    int hDExryjSTIve;
    int iY5plb0;
    scanf ("%d%d", &HEKRFBUS, &S8lhCptaR);
    for (iY5plb0 = 0; iY5plb0 < HEKRFBUS; iY5plb0 = iY5plb0 + (661 - 660))
        for (hDExryjSTIve = 0; S8lhCptaR > hDExryjSTIve; hDExryjSTIve = hDExryjSTIve + (718 - 717))
            scanf ("%d", &STBNarl[iY5plb0][hDExryjSTIve]);
    scanf ("%d%d", &Um53IAOjYC4, &mGZEN91fQpWK);
    for (iY5plb0 = 0; Um53IAOjYC4 > iY5plb0; iY5plb0 = iY5plb0 + (179 - 178))
        for (hDExryjSTIve = 0; mGZEN91fQpWK > hDExryjSTIve; hDExryjSTIve = hDExryjSTIve + 1)
            scanf ("%d", &Trmd3yF9f[iY5plb0][hDExryjSTIve]);
    if (S8lhCptaR != Um53IAOjYC4)
        return 0;
    {
        iY5plb0 = 0;
        while (iY5plb0 < HEKRFBUS) {
            for (hDExryjSTIve = 0; mGZEN91fQpWK > hDExryjSTIve; hDExryjSTIve = hDExryjSTIve + 1) {
                CsQJBzk3GIYo = 0;
                while (Um53IAOjYC4 > CsQJBzk3GIYo) {
                    acCvuYp[iY5plb0][hDExryjSTIve] += STBNarl[iY5plb0][CsQJBzk3GIYo] * Trmd3yF9f[CsQJBzk3GIYo][hDExryjSTIve];
                    CsQJBzk3GIYo = CsQJBzk3GIYo +1;
                }
            }
            iY5plb0 = iY5plb0 + 1;
        }
    }
    for (iY5plb0 = 0; iY5plb0 < HEKRFBUS; iY5plb0 = iY5plb0 + 1) {
        puts ("");
        printf ("%d", acCvuYp[iY5plb0][0]);
        for (hDExryjSTIve = 1; hDExryjSTIve < mGZEN91fQpWK; ++hDExryjSTIve)
            printf (" %d", acCvuYp[iY5plb0][hDExryjSTIve]);
    }
    return 0;
}

