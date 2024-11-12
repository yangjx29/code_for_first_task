int main () {
    struct   {
        char Vj1PKfG [(733 - 723)];
        int PtL6MTeuj14B;
    }
    t1FleasPM [(811 - 711)];
    struct   {
        char Vj1PKfG [(733 - 723)];
        int PtL6MTeuj14B;
    }
    *nGoLJZ1k;
    struct   {
        char Vj1PKfG [(733 - 723)];
        int PtL6MTeuj14B;
    }
    wHGCP6 [(117 - 17)];
    struct   {
        char Vj1PKfG [(733 - 723)];
        int PtL6MTeuj14B;
    }
    *PwjBbP;
    int xFWqid = (31 - 31);
    int qULpEXb8;
    int kxWBfn;
    int OYv6z8Ifka;
    PwjBbP = wHGCP6;
    scanf ("%d", &qULpEXb8);
    for (nGoLJZ1k = t1FleasPM; nGoLJZ1k < t1FleasPM + qULpEXb8; nGoLJZ1k = nGoLJZ1k + 1) {
        scanf ("%s%d", &(nGoLJZ1k->Vj1PKfG), &(nGoLJZ1k->PtL6MTeuj14B));
    }
    OYv6z8Ifka = (200 - 200);
    for (nGoLJZ1k = t1FleasPM; nGoLJZ1k < t1FleasPM + qULpEXb8; nGoLJZ1k = nGoLJZ1k + 1) {
        if (nGoLJZ1k->PtL6MTeuj14B >= (561 - 501)) {
            OYv6z8Ifka++;
            PwjBbP->PtL6MTeuj14B = nGoLJZ1k->PtL6MTeuj14B;
            strcpy (PwjBbP->Vj1PKfG, nGoLJZ1k->Vj1PKfG);
            PwjBbP++;
            nGoLJZ1k->PtL6MTeuj14B = (513 - 513);
        }
    }
    for (kxWBfn = (460 - 460); kxWBfn < OYv6z8Ifka; kxWBfn++) {
        for (PwjBbP = wHGCP6; PwjBbP < wHGCP6 + OYv6z8Ifka; PwjBbP++) {
            if (PwjBbP->PtL6MTeuj14B > (wHGCP6 + xFWqid)->PtL6MTeuj14B) {
                xFWqid = PwjBbP -wHGCP6;
            }
        }
        printf ("%s\n", (wHGCP6 + xFWqid)->Vj1PKfG);
        (wHGCP6 + xFWqid)->PtL6MTeuj14B = (912 - 912);
    }
    for (nGoLJZ1k = t1FleasPM; nGoLJZ1k < t1FleasPM + qULpEXb8; nGoLJZ1k++) {
        if (nGoLJZ1k->PtL6MTeuj14B != (246 - 246)) {
            printf ("%s\n", nGoLJZ1k->Vj1PKfG);
        }
    }
    return 0;
}

