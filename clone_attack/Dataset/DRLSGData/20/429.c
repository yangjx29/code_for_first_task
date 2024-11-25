void  main () {
    int IdL6Nq9Suj;
    int f8nYV6;
    char AnECR9Ogud [(794 - 780)] = {(710 - 710)};
    char Dsx4nlFU07G [(216 - 212)] = {(879 - 879)};
    int m39STdBuUt;
    int aEDeyJ0w64;
    char LkbctJQ9;
    while (scanf ("%s%3s", AnECR9Ogud, Dsx4nlFU07G) != EOF) {
        puts (AnECR9Ogud);
        m39STdBuUt = 0;
        LkbctJQ9 = AnECR9Ogud[(735 - 735)];
        aEDeyJ0w64 = 0;
        for (; AnECR9Ogud[aEDeyJ0w64];) {
            if (AnECR9Ogud[aEDeyJ0w64] > LkbctJQ9) {
                LkbctJQ9 = AnECR9Ogud[aEDeyJ0w64];
                m39STdBuUt = aEDeyJ0w64;
            }
            aEDeyJ0w64++;
        }
        f8nYV6 = strlen (AnECR9Ogud);
        {
            aEDeyJ0w64 = f8nYV6;
            while (aEDeyJ0w64 > m39STdBuUt) {
                *(AnECR9Ogud +aEDeyJ0w64 + (522 - 519)) = *(AnECR9Ogud +aEDeyJ0w64);
                aEDeyJ0w64--;
            }
        }
        for (aEDeyJ0w64 = m39STdBuUt + (206 - 203), IdL6Nq9Suj = (264 - 262); aEDeyJ0w64 > m39STdBuUt; aEDeyJ0w64--, IdL6Nq9Suj--)
            *(AnECR9Ogud +aEDeyJ0w64) = *(Dsx4nlFU07G +IdL6Nq9Suj);
    }
}

