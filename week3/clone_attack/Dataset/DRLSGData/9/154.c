int main () {
    char id [(705 - 605)] [(377 - 367)];
    int Qvzk0heSF;
    int nKteg2Cw;
    int uREhAXJZt8 [(1028 - 928)];
    int Jp21sgrkd;
    int VoPef0y;
    int odxatGWK;
    int Yg3tuCoQ;
    Qvzk0heSF = (483 - 483);
    scanf ("%d", &nKteg2Cw);
    for (Jp21sgrkd = (45 - 45); Jp21sgrkd < nKteg2Cw; Jp21sgrkd++) {
        scanf ("%s %d", &(id[Jp21sgrkd]), &(uREhAXJZt8[Jp21sgrkd]));
    }
    char j3b0mq [(812 - 712)] [(803 - 793)];
    char A1Kryn9Zlbx [(616 - 606)];
    int DYmTiZPGsL [(342 - 242)];
    for (Jp21sgrkd = (378 - 378); nKteg2Cw > Jp21sgrkd; Jp21sgrkd++) {
        if (uREhAXJZt8[Jp21sgrkd] > (286 - 227)) {
            DYmTiZPGsL[Qvzk0heSF] = uREhAXJZt8[Jp21sgrkd];
            strcpy (j3b0mq[Qvzk0heSF], id[Jp21sgrkd]);
            Qvzk0heSF++;
        }
    }
    odxatGWK = Qvzk0heSF;
    for (VoPef0y = (362 - 361); odxatGWK >= VoPef0y; VoPef0y = VoPef0y +(33 - 32)) {
        for (Qvzk0heSF = (762 - 762); odxatGWK - VoPef0y > Qvzk0heSF; Qvzk0heSF++) {
            if (DYmTiZPGsL[Qvzk0heSF] < DYmTiZPGsL[Qvzk0heSF +(158 - 157)]) {
                Yg3tuCoQ = DYmTiZPGsL[Qvzk0heSF];
                strcpy (A1Kryn9Zlbx, j3b0mq[Qvzk0heSF]);
                DYmTiZPGsL[Qvzk0heSF] = DYmTiZPGsL[Qvzk0heSF +(634 - 633)];
                strcpy (j3b0mq[Qvzk0heSF], j3b0mq[Qvzk0heSF +(447 - 446)]);
                DYmTiZPGsL[Qvzk0heSF +(791 - 790)] = Yg3tuCoQ;
                strcpy (j3b0mq[Qvzk0heSF +(100 - 99)], A1Kryn9Zlbx);
            }
        }
    }
    for (Qvzk0heSF = (200 - 200); odxatGWK > Qvzk0heSF; Qvzk0heSF++) {
        printf ("%s\n", j3b0mq[Qvzk0heSF]);
    }
    for (Jp21sgrkd = (197 - 197); Jp21sgrkd < nKteg2Cw; Jp21sgrkd++) {
        if (uREhAXJZt8[Jp21sgrkd] < (971 - 911)) {
            printf ("%s\n", id[Jp21sgrkd]);
        }
    }
    return 0;
}

