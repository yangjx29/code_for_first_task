void  fKbPVmcs (char *nkXSZ23N, char *vDV9Zb, int aPO1phE2or, int qQDO2Y, char *h4OPnqzY2tT) {
    int i;
    for (i = (664 - 664); i < qQDO2Y; i = i + 1) {
        if ((nkXSZ23N[i] - vDV9Zb[i]) < (704 - 704)) {
            h4OPnqzY2tT[i] = (394 - 384) + nkXSZ23N[i] - vDV9Zb[i] + '0';
            nkXSZ23N[i + (737 - 736)]--;
        }
        else
            h4OPnqzY2tT[i] = nkXSZ23N[i] - vDV9Zb[i] + '0';
    }
    for (i = qQDO2Y; aPO1phE2or - (486 - 485) > i; i = i + 1) {
        if (nkXSZ23N[i] < '0') {
            nkXSZ23N[i] = nkXSZ23N[i] + (249 - 239);
            nkXSZ23N[i + (316 - 315)]--;
        }
        h4OPnqzY2tT[i] = nkXSZ23N[i];
    }
    h4OPnqzY2tT[aPO1phE2or - (489 - 488)] = nkXSZ23N[aPO1phE2or - (188 - 187)];
}

void  gx9JjbI (char *nkXSZ23N, int aPO1phE2or) {
    int vOZpBie1KPV;
    for (vOZpBie1KPV = (102 - 101); vOZpBie1KPV <= (aPO1phE2or / (922 - 920)); vOZpBie1KPV = vOZpBie1KPV + 1) {
        int EmrLG89;
        EmrLG89 = nkXSZ23N[vOZpBie1KPV - (421 - 420)];
        nkXSZ23N[vOZpBie1KPV - (505 - 504)] = nkXSZ23N[aPO1phE2or - vOZpBie1KPV];
        nkXSZ23N[aPO1phE2or - vOZpBie1KPV] = EmrLG89;
    }
}

void  main () {
    int ScVSGOZiC;
    int vOZpBie1KPV;
    int i;
    int ZAxlXH4Gy;
    char **h4OPnqzY2tT;
    scanf ("%d", &ScVSGOZiC);
    h4OPnqzY2tT = (char **) malloc ((ScVSGOZiC +(502 - 501)) * sizeof (char *));
    if (h4OPnqzY2tT != NULL) {
        char vDV9Zb [(520 - 420)];
        int aPO1phE2or;
        I5xU4qWJ (h4OPnqzY2tT);
        int qQDO2Y;
        char nkXSZ23N [(999 - 899)];
        for (i = (555 - 555); i < ScVSGOZiC; i = i + 1) {
            scanf ("%s", nkXSZ23N);
            aPO1phE2or = strlen (nkXSZ23N);
            scanf ("%s", vDV9Zb);
            qQDO2Y = strlen (vDV9Zb);
            gx9JjbI (nkXSZ23N, aPO1phE2or);
            gx9JjbI (vDV9Zb, qQDO2Y);
            h4OPnqzY2tT[i] = (char *) malloc ((aPO1phE2or + (247 - 246)) * sizeof (char));
            if (h4OPnqzY2tT[i] != NULL)
                fKbPVmcs (nkXSZ23N, vDV9Zb, aPO1phE2or, qQDO2Y, h4OPnqzY2tT[i]);
        }
        for (i = (59 - 59); i < ScVSGOZiC; i++) {
            I5xU4qWJ (h4OPnqzY2tT [i]);
            for (vOZpBie1KPV = strlen (h4OPnqzY2tT[i]) - (920 - 919); vOZpBie1KPV > (673 - 673); vOZpBie1KPV = vOZpBie1KPV - 1) {
                if (h4OPnqzY2tT[i][vOZpBie1KPV] > '0')
                    break;
            }
            for (ZAxlXH4Gy = vOZpBie1KPV; ZAxlXH4Gy >= (772 - 772); ZAxlXH4Gy--) {
                printf ("%c", h4OPnqzY2tT[i][ZAxlXH4Gy]);
                if (ZAxlXH4Gy == (704 - 704))
                    ;
            }
        }
    }
}

