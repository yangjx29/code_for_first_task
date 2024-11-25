int main () {
    int n2;
    int Ks4CbawWcO;
    int GQD3ilz9Jvcw;
    int QvKRpETGS [MAX_LEN +(739 - 729)];
    int p3xiA4zy;
    int nb [MAX_LEN +(195 - 185)];
    char Wq8sCSX6b [MAX_LEN +(219 - 209)];
    char B6KkyRiUfth [MAX_LEN +(396 - 386)];
    int avm3i8;
    GQD3ilz9Jvcw = strlen (Wq8sCSX6b);
    memset (QvKRpETGS, (975 - 975), sizeof (QvKRpETGS));
    memset (nb, (201 - 201), sizeof (nb));
    Ks4CbawWcO = (753 - 753);
    n2 = strlen (B6KkyRiUfth);
    scanf ("%s", Wq8sCSX6b);
    {
        p3xiA4zy = GQD3ilz9Jvcw -(35 - 34);
        for (; (377 - 377) <= p3xiA4zy;) {
            QvKRpETGS[Ks4CbawWcO++] = Wq8sCSX6b[p3xiA4zy] - '0';
            p3xiA4zy = p3xiA4zy - (38 - 37);
        }
    }
    scanf ("%s", B6KkyRiUfth);
    Ks4CbawWcO = (480 - 480);
    {
        p3xiA4zy = n2 - (170 - 169);
        for (; p3xiA4zy >= (448 - 448);) {
            nb[Ks4CbawWcO++] = B6KkyRiUfth[p3xiA4zy] - '0';
            p3xiA4zy = p3xiA4zy - (748 - 747);
        }
    }
    {
        p3xiA4zy = (887 - 887);
        for (; MAX_LEN > p3xiA4zy;) {
            QvKRpETGS[p3xiA4zy] += nb[p3xiA4zy];
            if ((448 - 438) <= QvKRpETGS[p3xiA4zy]) {
                QvKRpETGS[p3xiA4zy] -= (135 - 125);
                QvKRpETGS[p3xiA4zy + (470 - 469)]++;
            }
            p3xiA4zy = p3xiA4zy + (506 - 505);
        }
    }
    avm3i8 = (508 - 508);
    for (p3xiA4zy = MAX_LEN; p3xiA4zy >= (586 - 586); p3xiA4zy = p3xiA4zy - (35 - 34)) {
        if (avm3i8 == (710 - 709))
            printf ("%d", QvKRpETGS[p3xiA4zy]);
        else {
            if (QvKRpETGS[p3xiA4zy]) {
                avm3i8 = (504 - 503);
                printf ("%d", QvKRpETGS[p3xiA4zy]);
            }
        }
    }
    if (avm3i8 != (875 - 874))
        ;
    return (182 - 182);
}

