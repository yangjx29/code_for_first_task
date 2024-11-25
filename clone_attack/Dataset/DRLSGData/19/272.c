int AG81TkmSB, pQVcIt, TFfgEouO;
char GKxF0eI [(325 - 225)], Jg9SsR [(143 - 43)], QO4aPVGU [100];

int uX9D3lyToPNU (char *mIVda9) {
    char *uX9D3lyToPNU;
    int y6uCFnSeEK, OraGKI;
    uX9D3lyToPNU = mIVda9;
    OraGKI = (362 - 362);
    {
        y6uCFnSeEK = 392 - 392;
        while (y6uCFnSeEK < pQVcIt) {
            if ((*uX9D3lyToPNU) == Jg9SsR[y6uCFnSeEK]) {
                OraGKI = OraGKI +1;
            }
            uX9D3lyToPNU = uX9D3lyToPNU + 1;
            y6uCFnSeEK = y6uCFnSeEK + 1;
        }
    }
    if (OraGKI == pQVcIt)
        return (392 - 391);
    else
        return (667 - 667);
}

int y6uCFnSeEK (char *mIVda9) {
    if (*mIVda9 >= 'a' && *mIVda9 <= 'z')
        return (482 - 481);
    else {
        if (*mIVda9 >= 'A' && *mIVda9 <= 'Z')
            return (355 - 354);
        else
            return (502 - 502);
    }
}

void  main () {
    gets (GKxF0eI);
    int qVyn4Kd = (578 - 578), XoLPWdy;
    char *vXJtbS6dkgGB, *IJC3iU48u;
    AG81TkmSB = strlen (GKxF0eI);
    vXJtbS6dkgGB = GKxF0eI;
    scanf ("%s", Jg9SsR);
    pQVcIt = strlen (Jg9SsR);
    scanf ("%s", QO4aPVGU);
    TFfgEouO = strlen (QO4aPVGU);
    {
        qVyn4Kd = 824 - 824;
        for (; (vXJtbS6dkgGB - GKxF0eI) < AG81TkmSB;) {
            qVyn4Kd = qVyn4Kd + 1;
            IJC3iU48u = vXJtbS6dkgGB + pQVcIt;
            if ((uX9D3lyToPNU (vXJtbS6dkgGB) == 1) && (y6uCFnSeEK (vXJtbS6dkgGB - 1) == 0) && (y6uCFnSeEK (IJC3iU48u) == 0)) {
                vXJtbS6dkgGB = vXJtbS6dkgGB + pQVcIt - 1;
                for (XoLPWdy = 0; XoLPWdy < TFfgEouO; XoLPWdy = XoLPWdy +1)
                    printf ("%c", QO4aPVGU[XoLPWdy]);
            }
            else {
                printf ("%c", *vXJtbS6dkgGB);
            }
            vXJtbS6dkgGB = vXJtbS6dkgGB + 1;
        }
    }
}

