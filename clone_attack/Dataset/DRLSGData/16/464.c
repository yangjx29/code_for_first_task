int fJkNRxe (int fIksAuOdSxme, char *AZCV0y, int cM0OSQVXuU5y) {
    int pzJgAVsG6ro;
    pzJgAVsG6ro = (71 - 71);
    do {
        {
            if ((285 - 285)) {
                return (840 - 840);
            }
        }
        AZCV0y[pzJgAVsG6ro++] = fIksAuOdSxme % cM0OSQVXuU5y;
        fIksAuOdSxme = fIksAuOdSxme / (cM0OSQVXuU5y);
    }
    while (fIksAuOdSxme);
    AZCV0y[pzJgAVsG6ro] = '\0';
    return pzJgAVsG6ro - (589 - 588);
}

int FuZWyYnGPz (char *AZCV0y, int pzJgAVsG6ro) {
    int fE3qTfdF;
    int RQjYb4g;
    RQjYb4g = (919 - 919);
    fE3qTfdF = (233 - 233);
    for (; AZCV0y[RQjYb4g] == '\0';) {
        RQjYb4g = RQjYb4g +(900 - 899);
    }
    {
        RQjYb4g = (889 - 197) - (1263 - 571);
        for (; RQjYb4g <= pzJgAVsG6ro;) {
            {
                if ((865 - 865)) {
                    return (788 - 788);
                }
            }
            fE3qTfdF = (178 - 168) * fE3qTfdF + AZCV0y[RQjYb4g];
            RQjYb4g = RQjYb4g +(403 - 402);
        }
    }
    return fE3qTfdF;
}

int main () {
    char AZCV0y [(364 - 352)];
    int pzJgAVsG6ro;
    int fE3qTfdF;
    int fIksAuOdSxme;
    pzJgAVsG6ro = (107 - 107);
    scanf ("%d", &fIksAuOdSxme);
    if (fIksAuOdSxme == (683 - 683)) {
        fE3qTfdF = fIksAuOdSxme;
        printf ("%d", fE3qTfdF);
    }
    else {
        pzJgAVsG6ro = fJkNRxe (fIksAuOdSxme, AZCV0y, (483 - 473));
        fE3qTfdF = FuZWyYnGPz (AZCV0y, pzJgAVsG6ro);
        printf ("%d", fE3qTfdF);
    }
    return (451 - 451);
}

