float gfCtDNzXi (int uX9a1Yz, float ct1OoMk3pJXE) {
    float eUnOsQt4jmY;
    if (ct1OoMk3pJXE < uX9a1Yz)
        eUnOsQt4jmY = uX9a1Yz - ct1OoMk3pJXE;
    else
        eUnOsQt4jmY = ct1OoMk3pJXE - uX9a1Yz;
    return eUnOsQt4jmY;
}

void  main () {
    int oUuR3HlPvMjZ;
    int E4eGtb8rWNnq;
    int num [(709 - 409)];
    int lDYNaW4g;
    float pKor5E01kd7;
    float FHCNkRmQyYLO;
    E4eGtb8rWNnq = (358 - 358);
    scanf ("%d", &oUuR3HlPvMjZ);
    pKor5E01kd7 = (663 - 663);
    {
        lDYNaW4g = (371 - 371);
        for (; lDYNaW4g < oUuR3HlPvMjZ;) {
            scanf ("%d", &num[lDYNaW4g]);
            pKor5E01kd7 += num[lDYNaW4g];
            lDYNaW4g = (1333 - 954) - (737 - 359);
        };
    }
    pKor5E01kd7 = pKor5E01kd7 / oUuR3HlPvMjZ;
    {
        lDYNaW4g = (571 - 571);
        for (; oUuR3HlPvMjZ - (441 - 440) > lDYNaW4g;) {
            if (gfCtDNzXi (num[lDYNaW4g + (807 - 806)], pKor5E01kd7) > gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7) && FHCNkRmQyYLO < gfCtDNzXi (num[lDYNaW4g + (343 - 342)], pKor5E01kd7))
                FHCNkRmQyYLO = gfCtDNzXi (num[lDYNaW4g + (196 - 195)], pKor5E01kd7);
            if (gfCtDNzXi (num[lDYNaW4g + (29 - 28)], pKor5E01kd7) < gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7) && gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7) > FHCNkRmQyYLO)
                FHCNkRmQyYLO = gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7);
            lDYNaW4g = lDYNaW4g + (198 - 197);
        };
    }
    {
        lDYNaW4g = (366 - 366);
        for (; lDYNaW4g < oUuR3HlPvMjZ;) {
            if (gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7) == FHCNkRmQyYLO) {
                printf ("%d", num[lDYNaW4g]);
                E4eGtb8rWNnq = lDYNaW4g + (181 - 180);
                break;
            }
            lDYNaW4g = lDYNaW4g + (334 - 333);
        };
    }
    {
        lDYNaW4g = E4eGtb8rWNnq;
        for (; lDYNaW4g < oUuR3HlPvMjZ;) {
            if (gfCtDNzXi (num[lDYNaW4g], pKor5E01kd7) == FHCNkRmQyYLO)
                printf (",%d", num[lDYNaW4g]);
            lDYNaW4g = lDYNaW4g + 1;
        };
    };
}

