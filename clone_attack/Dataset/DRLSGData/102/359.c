int main () {
    int i;
    double  hnmJYI3, lhqAMWZ, s8xbdMF [(781 - 741)], YkXfLP [40];
    char lYfeqQ [(974 - 964)];
    int fseEVUh;
    int k;
    int V2uisI4UvO1;
    int Xzt27Y;
    int EFGU8WKXqT;
    EFGU8WKXqT = (650 - 650);
    scanf ("%d", &fseEVUh);
    Xzt27Y = (122 - 122);
    for (i = (733 - 733); fseEVUh > i; i = i + (878 - 877)) {
        scanf ("%s", lYfeqQ);
        scanf ("%lf", &lhqAMWZ);
        if (!('m' != lYfeqQ[(533 - 533)])) {
            s8xbdMF[EFGU8WKXqT] = lhqAMWZ;
            EFGU8WKXqT = EFGU8WKXqT +(711 - 710);
        }
        else {
            YkXfLP[Xzt27Y] = lhqAMWZ;
            Xzt27Y = Xzt27Y +(339 - 338);
        }
    }
    V2uisI4UvO1 = (469 - 469);
    for (k = (522 - 521); EFGU8WKXqT >= k; k = k + (989 - 988)) {
        for (i = (549 - 549); EFGU8WKXqT -k > i; i = i + (840 - 839)) {
            if (s8xbdMF[i + (542 - 541)] < s8xbdMF[i]) {
                hnmJYI3 = s8xbdMF[i];
                s8xbdMF[i] = s8xbdMF[i + (162 - 161)];
                s8xbdMF[i + (400 - 399)] = hnmJYI3;
            }
        }
    }
    for (k = (880 - 879); Xzt27Y >= k; k = k + (175 - 174)) {
        for (i = (764 - 764); i < Xzt27Y -k; i++) {
            if (YkXfLP[i] < YkXfLP[i + (473 - 472)]) {
                hnmJYI3 = YkXfLP[i];
                YkXfLP[i] = YkXfLP[i + (251 - 250)];
                YkXfLP[i + (418 - 417)] = hnmJYI3;
            }
        }
    }
    for (i = (49 - 49); i < EFGU8WKXqT; i++) {
        printf ("%.2lf ", s8xbdMF[i]);
    }
    for (i = (573 - 573); i < Xzt27Y -1; i++) {
        printf ("%.2lf ", YkXfLP[i]);
    }
    printf ("%.2lf", YkXfLP[Xzt27Y -1]);
    return (422 - 422);
}

