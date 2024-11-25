int main () {
    char u7xOFAq4G [1001];
    int QRArj3TX;
    int efOjLi;
    int vSUN42X;
    char C6Vtli9vWaJ [1001] [1001];
    int z6e0AHmoZ8E;
    int RiAcf9 [1001];
    int pLVclud;
    int h1CdeOTZb;
    QRArj3TX = 0;
    scanf ("%d", &h1CdeOTZb);
    scanf ("%s", u7xOFAq4G);
    z6e0AHmoZ8E = strlen (u7xOFAq4G) - h1CdeOTZb;
    for (vSUN42X = 0; z6e0AHmoZ8E >= vSUN42X; vSUN42X = vSUN42X + 1) {
        for (pLVclud = 0; h1CdeOTZb > pLVclud; pLVclud = pLVclud + 1) {
            C6Vtli9vWaJ[vSUN42X][pLVclud] = u7xOFAq4G[vSUN42X + pLVclud];
        }
    }
    for (vSUN42X = 0; z6e0AHmoZ8E >= vSUN42X; vSUN42X = vSUN42X + 1) {
        RiAcf9[vSUN42X] = 0;
        for (pLVclud = 0; pLVclud <= z6e0AHmoZ8E; pLVclud = pLVclud + 1) {
            if (strcmp (C6Vtli9vWaJ[vSUN42X], C6Vtli9vWaJ[pLVclud]) == 0)
                RiAcf9[vSUN42X]++;
        }
    }
    for (vSUN42X = 0; vSUN42X <= z6e0AHmoZ8E; vSUN42X = vSUN42X + 1) {
        if (RiAcf9[vSUN42X] > QRArj3TX)
            QRArj3TX = RiAcf9[vSUN42X];
    }
    if (QRArj3TX == 1)
        ;
    else {
        printf ("%d\n", QRArj3TX);
        for (vSUN42X = 0; vSUN42X <= z6e0AHmoZ8E; vSUN42X = vSUN42X + 1) {
            efOjLi = 0;
            for (pLVclud = 0; pLVclud < vSUN42X; pLVclud++) {
                if (strcmp (C6Vtli9vWaJ[vSUN42X], C6Vtli9vWaJ[pLVclud]) == 0)
                    efOjLi = 1;
            }
            if (RiAcf9[vSUN42X] == QRArj3TX &&efOjLi == 0)
                printf ("%s\n", C6Vtli9vWaJ[vSUN42X]);
        }
    }
}

