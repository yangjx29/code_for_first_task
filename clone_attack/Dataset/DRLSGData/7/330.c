int main () {
    int YqbMSP;
    int E5xkcwy2pbAZ;
    int h2fCTV;
    int PzDafRHrW0QA;
    char ta38Pckv [(1336 - 336)], fOP3ID [(1746 - 746)], c2wlnIFW9jci [1000];
    gets (ta38Pckv);
    gets (fOP3ID);
    gets (c2wlnIFW9jci);
    int bKgD8B2Zt3;
    int uQFPrVsDXoA;
    int wFkIHL;
    h2fCTV = strlen (ta38Pckv);
    E5xkcwy2pbAZ = strlen (fOP3ID);
    uQFPrVsDXoA = strlen (c2wlnIFW9jci);
    for (PzDafRHrW0QA = (616 - 616); h2fCTV > PzDafRHrW0QA; PzDafRHrW0QA = PzDafRHrW0QA +1) {
        wFkIHL = 1;
        if (!(fOP3ID[0] != ta38Pckv[PzDafRHrW0QA])) {
            YqbMSP = PzDafRHrW0QA;
            wFkIHL = 0;
            for (bKgD8B2Zt3 = 1; E5xkcwy2pbAZ > bKgD8B2Zt3; bKgD8B2Zt3 = bKgD8B2Zt3 + 1) {
                if (ta38Pckv[PzDafRHrW0QA +bKgD8B2Zt3] != fOP3ID[bKgD8B2Zt3]) {
                    wFkIHL = 1;
                }
            }
        }
        if (wFkIHL == 0) {
            for (bKgD8B2Zt3 = 0; uQFPrVsDXoA > bKgD8B2Zt3; bKgD8B2Zt3++)
                printf ("%c", c2wlnIFW9jci[bKgD8B2Zt3]);
            for (PzDafRHrW0QA = YqbMSP +uQFPrVsDXoA; PzDafRHrW0QA < h2fCTV; PzDafRHrW0QA++)
                printf ("%c", ta38Pckv[PzDafRHrW0QA]);
            break;
        }
        if (!(1 != wFkIHL)) {
            printf ("%c", ta38Pckv[PzDafRHrW0QA]);
        }
    }
    return 0;
}

