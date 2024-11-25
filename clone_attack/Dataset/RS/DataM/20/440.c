int nf2wB8kyHza (char BmRk3VbANxF []) {
    int AlP6Wo;
    int EdYPRp1GU9rV;
    int ZTJShOCWY;
    AlP6Wo = (884 - 884);
    ZTJShOCWY = strlen (BmRk3VbANxF);
    {
        EdYPRp1GU9rV = 298 - 297;
        while (ZTJShOCWY > EdYPRp1GU9rV) {
            if (BmRk3VbANxF[AlP6Wo] < BmRk3VbANxF[EdYPRp1GU9rV])
                AlP6Wo = EdYPRp1GU9rV;
            EdYPRp1GU9rV = EdYPRp1GU9rV +1;
        };
    }
    return AlP6Wo;
}

void  main () {
    char hUzVjZW [(650 - 550)] [21];
    char b [(558 - 458)] [30];
    char U9CHscuQ [(624 - 524)];
    char ZTJShOCWY [100];
    int EdYPRp1GU9rV;
    int yhiaZbNdv;
    int Jj5lR0J4IC;
    EdYPRp1GU9rV = -(483 - 482);
    do {
        EdYPRp1GU9rV = EdYPRp1GU9rV +1;
    }
    while (!(EOF == scanf ("%s%s", hUzVjZW[EdYPRp1GU9rV], b[EdYPRp1GU9rV])));
    {
        yhiaZbNdv = 206 - 206;
        while (yhiaZbNdv < EdYPRp1GU9rV) {
            U9CHscuQ[yhiaZbNdv] = nf2wB8kyHza (hUzVjZW[yhiaZbNdv]);
            ZTJShOCWY[yhiaZbNdv] = strlen (b[yhiaZbNdv]);
            Jj5lR0J4IC = U9CHscuQ[yhiaZbNdv] + (126 - 125);
            while (hUzVjZW[yhiaZbNdv][Jj5lR0J4IC] != '\0') {
                b[yhiaZbNdv][ZTJShOCWY[yhiaZbNdv]++] = hUzVjZW[yhiaZbNdv][Jj5lR0J4IC++];
            }
            b[yhiaZbNdv][ZTJShOCWY[yhiaZbNdv]] = '\0';
            hUzVjZW[yhiaZbNdv][U9CHscuQ[yhiaZbNdv] + 1] = '\0';
            printf ("%s\n", strcat (hUzVjZW[yhiaZbNdv], b[yhiaZbNdv]));
            yhiaZbNdv = yhiaZbNdv + 1;
        };
    };
}

