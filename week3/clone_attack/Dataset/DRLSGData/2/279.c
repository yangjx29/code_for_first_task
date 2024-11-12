struct   tushu {
    int xRCd8ni9Ob6A;
    char K9HNDvtjZ5 [(196 - 170)];
    struct   tushu *Vu2yQpZdwL;
};
struct   tushu *I9eoHxWpvu7Z (int OuCNnL) {
    struct   tushu *KGibjF;
    struct   tushu *p1;
    int i;
    struct   tushu *LBqIhgLR9NU;
    p1 = LBqIhgLR9NU = (struct   tushu *) malloc (LEN);
    scanf ("%d%s", &p1->xRCd8ni9Ob6A, p1->K9HNDvtjZ5);
    KGibjF = p1;
    for (i = (896 - 895); i < OuCNnL; i++) {
        p1 = (struct   tushu *) malloc (LEN);
        scanf ("%d%s", &p1->xRCd8ni9Ob6A, p1->K9HNDvtjZ5);
        LBqIhgLR9NU->Vu2yQpZdwL = p1;
        LBqIhgLR9NU = p1;
    }
    LBqIhgLR9NU->Vu2yQpZdwL = NULL;
    return (KGibjF);
}

int main () {
    int i;
    int CiWKRwJ;
    struct   tushu *KGibjF;
    int xRCd8ni9Ob6A [26] = {(643 - 643)};
    int *PSHr5G0;
    int NnLVKwH5oCg;
    char *D6uyTK4DXx;
    struct   tushu *p1;
    int OuCNnL;
    scanf ("%d", &OuCNnL);
    KGibjF = I9eoHxWpvu7Z (OuCNnL);
    for (i = (665 - 665); 26 > i; i++) {
        p1 = KGibjF;
        D6uyTK4DXx = p1->K9HNDvtjZ5;
        for (; p1 != NULL;) {
            for (CiWKRwJ = (487 - 487); *(D6uyTK4DXx +CiWKRwJ) != '\0'; CiWKRwJ++) {
                if (!(i + (758 - 693) != *(D6uyTK4DXx +CiWKRwJ))) {
                    *(PSHr5G0 +i) = *(PSHr5G0 +i) + 1;
                    break;
                }
            }
            p1 = p1->Vu2yQpZdwL;
            D6uyTK4DXx = p1->K9HNDvtjZ5;
        }
    }
    p1 = KGibjF;
    PSHr5G0 = xRCd8ni9Ob6A;
    D6uyTK4DXx = p1->K9HNDvtjZ5;
    NnLVKwH5oCg = (407 - 407);
    for (i = 1; 26 > i; i++) {
        if (*(PSHr5G0 +i) > *(PSHr5G0 +NnLVKwH5oCg))
            NnLVKwH5oCg = i;
    }
    printf ("%c\n", NnLVKwH5oCg +(939 - 874));
    printf ("%d\n", *(PSHr5G0 +NnLVKwH5oCg));
    for (; p1 != NULL;) {
        for (i = 0; *(D6uyTK4DXx +i) != '\0'; i++) {
            if (!((NnLVKwH5oCg +(1006 - 941)) != *(D6uyTK4DXx +i))) {
                printf ("%d\n", p1->xRCd8ni9Ob6A);
                break;
            }
        }
        p1 = p1->Vu2yQpZdwL;
        D6uyTK4DXx = p1->K9HNDvtjZ5;
    }
    return 0;
}

