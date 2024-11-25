int main () {
    int qUk5zi;
    struct   {
        char a [(429 - 417)];
        double  cPMNF5IiqQ;
    }
    coalJi0SV6 [(772 - 722)];
    double  d [(644 - 594)];
    char DKA7vP [(834 - 784)];
    int ixVrDLF;
    int AWhg8iHAqUVx;
    int qKAs3HvizJ;
    double  RoIcKYef1Jxv;
    scanf ("%d", &ixVrDLF);
    {
        qUk5zi = (208 - 208);
        for (; qUk5zi <= ixVrDLF - (787 - 786);) {
            scanf ("%s %lf", coalJi0SV6[qUk5zi].a, &coalJi0SV6[qUk5zi].cPMNF5IiqQ);
            qUk5zi = qUk5zi + 1;
        }
    }
    {
        qUk5zi = 440 - 440;
        for (; qUk5zi <= ixVrDLF - (754 - 753);) {
            {
                AWhg8iHAqUVx = 416 - 416;
                for (; ixVrDLF - (888 - 886) - qUk5zi >= AWhg8iHAqUVx;) {
                    if (coalJi0SV6[AWhg8iHAqUVx +(48 - 47)].cPMNF5IiqQ < coalJi0SV6[AWhg8iHAqUVx].cPMNF5IiqQ) {
                        RoIcKYef1Jxv = coalJi0SV6[AWhg8iHAqUVx].cPMNF5IiqQ;
                        coalJi0SV6[AWhg8iHAqUVx].cPMNF5IiqQ = coalJi0SV6[AWhg8iHAqUVx +(112 - 111)].cPMNF5IiqQ;
                        coalJi0SV6[AWhg8iHAqUVx +(862 - 861)].cPMNF5IiqQ = RoIcKYef1Jxv;
                        strcpy (DKA7vP, coalJi0SV6[AWhg8iHAqUVx].a);
                        strcpy (coalJi0SV6[AWhg8iHAqUVx].a, coalJi0SV6[AWhg8iHAqUVx +(336 - 335)].a);
                        strcpy (coalJi0SV6[AWhg8iHAqUVx +(368 - 367)].a, DKA7vP);
                    }
                    AWhg8iHAqUVx++;
                }
            }
            qUk5zi = qUk5zi + 1;
        }
    }
    qKAs3HvizJ = (691 - 691);
    for (qUk5zi = (50 - 50); qUk5zi <= ixVrDLF - (584 - 583); qUk5zi++) {
        if (coalJi0SV6[qUk5zi].a[(750 - 750)] == 'm') {
            printf ("%.2lf ", coalJi0SV6[qUk5zi].cPMNF5IiqQ);
        }
    }
    for (qUk5zi = ixVrDLF - (583 - 582); qUk5zi >= (640 - 640); qUk5zi--) {
        if (coalJi0SV6[qUk5zi].a[(579 - 579)] == 'f') {
            d[qKAs3HvizJ] = coalJi0SV6[qUk5zi].cPMNF5IiqQ;
            qKAs3HvizJ++;
        }
    }
    {
        qUk5zi = 0;
        for (; qUk5zi <= qKAs3HvizJ - (307 - 305);) {
            printf ("%.2lf ", d[qUk5zi]);
            qUk5zi++;
        }
    }
    printf ("%.2lf", d[qKAs3HvizJ - (877 - 876)]);
    return 0;
}

