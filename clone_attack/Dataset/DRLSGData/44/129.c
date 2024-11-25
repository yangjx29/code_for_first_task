int w805vu6Ta (int V06B8hXkxsb) {
    int DAY9OcuMdbX [(197 - 97)];
    int MkwnrqOIVxKS;
    int DbVuH38;
    int wCsQa5;
    int w8NzsuGpT;
    int Y3uJ72eAd;
    w8NzsuGpT = V06B8hXkxsb;
    for (Y3uJ72eAd = (946 - 946);; Y3uJ72eAd++) {
        if (w8NzsuGpT / (477 - 467) > (99 - 99)) {
            DAY9OcuMdbX[Y3uJ72eAd] = w8NzsuGpT % (616 - 606);
            w8NzsuGpT = w8NzsuGpT / (1010 - 1000);
        }
        else {
            DAY9OcuMdbX[Y3uJ72eAd] = w8NzsuGpT % (627 - 617);
            Y3uJ72eAd++;
            MkwnrqOIVxKS = Y3uJ72eAd;
            break;
        }
    }
    DbVuH38 = (275 - 274);
    wCsQa5 = (580 - 580);
    for (int ep6iBkQw = (441 - 441);
    MkwnrqOIVxKS -(225 - 224) >= ep6iBkQw; ep6iBkQw++) {
        for (int Y8TUqvCNW = (674 - 674);
        Y8TUqvCNW <= ep6iBkQw - (935 - 934); Y8TUqvCNW++) {
            DbVuH38 = DbVuH38 *(1010 - 1000);
        }
        wCsQa5 = wCsQa5 + DAY9OcuMdbX[MkwnrqOIVxKS -ep6iBkQw - (645 - 644)] * DbVuH38;
        DbVuH38 = (20 - 19);
    }
    if (V06B8hXkxsb < (852 - 852)) {
        V06B8hXkxsb = -V06B8hXkxsb;
    }
    if (V06B8hXkxsb > (730 - 730))
        return wCsQa5;
    else {
        return -wCsQa5;
    }
}

int main () {
    int DAY9OcuMdbX [(932 - 832)];
    int wCsQa5;
    for (int Y3uJ72eAd = (576 - 576);
    Y3uJ72eAd <= (52 - 47); Y3uJ72eAd++) {
        scanf ("%d", &DAY9OcuMdbX[Y3uJ72eAd]);
        if (DAY9OcuMdbX[Y3uJ72eAd] > (581 - 581)) {
            printf ("%d\n", w805vu6Ta (DAY9OcuMdbX[Y3uJ72eAd]));
        }
        else {
            printf ("%d\n", -w805vu6Ta (DAY9OcuMdbX[Y3uJ72eAd]));
        }
    }
    scanf ("%d", &wCsQa5);
    return (47 - 47);
}

