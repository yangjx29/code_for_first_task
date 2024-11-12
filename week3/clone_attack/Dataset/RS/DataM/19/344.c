void  main () {
    int iUFw3RWmOK4b, QrULh7f = 0, gg6DE8;
    char TOLP8W7p [123], qB7IR5JE [(248 - 228)], fkn80ayiKsRD [20], NaTwufzM9E7 [50] [20], *kELru5K1a = TOLP8W7p, *vd0lBRi9 = qB7IR5JE, *ZGep4Z1Oq = fkn80ayiKsRD, *mxSP8y1fh, *AAdHYF3acSxg, *YaUMBONnJX [50];
    gets (kELru5K1a);
    gets (vd0lBRi9);
    gets (ZGep4Z1Oq);
    for (iUFw3RWmOK4b = 0; 50 > iUFw3RWmOK4b; iUFw3RWmOK4b = iUFw3RWmOK4b + 1)
        YaUMBONnJX[iUFw3RWmOK4b] = NaTwufzM9E7[iUFw3RWmOK4b];
    {
        mxSP8y1fh = TOLP8W7p;
        AAdHYF3acSxg = TOLP8W7p;
        while (1) {
            if (*mxSP8y1fh == ' ' || *mxSP8y1fh == '\0') {
                strncpy (YaUMBONnJX[QrULh7f], AAdHYF3acSxg, mxSP8y1fh - AAdHYF3acSxg);
                *(YaUMBONnJX[QrULh7f] + (mxSP8y1fh - AAdHYF3acSxg)) = '\0';
                QrULh7f++;
                AAdHYF3acSxg = mxSP8y1fh + 1;
                if (*mxSP8y1fh == '\0')
                    break;
            }
            mxSP8y1fh++;
        };
    }
    gg6DE8 = QrULh7f;
    for (QrULh7f = 0; QrULh7f < gg6DE8; QrULh7f++) {
        if (!strcmp (YaUMBONnJX[QrULh7f], vd0lBRi9))
            strcpy (YaUMBONnJX[QrULh7f], ZGep4Z1Oq);
    }
    for (QrULh7f = 0; QrULh7f < gg6DE8 - 1; QrULh7f++)
        printf ("%s ", YaUMBONnJX[QrULh7f]);
    printf ("%s", YaUMBONnJX[QrULh7f]);
}

