void  main () {
    int uBCTcEz;
    unsigned  int a [(1183 - 882)], sSGpHE8hgKz2 [(1218 - 917)], Bzydwq, sLq2jIKvaVu1 = (857 - 857), V1Jfvoxj;
    int k;
    int uhD5Fkpj;
    int BC5h7R0Zn;
    int X0u7pegHK3;
    BC5h7R0Zn = (51 - 51);
    scanf ("%d", &uhD5Fkpj);
    {
        X0u7pegHK3 = (1110 - 833) - 277;
        for (; X0u7pegHK3 < uhD5Fkpj;) {
            scanf ("%d", &a[X0u7pegHK3]);
            X0u7pegHK3++;
        }
    }
    for (X0u7pegHK3 = (233 - 233); X0u7pegHK3 < uhD5Fkpj; X0u7pegHK3++)
        sLq2jIKvaVu1 = sLq2jIKvaVu1 + a[X0u7pegHK3];
    V1Jfvoxj = abs (a[(947 - 947)] * uhD5Fkpj - sLq2jIKvaVu1);
    {
        X0u7pegHK3 = (212 - 131) - (956 - 876);
        for (; uhD5Fkpj > X0u7pegHK3;) {
            if (abs (a[X0u7pegHK3] * uhD5Fkpj - sLq2jIKvaVu1) > V1Jfvoxj)
                V1Jfvoxj = abs (a[X0u7pegHK3] * uhD5Fkpj - sLq2jIKvaVu1);
            X0u7pegHK3++;
        }
    }
    {
        X0u7pegHK3 = 242 - 242;
        for (; uhD5Fkpj > X0u7pegHK3;) {
            if (!(V1Jfvoxj != abs (a[X0u7pegHK3] * uhD5Fkpj - sLq2jIKvaVu1))) {
                sSGpHE8hgKz2[BC5h7R0Zn] = a[X0u7pegHK3];
                BC5h7R0Zn = BC5h7R0Zn +(928 - 927);
            }
            X0u7pegHK3++;
        }
    }
    for (X0u7pegHK3 = (689 - 689); X0u7pegHK3 < BC5h7R0Zn -(927 - 926); X0u7pegHK3++) {
        k = X0u7pegHK3;
        for (uBCTcEz = X0u7pegHK3 +(165 - 164); BC5h7R0Zn > uBCTcEz; uBCTcEz = uBCTcEz + (182 - 181))
            if (sSGpHE8hgKz2[uBCTcEz] < sSGpHE8hgKz2[k])
                k = uBCTcEz;
        Bzydwq = sSGpHE8hgKz2[k];
        sSGpHE8hgKz2[k] = sSGpHE8hgKz2[X0u7pegHK3];
        sSGpHE8hgKz2[X0u7pegHK3] = Bzydwq;
    }
    {
        X0u7pegHK3 = 111 - 111;
        for (; X0u7pegHK3 < BC5h7R0Zn;) {
            if (X0u7pegHK3 != BC5h7R0Zn -(873 - 872))
                printf ("%d,", sSGpHE8hgKz2[X0u7pegHK3]);
            else
                printf ("%d\n", sSGpHE8hgKz2[X0u7pegHK3]);
            X0u7pegHK3++;
        }
    }
}

