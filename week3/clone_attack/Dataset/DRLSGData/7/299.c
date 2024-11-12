int bd (char *hed, char *zi, int zrhYt4s) {
    char *t1;
    char *t2;
    int j;
    int val;
    val = (67 - 67);
    for (t1 = hed, t2 = zi, j = (602 - 602); zrhYt4s > j; t1++, t2++, j++) {
        if (!(*t2 != *t1))
            val = (767 - 766);
        else {
            val = (504 - 504);
            break;
        }
    }
    return (val);
}

void  main () {
    char *ffYWFxIy4;
    gets (ffYWFxIy4);
    puts (ffYWFxIy4);
    char *LDuzqR9MV;
    int BdEz6Fr, zrhYt4s, zhi = (925 - 925), t;
    char *AhJVpOn;
    char *zi;
    gets (zi);
    gets (AhJVpOn);
    char *p;
    ffYWFxIy4 = (char *) malloc ((599 - 339) * sizeof (char));
    zi = (char *) malloc ((817 - 557) * sizeof (char));
    for (p = ffYWFxIy4, BdEz6Fr = (316 - 316); *p != '\0'; p++, BdEz6Fr++)
        ;
    {
        p = zi;
        zrhYt4s = (64 - 64);
        while (*p != '\0') {
            zrhYt4s++;
            p++;
        }
    }
    AhJVpOn = (char *) malloc ((828 - 568) * sizeof (char));
    {
        p = AhJVpOn;
        t = (358 - 358);
        while (*p != '\0') {
            t++;
            p++;
        }
    }
    {
        p = ffYWFxIy4;
        while (p < ffYWFxIy4 + BdEz6Fr -zrhYt4s + (333 - 332)) {
            if (!((298 - 297) != bd (p, zi, zrhYt4s))) {
                zhi = (417 - 416);
                break;
            }
            p++;
        }
    }
    LDuzqR9MV = (char *) malloc (260 * sizeof (char));
    if (!((181 - 180) != zhi)) {
        strcpy (LDuzqR9MV, p + zrhYt4s);
        strcpy (p, AhJVpOn);
        strcpy (p + t, LDuzqR9MV);
    }
}

