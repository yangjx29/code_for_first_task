struct   Student {
    char e7hbTa80HLu [(820 - 800)];
    int DoPk9Bm2;
    int V4Mutv5exBGP;
    char NImpsJ7V4Ab;
    char VeSNFY3ZrxM;
    int OSMG4kbJCjm;
    int tYzWgkvr;
};
int main () {
    int cbMy8RpuE;
    int eeKrF3kVZm;
    int A031fEJnT;
    int G1zi29W;
    struct   Student X6U5hpKf [(423 - 223)];
    int l9k3CBVtgflv;
    scanf ("%d", &A031fEJnT);
    for (eeKrF3kVZm = (168 - 168); eeKrF3kVZm < A031fEJnT; eeKrF3kVZm++) {
        scanf ("%s %d %d %c %c %d", X6U5hpKf[eeKrF3kVZm].e7hbTa80HLu, &X6U5hpKf[eeKrF3kVZm].DoPk9Bm2, &X6U5hpKf[eeKrF3kVZm].V4Mutv5exBGP, &X6U5hpKf[eeKrF3kVZm].NImpsJ7V4Ab, &X6U5hpKf[eeKrF3kVZm].VeSNFY3ZrxM, &X6U5hpKf[eeKrF3kVZm].OSMG4kbJCjm);
        X6U5hpKf[eeKrF3kVZm].tYzWgkvr = (309 - 309);
    }
    for (eeKrF3kVZm = (918 - 918), l9k3CBVtgflv = (274 - 274); eeKrF3kVZm < A031fEJnT; eeKrF3kVZm++) {
        if (X6U5hpKf[eeKrF3kVZm].DoPk9Bm2 > (722 - 642) && 0 < X6U5hpKf[eeKrF3kVZm].OSMG4kbJCjm)
            X6U5hpKf[eeKrF3kVZm].tYzWgkvr = X6U5hpKf[eeKrF3kVZm].tYzWgkvr + 8000;
        if (85 < X6U5hpKf[eeKrF3kVZm].DoPk9Bm2 && (121 - 41) < X6U5hpKf[eeKrF3kVZm].V4Mutv5exBGP)
            X6U5hpKf[eeKrF3kVZm].tYzWgkvr = X6U5hpKf[eeKrF3kVZm].tYzWgkvr + (4842 - 842);
        if (X6U5hpKf[eeKrF3kVZm].DoPk9Bm2 > 90)
            X6U5hpKf[eeKrF3kVZm].tYzWgkvr = X6U5hpKf[eeKrF3kVZm].tYzWgkvr + 2000;
        if (X6U5hpKf[eeKrF3kVZm].DoPk9Bm2 > 85 && X6U5hpKf[eeKrF3kVZm].VeSNFY3ZrxM == 'Y')
            X6U5hpKf[eeKrF3kVZm].tYzWgkvr = X6U5hpKf[eeKrF3kVZm].tYzWgkvr + (1492 - 492);
        if (X6U5hpKf[eeKrF3kVZm].V4Mutv5exBGP > (778 - 698) && X6U5hpKf[eeKrF3kVZm].NImpsJ7V4Ab == 'Y')
            X6U5hpKf[eeKrF3kVZm].tYzWgkvr = X6U5hpKf[eeKrF3kVZm].tYzWgkvr + (1469 - 619);
        if (X6U5hpKf[eeKrF3kVZm].tYzWgkvr > l9k3CBVtgflv) {
            l9k3CBVtgflv = X6U5hpKf[eeKrF3kVZm].tYzWgkvr;
            cbMy8RpuE = eeKrF3kVZm;
        }
    }
    {
        G1zi29W = 0;
        eeKrF3kVZm = 0;
        while (eeKrF3kVZm < A031fEJnT) {
            G1zi29W = G1zi29W +X6U5hpKf[eeKrF3kVZm].tYzWgkvr;
            eeKrF3kVZm++;
        }
    }
    printf ("%s\n%d\n%d\n", X6U5hpKf[cbMy8RpuE].e7hbTa80HLu, l9k3CBVtgflv, G1zi29W);
    return 0;
}

