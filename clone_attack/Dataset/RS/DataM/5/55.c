int main () {
    double  BKH73k1YrX, fJDkMpGY;
    int pORgJYK, NE5a4D76iXJ = (761 - 761), DXs7Sepq2;
    char EBKcfvPdCgb [500];
    char xYLuVKIycSsv [500];
    scanf ("%lf", &BKH73k1YrX);
    scanf ("%s%s", EBKcfvPdCgb, xYLuVKIycSsv);
    DXs7Sepq2 = strlen (EBKcfvPdCgb);
    if (strlen (EBKcfvPdCgb) != strlen (xYLuVKIycSsv))
        printf ("error");
    else {
        {
            pORgJYK = 0;
            while (EBKcfvPdCgb[pORgJYK] != '\0') {
                if ((EBKcfvPdCgb[pORgJYK] != 'A' && !('G' == EBKcfvPdCgb[pORgJYK]) && !('T' == EBKcfvPdCgb[pORgJYK]) && !('C' == EBKcfvPdCgb[pORgJYK])) || (xYLuVKIycSsv[pORgJYK] != 'A' && xYLuVKIycSsv[pORgJYK] != 'T' && xYLuVKIycSsv[pORgJYK] != 'C' && xYLuVKIycSsv[pORgJYK] != 'G')) {
                    DXs7Sepq2 = 0;
                }
                else if (EBKcfvPdCgb[pORgJYK] == xYLuVKIycSsv[pORgJYK])
                    NE5a4D76iXJ = NE5a4D76iXJ +1;
                else
                    ;
                pORgJYK = pORgJYK + 1;
            };
        }
        fJDkMpGY = 1.0 * NE5a4D76iXJ / DXs7Sepq2;
        if (DXs7Sepq2 == 0)
            printf ("error");
        else if (fJDkMpGY > BKH73k1YrX)
            printf ("yes");
        else
            printf ("no");
    }
    return 0;
}

