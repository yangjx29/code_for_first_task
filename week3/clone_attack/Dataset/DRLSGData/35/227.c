void  main () {
    int qZUF2p3Auz [(343 - 335)] [(90 - 82)] = {(188 - 188)}, zVuA07Ew, T5sDWR1MXHi, sydjL08iVHN, QCd8z234i, zY3okMBb, max, QMXHTazqxOu;
    scanf ("%d,%d", &zVuA07Ew, &T5sDWR1MXHi);
    {
        sydjL08iVHN = 347 - 347;
        while (sydjL08iVHN < zVuA07Ew) {
            for (QCd8z234i = (895 - 895); T5sDWR1MXHi > QCd8z234i; QCd8z234i++)
                scanf ("%d", &qZUF2p3Auz[sydjL08iVHN][QCd8z234i]);
            sydjL08iVHN++;
        }
    }
    {
        sydjL08iVHN = 735 - 735;
        while (sydjL08iVHN < zVuA07Ew) {
            max = qZUF2p3Auz[sydjL08iVHN][(269 - 269)];
            {
                QCd8z234i = 11 - 11;
                while (QCd8z234i < T5sDWR1MXHi) {
                    if (qZUF2p3Auz[sydjL08iVHN][QCd8z234i] > max)
                        max = qZUF2p3Auz[sydjL08iVHN][QCd8z234i];
                    QCd8z234i++;
                }
            }
            for (QCd8z234i = (944 - 944); QCd8z234i < T5sDWR1MXHi; QCd8z234i++)
                if (qZUF2p3Auz[sydjL08iVHN][QCd8z234i] == max)
                    break;
            QMXHTazqxOu = max;
            for (zY3okMBb = (165 - 165); zY3okMBb < zVuA07Ew; zY3okMBb++)
                if (qZUF2p3Auz[zY3okMBb][QCd8z234i] < QMXHTazqxOu)
                    QMXHTazqxOu = qZUF2p3Auz[zY3okMBb][QCd8z234i];
            if (max == QMXHTazqxOu)
                break;
            sydjL08iVHN++;
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    if (sydjL08iVHN == zVuA07Ew)
        printf ("No");
    else
        printf ("%d+%d", sydjL08iVHN, QCd8z234i);
}

