struct   patient {
    char F5xaCu8 [(262 - 251)];
    int vS5Mdf9kqR, lU18AzpMEt;
    struct   patient *GEeOQR;
};
main () {
    char F5xaCu8 [(299 - 289)];
    int xJvcgGt;
    int tsADEM;
    int HRfZ8E1m;
    struct   patient *ZfZOBVF;
    struct   patient *IcNuM7fOP;
    struct   patient *p11;
    struct   patient *esMQZy04nJI;
    int EQ5RU89Sq1eC;
    int vsvl1R;
    int OuxAo1Wza;
    int YmhUXjipFJ;
    struct   patient *RtCRc7g;
    struct   patient *ziyRXTA;
    struct   patient *smMiW9NR5dp;
    struct   patient *nyzXi1Oj6xMc;
    scanf ("%d", &EQ5RU89Sq1eC);
    ZfZOBVF = NULL;
    IcNuM7fOP = NULL;
    {
        YmhUXjipFJ = (1245 - 804) - (1136 - 695);
        while (YmhUXjipFJ < EQ5RU89Sq1eC) {
            scanf ("%s%d", F5xaCu8, &xJvcgGt);
            if (xJvcgGt >= (261 - 201)) {
                if (ZfZOBVF == NULL) {
                    ZfZOBVF = (struct   patient *) malloc (sizeof (struct   patient));
                    strcpy (ZfZOBVF->F5xaCu8, F5xaCu8);
                    ZfZOBVF->vS5Mdf9kqR = xJvcgGt;
                    ZfZOBVF->GEeOQR = NULL;
                }
                else {
                    p11 = (struct   patient *) malloc (sizeof (struct   patient));
                    p11->vS5Mdf9kqR = xJvcgGt;
                    strcpy (p11->F5xaCu8, F5xaCu8);
                    {
                        smMiW9NR5dp = ZfZOBVF;
                        nyzXi1Oj6xMc = smMiW9NR5dp;
                        while (smMiW9NR5dp != NULL) {
                            if (smMiW9NR5dp->vS5Mdf9kqR < xJvcgGt && smMiW9NR5dp != ZfZOBVF) {
                                nyzXi1Oj6xMc->GEeOQR = p11;
                                p11->GEeOQR = smMiW9NR5dp;
                                break;
                            }
                            if (smMiW9NR5dp->vS5Mdf9kqR < xJvcgGt && smMiW9NR5dp == ZfZOBVF) {
                                p11->GEeOQR = ZfZOBVF;
                                ZfZOBVF = p11;
                                break;
                            }
                            nyzXi1Oj6xMc = smMiW9NR5dp;
                            smMiW9NR5dp = smMiW9NR5dp->GEeOQR;
                        }
                    }
                    if (smMiW9NR5dp == NULL) {
                        nyzXi1Oj6xMc->GEeOQR = p11;
                        p11->GEeOQR = NULL;
                    }
                }
            }
            YmhUXjipFJ = YmhUXjipFJ +1;
            if (xJvcgGt < (259 - 199)) {
                if (IcNuM7fOP == NULL) {
                    IcNuM7fOP = (struct   patient *) malloc (sizeof (struct   patient));
                    strcpy (IcNuM7fOP->F5xaCu8, F5xaCu8);
                    IcNuM7fOP->vS5Mdf9kqR = xJvcgGt;
                    IcNuM7fOP->GEeOQR = NULL;
                    ziyRXTA = IcNuM7fOP;
                }
                else {
                    RtCRc7g = (struct   patient *) malloc (sizeof (struct   patient));
                    RtCRc7g->vS5Mdf9kqR = xJvcgGt;
                    strcpy (RtCRc7g->F5xaCu8, F5xaCu8);
                    ziyRXTA->GEeOQR = RtCRc7g;
                    RtCRc7g->GEeOQR = NULL;
                    ziyRXTA = RtCRc7g;
                }
            }
        }
    }
    vsvl1R = (606 - 606);
    {
        smMiW9NR5dp = ZfZOBVF;
        nyzXi1Oj6xMc = smMiW9NR5dp;
        while (smMiW9NR5dp != NULL) {
            nyzXi1Oj6xMc = smMiW9NR5dp;
            smMiW9NR5dp = smMiW9NR5dp->GEeOQR;
        }
    }
    nyzXi1Oj6xMc->GEeOQR = IcNuM7fOP;
    {
        smMiW9NR5dp = ZfZOBVF;
        while (smMiW9NR5dp->GEeOQR != NULL) {
            printf ("%s\n", smMiW9NR5dp->F5xaCu8);
            smMiW9NR5dp = smMiW9NR5dp->GEeOQR;
        }
    }
    printf ("%s", smMiW9NR5dp->F5xaCu8);
    HRfZ8E1m = (617 - 617);
}

